#include "Sales.h"
#include "DoesNotExistException.h"

void Sales :: add(vector<string> addVector)
{
	
	// initialization of the delimiter
	delim = '|';

	// assigns string the vector values
	 qSold= addVector[0];
	 disc = addVector[1];
	 productId = addVector[2];

	// opens sales.txt in input form
	salesInFile.open("sales.txt", ios_base::in);

	if(salesInFile.is_open())
	{
		sID = 0;
		while(salesInFile.good())
		{
			// assigns the string to the next line in the file sales.txt
			getline(salesInFile, rowReceive);

			// finds delimiter
			delimiter = rowReceive.find('|');

			//assigns salesID to the row data from file
			salesID = rowReceive.substr(0,delimiter);
			
			//converts string to int data type
			salesIDTemp = atoi(salesID.c_str());

			if(salesIDTemp > sID)
			{
				sID = salesIDTemp;
			}
		}
        //closes the file sales.txt		
		salesInFile.close();

		sID++;
		
		salesID = to_string(sID);
		// opens file and appends it to the last line
		salesOutFile.open("sales.txt", ios_base::app);
		// writes to salesSummary.txt with delimiters
		salesOutFile<<"" + salesID + delim + qSold + delim + productId + delim + disc + "\n";
		// closes sales.txt
		salesOutFile.close();

	}
}

string Sales :: search(string columnName, string valueToFind)
{
	bool resultFound = false;
	string returnString;
    string rowReceive;
	string salesID;

	string qSold, disc, productId;

	// initializes delimiters
	int delimiter;
	int delimiter2;
	int delimiter3;
	
	char delim = '|';

	// opens sales.txt
	salesInFile.open("sales.txt");

	if(salesInFile.is_open())
	{
		// clears the contents in the string
		returnString.clear();

		while(salesInFile.good())
		{
			// assigns the string with the next line in the file
			getline(salesInFile, rowReceive);

			// assigns the first delimiter position
			delimiter = rowReceive.find('|');

			// assigns the second delimiter position
			delimiter2 = rowReceive.find('|', delimiter+1);

			//assigns the third delimiter position
			delimiter3 = rowReceive.find('|', delimiter2+1);

			// assigns string salesID with data in the row
			salesID = rowReceive.substr(0,delimiter);

			// assigns string quantity sold with data in the row
			qSold = rowReceive.substr(delimiter+1, delimiter2-2);

			
			// assigns string productId with data in the row
			productId = rowReceive.substr(delimiter2+1, delimiter3-4);
			// assigns string discount with data in the row
			disc = rowReceive.substr(delimiter3+1);
		
			// checks if value to find is equal to the salesID 
			if(columnName == "sales_id" && 
				atoi(salesID.c_str()) == atoi(valueToFind.c_str()))
			{
				returnString += rowReceive + "\n";
				resultFound = true;
			}

		// checks if value to find is equal to the quantity sold
			else if(columnName == "quantity_sold" && 
				qSold == valueToFind)
			{
				returnString += rowReceive + "\n";
				resultFound = true;
			}
			// checks if value to find is equal to the discount
			else if(columnName == "discount" &&
				disc == valueToFind)
			{
				returnString += rowReceive + "\n";
				resultFound = true;
			}
			// checks if value to find is equal to the product ID
			else if(columnName == "productID" &&
				productId == valueToFind)
			{
				returnString += rowReceive + "\n";
				resultFound = true;
			}
		}
	}

	// closes the file
	salesInFile.close();

	// ensures if the return value is less than the minimun value
	
	if(!resultFound)
		throw DoesNotExistException("Slaes Does Not Exist");

	// \return returnString is returned as a result of the search function
	return returnString;
	}

	
void Sales :: modifyRow(string columnNameToFind, string valueToFind, string columnNameToModify, string valueOfModify)
{
	string rowReceive;
	string salesID;
	string qSold, disc, productId;

	// vector to store the required modifications
	vector<string> newVec;

	// initializes delimiters
	int delimiter;
	int delimiter2;
	int delimiter3;

	char delim = '|';

	// opens sales.txt
	salesInFile.open("sales.txt");

	if(salesInFile.is_open())
	{
		while(salesInFile.good())
		{
			// assigns the string with the next line in the file
			getline(salesInFile, rowReceive);

			
			// assigns the first delimiter position
			delimiter = rowReceive.find('|');
			
			// assigns the second delimiter position
			delimiter2 = rowReceive.find('|', delimiter+1);
			
			// assigns the third delimiter position
			delimiter3 = rowReceive.find('|', delimiter2+1);
			
		// assigns string sales ID with data in the row
			salesID = rowReceive.substr(0,delimiter);

			// assigns string quantity sold with data in the row
			qSold = rowReceive.substr(delimiter+1, delimiter2-2);

			// assigns string product ID with data in the row
			productId = rowReceive.substr(delimiter2+1, delimiter3-4);
			 
			// assigns string discount with data in the row
			disc= rowReceive.substr(delimiter3+1);
			
			// checks if the value to find does not match
			if((columnNameToFind == "sales_id" && atoi(salesID.c_str()) != atoi(valueToFind.c_str())) 
				|| ((columnNameToFind == "quantity_sold" && qSold != valueToFind)) 
				|| ((columnNameToFind == "discount" && disc != valueToFind))
				||((columnNameToFind == "productID" && productId != valueToFind)))
			{
				newVec.push_back(rowReceive);
			} else {
				// Modifies quantity sold
				if(columnNameToModify == "quantity_sold")
					newVec.push_back(salesID + delim + valueOfModify + delim + disc + delim + productId);
				// Modifies discount
				else if(columnNameToModify == "discount")
					newVec.push_back(salesID + delim + qSold + delim + productId+ delim+  valueOfModify);
				// Modifies product ID 
				else if(columnNameToModify == "productID")
					newVec.push_back(salesID + delim + qSold + delim + valueOfModify+ delim+  disc);
			}
		}
	}

	// closes sales.txt
	salesInFile.close();

	salesOutFile.open("sales.txt", ios_base::trunc);

	//writes string from vector to sales.txt at appropriate position
	for(int i = 0; i < (int) newVec.size(); i++)
	{
		salesOutFile<<newVec[i]<<endl;
	}

	// closes sales.txt
	salesOutFile.close();

}
void Sales :: deleteRow(string columnName, string valueToFind)
{
	// vector to store values except the one to be deleted
	vector<string> sFileVect;
	int delimiter;
	int delimiter2;
	int delimiter3;

	delim = '|';

	// opens sales.txt
	salesInFile.open("sales.txt");

	if(salesInFile.is_open())
	{
		while(salesInFile.good())
		{
			// assigns the string with the next line in the file
			getline(salesInFile, rowReceive);

			// assigns the first delimiter position
			delimiter = rowReceive.find('|');

	        // assigns the second delimiter position
			delimiter2 = rowReceive.find('|', delimiter+1);

			// assigns the third delimiter position
			delimiter3 = rowReceive .find('|', delimiter2+1);
			
			
			// assigns string sales ID with data in the row
			salesID = rowReceive.substr(0,delimiter);

			// assigns string quantity sold with data in the row
			qSold = rowReceive.substr(delimiter+1, delimiter2-2);

			
			// assigns string product ID with data in the row
			productId = rowReceive.substr(delimiter2+1, delimiter3-4);
			 
			
			// assigns string discount with data in the row
			disc= rowReceive.substr(delimiter3+1);
			
			//checks if the value to find is not equal to other values
			if((columnName == "sales_id" && atoi(salesID.c_str()) != atoi(valueToFind.c_str())) 
				|| ((columnName == "quantity_sold" && qSold != valueToFind)) 
				|| ((columnName == "discount" && disc != valueToFind))
				||((columnName == "productID" && productId != valueToFind)))
			{
				sFileVect.push_back(rowReceive);
			}
		}
	}

	//closes the file
	salesInFile.close();


	salesOutFile.open("sales.txt", ios_base::trunc);

	for(int i = 0; i < (int) sFileVect.size(); i++)
	{
		// writes string from vector into sales.txt
		salesOutFile<<sFileVect[i]<<endl;
	}

	// closes sales.txt
	salesOutFile.close();
}
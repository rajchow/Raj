#ifndef SALESSUMMARY_H
#define SALESSUMMARY_H

#include "TableInterface.h"

class SalesSummary : public TableInterface
{
private:
	/// output and input streams for reading and writing the category.txt file
	ofstream ssOutFile;
	ifstream ssInFile;



public:
	void add(vector<string> addVector);

	string search(string columnName, string valueToFind);
	void modifyRow(string columnNameToFind, string valueToFind, string columnNameToModify, string valueOfModify);
	void deleteRow(string columnName, string valueToFind);
	};

#endif
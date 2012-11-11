#ifndef SALES_H
#define SALES_H

#include "TableInterface.h"

class Sales : public TableInterface
{
private:
	string returnString;
	ofstream salesOutFile;
	ifstream salesInFile;
	string salesID;
	string rowReceive;
	int delimiter;
	int salesIDTemp;
	int sID;
	char delim;
	string qSold, disc, productId;

public:

	void add(vector<string> addVector);
	string search(string columnName, string valueToFind);
	void modifyRow(string columnNameToFind, string valueToFind, string columnNameToModify, string valueOfModify);
	void deleteRow(string columnName, string valueToFind);
};

#endif
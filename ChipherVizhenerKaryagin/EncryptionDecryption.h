#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void workWithChipher(const string& key, const int& controlCommand)
{
	ofstream outFile;
	ifstream inFile;
	char simbol;
	int i = int();
	string fileName;

	cout << "Please, enter the input file name:" << endl;
	cin >> fileName;
	inFile.open(fileName + ".txt", ios::binary);
	cout << "Please, enter the output file name:" << endl;
	cin >> fileName;
	outFile.open(fileName + ".txt", ios::binary);

	while (1)
	{
		simbol = inFile.get();
		if (inFile.eof())
			break;
		if (i > key.size() - 1)
			i = 0;
		if (controlCommand == 1)
			simbol = simbol + key[i];
		else
			simbol = simbol - key[i];
		outFile << simbol;
		i++;
	};
	outFile.close();
	inFile.close();
}

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// create input stream
	ifstream inFile;
	// open file
	inFile.open("data.dat");

	// check if file opened successfully
	if (!inFile)
	{
		cout << "Error opening file." << endl;
		return 0;
	}

	string data, data2, data3;
	// read data from file
	getline(inFile, data);
	getline(inFile, data2);
	getline(inFile, data3);

	cout << data << endl << data2 << endl << data3 << endl;

	return 0;
}
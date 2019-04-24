// Podwika_Grzegorz_Program_01.cpp - wtorek 11:00

#include "pch.h"
#include "libCollections.h"
#include "libTables.h"
#include <iostream>
using namespace std;

int main()
{
	int numberOfElemColl = loadCorrectNumberOfElements();
	char name[50];
	loadCorrectFileName(name);

	fstream recordFile = createRecordFIle(name);
	saveSubsetsToFile(recordFile, numberOfElemColl);

	recordFile.close();
	return 0;
}


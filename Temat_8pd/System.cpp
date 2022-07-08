#include "System.h"


void System::showNumbers()
{
	cout << "\n===============================";
	cout << "\n\tÄÎÑÒÓÏÍÛÅ ÍÎÌÅÐÀ:\n";
	for (int i = 0; i < 9; i++)
	{
		cout << i + 1 << ") ";
		arr[i].showNumber();
	}
	cout << "===============================\n";
}


void System::giveNumber(int id)
{	
	for (int i = id; i < 9; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[9].plusNumber();
}

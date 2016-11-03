// HamNum.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;




int* Fn1(int count)
{


	if (count <= 0)
		return nullptr;
	int *Xam=new int[count];
	
	int k2 = 0, k3 = 0, k5 = 0; // indices of values not yet multiplied to 2,3,5 resp

	Xam[0] = 1;

	for (int j = 1; j <count; j++)

	{
		int x2 = Xam[k2] * 2; 
		int x3 = Xam[k3] * 3;
		int x5 = Xam[k5] * 5;
		if (x2 <= x3 && x2 <= x5)
		{
			Xam[j] = x2; k2++;
		}
		if (x3 <= x2 && x3 <= x5)
		{
			Xam[j] = x3; k3++;
		}
		if (x5 <= x2 && x5 <= x3)
		{
			Xam[j] = x5; k5++;
		}


	}
	return Xam;

}


int main()
{

	int lim = 1944;
	int *fn=Fn1(lim);

	int l = fn[lim - 1];
	int l1 = fn[lim];
	
	for (int i = 0; i < lim; ++i)
	{
		if (i % 10 == 0)
		{
			cout << endl;
			cout << '[' << i << "]: ";
		}

		cout << fn[i] << ' ';
	}

	char c;
	std::cin >> c;
	return 0;

}


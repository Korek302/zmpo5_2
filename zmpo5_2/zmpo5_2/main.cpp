#include <iostream>

using namespace std;

template<class T>
T tSum(T* tTab, int iTabLength)
{
	T tOut = tTab[0];
	for (int iI = 1; iI < iTabLength; iI++)
	{
		tOut += tTab[iI];
	}
	return tOut;
}

int main()
{
	int* iTab;
	iTab = new int();
	for (int iI = 0; iI < 10; iI++)
	{
		iTab[iI] = iI;
	}
	cout << tSum(iTab, 10) << endl;

	getchar();
	return 0;
}
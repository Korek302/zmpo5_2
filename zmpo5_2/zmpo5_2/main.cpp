#include <iostream>
#include <complex>
#include <string>
#include <list>

#include "Square.h"

using namespace std;

template<class T>
T tSum(T* tTab, int iTabLength)
{
	T tOut = tTab[0];
	for (int iI = 1; iI < iTabLength; iI++)
	{
		tOut = tOut + tTab[iI];
	}
	return tOut;
}

int main()
{
	const int iTabLength = 10;
	int* iTab = new int[iTabLength];
	for (int iI = 0; iI < iTabLength; iI++)
	{
		iTab[iI] = iI;
	}
	cout << tSum<int>(iTab, iTabLength) << endl;

	float* fTab = new float[iTabLength];
	for (int iI = 0; iI < iTabLength; iI++)
	{
		fTab[iI] = iI*0.24f;
	}
	cout << tSum(fTab, iTabLength) << endl;

	double* dTab = new double[iTabLength];
	for (int iI = 0; iI < iTabLength; iI++)
	{
		dTab[iI] = iI*0.11;
	}
	cout << tSum(dTab, iTabLength) << endl;

	complex<double>* cTab = new complex<double>[iTabLength];
	for (int iI = 0; iI < iTabLength; iI++)
	{
		complex<double> z1(iI, 2.1*iI);
		cTab[iI] = z1;
	}
	cout << tSum(cTab, iTabLength) << endl;
	complex<double> tmp = tSum(cTab, iTabLength);

	Square* tab = new Square[iTabLength];
	for (int iI = 0; iI < iTabLength; iI++)
	{
		tab[iI] = Square(iI);
	}
	cout << tSum(tab, iTabLength).toString() << endl;

	delete[] iTab;
	delete[] dTab;
	delete[] fTab;
	delete[] cTab;
	delete[] tab;

	fflush(stdin);

	getchar();
	return 0;
}
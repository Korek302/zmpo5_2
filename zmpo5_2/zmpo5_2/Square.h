#pragma once
#include <string>

using namespace std;

class Square
{
public:
	Square();
	Square(int iNewSide);
	Square operator+(Square &pOther);
	string toString();
	int iGetSide();
private:
	int iSide;
};
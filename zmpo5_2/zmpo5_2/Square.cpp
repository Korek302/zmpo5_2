#include "Square.h"

Square::Square()
{
	iSide = 0;
}
Square::Square(int iNewSide)
{
	iSide = iNewSide;
}
Square Square::operator+(Square &pOther)
{
	return Square(iGetSide() + pOther.iGetSide());
}
string Square::toString()
{
	return "Square(" + to_string(iGetSide()) + ")";
}
int Square::iGetSide()
{
	return iSide;
}
#include "stdafx.h"
#include "Multik.h"

Multik::Multik(string s, string j, string im, int kol, string name, int vr, int g) :Film(j, im, kol, name, vr, g)
{
	studia = s;
}
void Multik::setStudia(string s)
{
	studia = s;
}
string Multik::getStudia()
{
	return studia;
}
void Multik::print()
{
	Film::print();
	cout << "Мультфильм: \n";
	cout << "Студия: " << studia << "\n";
}
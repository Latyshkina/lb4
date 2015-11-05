#include "stdafx.h"
#include "Film.h"
#include "Programma.h"
#include "Rejiser.h"
#include <iostream>
using namespace std;

Film::Film(string j, string im, int kol, string name, int vr, int g) :Programma(name, vr, g)
{
	janr = j;
	Rej.setImya(im);
	Rej.setKolichestvo(kol);
}
void Film::setRej(string im, int k)
{
	Rejiser::Rejiser(im, k);
}
Rejiser Film::getRej()
{
	return Rejiser();
}
void Film::setJanr(string j)
{
	janr = j;
}
string Film::getJanr()
{
	return janr;
}
void Film::print()
{
	Programma::print();

	Rej.print();
	cout << "Æàíð: " << getJanr() << "\n";
}
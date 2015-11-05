#include "stdafx.h"
#include "advert.h"
#include "Programma.h"
#include <iostream>
using namespace std;

Advert::Advert(string im, int kol, string name, int vr, int g) :Programma(name, vr, g)
{
	vremya = vr;
	Rej.setImya(im);
	Rej.setKolichestvo(kol);
}
void Advert::setRej(string im, int kol)
{
	Rejiser::Rejiser(im, kol);
}
Rejiser Advert::getRej()
{
	return Rejiser();
}
void Advert::setVremya(int vr)
{
	vremya = vr;
}
int Advert::getVremya()
{
	return vremya;
}
void Advert::print()
{
	Programma::print();

	cout << "\nВремя выхода: " << getVremya() << "\n";
}
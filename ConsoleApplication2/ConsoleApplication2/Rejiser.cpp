#include "stdafx.h"
#include "Rejiser.h"
#include <iostream>
using namespace std;

Rejiser::Rejiser(string i, int k)
{
	imya = i;
	kolichestvo = k;
}
Rejiser::Rejiser()
{
	imya = " ";
	kolichestvo = 0;
}
void Rejiser::setImya(string str)
{
	imya = str;
}
string Rejiser::getImya()
{
	return imya;
}
void Rejiser::setKolichestvo(int kol)
{
	kolichestvo = kol;
}
int Rejiser::getKolichestvo()
{
	return kolichestvo;
}
void Rejiser::print()
{
	cout << "\nРежисер:\n";
	cout << "Имя: " << getImya() << "\n";
	cout << "Кол-во фильмов: " << getKolichestvo() << "\n";
}

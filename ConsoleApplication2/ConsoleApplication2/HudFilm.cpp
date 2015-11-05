#include "stdafx.h"
#include "HudFilm.h"
using namespace std;

HudFilm::HudFilm(int d, string j, string im, int kol, string name, int vr, int g) :Film(j, im, kol, name, vr, g)
{
	date = d;
}
void HudFilm::setDate(int d)
{
	date = d;
}
int HudFilm::getDate()
{
	return date;
}
void HudFilm::print()
{
	Film::print();
	cout << "дeнь: " << date << "\n";
}
#include "stdafx.h"
#include "Programma.h"
#include <iostream>
using namespace std;


Programma::Programma(string n, int vr, int g)
{
	name = n;
	vremya = vr;
	god = g;
}
void  Programma::setName(string str)
{
	name = str;
}
string Programma::getName()
{
	return name;
}
void Programma::setVremya(int vr)
{
	vremya = vr;
}
int Programma::getVremya()
{
	return vremya;
}
void Programma::setGod(int g)
{
	god = g;
}
int Programma::getGod()
{
	return god;
}
void Programma::print()
{

	cout << "\tÍÀÇÂÀÍÈÅ:" << getName();
	cout << " \nïðîäîëæèòåëüíîñòü: " << getVremya();
	cout << "\nãîä: " << getGod();
}
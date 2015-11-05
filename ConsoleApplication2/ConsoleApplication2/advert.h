#pragma once
#include "Programma.h"
#include "Rejiser.h"
using namespace std;

class Advert : public Programma
{
	Rejiser Rej;
	int vremya;
public:
	Advert() {};
	Advert(string, int, string, int, int);
	void setRej(string, int);
	Rejiser getRej();
	void setVremya(int);
	int getVremya();
	virtual void print();
};
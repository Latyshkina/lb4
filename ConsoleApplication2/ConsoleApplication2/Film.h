#pragma once
#include "Programma.h"
#include "Rejiser.h"
#include <string>
using namespace std;

class Film : public Programma
{
	Rejiser Rej;
	string janr;
public:
	Film() {};
	Film(string, string, int, string, int, int);
	void setRej(string, int);
	Rejiser getRej();
	void setJanr(string);
	string getJanr();
	void print();
};
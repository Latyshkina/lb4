#pragma once
#include <string>
#include "ABC.h"
using namespace std;

class Programma : public ABC
{
	string name;
	int vremya;
	int god;
public:
	Programma() {};
	Programma(string, int, int);
	void setName(string);
	string getName();
	void setVremya(int);
	int getVremya();
	void setGod(int);
	int getGod();
	virtual void print();


};
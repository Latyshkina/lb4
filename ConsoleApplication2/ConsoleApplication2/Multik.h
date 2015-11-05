#pragma once
#include "Film.h"
#include <iostream>

class Multik : public Film
{
	string  studia;
public:
	Multik(string, string, string, int, string, int, int);
	void setStudia(string);
	string getStudia();
	void print();
};
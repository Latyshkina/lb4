#pragma once
#include "Film.h"
#include <iostream>
using namespace std;

class HudFilm : public Film
{
	int date;
public:
	HudFilm(int, string, string, int, string, int, int);
	void setDate(int);
	int getDate();
	void print();
};
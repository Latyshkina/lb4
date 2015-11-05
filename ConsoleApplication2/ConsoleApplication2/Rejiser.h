#pragma once
#include <string>
using namespace std;

class Rejiser
{
	string imya;
	int kolichestvo;

public:
	Rejiser(string, int);
	Rejiser();
	void setImya(string);
	string getImya();
	void setKolichestvo(int);
	int getKolichestvo();
	void print();
};
#pragma once
#include "ABC.h"

class Controller
{
	ABC *s;
public:
	Controller(){};
	Controller(ABC *a)
	{
		s = a;
	};
	void opredGod(int);
	void prodoljit();
	void chisloNovost();
};
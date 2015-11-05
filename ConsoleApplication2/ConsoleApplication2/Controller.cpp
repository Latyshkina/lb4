#include "stdafx.h"
#include "Controller.h"
#include "advert.h"
#include "HudFilm.h"
#include "Programma.h"

void Controller::chisloNovost()
{
	int c = 0;
	ABC *p = ABC::head;
	while (p != NULL)
	{
		if (dynamic_cast<Advert*>(p))// приводит к другому типу, был тип АВС а привел к типу новости, перебирает все и если совпадает
		{
			c++;
		}
		p = p->next;
	}
	std::cout << "\n\nчисло рекламных роликов:" << c << "\n\n";
}

void Controller::opredGod(int g)
{
	std::cout << "\n Мультфильмы снятые в опереленный год:" << "\n";
	ABC *p = ABC::head;
	while (p != NULL)
	{
		if (p->getGod() == g)
		{
			p->print();
		}
		p = p->next;
	}
}
void Controller::prodoljit()
{
	int s = 0;
	ABC *p = ABC::head;
	while (p != NULL)
	{
		s += p->getVremya();
		p = p->next;
	}
	std::cout << "\n общая продолжительность программы по времени:" << s << "\n";
}
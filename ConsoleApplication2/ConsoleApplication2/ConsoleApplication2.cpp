// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "HudFilm.h"
#include "Multik.h"
#include "advert.h"
#include "ABC.h"
#include "controller.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	HudFilm h(12, "комедия", "Билли Уайлдер", 25, "В джазе только девушки", 2, 1958);
	Multik m("Disney", "семейный", "Крис Бак", 4, "Холодное сердце", 1, 2015);
	Multik hg("Disney", "семейный", "Смирнов", 2, "Гадкий Я", 8, 2015);
	Advert n("Наталья Офицерова", 12, "Мебель", 8, 1992);
	Advert n1("a", 2, "Спорт", 2, 1999);
	ABC *a;
	a = &h;
	a->add();
	a = &m;
	a->add();
	a = &hg;
	a->add();
	a = &n;
	a->add();
	a = &n1;
	a->add();
	ABC::show();
	Controller contr(a);
	contr.chisloNovost();
	contr.opredGod(2015);
	contr.prodoljit();

	return 0;
}
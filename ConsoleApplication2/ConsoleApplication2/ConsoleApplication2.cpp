// ConsoleApplication2.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	HudFilm h(12, "�������", "����� �������", 25, "� ����� ������ �������", 2, 1958);
	Multik m("Disney", "��������", "���� ���", 4, "�������� ������", 1, 2015);
	Multik hg("Disney", "��������", "�������", 2, "������ �", 8, 2015);
	Advert n("������� ���������", 12, "������", 8, 1992);
	Advert n1("a", 2, "�����", 2, 1999);
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
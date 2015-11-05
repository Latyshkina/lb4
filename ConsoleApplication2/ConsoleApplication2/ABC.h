#pragma once
#include "stdafx.h"
class ABC {
protected:

public:
	static ABC *head;
	ABC *next;
	virtual void add();
	static void show();
	virtual void print() = 0;
	virtual int getGod() = 0;
	virtual int getVremya() = 0;

};
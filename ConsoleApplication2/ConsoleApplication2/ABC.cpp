#include "stdafx.h"
#include "ABC.h"
ABC * ABC::head = NULL;

void ABC::show()
{
	ABC *p = head;
	while (p)
	{
		p->print();
		p = p->next;
	}
}
void ABC::add()
{
	if (!head) {
		head = this;
		this->next = NULL;
	}
	else
	{
		ABC *p = head;
		{
			while (p->next != NULL)
				p = p->next;
		}
		p->next = this;
		this->next = NULL;
	}
}

#include "myList.h"



myList::myList()
{
	first = nullptr;
	last = nullptr;
	_size = 0;
}

myList::myList(int f_size, int val)
{
	first = nullptr;
	last = nullptr;
	_size = f_size;


	for (int i = 0; i < f_size; i++) {
		push_front(val);

	}


}

void myList::push_front(int val)
{

	
	first = new NODE({ val,nullptr,first });

	if (_size > 0) first->next->prev = first;

	_size++;
}

void myList::push_back(int val)
{
	last = new NODE({ val,last,nullptr });

	if (_size > 0) last->prev->next = last;

	_size++;
}

void myList::pop_front()
{
	first = first->next;
	
	delete first->prev;

	first->prev = nullptr;

	_size--;
}

void myList::pop_back()
{
	last = last->prev;

	delete last->next;

	last->next = nullptr;

	_size--;
}

bool myList::empty()
{
	return (_size == 0);
}

int myList::size()
{
	return _size;
}


myList::~myList()
{
	while (!empty()) {

		pop_front();

	}

}

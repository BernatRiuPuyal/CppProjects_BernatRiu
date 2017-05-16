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
	


	for (int i = 0; i < f_size; i++) {
		push_front(val);

	}


}

myList::myList(myList &llista)
{
	first = nullptr;
	last = nullptr;

	NODE *it = llista.first;

	while (it != nullptr) {

		push_back(it->info);

		it = it->next;
		
	}


}

void myList::push_front(int val)
{

	
	first = new NODE({ val, nullptr, first });

	if (_size > 0) first->next->prev = first;
	else last = first;

	_size++;
}

void myList::push_back(int val)
{
	last = new NODE({ val,last,nullptr });

	if (_size > 0) last->prev->next = last;
	else first = last;

	_size++;
}

void myList::pop_front()
{
	NODE *aux = first->next;

	delete first;

	first = aux;

	_size--;
}

void myList::pop_back()
{
	NODE *aux = last->prev;

	delete last;

	last = aux;

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

int myList::front()
{
	return first->info;
}

int myList::back()
{
	return last->info;
}


myList::~myList()
{
	while (!empty()) {

		pop_front();

	}

}

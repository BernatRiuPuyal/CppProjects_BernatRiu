#pragma once
class myList
{

	struct NODE {

		int info;

		NODE *prev;

		NODE *next;


	};
	

public:

	NODE *first;

	NODE *last;

	int _size;


	myList();

	myList(int f_size, int val);

	void push_front(int val);
	
	void push_back(int val);

	void pop_front();

	void pop_back();

	bool empty();

	int size();

	~myList();
};


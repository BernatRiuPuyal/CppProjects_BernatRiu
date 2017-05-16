#pragma once
class myList
{

	struct NODE {

		int info;

		NODE *prev;

		NODE *next;


	};
	

	int _size;

	NODE *first;

	NODE *last;

public:

	
	myList();

	myList(int f_size, int val);

	myList(myList &llista);

	void push_front(int val);
	
	void push_back(int val);

	void pop_front();

	void pop_back();

	bool empty();

	int size();
	
	int front();

	int back();

	~myList();
};


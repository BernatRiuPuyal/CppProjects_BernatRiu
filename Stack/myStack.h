#pragma once



class myStack {

	int **stack;

	size_t m_size;

	size_t m_capacity;

	public:
	myStack(int size, int element);
	

	bool empty();

	size_t size();


	int top();

	void push(int element);
};


#include "myStack.h"



myStack::myStack(int f_size, int element) {

	stack = new int*[f_size];

	for (int i = 0; i < f_size; i++) {

		
		*stack[i] = 100;
	}

	m_size = f_size,

	m_capacity = f_size;

}

bool myStack::empty() {


	return (m_size = 0) ? true : false;

}

size_t myStack::size() {

	return m_size;
}

int myStack::top() {

	return *stack[ m_size - 1];
}

void myStack::push(int element) {

	int **aux;


}
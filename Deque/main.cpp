#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <stdlib.h>
#include <time.h>


void printBackward(std::deque<float>cua) {

	for (auto it = cua.rbegin(); it < cua.rend(); it++) {

		std::cout << *it << " ";


	}
	std::cout << std::endl;
}



void printForward(std::deque<float>cua) {

	for (auto it = cua.begin(); it < cua.end(); it++) {

		std::cout << *it << " ";


	}
	std::cout << std::endl;
}

void printBackward(std::vector<float>cua) {

	for (auto it = cua.rbegin(); it < cua.rend(); it++) {

		std::cout << *it << " ";


	}
	std::cout << std::endl;
}

void printForward(std::vector<float>cua) {

	for (auto it = cua.begin(); it < cua.end(); it++) {

		std::cout << *it << " ";


	}
	std::cout << std::endl;
}








std::priority_queue<int> superMergeP(const std::priority_queue<int>cua1, const std::priority_queue<int>cua2) {

	std::priority_queue<int>cuaToAdd(cua2);
	std::priority_queue<int>report(cua1);


	while (!cuaToAdd.empty()) {

		report.push(cuaToAdd.top());
		cuaToAdd.pop();

	}

	return report;

}

std::queue<std::string> concatQueue(const std::queue<std::string>cua1, const std::queue<std::string>cua2) {

	std::queue<std::string>cuaToAdd(cua2);
	std::queue<std::string>report(cua1);


	while (!cuaToAdd.empty()) {

		report.push(cuaToAdd.front());
		cuaToAdd.pop();

	}

	return report;

}



void shiftRight(std::queue<int>*cua) {

	cua->push(rand());

}

void rotateQueue(std::queue<int>*cua) {

	cua->push(cua->front());
	cua->pop();

}
void eraseElements(std::deque<int>*cua, int element) {

	for (auto it = cua->begin();it < cua->end();it++) {
		if (*it = element) cua->erase(it);

	}

}

void eraseRepeated(std::deque<int>*cua) {

	for (auto it = cua->begin();it < --cua->end();it++) {

		for (auto it2 = cua->begin();it2 < cua->end();it2++) {

			if (*it == *it2 && it != it2) cua->erase(it2);
		}

	}

}


int main(void) {
	
	srand(time(nullptr));


	// ex 1

	std::deque<float>prices(10, 10.50f);

	prices[9] = 32.43f;

	prices.pop_front();

	std::deque<float>prices2(prices);

	prices2.push_front(5.64f);
	prices2.push_front(20.31f);

	prices2.insert(prices2.begin() + 1, 10.f);

	printBackward(prices);

	printForward(prices2);


	// ex 2

	std::vector<float>prices3(10, 10.50f);

	prices3[9] = 32.43f;

	prices3.erase(prices3.begin());

	std::vector<float>prices4(prices3);

	prices4.insert(prices4.begin(),5.64f);
	prices4.insert(prices4.begin(),20.31f);

	prices4.insert(prices4.begin() + 1, 10.f);

	printBackward(prices3);

	printForward(prices4);

	
	
	
	//ex 3
	std::priority_queue<int>cua1(12,4);
	std::priority_queue<int>cua2(12,6);

	std::priority_queue<int>cua3(superMergeP(cua1,cua2));


	std::priority_queue<std::string>cua1;
	cua1.push("hey");

	std::priority_queue<std::string>cua2;
}






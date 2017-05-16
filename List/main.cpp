#include <list>
#include <algorithm>
#include "myList.h"



std::list<int> superMerge(std::list<int> list1, std::list<int> list2) {

	std::list<int> report;


	while (!(list1.empty() && list2.empty() )) {

		if (list2.empty()) {

			report.push_back(list1.front());
			list1.pop_front();
		}
		else if (list1.empty()) {
			report.push_back(list2.front());
			list2.pop_front();

		}
		else if (list1.front() > list2.front()) {
			report.push_back(list1.front());
			list1.pop_front();
			

		}
		else {
			report.push_back(list2.front());
			list2.pop_front();
		}
	}
	
	return report;


}

void change(std::list<int> &list1) {

	int aux = list1.back();

	list1.pop_back();

	list1.push_back(list1.front());

	list1.pop_front();

	list1.push_front(aux);

}

int getElementPos(std::list<int> list1, int pos) {

	auto it = list1.begin();

	std::advance(it, pos);
	
	return *it;
}

void removeDuplicates(std::list<int> &list1) {


	list1.unique();

}

void removeElement(std::list<int> &list1, int element) {

	list1.remove(element);
}

bool palindrome(std::list<int> list1) {

	
	bool report = true;

	while (!list1.empty() && report) {

		report = (list1.front() == list1.back());
		list1.pop_back();
		if (!list1.empty()) list1.pop_front();
		
	}

	return report;

}


int main(void) {

	std::list<int> pere({ 1,1,2,10 });
	std::list<int> joan({ 16,18,19,20 });

	std::list<int> mestre({ 1,1,2,2,2,2,2,2,1,1 });
	
	
	bool visca = palindrome(mestre);


	int a = getElementPos(pere,  1);


	myList listin(5, 7);


}




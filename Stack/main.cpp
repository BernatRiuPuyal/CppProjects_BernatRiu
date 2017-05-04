#include <stack>
#include <deque>
#include <queue>


size_t max(size_t a, size_t b) {

	return (a < b) ? b : a;
}




std::stack<int> superMerge(std::stack<int> stack1, std::stack<int> stack2) {

	
	std::stack<int> aux;
	std::stack<int> report;

	for (size_t i = (stack1.size() + stack2.size()); i > 0; i--) {


		if (stack1.empty()) {
			aux.push(stack2.top());
			stack2.pop();
		}
		else if(stack2.empty()) {
			aux.push(stack1.top());
			stack1.pop();
		}
		else if (stack1.top() > stack2.top()) {

			aux.push(stack1.top());
			stack1.pop();
		}
		else {
			aux.push(stack2.top());
			stack2.pop();
		}


	}
	while (!aux.empty()) {
		report.push(aux.top());
		aux.pop();
	}

	return report;


}

std::stack<int> putHat(std::stack<int> stack1, std::stack<int> stack2) {

	std::stack<int> aux;
	std::stack<int> report;
	
	while (!stack2.empty()) {
		aux.push(stack2.top());
		stack2.pop();
	}

	while (!stack1.empty()) {
		aux.push(stack1.top());
		stack1.pop();

	}
	while (!aux.empty()) {
		report.push(aux.top());
		aux.pop();

	}

	return report;

}


std::queue<int> transformToQ(std::stack<int> stack1) {
	
	std::queue<int> report;

	while (!stack1.empty()) {
		report.push(stack1.top());
		stack1.pop();
	}
	
	return report;
}

bool isHat(std::stack<int> stack1, std::stack<int> stack2) {


	bool report = true;

	while (!stack1.empty() && report) {

		if (stack1.top() != stack2.top()) {
			report = false;
		}
		stack1.pop();
		stack2.pop();

	}
	return report;

}

bool balancedP(std::queue<char> queue1) {

	int opened = 0;

	while (!queue1.empty() && opened >= 0) {

		if (queue1.front() == '(') opened++;

		if (queue1.front() == ')') opened--;

		queue1.pop();
	}

	return (opened == 0);
}

void change(std::stack<int> &queue1) {

	std::deque<int> aux;

	while (!queue1.empty()) {
		aux.push_back(queue1.top());
		queue1.pop();
	}
	

	
	
}



int main(void) {


	std::stack<int> staca({ 6 , 4 , 3, 1});

	std::stack<int> staca2({ 3,5,6});

	std::stack<int> staca3(putHat(staca,staca2));

	std::stack<int> staca4(superMerge(staca, staca2));
	
	std::queue<int> cua1(transformToQ(staca));

	bool hat = isHat(staca, staca2);

	bool balance = balancedP(std::queue<char>({ '(','(','(', ')', ')', ')' }));

	std::queue<int>cua2({ 1,2,3,4,5,6 });

	change(cua2);
}
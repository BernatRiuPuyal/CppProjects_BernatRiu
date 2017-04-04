#include <vector>
#include <string>

struct Persona {

	std::string name;
	int bornday;
	int DNI;

};



std::vector<int>v1(5);
std::vector<int>v2(10);
std::vector<int>v3({ 10,9,8,7,6,5,4,3,2,1 });
std::vector<std::string>v4({ "Gertrudiz","Pancracia","Anacleto","Hipolito","Eustaquio","Fulguencia" });
std::vector<int>v5(v3);
std::vector<Persona>v6({{"pere",121212,12345678},{"animal",90698,87654321},{"Merce",341318,11111111}});


std::vector<int> AddVectors(std::vector<int> vector1, std::vector<int> vector2) {

	std::vector<int>report(vector1.size());
	for (int i = 0;i < vector1.size(); i++) {
		report[i] = vector1[c] + vector2[c];
	}
	return report;
}

std::vector<int> ConcatVectors(std::vector<int> vector1, std::vector<int> vector2) {

	std::vector<int>report(vector1.size() + vector2.size());
	for (int i = 0;i < vector1.size(); i++) {
		report[vector1.size() + i] = vector2[i];
	}
	return report;
}




#include <map>
#include <vector>
#include <string>
#include <iostream>


std::map<std::string, int>ranking;

typedef std::pair<std::string, int> Player;
Player p1,p2,p3,p4;


Player introducedPlayer() {

	std::string name;
	int puntuacio;
	std::cout << "Introduce your Name:";

	std::cin >> name;
	
	std::cout << std::endl << "Introduce your Score:";

	std::cin >> puntuacio;

	return{ name,puntuacio };

}
void printRanking(std::map<std::string, int> rank) {

	std::string  biggest = rank.begin()->first;

	for (auto it = rank.begin(); it != rank.end();it++) {
		
		if (rank[biggest] < rank[it->first]) biggest = it->first;
		
	}
	int rankposition = 1;
	for (int c = rank[biggest]; c >= 0; c--) {

		for (auto it = rank.begin(); it != rank.end();it++) {
			if (rank[it->first] == c) {
				std::cout << rankposition++
					<< "  "
					<< it->first
					<< "  "
					<< rank[it->first]
					<< std::endl;
			}
		}
		
	}

}

int main(void) {
	// 4 jugadors predefinits
	p1 = { "xX_AlexTheKiller_Xx", 59 };
	p2 = { "Animal95", 56 };
	p3 = { "lEstiuEsTeu10",43 };
	p4 = { "Guerrero_del_Antifaz",58 };


	ranking.insert(p1);
	ranking.insert(p2);
	ranking.insert(p3); //ranking["opo"] = 0;
	ranking.insert(p4);

	ranking.insert(introducedPlayer());

	

    printRanking(ranking);



}
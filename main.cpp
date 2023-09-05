#include <iostream>
#include "random_value.h"
#include "high_scores.h"


int main() {

	const int target_value = getRandomValue();
	int current_value = 0;
	//bool not_win = true;
	const std::string high_scores_filename = "high_scores.txt";

	// Ask about name
	std::cout << "Hi! Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name;
	std::cout << "Enter your guess:" << std::endl;

	int attempts_count = 1;

	do {
		std::cin >> current_value;

		if (current_value > target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else if (current_value < target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
			std::cout << "you win!" ;
			break;
		}
		attempts_count++;
	} while (true);
	std::cout << "\tattempts = "<< attempts_count << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	void writeHightScores(const std::string& high_scores_filename, const std::string& user_name, int attempts_count);
	void readHightScores(const std::string& high_scores_filename);
	
	return 0;
}
#include <iostream>
#include <fstream>
#include "high_scores.h"

	void writeHightScores(const std::string& high_scores_filename, const std::string& user_name, int attempts_count){

		// We should open the output file in the append mode - we don't want
		// to erase previous results.
		std::ofstream out_file{ high_scores_filename, std::ios_base::app };
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
			return ;
		}

		// Append new results to the table:
		out_file << user_name << ' ';
		out_file << attempts_count;
		out_file << std::endl;
	}
  
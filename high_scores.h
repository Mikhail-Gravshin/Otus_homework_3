#pragma once
#include <iostream>
#include <string>

void writeHightScores(const std::string& high_scores_filename, const std::string& user_name, int attempts_count);
void readHightScores(const std::string& high_scores_filename);
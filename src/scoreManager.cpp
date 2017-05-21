#include <iostream>
#include "../include/scoreManager.hpp"
using namespace std;

ScoreManager::ScoreManager(){
	highest_score = 0;
	lowest_score = 0;
	sorted = false;
}

void ScoreManager::add_score(double score){
		scores.insert(scores.end(), score);
		if (score > highest_score){
			highest_score = score;
		}
		if(score < lowest_score || lowest_score == 0){
			lowest_score = score;
		}
}

void ScoreManager::remove_score(){
	if(scores.empty()){
		cout << "Unable to remove score: Score vector is empty.";
		return;
	}
	
	scores.erase(scores.begin());
}
void ScoreManager::sort(){
}

double ScoreManager::get_highest_score(){
	return highest_score;
}

double ScoreManager::get_lowest_score(){
	return lowest_score;
}

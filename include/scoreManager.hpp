#include <iostream>
#include <list>


using namespace std;

class ScoreManager
{
private:
	bool sorted;
	double highest_score;
	double lowest_score;
public:
	list<double> scores;
	ScoreManager();
	void add_score(double score);
	void remove_score();
	void sort();
	double get_highest_score();
	double get_lowest_score();
};

#include <iostream>
#include "scoreManager.hpp"

using namespace std;

class Player 
{
private:
	string name;
	int uid;
	ScoreManager score;
public:
	Player(int uid, string name);
	void set_name(string name);
	string get_name();
	void set_uid(int uid);
	int get_uid();
};

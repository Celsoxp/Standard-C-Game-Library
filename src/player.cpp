#include <iostream>
#include "../include/player.hpp"

using namespace std;
Player::Player(int uid=0, string name=NULL){
	this->name = name;
	this->uid = uid;
}

void Player::set_name(string name){
		this->name = name;
}
	
string Player::get_name(){
	return name;
}

void Player::set_uid(int uid){
	this->uid = uid;
}

int Player::get_uid(){
	return uid;
}

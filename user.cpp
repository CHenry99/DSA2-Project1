//Carolyn Henry
//user.cpp

#include <iostream>
#include "user.hpp"

using namespace std;

User::User(){
	this->LastName = "";
	this->Password = "";
};

string User::GetLastName(){
	return this->LastName;
};

string User::GetPassword(){
	return this->Password;
};

void User::SetLastName(string LastName){
	this->LastName = LastName;
};

void User::SetPassword(){
	cout << "FIXME: SetPassword() -- Encryption" << endl;
};

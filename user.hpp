// Carolyn Henry
// user.hpp

#ifndef USER_HPP
#define USER_HPP

#include <string>

using namespace std;

class User{

   private:
	string LastName;
	string Password;

   public:
	User();
	string GetLastName();
	string GetPassword();
	void SetLastName(string LastName);
	void SetPassword();

};


#endif

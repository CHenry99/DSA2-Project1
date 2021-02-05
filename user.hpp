// Carolyn Henry
// user.hpp

#ifndef USER.HPP
#define USER.HPP

class user{

   private:
	string LastName;
	string Password;

   public:
	string GetLastName();
	string GetPassword();
	void SetLastName(string LastName);
	void SetPassword();

};


#endif

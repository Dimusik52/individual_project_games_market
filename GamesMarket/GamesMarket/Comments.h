#pragma once
#include <iostream>
#include "TVector.h"
#include "User.h"


class Comments
{
	 User _user;
	 std::string _comment;

 public:
	 Comments();
	 Comments(User user, std::string comment);

	 std::string getComment();
	 void setComment(std::string comment);
};


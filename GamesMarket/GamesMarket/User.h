#pragma once
#include <iostream>
#include "TVector.h"
#include "Games.h"

enum Roles {r_user, r_admin};


class User
{
	int _userID;
	Roles _role;
	std::string _nickname;
	std::string _login;
	std::string _password;
	TVector<Games> _wishList;
	TVector<Games> _purchasedGames;
	int _money;

 public:
	 User();
	 User(int user_ID, std::string nickname, std::string login, std::string password);


	 void buy_game(Games game);

	 void add_to_wishlist(Games game);

	 void deposit_money(int money);

	 int getUser_ID();
	 std::string getUser_Nickname();
	 std::string getUser_Login();
	 std::string getUser_Password();
	 Roles getUser_Role();

};


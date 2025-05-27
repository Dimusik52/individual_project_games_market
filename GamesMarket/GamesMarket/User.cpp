// Copyright (c) 2025 Dmitriy Pikhulya 3824B1PR2

#include <string>
#include "User.h"

User::User() {
    _userID = 0;
    _role = r_user;
    _nickname = "";
    _login = "";
    _password = "";
    _money = 0;
}

User::User(int user_ID,
    std::string nickname,
    std::string login,
    std::string password) {
    _userID = user_ID;
    _role = r_user;
    _nickname = nickname;
    _login = login;
    _password = password;
}

void User::buy_game(Games game) {
    bool game_not_in_list = true;

    for (int i = 0; i < _purchasedGames.size(); i++) {
        if (_purchasedGames[i].getID() == game.getID()) {
            game_not_in_list == false;
        }
    }

    if (_money > game.getPrice() && game_not_in_list) {
        _money -= game.getPrice();
        _purchasedGames.push_back(game);
    }
}

void User::add_to_wishlist(Games game) {
    bool game_not_in_list = true;

    for (int i = 0; i < _wishList.size(); i++) {
        if (_wishList[i].getID() == game.getID()) {
            game_not_in_list == false;
        }
    }

    if (game_not_in_list) {
        _wishList.push_back(game);
    }
}

void User::deposit_money(int money) {
    if (money >= 0) {
        _money += money;
    }
}

int User::getUser_ID() {
    return _userID;
}

std::string User::getUser_Nickname() {
    return _nickname;
}
std::string User::getUser_Login() {
    return _login;
}
std::string User::getUser_Password() {
    return _password;
}

Roles User::getUser_Role() {
    return _role;
}

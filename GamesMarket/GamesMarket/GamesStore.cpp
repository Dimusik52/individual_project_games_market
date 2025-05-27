// Copyright (c) 2025 Dmitriy Pikhulya 3824B1PR2

#include <iostream>
#include "Games.h"
#include "User.h"
#include "GamesStore.h"


GamesStore::GamesStore() {
    open_DB();
}

void GamesStore::add_game(User user, std::string name,
    std::string desc, int price) {
    if (user.getUser_Role() == r_admin) {
        Games newgame = Games(name, desc, price);
        _games.push_back(newgame);
    }
    else {
        throw std::logic_error("Don`t have permission!");
    }
}

void GamesStore::reg(std::string nickname,
    std::string login, std::string password) {
    int user_ID = _users.size() + 1;
    _users.push_back(User(user_ID, nickname, login, password));
}

bool GamesStore::login(std::string login, std::string password) {
    for (int i = 0; i < _users.size(); i++) {
        if (_users[i].getUser_Login() == login &&
            _users[i].getUser_Password() == password) {
            return true;
        }
    }
    return false;
}

// Copyright (c) 2025 Dmitriy Pikhulya 3824B1PR2

#pragma once
#include <iostream>
#include <string>
#include "TVector.h"
#include "User.h"
#include "Games.h"

class GamesStore {
    TVector<User> _users;
    TVector<Games> _games;

 public:
    GamesStore();

    // admin only
    void add_game(User user, std::string name, std::string desc, int price);

    void reg(std::string nickname, std::string login, std::string password);

    bool login(std::string login, std::string password);

    void save_DB();

 private:
    void open_DB();
};

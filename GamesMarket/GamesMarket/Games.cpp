// Copyright (c) 2025 Dmitriy Pikhulya 3824B1PR2

#include <iostream>
#include <string>
#include "Games.h"
#include "TVector.h"

Games::Games() {
    _name = "NULL";
    _description = "NULL";
    _price = 0;
    _price_str = "0";
}

Games::Games(std::string name, std::string desc, int price) {
    _name = name;
    _description = desc;
    _price = price;

    _price_str = parse_price();
}

int Games::getID() {
    return _gameID;
}

int Games::getPrice() {
    return _price;
}

void Games::add_comment(Comments comment) {
    _comments.push_back(comment);
}


std::string Games::parse_price() {
    _price_str = std::to_string(_price);
}

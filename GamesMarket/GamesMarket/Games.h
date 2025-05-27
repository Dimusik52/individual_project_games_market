// Copyright (c) 2025 Dmitriy Pikhulya 3824B1PR2

#pragma once
#include <iostream>
#include <string>
#include "TVector.h"
#include "Comments.h"


class Games {
    int _gameID;
    std::string _name;
    std::string _description;
    int _price;
    std::string _price_str;
    TVector<Comments> comments;

 public:
    Games();
    Games(std::string name, std::string desc, int price);


    int getID() inline;
    int getPrice() inline;

    void add_comment(Comments comment) inline;

 private:
    std::string parse_price() inline;

};

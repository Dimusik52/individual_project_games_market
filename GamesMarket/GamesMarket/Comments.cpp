// Copyright (c) 2025 Dmitriy Pikhulya 3824B1PR2

#include <string>
#include "Comments.h"


Comments::Comments() {
    _comment = "";
}

Comments::Comments(User user, std::string comment) {
    _comment = comment;
}

std::string Comments::getComment() {
    return _comment;
}
void Comments::setComment(std::string comment) {
    if (&comment == NULL) {
        throw std::logic_error("Data has been corrupted!");
    }
    _comment = comment;
}

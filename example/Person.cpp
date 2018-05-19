//
//  Person.cpp
//  example
//
//  Created by Jean-Pierre Gassin on 18/5/18.
//  Copyright © 2018 Jean-Pierre Gassin. All rights reserved.
//

#include <iostream>
#include "Person.hpp"

void Person::setName() {
    std::string name;
    std::cout << "What is your name?\n";
    std::getline(std::cin, name);
    
    this->name = name;
}

string Person::getName() {
    return this->name;
}

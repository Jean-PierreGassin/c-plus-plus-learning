//
//  People.cpp
//  example
//
//  Created by Jean-Pierre Gassin on 19/5/18.
//  Copyright © 2018 Jean-Pierre Gassin. All rights reserved.
//

#include <iostream>
#include "People.hpp"

void People::addPerson(Person *person) {
    this->people.push_back(person->getName());
}

std::string People::getPeople() {
    std::string people;
    
    for (int i = 0; i < this->people.size(); i++) {
        people += this->people[i] + " \n";
    }
    
    return people;
}

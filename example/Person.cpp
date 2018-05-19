//
//  person.cpp
//  example
//
//  Created by Jean-Pierre Gassin on 18/5/18.
//  Copyright © 2018 Jean-Pierre Gassin. All rights reserved.
//

#include <iostream>
#include "person.hpp"

using namespace std;

class Person {
    private: string name;
    
    void setName(string name) {
        this->name = name;
    }
    
    string getName() {
        return this->name;
    }
};

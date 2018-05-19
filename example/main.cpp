//
//  main.cpp
//  example
//
//  Created by Jean-Pierre Gassin on 18/5/18.
//  Copyright © 2018 Jean-Pierre Gassin. All rights reserved.
//

#include <iostream>
#include "Person.hpp"

int main(int argc, const char * argv[]) {
    Person *person = new Person;
    
    person->setName();
    std::cout << "Hello " + person->getName() + "! \n";
    
    return 0;
}

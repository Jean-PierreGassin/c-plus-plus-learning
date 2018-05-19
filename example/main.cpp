//
//  main.cpp
//  example
//
//  Created by Jean-Pierre Gassin on 18/5/18.
//  Copyright © 2018 Jean-Pierre Gassin. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
#include "People.hpp"

int main(int argc, const char * argv[]) {
    char confirmation;
    bool stillAdding = true;
    
    People *people = new People;
    
    std::cout << "Hey there! Let's add a couple of friends to your vector..." << std::endl;
    
    do {
        Person *person = new Person;
        
        person->setName();
        people->addPerson(person);
        
        std::cout << "Do you want to add another? [y/n]" << std::endl;
        std::cin >> confirmation;
        std::cin.clear();
        std::cin.ignore(1);
        
        if (confirmation == 'n') {
            stillAdding = false;
        }
    } while(stillAdding);

    std::cout << "This is the list of friends you added:" << std::endl << people->getPeople();
    
    return 0;
}

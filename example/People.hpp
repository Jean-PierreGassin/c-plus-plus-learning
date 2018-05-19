//
//  People.hpp
//  example
//
//  Created by Jean-Pierre Gassin on 19/5/18.
//  Copyright © 2018 Jean-Pierre Gassin. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>
#include <vector>
#include "Person.hpp"

class People {
    private:
        std::vector<std::string> people;
        
    public:
        void addPerson(Person *person);
        std::string getPeople();
};

#endif /* People_hpp */

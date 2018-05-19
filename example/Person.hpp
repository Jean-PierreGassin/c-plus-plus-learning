//
//  Person.hpp
//  example
//
//  Created by Jean-Pierre Gassin on 18/5/18.
//  Copyright © 2018 Jean-Pierre Gassin. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>

using namespace std;

class Person {
    private: string name;
    
    public:
        void setName();
        string getName();
};

#endif /* Person_hpp */

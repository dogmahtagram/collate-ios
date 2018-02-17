//
//  Playground.hpp
//  collate-ios
//
//  Created by Larsson Burch on 2/17/18.
//  Copyright © 2018 moist. All rights reserved.
//

#ifndef Playground_hpp
#define Playground_hpp

#include <stdio.h>
#include <string>
#include <sqlite3.h>

class Playground
{
    std::string _message;
    sqlite3 *_databaseConnection = NULL;
    
public:
    Playground();
    std::string Testible();
    void InitializeSql();
    
};

#endif /* Playground_hpp */

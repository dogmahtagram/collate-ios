//
//  Playground.cpp
//  collate-ios
//
//  Created by Larsson Burch on 2/17/18.
//  Copyright © 2018 moist. All rights reserved.
//

#include "Playground.hpp"

Playground::Playground()
{
    _message = "moistness...";
}

std::string Playground::Testible()
{
    return _message;
}

void Playground::InitializeSql()
{
    std::string home = getenv("HOME");
    std::string documentsDirectory = home + "/Documents";
    
    
    sqlite3_open_v2("filename", &_databaseConnection, SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE, NULL);
}

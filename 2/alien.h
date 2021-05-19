#pragma once
#include "what.h"
#include <string>

class Alien : public WhatCanMotion, public WhatCanSpeak
{
    string name;
    void speak() override
    {
        cout << name << " is speaking" << endl;
    }
    void motion() override
    {
        cout << name << " is moving" << endl;
    }
    void stop() override
    {
        cout << name << " stops" << endl;
    }
public: 
    Alien(string t_name) : name(t_name) {}
};
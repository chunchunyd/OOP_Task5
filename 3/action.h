#pragma once
#include <vector>
#include "animal.h"

using namespace std;

void action(Animal *tmp,vector<Dog> &dogzone,vector<Bird> &birdzone){
    if(dynamic_cast<Dog*>(tmp) != nullptr)
        dogzone.push_back(move(*dynamic_cast<Dog*>(tmp)));
    if(dynamic_cast<Bird*>(tmp) != nullptr)
        birdzone.push_back(move(*dynamic_cast<Bird*>(tmp)));
}
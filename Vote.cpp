#include<iostream>
#include<string>
#include "Vote.h"
#include "User.h" // Assuming User class is defined in User.h
#include "Nominee.h" // Assuming Nominee class is defined in Nominee.h
using namespace std;

User* getUser() {
    return user;
}

Nominee* getNominee() {
    return nominee;
}
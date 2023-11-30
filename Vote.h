#pragma once
#include<iostream>
#include<string>
#include <User.h> // Assuming User class is defined in User.h
#include <Nominee.h> // Assuming Nominee class is defined in Nominee.h
using namespace std;


class Vote {
private:
    User* user;
    Nominee* nominee;

public:
    Vote(User* user, Nominee* nominee) {
        this->user = user;
        this->nominee = nominee;

    };



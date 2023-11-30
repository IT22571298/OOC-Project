#include<iostream>
#include<string>
#include "Vote.h"
using namespace std;

int main() {
    User user("John");
    Nominee nominee("Alice");
    Vote vote(&user, &nominee);

    cout << "User: " << vote.getUser()->getName() << endl;
    cout << "Nominee: " << vote.getNominee()->getName() << endl;

    return 0;
}
//
// Created by HP on 5/6/2024.
//

#ifndef PERSON_H
#define PERSON_H

#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(float newWeight);
    ~Person();
    // Overload the add operator
    float operator + (const Person& otherPerson);
    string operator == (const Person& otherPerson);
    float operator != (const Person& otherPerson);

private:
    float mWeight;
    string mFirstName;
    int mAge;
};




#endif //PERSON_H

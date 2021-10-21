#ifndef Musician_H
#define Musician_H
#include<iostream>

class Musician{
    public:

    Musician();
    Musician(std::string instrument, int experience);
    std::string get_instrument();
    int get_experience();
    //set_experience
    ~Musician();

    private:

    std::string instrumentName;
    int experienceYears;
};
#endif

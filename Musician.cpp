#include "Musician.h"
using namespace std;

Musician::Musician(){
    instrumentName= "null";
    experienceYears= 0;
}

Musician::Musician(std::string instrument, int experience){
    instrumentName= instrument;
    experienceYears= experience;
}

string Musician::get_instrument(){
    return instrumentName;
}

int Musician::get_experience(){
    return experienceYears;
}

Musician::~Musician(){

}

#include "Musician.h"
//#include<iostream>
using namespace std;

int main(){
    Musician ins1;

    cout<<"Instrument:"<<ins1.get_instrument(); //call function
    cout<<", Experience:"<<ins1.get_experience()<<endl;

    Musician ins2("guitar", 20);

    cout<<"Instrument:"<<ins2.get_instrument();
    cout<<", Experience:"<<ins2.get_experience()<<endl;
    return 0;
}



#include "Musician.h"
using namespace std

int main(){
    Musician m1;
    
    cout<<m1.get_instrument();
    cout<<m1.get_experience()<<endl;
    
    musician m2("violin",20);
    cout
    
    return 0;
}
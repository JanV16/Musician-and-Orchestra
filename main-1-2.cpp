
#include "Orchestra.h"
using namespace std;


int main(){
    Musician m1("piano", 1);
    Musician m2("piano", 10);
    Musician m3("violin", 9);
    Musician m4("violin", 3);
    Musician m5("piano", 5);
    Musician arr[] = {m1, m2, m3, m4, m5};

    Orchestra o1(4);
    cout << "count = " << o1.get_current_number_of_members() << endl; //no one inside so count=0

    //following is a bool function
    for (int i = 0; i < 5; i++) {
        if (o1.add_musician(arr[i])) {
            cout << "success" << endl;
        } else {
            cout << "full" << endl;
        }
    }


    cout << "count = " << o1.get_current_number_of_members() << endl; //
    cout << "has piano = " << o1.has_instrument("piano") << endl;
    cout << "has violin = " << o1.has_instrument("violin") << endl;
    cout << "has drums = " << o1.has_instrument("drums") << endl;


    int count = o1.get_current_number_of_members();
    Musician* members = o1.get_members();
    for (int i = 0; i < count; i++) {
        cout << "member " << i + 1 << ", instr = ";
        cout << members[i].get_instrument() << ", year = ";
        cout << members[i].get_experience() << endl;
    }
    return 0;
}



// int main(){

//     musician m1("i",20);
//     ...
//     Musician array[]={m1 m2...};

//     orchestra o1(4);
//     cout<< o1<<o1.get_numbermmm()<<
// }

// for intjjj<5
// if(o1.add_ins()){

//     //compile with -Wall

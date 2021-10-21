// #include "MenuClass.h"
// #include "BeverageClass.h"
// #include <string>
// #include <iomanip>

// int main()
// {
//     //Food new_food;
//     std::cout << "Beverages: " << "\n";
//     Beverage new_beverage;

//     /*new_food.set_name("Pizza");
//     new_food.set_price(10);
//     new_food.set_temp("Hot");
//     new_food.set_option("NA");
//     new_food.set_calorie(200);*/

//     new_beverage.set_name("Orange Juice");
//     new_beverage.set_price(5);
//     new_beverage.set_temp("Cold");
//     new_beverage.set_option("non-alcohol");
//     new_beverage.set_calorie(100);

//     //new_food.Item();
//     new_beverage.Item();
// }


#include "MenuClass.h"
#include "BeverageClass.h"
//#include "FoodClass.h"
#include "MenuColour.h"
#include <string>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{

    //Declare variables in main function
    string answer;
    string receipt_claim;


    std::cout<<"~ Welcome! ~"<< "\n";
    std::cout<<"Would you like to have a look at our menu? (yes/no)" << "\n";
    std::cin>>answer;


    if ( answer != "yes"){
        cout<< " Invalid input, please try again "<< "\n";
        return 0;
    } else{


    std::string menuText;
    ifstream MenuReadFile("Menu.txt");
    while(getline (MenuReadFile, menuText))
    {
        cout << menuText << "\n";
    }
    MenuReadFile.close();



    }




    std::cout << " " << "\n";  //just to skip a line after menu gets displayed in terminal
    std::cout << "Beverages: " << "\n";
    BeverageClass new_beverage;

    std::string name = new_beverage.getNameFromUser();
    int price = new_beverage.getPriceFromUser();
    std::string temp = new_beverage.getTempFromUser();
    std::string option = new_beverage.getOptionFromUser();
    int calorie = new_beverage.getCalorieFromUser();

    /*new_beverage.name;
    new_beverage.price;
    new_beverage.temp;
    new_beverage.option;
    new_beverage.calorie;*/

    //new_beverage.Item();

    // ofstream MenuFile("Menu.txt", ofstream::app);
     // << name << " " << price << " " << temp << " " << option << " " << calorie << endl;
    // MenuFile.close();


    Color::Modifier red(Color::FG_RED);
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier blue(Color::FG_BLUE);
    std::cout << red << "beverage: " << "\n";

    std::cout << blue << std::left << std::setw(15) << name << std::left << std::setw(5) << price <<
    std::left << std::setw(5) << temp << std::left << std::setw(15) << option << std::left << std::setw(5) << calorie << std::endl;








    //Print receipt
    cout << "Would you like an invoice?" << "\n";
    cin >> receipt_claim ;

    if (receipt_claim != "yes"){
        cout<< "Thank you "<< "\n";
        return 0;
    } else{

        //return total price
        //function/loop?
        cout << " Here's your receipt: " <<"\n";
        return 0;
    }


    return 0;
}
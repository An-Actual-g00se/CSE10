#include <iostream>
using namespace std;

int main() {

    /*
        2.25% rate: income is $100,000 or more.
        3.25% rate: income is less than $100,000, and customer is 65 or older.
        5.25% rate: income is less than $100,000, and customer is 25 or older, but younger than 65.
        7.25% rate: income is less than $100,000, and customer is younger than 25.
    */

    float income, tax, age;
    cin >> age;
    cin >> income;

    if(income >= 100000){
    tax = 2.25;
    }else{
    if(age >=65){
        tax = 3.25;
    }else if(age <65 && age >= 25 ){
        tax = 5.25;
    }else if(age < 25){
        tax = 7.25;
    }
    }

cout << tax << "% rate" << endl;

    return 0;
}
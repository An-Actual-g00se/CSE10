#include <iostream>
using namespace std;

int main() {

    float month, day, year;
    cin >> month >> day >> year;

    string m, d2;

    if(month >12 || month < 1 || day < 1){
        cerr << "Invalid date";
        return 1;
    }else if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31){
        cerr << "Invalid date";
        return 1;
    }else if((month == 4 || month == 6 || month == 9 || month == 11 ) && day > 30){
        cerr << "Invalid date";
        return 1;
    }else if(month == 2 && day > 28){
        cerr << "Invalid date";
        return 1;
    }

    if(month == 1){
        m = "January";
    }else if(month == 2){
        m = "February";
    }else if(month == 3){
        m = "March";
    }else if(month == 4){
        m = "April";
    }else if(month == 5){
        m = "May";
    }else if(month == 6){
        m = "June";
    }else if(month == 7){
        m = "July";
    }else if(month == 8){
        m = "August";
    }else if(month == 9){
        m = "September";
    }else if(month == 10){
        m = "October";
    }else if(month == 11){
        m = "November";
    }else if(month == 12){
        m = "December";
    }

    if(day == 1 || day == 21 || day == 31){
        
        d2 += "st";
    }else if(day == 2 || day == 22){
       
        d2 += "nd";
    }else if(day == 3 || day == 23){
        
        d2 += "rd";
    }else{
        d2 += "th";
    }


cout << m << " " << day << d2 << ", " << year << endl;
    return 0;
}
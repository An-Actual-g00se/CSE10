#include <iostream>
using namespace std;

int main() {

    string day, time;
    getline(cin , day);
    getline(cin, time);

    float holes;
    cin >> holes;

    bool cart, clubs, balls;
    cin >> cart >> clubs >> balls;

    if(!(holes == 9 || holes == 18) || !(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday" || day == "Sunday") || !(time == "Morning" || time == "Afternoon" || time == "Twilight")){
        cerr << "Invalid information";
        return 1;
    }

    //convert to num
    int d;
    if(day == "Monday"){
        d = 1;
    }else if(day == "Tuesday"){
        d = 2;
    }else if(day == "Wednesday"){
        d = 3;
    }else if(day == "Thursday"){
        d = 4;
    }else if(day == "Friday"){
        d = 5;
    }else if(day == "Saturday"){
        d = 6;
    }else if(day == "Sunday"){
        d = 7;
    }

    float hdisco, sum, gfee, cfee, rc, rb;

    if(holes == 9){
        hdisco = 0.5;
    }else if(holes == 18){
        hdisco = 1;
    }

    if(d < 6){
        if(time == "Morning"){
            gfee = hdisco * 45;
            sum += gfee;
        }else if(time == "Afternoon"){
            gfee = hdisco * 30;
            sum += gfee;
        }else if(time == "Twilight"){
            gfee = hdisco * 25;
            sum += gfee;
        }
    }else if( d >=6){
        if(time == "Morning"){
            gfee = hdisco * 60;
            sum += gfee;
        }else if(time == "Afternoon"){
            gfee = hdisco * 40;
            sum += gfee;
        }else if(time == "Twilight"){
            gfee = hdisco * 35;
            sum += gfee;
        }
    }

string cYoN, lYoN, bYoN;

    if(cart){
        cfee = hdisco * 20;
        sum += cfee;
        cYoN = "Yes";
    }else{
        cfee = 0;
        cYoN = "No";
    }
    if(clubs){
        lYoN = "Yes";
    }else{
        lYoN = "No";
    }
    if(balls){
        bYoN = "Yes";
    }else{
        bYoN = "No";
    }

cout << "---------------------" << endl;
cout << "       RECEIPT       " << endl;
cout << "---------------------" << endl;
cout << "Day: " << day << endl;
cout << "Time: " << time << endl;
cout << "Holes: " << holes << endl;
cout << "Cart: " << cYoN << endl;
cout << endl;
cout << "EXTRAS" << endl;
cout << "Rental Clubs: " << lYoN << endl;
cout << "Range Balls: " << bYoN << endl;
cout << endl;
cout << "PRICE SUMMARY" << endl;
cout << "Green Fee:    $" << gfee << endl;
cout << "Cart Fee:     $" << cfee << endl;
if(clubs){
    sum += 15;
    cout << "Rental Clubs: $15" << endl;
}
if(balls){
    sum += 7;
    cout << "Range Balls:  $7" << endl;
}
cout << "Total:        $" << sum;

    return 0;
}
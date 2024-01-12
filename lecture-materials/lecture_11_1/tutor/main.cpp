#include <iostream>
#include <ucm_random>

using namespace std;


int main() {

    RNG generator;

    int x = generator.get(1,20);
    int y = generator.get(1,20);

    if(x < y){
        int temp = x;
        x = y;
        y = temp;
    }

    int oper = generator.get(1,4);
    //string OP;
    int sum;
    if(oper == 1){
        cout << x << " + " << y << " = ";
        sum = x+y;
       // OP = " + ";
    }else if(oper ==2){
        cout << x << " - " << y << " = ";
        sum = x-y;
        //OP = " - ";
    }else if (oper  ==3 ){
        cout << x << " * " << y << " = ";
        sum = x*y;
        //OP = " * ";
    }else if(oper == 4){
        cout << x << " / " << y << " = ";
        sum = x/y;
       // OP = " / ";
    }else{
        cerr << "Num Gen Outside Bounds!";
        return 1;
    }

    int user;
    cin >> user;
    if(user == sum){
        cout << "That is the correct answer!" << endl;
    }else if(user != sum){
        if(oper ==1){
            cout << "That's incorrect. " << x << " + " << y << " = " << sum << endl;
        }else if(oper == 2){
            cout << "That's incorrect. " << x << " - " << y << " = " << sum << endl;
        }else if(oper == 3){
            cout << "That's incorrect. " << x << " * " << y << " = " << sum << endl;
        }else if(oper == 4){
            cout << "That's incorrect. " << x << " / " << y << " = " << sum << endl;
        }
    }

    return 0;
}
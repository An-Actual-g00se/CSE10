#include <iostream>
using namespace std;

int main() {

    float grade;
    cin >> grade;

    if(grade > 100 || grade <0){
        cerr << "Invalid grade";
        return 1;
    }

    if(90 <= grade && grade <=100){
        if(grade >=97){
            cout << "A+";
        }else if(grade >=93){
            cout << "A";
        }else{
            cout << "A-";
        }
    }else if(80 <= grade && grade < 90){
        if(grade >=87){
            cout << "B+";
        }else if(grade >=83){
            cout << "B";
        }else{
            cout << "B-";
        }
    }else if(70 <= grade && grade < 80){
        if(grade >=77){
            cout << "C+";
        }else if(grade >=73){
            cout << "C";
        }else{
            cout << "C-";
        }
    }else if(60 <= grade && grade < 70){
        if(grade >=67){
            cout << "D+";
        }else if(grade >=63){
            cout << "D";
        }else{
            cout << "D-";
        }
    }else{
        cout << "F";
    }

    return 0;
}
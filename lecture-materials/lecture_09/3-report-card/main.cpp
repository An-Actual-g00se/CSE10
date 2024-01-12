#include <iostream>
using namespace std;

int main() {

    string sub1, sub2, sub3;
    float grade1, grade2, grade3;

    getline(cin, sub1);
    getline(cin, sub2);
    getline(cin, sub3);

    cin >> grade1 >> grade2 >> grade3;

    string letter1, letter2, letter3;

    if(grade1 > 100 || grade1 < 0){
        cerr << "INVALID INPUT!"<< endl;
        return 1;
    }

    if(grade1 >=90){
       letter1 = "A";
    } else if( grade1 >=80){
        letter1 = "B";
    }else if( grade1 >=70){
        letter1 = "C";
    }else if(grade1 >=60){
        letter1 = "D";
    }else{
        letter1 = "F";
    }

     if(grade2 > 100 || grade2 < 0){
        cerr << "INVALID INPUT!"<< endl;
        return 1;
    }

    if(grade2 >=90){
       letter2 = "A";
    } else if( grade2 >=80){
        letter2 = "B";
    }else if( grade2 >=70){
        letter2 = "C";
    }else if(grade2 >=60){
        letter2 = "D";
    }else{
        letter2 = "F";
    }

    if(grade3 > 100 || grade3 < 0){
        cerr << "INVALID INPUT!"<< endl;
        return 1;
    }

    if(grade3 >=90){
       letter3 = "A";
    } else if( grade3 >=80){
        letter3 = "B";
    }else if( grade3 >=70){
        letter3 = "C";
    }else if(grade3 >=60){
        letter3 = "D";
    }else{
        letter3 = "F";
    }

    cout << sub1 << " " << letter1 << endl;
    cout << sub2 << " " << letter2 << endl;
    cout << sub3 << " " << letter3 << endl;

    return 0;
}
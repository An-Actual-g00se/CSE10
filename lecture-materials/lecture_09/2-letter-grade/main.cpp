#include <iostream>
using namespace std;

int main() {

    float grade;
    cin >> grade;

    if(grade > 100 || grade < 0){
        cerr << "INVALID INPUT!"<< endl;
        return 1;
    }

    if(grade >=90){
        cout << "You received an A" << endl;
    } else if( grade >=80){
        cout << "You received a B" << endl;
    }else if( grade >=70){
        cout << "You received a C" << endl;
    }else if(grade >=60){
        cout << "You received a D" << endl;
    }else{
        cout << "You received a F" << endl;
    }

    return 0;
}
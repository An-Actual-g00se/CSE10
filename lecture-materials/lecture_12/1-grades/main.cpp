#include <iostream>
using namespace std;

int main() {
    
    /*
        A: [90, 100]
        B: [80, 90)
        C: [70, 80)
        D: [60, 70)
        F: [0, 60)
        Invalid grade: (-inf, 0), (100, inf)
    */

    float grade;
    cin >> grade;

    if (grade > 100 || grade < 0) {
        cerr << "Invalid grade" << endl;
        return 1;
    }

    if(grade >= 90){
        cout << 'A' << endl;
    }else if(grade >= 80){
        cout << 'B' << endl;
    }else if(grade >=70){
        cout << 'C' << endl;
    }else if(grade >= 60){
        cout << 'D' << endl;
    }else if(grade >= 0){
        cout << 'F' << endl;
    }

    return 0;
}
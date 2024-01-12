#include <iostream>
using namespace std;

int main() {

    float hole1, hole2, hole3, hole4, hole5, hole6, hole7, hole8, hole9, hole10, hole11, hole12, hole13, hole14, hole15, hole16, hole17, hole18;

    cin >> hole1;
    cin >> hole2;
    cin >> hole3;
    cin >> hole4;
    cin >> hole5;
    cin >> hole6;
    cin >> hole7;
    cin >> hole8;
    cin >> hole9;
    cin >> hole10;
    cin >> hole11;
    cin >> hole12;
    cin >> hole13;
    cin >> hole14;
    cin >> hole15;
    cin >> hole16;
    cin >> hole17;
    cin >> hole18;

    float course;
    cin >> course;

    float slope;
    cin >> slope;

    float differential;
    differential = ((hole1 + hole2 + hole3 + hole4 + hole5 + hole6 + hole7 + hole8 + hole9 + hole10 + hole11 + hole12 + hole13 + hole14 + hole15 + hole16 + hole17 + hole18 -course)*113)/slope;
    

    cout << differential << endl;
    return 0;
}
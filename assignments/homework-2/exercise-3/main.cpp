#include <iostream>
using namespace std;

int main() {

    float golfer;
    cin >> golfer;

    float course, slope, par;
    cin >> course;
    cin >> slope;
    cin >> par;

    float handicap;
    handicap = (golfer * (slope/113)) + (course - par);

    cout << handicap << endl;

    
    return 0;
}
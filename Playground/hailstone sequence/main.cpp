#include <functional>
#include <iostream>
#include <cmath>

using namespace std;



int main(){
int num; // insert any number
cout << "Insert a number: ";
cin >> num;
cout << "\n";

int steps = 0;

while (num!=1){
    steps += 1;
    cout << num <<endl;
    if(fmod(num,2) == 0){
        num = num /2;
    }else{
        num = num *3 +1;
    }
}

cout << "Total number of steps: " << steps << endl;



    return 0;
}
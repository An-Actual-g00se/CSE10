#include <iostream>
#include <ucm_random>
using namespace std;

int main() {

    RNG generator;

for(int i = 0; i < 5; i++){

    int num1, num2, opp, sum;
    num1 = generator.get(1,15);
    num2 = generator.get(1,15);
    opp = generator.get(1,4);

    string op;

    if(opp == 1){
        op = "+";
        sum = num1 + num2;
    }else if(opp == 2){
        op = "-";
        sum = num1 - num2;
    }else if(opp == 3){
        op = "*";
        sum = num1 * num2;
    }else{
        op = "/";
        sum = num1 / num2;
    }

    cout << "Question " << i+1 << ": " << num1 << " " << op << " " << num2 << " = ";
    
    int user;
    cin >> user;
    if(user == sum){
        cout << "That is correct!"<< endl << endl;
    }else{
        cout << "That is incorrect. The correct answer is: " << sum << endl <<endl;
    }    
}
    return 0;
}
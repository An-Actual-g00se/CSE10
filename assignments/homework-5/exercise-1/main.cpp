#include <iostream>
#include <ucm_random>
using namespace std;


int main(){

    RNG generator;
int qVal[5] = {};
for(int i = 0; i < 5; i++){
    bool tf = false;

    int num1, num2, opp, sum;
    num1 = generator.get(1,15);
    num2 = generator.get(1,15);
    opp = generator.get(1,5);

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
    }else if(opp == 4){
        op = "/";
        sum = num1 / num2;
    }else{
        op = "%";
        sum = num1 % num2;
    }



int attempts = 0;

while(tf != true){
    cout << i+1 << ". " << num1 << " " << op << " " << num2 << " = ";
    attempts += 1;
    
    int user;
    cin >> user;
    
    if(user == sum){
        tf = true;
        qVal[i] = attempts;
        attempts = 0;
    }
}
 cout << endl;   
}
cout << "Question 1 took you " <<  qVal[0] << " attempts." << endl;
cout << "Question 2 took you " <<  qVal[1] << " attempts." << endl;
cout << "Question 3 took you " <<  qVal[2] << " attempts." << endl;
cout << "Question 4 took you " <<  qVal[3] << " attempts." << endl;
cout << "Question 5 took you " <<  qVal[4] << " attempts." << endl;
    return 0;
}
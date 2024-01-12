#include <iostream>
#include <string>
using namespace std;

int main() {

    string subject1;
    getline(cin, subject1);
    string subject2;
    getline(cin, subject2);
    string subject3;
    getline(cin, subject3);

    float grade1;
    cin >> grade1;
    cin.ignore();

    float grade2;
    cin >> grade2;
    cin.ignore();

    float grade3;
    cin >> grade3;
    cin.ignore();
    
if(grade1 >= 70 && grade2 >= 70 && grade3 >=70){
    cout << "You are currently passing!" << endl;
}else{
    cout << "You are currently failing!" << endl;
}


    return 0;
}
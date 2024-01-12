#include <iostream>
#include <ucm_random>
#include <cmath>
using namespace std;

int main() {

    RNG generator;

    int max, attempts = 0, min = 0;
    cin >> max;
    
    int theory = ceil(log2(max));


    if(max <=1){
        cerr << "Invalid upper limit." << endl;
        return 1;
    }
    int guess;
    guess = generator.get(1,max);
    bool victory = false;
    int user;
    while(!victory){
        cout << "Enter guess [1.." << max <<"]: ";
        
       
        
        if(cin >> user){
            
            if(user > guess){
            cout << "Go lower\n" << endl;
            attempts++;
            }else if(user < guess){
                cout << "Go higher\n" << endl;
                attempts++;
            }else if(user == guess){
                victory = true;
                attempts++;
            }
        }else{
            cout << "\n\nBetter luck next time.\nThe number was " << guess <<"." << endl;
            break;
        }
        
    }
    if(victory){
    if(attempts == theory){
            cout << "\nYou got it in " << attempts << " attempts, which is the minimum number of attempts required to guarantee success.";
        }else if(attempts > theory){
            cout << "\nYou got it in " << attempts <<  " attempts, but it could have been done in " << theory <<".";
        }else{
            cout << "\nIt requires " << theory << " attempts to guarantee success. You got lucky and guessed it in " << attempts <<".";
        }
    }
    return 0;
}

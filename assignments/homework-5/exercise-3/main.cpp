#include <iostream>
#include "ucm_hidden.h"
#include <array>


using namespace std;

string toUpperCase(string input){
    for(int i = 0; i < input.length(); i++){
        input[i] = toupper(input.at(i));
    }
    return input;
}

bool strCheck(string input){
    if(input == "_"){
        return false;
    }else{
        return true;
    }
}

bool strCheck(string in, string put){
    if(in == put){
        return true;
    }else{
        return false;
    }
}

int main() {

    HIDDEN_INPUT input;
    string word = input.get();

    word = toUpperCase(word);

    string arr[word.length()];

    for(int i = 0; i < word.length(); i++){
        arr[i] = "_";
    }
    bool yes = false;
    string guess;
    string jared = "";
    while(!yes){
        cout << "\nEnter a letter: ";
        cin >> guess;
        if(!guess.empty()){
           guess = toUpperCase(guess);
            if(jared.length() == 0){
                jared+= guess;
            }else{
                bool compare = false;
                for(int i = 0; i < jared.length(); i++){
                    string temp = "";
                    temp += jared.at(i);
                    bool dub = strCheck(temp, guess);
                    if(dub){
                        compare = true;
                        break;
                    }
                }
                if(!compare){
                jared+= ", " + guess;
                }
                
            }
            for(int j = 0; j < word.length(); j++){
                if(word.at(j) == guess.at(0)){
                    arr[j] = word[j];
                }
                cout << arr[j];
                if(j != word.length()-1){
                    cout << " ";
                }
            } 
        }else{
            cout << "\n\nBetter luck next time!\nThe word was: " << word;
            break;
        }
        int check = 0;
for(int i = 0; i < word.length(); i++){
    if(strCheck(arr[i])){
        check++;
    }else{
        break;
    }
    guess = "";
}
if(check == word.length()){
    yes = true;
    break;
}

        cout << "\n\nLetters: " << jared;
    }

if(yes){
cout << "\n\nGreat job!";
}
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(){

    int getSpaces = 0, leng = 0;
    string line;
    getline(cin, line);
    leng = line.length();
    for(int i = 0; i < leng; i++){
        if(line.at(i) == ' '){
            getSpaces +=1;
        }
    }
    getSpaces +=1;
    //cout << "Number of spaces: " << getSpaces << endl;
    string split[getSpaces];
    string hold = "";
    int currSplit = 0;
    for(int j = 0; j < leng; j++){
        if(line.at(j) == ' '){
            split[currSplit] = hold;
            currSplit += 1;
            hold = "";
        }else{
            hold += line.at(j);
            if(j == leng - 1){
                split[getSpaces-1] = hold;
            }
        }
    }
    cout << "[";
    for(int k = 0; k < getSpaces; k++){
        cout << split[k];
        if(!(k == getSpaces - 1)){
            cout << ", ";
        }
    }
    cout << "]"<< endl;


    return 0;
}
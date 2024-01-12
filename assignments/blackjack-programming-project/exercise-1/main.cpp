#include <iostream>
#include "blackjack.h"
#include "vector"
using namespace std;

int main() {
    // cards must be represented using the following string array
    string cards[52] = {"AH", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "10H", "JH", "QH", "KH", "AD", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "10D", "JD", "QD", "KD", "AS", "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "10S", "JS", "QS", "KS", "AC", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "10C", "JC", "QC", "KC"};

shuffleCards(cards, 52);
shuffleCards(cards, 52);

bool ingame = true;

while(ingame){
    vector<string> pHand;
    vector<string> dHand;

    for(int i = 0; i < 2; i++){
        pHand.push_back(cards[i]);
    }
    for(int i = 2; i < 4; i++){
        dHand.push_back(cards[i]);
    }
    int downDeck = 4;

    bool pTurn = true;
    while(pTurn){
        cout << "Your Hand: " << calculatePoints(pHand.data(), pHand.size()) << "\n";
        printHand(pHand.data(),pHand.size());
        if(calculatePoints(pHand.data(),pHand.size()) > 21){
            break;
        }

       
        while(true){
        cout << "\n Another card? ([Y]/[N]): ";
        string response = "";
        getline(cin, response);
        char r = toupper(response[0]);
        if(r == 'Y'){
            pHand.push_back(cards[downDeck]);
            downDeck++;
            break;
        }else if(r == 'N'){
            pTurn = false;
            break;
        }else{
            cout << "Please enter ([Y]/[N])";
        }
        }
    }
    bool dTurn = false;
    if(calculatePoints(dHand.data(),dHand.size()) < 17){
        dTurn = true;
    }
    while(dTurn){
        dHand.push_back(cards[downDeck]);
        downDeck++;
        int d = calculatePoints(dHand.data(),dHand.size());
        if(d > 17){
            dTurn = false;
        }
    }
    cout << "Dealer's Hand: " << calculatePoints(dHand.data(),dHand.size()) << "\n";
    printHand(dHand.data(),dHand.size());

    cout << determineOutcome(pHand.data(),pHand.size(),dHand.data(),dHand.size()) << "\n";
    while(true){
    cout << "\nPlay Again? ([Y]/[N]): ";
    string rep = "";
    getline(cin, rep);
    char rem = toupper(rep[0]);
    if(rem == 'Y'){
            shuffleCards(cards, 52);
            pHand.clear();
            dHand.clear();
            break;
        }else if(rem == 'N'){
            ingame = false;
            break;
        }else{
            cout << "Please enter ([Y]/[N])";
        }
    }
}


    return 0;
}

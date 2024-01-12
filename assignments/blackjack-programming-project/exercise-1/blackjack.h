#ifndef BLACKJACK_H
#define BLACKJACK_H
#include <cstdlib>
#include <iostream>
#include <stdexcept>


// C++ macros for changing background color and text color of the terminal
#define RESET "\033[0m"             // reset terminal
#define WHITE_BG "\033[47m"         // white background
#define RED_CARD "\033[1;47;31m"    // white background + red text color
#define BLACK_CARD "\033[1;47;30m"  // white background + black text color


void shuffleCards(std::string arr[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        int r = (rand() % (size-i));
        swap(arr[i], arr[r]);
    }
    
}
char getRank(std::string card){
    return card.at(0);
}

char getSuit(std::string card){
    int i = 0;
    if(getRank(card) == '1'){
        i = 1;
    }
    char suit = ' ';
    if(card.at(1+i) == 'H'){
        suit = 'H';
    }else if(card.at(1+i) == 'D'){
        suit = 'D';
    }else if(card.at(1+i) == 'S'){
        suit = 'S';
    }else if(card.at(1+i) == 'C'){
        suit = 'C';
    }
    return suit;
}



void printHand(std::string arr[], int hand){
    std::string print = "";
    
    for(int layer = 0; layer < 8; layer ++){   
    for(int i = 0; i < hand; i++){
        if(layer == 0 || layer == 7){print += WHITE_BG "          ";}
        if(getSuit(arr[i]) == 'H' || getSuit(arr[i]) == 'D'){
            if(layer == 1){
                print += RED_CARD "  ";
                print += getRank(arr[i]);
                if(getRank(arr[i]) == '1'){
                    print += "0      ";
                }else{
                    print += "       ";
                }
                    
                
                }else if(layer == 6){
                    if(getRank(arr[i]) == '1'){
                    print += RED_CARD "      10";
                    }else{
                        print += RED_CARD "       ";
                        print += getRank(arr[i]);
                    }
                
                print += "  ";
                }   
            
        }else if(getSuit(arr[i]) == 'C' || getSuit(arr[i]) == 'S'){
            if(layer == 1){
                print += BLACK_CARD "  ";
                print += getRank(arr[i]);
                 if(getRank(arr[i]) == '1'){
                    print += "0      ";
                }else{
                    print += "       ";
                }
            }else if(layer == 6){
                if(getRank(arr[i]) == '1'){
                    print += BLACK_CARD "      10";
                }else{
                print += BLACK_CARD "       ";
                print += getRank(arr[i]);
                }
                print += "  ";
            }
        }
        if(layer > 1 && layer < 6){
            if(getSuit(arr[i]) == 'D'){
                std::string diamond[4] = {RED_CARD "    /\\    ", RED_CARD "   /  \\   ", RED_CARD "   \\  /   ", RED_CARD "    \\/    "}; 
                print += diamond[layer - 2];
            }else if(getSuit(arr[i]) == 'H'){
                std::string heart[4] = {RED_CARD "   _  _   ", RED_CARD "  ( \\/ )  ", RED_CARD "   \\  /   ", RED_CARD "    \\/    "};
                print += heart[layer - 2];
            }else if(getSuit(arr[i]) == 'S'){
                std::string spade[4] = {BLACK_CARD "    /\\    ", BLACK_CARD "   /  \\   ", BLACK_CARD "  (____)  ", BLACK_CARD "    ||    "};
                print += spade[layer - 2];
            }else if(getSuit(arr[i]) == 'C'){
                std::string club[4] = {BLACK_CARD "    __    ", BLACK_CARD "   (  )   ", BLACK_CARD "  (____)  ", BLACK_CARD "    ||    "};
                print += club[layer - 2];
            }
        }
        if(i < hand - 1){
            print += RESET " ";
        }else if(i == hand - 1){
            print += RESET "";
            print += "\n";
        }  
    }
    }
    std::cout  << print;
    
}

int calculatePoints(std::string hand[], int size){
    int sum = 0;
    int aLoop = 0;
    for(int i = 0; i < size; i++){
        if(getRank(hand[i]) == '2'){
            sum += 2;
        }else if(getRank(hand[i]) == '3'){
            sum += 3;
        }else if(getRank(hand[i]) == '4'){
            sum += 4;
        }else if(getRank(hand[i]) == '5'){
            sum += 5;
        }else if(getRank(hand[i]) == '6'){
            sum += 6;
        }else if(getRank(hand[i]) == '7'){
            sum += 7;
        }else if(getRank(hand[i]) == '8'){
            sum += 8;
        }else if(getRank(hand[i]) == '9'){
            sum += 9;
        }else if(getRank(hand[i]) == '1' || getRank(hand[i]) == 'J' || getRank(hand[i]) == 'Q' || getRank(hand[i]) == 'K'){
            sum += 10;
        }else if(getRank(hand[i]) == 'A'){
            if(sum + 11 > 21){
                sum += 1;
            }else{
                sum += 11;
            }
            aLoop++;
        }
    }
    for(int a = 0; a < aLoop; a++){
        if(sum > 21){
            sum = sum - 10;
        }
        break;
    }
    return sum;
}

std::string determineOutcome(std::string pHand[], int pSize, std::string dHand[], int dSize){
    int pSum = calculatePoints(pHand, pSize);
    int dSum = calculatePoints(dHand, dSize);

    std::string outcome = "";

    if (dSum == pSum && !(dSum > 21 || pSum > 21)) {
        if(pSize == 2 && dSize > 2 && pSum == 21){
            outcome = "You got a blackjack!";
        }else if(dSize == 2 && pSize > 2 && dSum == 21){
            outcome = "Dealer got a blackjack!";
        }else{
            outcome = "It's a tie!";
        }
    
    }else if(pSum == 21 && pSize == 2){
        outcome = "You got a blackjack!";
    }else if(dSum == 21 && dSize == 2){
        outcome = "Dealer got a blackjack!";
    }else if(pSum > 21 || (dSum <= 21 && dSum > pSum)){
        outcome = "You lose!";
    }else if(pSum <= 21 && (dSum < pSum || dSum > 21)){
        outcome = "You win!";
    }

    return outcome;
}



#endif
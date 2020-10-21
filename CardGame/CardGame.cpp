// UBER assessment - Card Game
// By: Ana Lizbeth Zermeño Torres

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// global variables

// store probability that already passed
vector<int> prob;

// store cards that were already picked from each type of card (Common, Rare, Epic, Legendary)
vector<int> common;
vector<int> rare;
vector<int> epic;
vector<int> legendary;


bool alreadyPickedType(int card) {

    for(int i = 0; i < prob.size(); i++){
        if(prob[i] == card){
            return true;
        }
    }

    return false;
}

bool alreadyPickedCard(int card, int type) {

    if(type >= 1 && type <= 74) {
        for(int i = 0; i < common.size(); i++){
            if(common[i] == card) {
                return true;
            }
        }
    }

    if(type >= 75 && type <= 95) {
        for(int i = 0; i < rare.size(); i++) {
            if(rare[i] == card) {
                return true;
            }
        }
    }

    if(type >= 96 && type <= 99){
        for(int i = 0; i < epic.size(); i++) {
            if(epic[i] == card) {
                return true;
            }
        }
    }

    if(type == 100){
        for(int i = 0; i < legendary.size(); i++) {
            if(legendary[i] == card) {
                return true;
            }
        }
    }

    return false;   
}

// determining the type of card
// by picking randomly a number between 1 - 100 (inclusive)
// 1 - 74 = Common Card | 75 - 95 = Rare Card | 96 - 99 = Epic Cards | 100 = Legendary Card

void typeOfCard(){

    srand(time(0));

    int type = (rand() % 100) + 1;

    while(alreadyPickedType(type)){
        type = (rand() % 100) + 1;
    }

    prob.push_back(type);
}

// print the cards
// first select the number of the card according to the type
// then print the cards
void selectCard(int type) {

 int card = 0;
 char letter; 

    if(type >= 1 && type <= 74) {
        letter = 'C';
        card = (rand() % 94) + 1;

        while(alreadyPickedCard(card,type)) {
            card = (rand() % 94) + 1;
        }
        common.push_back(card);
    }

    if(type >= 75 && type <= 95) {
        letter = 'R';
        card = (rand() % 81) + 1;

        while(alreadyPickedCard(card,type)){
            card = (rand() % 81) + 1;
        }

        rare.push_back(card);
    }

    if(type >= 96 && type <= 99){
        letter = 'E';
        card = (rand() % 37) + 1;

        while(alreadyPickedCard(card,type)) {
            card = (rand() % 37) + 1;
        }

        epic.push_back(card);
    }

    if (type == 100){
        letter = 'L';
        card = (rand() % 33) + 1;

        while(alreadyPickedCard(card,type)) {
            card = (rand() % 33) + 1;
        }   

        legendary.push_back(card);     
    }

   cout << "[" << letter << card << "] ";
}

int main() {

    // simulation of opening a pack of 5 cards;
    for(int i = 0; i < 5; i++){
        typeOfCard();
    }

    for(int i = 0; i < 5; i++){
        selectCard(prob[i]);
        cout << prob[i];
    }

    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <numeric>
#include <string>
#include <cmath>
#include <fstream>

#define INF 10e100;

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::min;

struct card {
    char number;
    char must;
};

string cardmanipulations(vector<card> n_deck){
    vector<card> deck;
    vector<card> hand;
    for(int i=n_deck.size()-1;i>=n_deck.size()-26;i--){
        hand.push_back(n_deck[i]);
    }
    for(int i = 24;i<=0;i++){
        deck.push_back(n_deck[i]);
    }
    int Y = 0;
    int X = 0;
    card ccard;
    int deleting=0;
    vector<card> pr;
    for(int i= 1;i<=3;i++){
        ccard=deck[0];
        if((ccard.number=='9')||(ccard.number=='8')||(ccard.number=='7')||(ccard.number=='6')||(ccard.number=='5')||(ccard.number=='4')||(ccard.number=='3')||(ccard.number=='2')){
        X = ccard.number - '0';
        }
        else{
            X=10;
        }
        Y+=X;
        deleting=1+(10-X);
        for(int j = deck.size()-1;i>=deck.size()-deleting-1;i--){
            pr.push_back(deck[j]);
        }
        deck = pr;
        pr = {};
    }
    for(int i=hand.size()-1;i>=0;i--){
        deck.push_back(hand[i]);
    }
    ccard=deck[Y];
    string stringus;
    stringus.push_back(ccard.number);
    stringus.push_back(ccard.must);
    return stringus;
}

int main(){
    string deck;
    vector<card>f_deck;
    for(int i = 0;i<52;i++){
        cin>>deck;
        f_deck.push_back({deck[0],deck[1]});
    }
    cout<<cardmanipulations(f_deck);
}
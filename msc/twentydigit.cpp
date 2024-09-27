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

vector<string> triplevars(){
    vector<string> v;
    int check;
    string var;
    int counter = 0;
    for(int a = 1;a<=6;a++){
        for(int i = 1;i<=6;i++){
            for(int j = 1;j<=6;j++){
                check = a * 100 + i * 10 + j;
                if(a + i + j < 9){
                    var.push_back(a);
                    var.push_back(i);
                    var.push_back(j);
                    v.push_back(var);
                }
                check = 0;
                var = "";
            }
        }
    }
    return v;
}

int doubles(vector<string> v){
    vector<int> res;
    vector<int> ttt;
    int counter = 0;
    for(int i = 11;i<=61;i++){
        for(string j : v){
            if((i + (j[0] - '0') < 9) && (i%10 + (j[0] - '0') + (j[1] - '0') < 9)){
                counter++;
            }
        }
        if(counter == 56){
            res.push_back(i);
            }
            counter = 0;
    }
    for(int i : res){
        for(string j : v){
            if((i + (j[2] - '0') < 9) && (i/10 + (j[2] - '0') + (j[1] - '0') < 9)){
                counter++;
            }
        }
                    if(counter == 56){
            res.push_back(i);
            }
            counter = 0;
    }
    int resultat = 0;
    resultat = 56 * 56 * 56 * 56 * ttt.size() * ttt.size() * ttt.size() * res.size();
    return resultat;
}

int main(){
cout<<doubles(triplevars());
}
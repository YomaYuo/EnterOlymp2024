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
    cout<<counter<<" ";
    return v;
}

vector<string> sixvars(){
    vector<string> v1 = triplevars();
    vector<string> v2 = triplevars();
    vector<string> res;
    string v;
    for(string i : v1){
        for(string j : v2){
            if(((i[1] - '0') + (i[2] - '0') + (j[0] - '0') <= 6) && ((j[0] - '0') + (j[1] - '0') + (i[2] - '0') <= 6)){
                v.push_back(i[0]);
                v.push_back(i[1]);
                v.push_back(i[2]);
                v.push_back(j[0]);
                v.push_back(j[1]);
                v.push_back(j[2]);
                res.push_back(v);
                v = "";
            }
        }
    }
    return res;
}

vector<string> tenwars(){
    vector<string> v2 = sixvars();
    vector<string> v1 = triplevars();
    vector<string> res;
    vector<string> tres;
    string v;
    for(string i : v1){
        for(string j : v2){
            if(((i[1] - '0') + (i[2] - '0') + (j[0] - '0') <= 6) && ((j[0] - '0') + (j[1] - '0') + (i[2] - '0') <= 6)){
                v+=i;
                v+=j;
                res.push_back(v);
                v = "";
            }
        }
    }
    for(string i : res){
        for(char j = '1';j<='6';j++)
        if((i[7] - '0') + (i[8] - '0') + (j - '0') <= 6){
            v+=i;
            v+=j;
            tres.push_back(v);
            v="";
        }
    }
    return tres;
}

int final(){
    vector<string> v2 = tenwars();
    vector<string> v1 = tenwars();
    int res=0;

    for(string i : v1){
        for(string j : v2){
            if(((i[8] - '0') + (i[9] - '0') + (j[0] - '0') <= 6) && ((j[0] - '0') + (j[1] - '0') + (i[9] - '0') <= 6)){
                res+=1;
                                cout<<1<<endl;
            }
        }
    }
    return res;
}

int main(){
    cout<<final();
}
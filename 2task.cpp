#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <numeric>
#include <string>
#include <cmath>
#include <fstream>
#include <unordered_set>

#define INF 10e100;

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::min;

bool function(vector<int> v, int n){
    std::unordered_set<int> s;
    for(int i : v){
        if(s.count(n-i)>=1){
            return true;
        }
        s.insert(i);
    }
    return false;
}

int main(){
vector<int> v = {1,2,8,6,7,9,0};
int n = 4;
if(function(v,4)){
    cout<<"Theres pair that we need";
}
else{
    cout<<"No pair we want";
}
}
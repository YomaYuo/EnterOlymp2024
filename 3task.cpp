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
    int j = v.size()-1;
    int i = 0;
    while(i<j){
        if(v[i]+v[j]==n){
            return true;
        }
        if(v[i]+v[j]<n){
            i++;
        }
        if(v[i]+v[j]>n){
            j--;
        }
    }
    return false;
}

int main(){
vector<int> v = {1,2,4,5,6,7,8,9};
int n = 4;
if(function(v,4)){
    cout<<"Theres pair that we need";
}
else{
    cout<<"No pair we want";
}
}
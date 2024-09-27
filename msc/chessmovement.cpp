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


bool illegalstate(int k, int l){
    if((0<=k)&&(k<=7)){
        for(int i=0;i<=7;i++){
            if(l == i){
                return true;
            }
        }
        for(int i=k;i<=k+56;i+=8){
            if(l == i){
                return true;
            }
        }
    }
    if((8<=k)&&(k<=15)){
        for(int i=0;i<=15;i++){
            if(l == i){
                return true;
            }
        }
        for(int i=k;i<=k+48;i+=8){
            if(l == i){
                return true;
            }
        }
    }
    if((16<=k)&&(k<=23)){
        for(int i=16;i<=23;i++){
            if(l == i){
                return true;
            }
        }
        for(int i=k;i<=k+40;i+=8){
            if(l == i){
                return true;
            }
        }
    }
    if((24<=k)&&(k<=31)){
        for(int i=24;i<=31;i++){
            if(l == i){
                return true;
            }
        }
        for(int i=k;i<=k+32;i+=8){
            if(l == i){
                return true;
            }
        }
    }
    if((32<=k)&&(k<=39)){
        for(int i=32;i<=39;i++){
            if(l == i){
                return true;
            }
        }
        for(int i=k;i<=k+24;i+=8){
            if(l == i){
                return true;
            }
        }
    }
    if((40<=k)&&(k<=47)){
        for(int i=40;i<=47;i++){
            if(l == i){
                return true;
            }
        }
        for(int i=k;i<=k+16;i+=8){
            if(l == i){
                return true;
            }
        }
    }
    if((48<=k)&&(k<=55)){
        for(int i=48;i<=55;i++){
            if(l == i){
                return true;
            }
        }
        for(int i=k;i<=k+8;i+=8){
            if(l == i){
                return true;
            }
        }
    }
    if((56<=k)&&(k<=63)){
        for(int i=56;i<=63;i++){
            if(l == i){
                return true;
            }
        }
    }
    for(int i=k;i>=k-56;i-=8){
        if(l == i){
            return true;
        }
    }
    return false;
}
//hffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffg
bool movena(int l,int nl){
    if((nl==l-8)||(nl==l-16)||(nl==l-24)||(nl==l-32)||(nl==l-40)||(nl==l-48)||(nl==l-56)||(nl==l+8)||(nl==l+16)||(nl==l+24)||(nl==l+32)||(nl==l+40)||(nl==l+48)||(nl==l+56)){
        return false;
    }
    if((0<=l)&&(l<=7)){
        if((nl == 1)||(nl == 0)||(nl == 2)||(nl == 3)||(nl == 4)||(nl == 5)||(nl == 6)||(nl == 7)){
            return false;
        }
    }
    if((8<=l)&&(l<=15)){
        if((nl == 8)||(nl == 9)||(nl == 10)||(nl == 13)||(nl == 14)||(nl == 15)||(nl == 12)||(nl == 11)){
            return false;
        }
    }
    if((16<=l)&&(l<=23)){
        if((nl == 16)||(nl == 17)||(nl == 18)||(nl == 19)||(nl == 20)||(nl == 21)||(nl == 22)||(nl == 23)){
            return false;
        }
    }
    if((24<=l)&&(l<=31)){
        if((nl == 31)||(nl == 30)||(nl == 29)||(nl == 28)||(nl == 24)||(nl == 25)||(nl == 26)||(nl == 27)){
            return false;
        }
    }
    if((32<=l)&&(l<=39)){
        if((nl == 32)||(nl == 33)||(nl == 34)||(nl == 35)||(nl == 36)||(nl == 37)||(nl == 38)||(nl == 39)){
            return false;
        }
    }
    if((40<=l)&&(l<=47)){
        if((nl == 40)||(nl == 41)||(nl == 42)||(nl == 43)||(nl == 44)||(nl == 45)||(nl == 46)||(nl == 47)){
            return false;
        }
    }
    if((48<=l)&&(l<=55)){
        if((nl == 48)||(nl == 49)||(nl == 50)||(nl == 51)||(nl == 52)||(nl == 53)||(nl == 54)||(nl == 55)){
            return false;
        }
    }
    if((56<=l)&&(l<=63)){
        if((nl == 56)||(nl == 57)||(nl == 58)||(nl == 59)||(nl == 60)||(nl == 61)||(nl == 62)||(nl == 63)){
            return false;
        }
    }
    return true;
}

void fun(int k,int l,int nl){
    if(illegalstate(k,l)){
        cout<<"Illegal state";
    }
    if(illegalstate(k,l)==false){
        if(illegalstate(k,nl)){
            cout<<"Illegal move";
        }
    }
    if(illegalstate(k,l)==false){
        if(illegalstate(k,nl)==false){
            if(movena(l,nl)==true){
                cout<<"Move not allowed";
            }
        }
    }
    if(illegalstate(k,l)==false){
        if(illegalstate(k,nl)==false){
            if(movena(l,nl)==false){
                if(k==0||nl==9){
                    cout<<"stop";
                }
                else if(k==7||nl==14){
                    cout<<"stop";
                }
                else if(k==56||nl==49){
                    cout<<"stop";
                }
                else if(k==63||nl==54){
                    cout<<"stop";
                }
                else{
                    cout<<"Continue";
                }
            }
        }
    }
    
}

int main(){
    int k = 0;
    int l = 10;
    int nl=9;
    fun(k,l,nl);
}
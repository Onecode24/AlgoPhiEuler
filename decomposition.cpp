#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

void addNumber(map<int, int>* a,int b);
int phi(int p,int e);

int main(){
    map<int, int> keys;
    int n;cin>>n;
    int y(n);
     for(int i(2); i<=n; i++){
         bool a=true;
         while(a && n>1){
             if(n%i==0){
                addNumber(&keys,i);
                n/=i;
                a=true; 
             }else a=false;
         }
     }
    int result(1);
    auto itr=keys.begin();
    while(itr!=keys.end()){
        cout<< itr->first << " "<< itr->second<<endl;
        result*=phi(itr->first,itr->second);
        itr++;
    }

    cout << "phi de "<< y << " est "<< result<<endl;
    return 0;
}

void addNumber(map<int, int>* a,int b){
    auto itr=a->begin();
    bool c=true;
    while(itr!=a->end()){
        if(itr->first==b){
            itr->second++;
            c=false;
        }
        itr++;
    }
    if(c) a->insert({b,1});
}

int phi(int p,int e){
    if(e==1) return p-1;
    else return (p-1)*pow(p,e-1);
}
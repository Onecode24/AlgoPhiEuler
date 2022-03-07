#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

void addNumber(map<int, int>* a,int b);

int main(){
    map<int, int> keys;
    int n;cin>>n;
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

    auto itr=keys.begin();
    while(itr!=keys.end()){
        cout<< itr->first << " "<< itr->second<<endl;
        itr++;
    }

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
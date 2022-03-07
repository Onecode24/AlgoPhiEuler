#include <iostream>

using namespace std;

bool premierAvec(int i,int n);

int main(){

    int n,m(1);cin>> n;
    
        for(int i(2); i<n; i++){
            if(premierAvec(i,n)) m++;
        }
    cout << m;
    
    return 0;
}

bool premierAvec(int i,int n){
    int u=i+1;
    while(u--){
       if(i%u==0 && n%u==0){
           if (u==1) return true;
           else return false;
           cout<<u;
       } 
    }
    cout<<endl;
}

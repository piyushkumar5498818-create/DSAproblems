// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;cin>>n;
    
    bool isprime=true;
    
    if(n<2) isprime=false;
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0) {isprime=false;break;}
    }
    
    if(isprime) cout<<"A prime number";
        
    else cout<<"Not a prime number";
    
    return 0;
}
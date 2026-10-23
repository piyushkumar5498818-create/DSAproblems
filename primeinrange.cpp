// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=2;i<=n;i++){
        bool isprime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0) {isprime=false;break;}
        }
    
    if(isprime) cout<<i<<endl;
    }
    return 0;
}
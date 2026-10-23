#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    // int f=n,sum=0;
    // while(f>9){
    //     for(int i=n;i>0;i/=10){
    //         sum+=i%10;
    //     }
    //     if(sum>9) f=sum;
    //     else cout<<sum;
    // }
    if(n==0) cout<<0;

    else if(n%9==0) cout<<9;
    
    else cout<<n%9;
    
    
    return 0;
}
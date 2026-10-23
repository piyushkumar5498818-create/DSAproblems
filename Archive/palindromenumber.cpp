#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    long n;cin>>n;
    long rev=0;
    // for(int i=n;i>0;i/=10){
    //     int ld=i%10;
    //     rev=rev*10 + ld;
    // }
    long on=n;
    while(n){
        rev*=10;
        rev+=n%10;
        n/=10;
    }
    if(rev==on) cout<<"Palindrome";
    
    else cout<<"Not a Palindrome";
    
    return 0;
}
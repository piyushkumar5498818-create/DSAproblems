#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    int sum=0;
    for(int i=n;i>0;i/=10){
        sum+=i%10;
    }
    if(sum%3==0) cout<<"true";
    else cout<<"False";
    return 0;
}
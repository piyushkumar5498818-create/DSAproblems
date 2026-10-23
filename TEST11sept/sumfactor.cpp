#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    int sum=n;
    for(int i=n/2;i>0;i--){
        if(n%i==0){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
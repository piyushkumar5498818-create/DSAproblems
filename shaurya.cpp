#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    if(n%10>=5){
        for(int i=n; i<=2*n; i++){
            if(i%10==0){
                n=i;
                break;
            }
        }
    }
    else {
        for(int i=n; i>=n/2; i--){
            if(i%10==0){
                n=i;
                break;
            }
        }
    }
    cout<<n;
    return 0;
}
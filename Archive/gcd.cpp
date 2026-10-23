#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b;cin>>a>>b;
    int i=2;
    while(true){
        if(a%i==0 && b%i==0){
            cout<<i;return 0;
        }
        i++;
    }
    return 0;
}
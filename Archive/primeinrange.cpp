#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int x,y;cin>>x>>y;
    int a=x;
    for(int i=a;i<=y;i++){
        for(int j=x;j*j<=y;j++){
            if(y%j!=0){
                cout<<j;
            }
        }
    }
    return 0;
}
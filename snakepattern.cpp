#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    while(true){
        for(int i=1;i<=N;i++){
            cout<<i;
            cout<<endl;
        }
        for(int j=N+4;j>=N+1;j--){
            cout<<j;
        }
    }
    return 0;
}
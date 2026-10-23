#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    for(int i=1;i<=N/2;i++){
        if(N%i==0) cout<<i<<endl;
    }
    return 0;
}
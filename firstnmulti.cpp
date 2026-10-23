#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N,x;cin>>N>>x;
    for(int i=1;i<=N;i++){
        cout<<x<<" X "<<i<<"="<<i*x<<endl;
    }
    return 0;
}
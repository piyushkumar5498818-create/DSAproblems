#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    int sum=0;

    for(int i=1;i<=N;i++){
        if(N%i==0) {
            sum+=i;
            cout<<i<<endl;
        }
    }
    cout<<sum;

    return 0;
}
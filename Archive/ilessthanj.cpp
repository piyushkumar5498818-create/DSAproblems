#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    int sum=0;
    for(int i=1;i<=N-1;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}
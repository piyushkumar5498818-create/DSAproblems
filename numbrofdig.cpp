#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    int dig=0;
    // using while loop
    // while(N){
    //     dig+=1; 
    //     N/=10;
    // }
    for(int i=N;i>0;i/=10){
        dig+=1;
    }
    cout<<dig;
    return 0;
}
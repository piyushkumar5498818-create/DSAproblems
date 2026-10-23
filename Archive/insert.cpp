#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N ; cin>>N;
    int arr[N];
    int b;cin>>b;
    for(int i =0 ; i<N ; i++){
        int a;cin>>a;
        arr[i]=a;
    }
    for(int i=0;i<N;i++){
        if(arr[i]==b){
            cout<<i;
        }
    }
    return 0;
}
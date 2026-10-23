#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    for(int i=1;i<=n-1;i++){
        for(int sp=n-i;sp>=1;sp--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        for(int sp=n-i;sp>=1;sp--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
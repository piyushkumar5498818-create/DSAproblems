#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else{
           for(int j=1;j<=i;j++){
                if(j==1 || j==i){
                    cout<<"*";
                }
                else cout<<" ";
            } 

        }
        cout<<endl;
    }
    return 0;
}
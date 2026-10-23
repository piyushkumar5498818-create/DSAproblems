#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        if(i!=N){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){cout<<"*";}
            else{cout<<" ";}
        }
    }
    else{
        for(int j=1;j<=i;j++){
            for(int j=1;j<=1;j++){
                cout<<"*";
            }
        }
        
    }
        cout<<endl;
    }
    return 0;
}
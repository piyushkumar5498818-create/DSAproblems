#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        if(i==1 || i==N){
            for(int j=1;j<=N;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else {
            for(int j=1;j<=N;j++){
                if(j==1 || j==N){
                    cout<<"*";
                }
                cout<<" ";
            }
        cout<<endl;
        }
        }
        
    
    return 0;
}
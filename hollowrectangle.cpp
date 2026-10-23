#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b;cin>>a>>b;
    for(int i=1;i<=a;i++){
        if(i==1 || i==a){
            for(int j=1;j<=b;j++){
                cout<<"*";
            }
        }
        else{
            for(int j=1;j<=b;j++){
                if(j==1  || j==b){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        
        cout<<endl;

    }
    
    return 0;
}
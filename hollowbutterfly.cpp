
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i) cout<<"*";
            else cout<<" ";
        }
        for(int sp=1;sp<=2*(n-i)-1;sp++){
            cout<<" ";
        }
        if(i!=n){
            for(int j=i;j>=1;j--){
                if(j==i || j==1) cout<<"*";
                else cout<<" ";
            }
            
            }
        else{
            for(int j=i-1;j>=1;j--){
                if(j==i || j==1) cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
    
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i) cout<<"*";
            else cout<<" ";
        }
        for(int sp=1;sp<=2*(n-i)-1;sp++){
            cout<<" ";
        }
        if(i!=n){
            for(int j=i;j>=1;j--){
                if(j==i || j==1) cout<<"*";
                else cout<<" ";
            }
            
            }
        else{
            for(int j=i-1;j>=1;j--){
                if(j==i-1 || j==1) cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    for(int i=1;i<=n;i++){
           if(i==1 || i==n){
                for(int spaces=n-i;spaces>0;spaces--){
                        cout<<" ";
                    }
                for(int star=1;star<=2*i-1;star++){
                        cout<<"*";
                    }
           } 
           else{
            for(int spaces=n-i;spaces>0;spaces--){
                        cout<<" ";
                    }
            for(int star=1;star<=2*i-1;star++){
                        cout<<"*";
                    }
           }        
        }
    
    return 0;
}
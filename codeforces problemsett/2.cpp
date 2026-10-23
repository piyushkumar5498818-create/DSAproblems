#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    int ct=0;
    for(int i=1;i<=n;i++){
        
        int a,b,c;
        cin>>a>>b>>c;
        if(a&&b || b&&c || c&&a) ct++;
        
    }
    cout<<ct;
    return 0;
}
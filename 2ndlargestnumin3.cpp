#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    int f=max(a,max(b,c));
    cout<<f;
   
    return 0;
}
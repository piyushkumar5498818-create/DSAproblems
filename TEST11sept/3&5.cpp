#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    
    if(n%3==0 && n%5==0) cout<<"No";
    else if(n%3==0 || n%5==0) cout<<"Yes";
    else cout<< "Not valid";
    return 0;
}
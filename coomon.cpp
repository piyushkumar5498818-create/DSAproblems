#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b;
    c=a;
    d=b;
    if(a%10==b%10 || c/10==d/10 ){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
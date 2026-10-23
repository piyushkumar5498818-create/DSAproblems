#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b;cin>>a>>b;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    a=a+b-(b=a); //first the value of a is assigned to b and then the b 
    //is subtracted from the sum of a and b.
    cout<<a<<" "<<b;
    return 0;
}
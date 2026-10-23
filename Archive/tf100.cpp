#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int product=a*b*c*d;
    cout<<(product>1000 ? "True" : "false");//ternary operator

    return 0;
}
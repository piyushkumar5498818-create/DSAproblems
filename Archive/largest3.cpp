#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a ; cin>>a ;int b ; cin>>b; int c ; cin>>c;
    if(a>b && a>c)cout<<a<<"is largest";
    else if(b>a && b>c)cout<<b<<"is largest";
    else if(c>a && c>b)cout<<c<<"is largest";
    // int max=numeric_limits<int>::lowest();
    // while(true){
    //     if(a>max){
    //         max=a;
    //     }
    // }
    return 0;
}
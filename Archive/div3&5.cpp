#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num%3==0 && num%5==0){cout<<"Divisible";}
    return 0;
}
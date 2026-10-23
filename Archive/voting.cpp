#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int age;
    cout<<"Enter your age sir/mam:-";
    cin>>age;
    if(age>=18){cout<<"Eligible to vote";}
    else {cout<<"Not eligible to vote sorry";}
    return 0;
}
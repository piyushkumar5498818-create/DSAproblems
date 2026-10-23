#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    cout<<"Enter a 3 digit number:-";
    int x;
    cin>>x;
    int sum=x%10+(x/10)%10+((x/10)/10)%10;
    cout<<sum;
    return 0;
}
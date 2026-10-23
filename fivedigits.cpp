#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int x;
    cout<<"Enter a five digit number:-";
    cin>>x;
    int sum;
    cout<<sum;
    int a=x%10;
    sum+=a;

    x/=10;
    a=x%10;
    sum+=a;

    x/=10;
    a=x%10;
    sum+=a;

    x/=10;
    a=x%10;
    sum+=a;

    x/=10;
    a=x%10;
    sum+=a;



    cout<<"Sum of its digits is "<<sum;

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;cin>>n;int p=0;int s=0;
    for(int i=n;i>0;i/=10){
        p+=1;
        cout<<p<<endl;
    }
    for(int i=n;i>0;i/=10){
        s=s+pow(i%10,p);
    }
    cout<<s;
    return 0;
}
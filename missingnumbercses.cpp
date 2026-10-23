#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n ; cin>>n ;
    int sum=0;
    int s=0;
    for(int i =1; i<=n;i++) s+=i;
    for(int i =1; i<n;i++){
        int a ; cin>>a;
        sum+=a;
    }
    cout<<s-sum;
    return 0;
}

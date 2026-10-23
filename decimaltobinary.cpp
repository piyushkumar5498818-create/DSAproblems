#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
int main() {
    int m;cin>>m;
    for(long long n=1;n<=m;n++){
    
        long long g=n;
        int p=0;
        while(g){
            g/=2;
            p++;
        }
        int arr[p];
        for(int i=0;i<p;i++){
            int ld=n%2;
            arr[i]=ld;
            n/=2;
        }
        long long h=0;
        for(int i=p-1;i>=0;i--){
            int t=arr[i] * pow(10,i);
            h+=t;
        }
        cout<<h<<" ";
    }
    return 0;
}

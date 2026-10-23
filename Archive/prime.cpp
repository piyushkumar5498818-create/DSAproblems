#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    int f=2;
    while(f<=7){
        if(f!=N && N%f==0){
            cout<<"No";return 0;
        }
        f++;
    }
    cout<<"Yes";
    return 0;
}
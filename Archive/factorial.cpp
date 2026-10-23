#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int g;cin>>g;
    cout<<fact(g);
    return 0;
}
int fact(int p);
int fact(int N){
    int f=1;
    for(int i=N;i>1;i--){
        f=f*i;
    }
    return f;
}
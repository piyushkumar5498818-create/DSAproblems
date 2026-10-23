#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<j) c+=1;
        }
    }
    return 0;
}
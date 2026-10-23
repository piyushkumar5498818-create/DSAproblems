#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b;cin>>a>>b;
    // Brute force: check from min(a,b) down to 1
    int ans = 1;
    for(int i = min(a, b); i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    
    return 0;
}
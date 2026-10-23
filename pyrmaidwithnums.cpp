#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n;cin>>n;
    // for(int i=1;i<=n-1;i++){
    //     for(int sp=n-i;sp>=1;sp--){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int sp=n-i;sp>=1;sp--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int sp=n-i;sp>=1;sp--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
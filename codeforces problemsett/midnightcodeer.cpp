#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n , d;cin>>n>>d;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    bool f=false ;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    // vector<int> ar(n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]+arr[j]<=d){
                
//             }
//         }
//     }
//     if(f) cout<<"Yes";
//     else cout<<"No";
    return 0;
}
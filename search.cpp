#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int target;cin>>target;
    int n[]={34,54,32,54,22,67,77,36,52};
    int s=sizeof(n)/sizeof(int);
    for(int i=0;i<s;i++){
        if(target==(n[i]))  {
            cout<<"target found at index: "<<i<<endl; 
            return 0; 
        }
    }
    cout<<"target not found"<<endl;
    return 0;
}
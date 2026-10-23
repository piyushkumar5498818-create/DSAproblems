#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    
    for(int i=1;i<=N;i++){
        for(int sp1=1;sp1<=2*(N-i);sp1++){
            cout<<" ";
        }
        for(int st1=1;st1<=i;st1++){
            cout<<st1;
        }
        for(int sp2=1;sp2<=2*i-3;sp2++){
            cout<<" ";
        }
        if(i!=1){
            for(int st2=1;st2<=i;st2++){
                cout<<i-st2+1;
            }
        }
        cout<<endl;
    }
    
    for(int i=N-1;i>=1;i--){
        for(int sp1=1;sp1<=2*(N-i);sp1++){
            cout<<" ";
        }
        for(int st1=1;st1<=i;st1++){
            cout<<st1;
        }
        for(int sp2=1;sp2<=2*i-3;sp2++){
            cout<<" ";
        }
        if(i!=1){
            for(int st2=1;st2<=i;st2++){
                cout<<i-st2+1;
            }
        }
        cout<<endl;
    }
    return 0;
}
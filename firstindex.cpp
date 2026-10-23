#include <iostream>
using namespace std;
int main() {
    int N;cin>>N;
    int numbers[N]; 


    for (int i = 0; i < N; i++) {
        cin >> numbers[i]; 
    }
    long long a;cin>>a;
    int ans = -1;
    for(int i=0;i<N;i++){
        if(numbers[i]==a){
            ans = i;
            break; // Stop at the first occurrence
        }
    }
    cout<<ans<<endl;
    
    return 0;
}

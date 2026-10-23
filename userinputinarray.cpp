#include <iostream>
using namespace std;
int main() {
    int N;cin>>N;
    int numbers[N]; 

    cout << "Enter"<<N<<" numbers:\n";

    for (int i = 0; i < N; i++) {
        cin >> numbers[i]; 
    }

    // for(int i=0;i<5;i++){
    //     std::cout<<numbers[i]<<" ";
    // }

    return 0;
}

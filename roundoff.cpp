#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int a ; cin >> a;
        if(a%10>=5) cout<<((a/10)+1)*10<<endl; // last digit greater than 5 so succesive multiple graeter than the number of 10 is printed

        else cout<<(a/10)*10<<endl;//Preccesive multiple of 10 is printed
    
    }
    return 0;
}
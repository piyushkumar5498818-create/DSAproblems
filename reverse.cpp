#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
int main() {
    int N;cin>>N;


// ___________________________________________________________


     
    // int place=0;
    // int rev=0;




    // for(int i=N;i>0;i/=10){ //places calculated i.e. iterations 
    //     place+=1;

    // }
    // //finally made the code up all by myself
    // for(int i=place-1;i>=0;i--){// reversing the number finally
    //     rev+=N%10*pow(10,i);
    //     N/=10;
    // }
    //    cout<<rev;
// ___________________________________________________________




    int ans=0;

    for(int i=N;i>0;i/=10){
        int ld=i%10;//gets the last digit
        ans=ans*10+ld;//multiplies the  n last digits with 10 

    }
    cout<<ans;


    return 0;
}
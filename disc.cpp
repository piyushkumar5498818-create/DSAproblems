#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int q;cout<<"Enter quantitiy of the items:-";cin>>q;
    if(q*100>1000){
        
        cout<<"The total cost of the items will be(with discount of 10%)"<<(q*100)*0.9;
    }
    else{
        cout<<"The total cost of the items will be"<<(q*100);
    }
    return 0;
}
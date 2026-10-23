#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int x1,y1,x2,y2,x,y;
    cin>>x1>>y1>>x2>>y2>>x>>y;
    if((x1<=x && x<=x2)&&(y1<=y && y<=y2)){
        cout<<"Point lies in the region";
    }
    else{
        cout<<"Lies outside the region";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b ){
    if(a==b && b==c && c==a){
        cout<<"Equilateral triangle";
    }
    else if(a==b && a!=c || b==c && b!=a || c==a && c!=b ){
        cout<<"isoscles triangle";
    }
    else if(a!=b && b!=c && c!=a){
        cout<<"Scalene Triangle";
    }
}
else{cout<<"not a triangle;";}
    
    return 0;
}
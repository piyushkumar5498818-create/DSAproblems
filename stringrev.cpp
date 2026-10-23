#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string s;
    cin>>s;
    bool b=1;
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            b=0;
            break;
        }
        else {
            i++;
            j--;
        }
    }
    if(b==1) cout<<"Palindrome";
    else cout<<"Not a palindrome";
    return 0;
}
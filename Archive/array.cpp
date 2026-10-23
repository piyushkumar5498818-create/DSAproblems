#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void change(int arr[],int size){
    cout<<"IN function\n";
    for(int i=0;i<size;i++){
        arr[i]= 2* arr[i];
    }
}
int main() {
    int nums[5]={100,99,91,90,908}; //array declared
    // // double price[]={34,56,45};  //size=3
    // // //array indices are the position of elements in arrays
    // // cout<<marks[0];
    // // //;index --> 0 to size-1
    // int small=INT_MAX;
    // int largest=INT_MIN;

    int sz=sizeof(nums)/sizeof(int);
    cout<<"In main";

    change(nums,sz);
    for(int i=0;i<sz;i++){
        cout<<nums[i]<<" ";
        
    }
    cout<<endl;
    // cout<<small;
    // cout<<largest;
    


    return 0;
}
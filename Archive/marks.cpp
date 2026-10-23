#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int m1,m2,m3,m4,m5;
    cout<<"Enter marks for 1st subject:-";
    cin>>m1;
    cout<<"Enter marks for 2nd subject:-";
    cin>>m2;
    cout<<"Enter marks for 3rd subject:-";
    cin>>m3;
    cout<<"Enter marks for 4th subject:-";
    cin>>m4;
    cout<<"Enter marks for 5th subject:-";
    cin>>m5;
    int avg=(m1+m2+m3+m4+m5)/5;
    cout<<"Sum of marks is "<<m1+m2+m3+m4+m5;
    cout<<"Percentage is "<<avg<<"%";
    if(avg>91 && avg<100){cout<<"grade A";}
    else if(avg>81 && avg<90){cout<<"grade B";}
    else if(avg>71 && avg<80){cout<<"grade c";}
    else if(avg>61 && avg<70){cout<<"grade D";}
    else if(avg>51 && avg<60){cout<<"grade E";}
    else if 
    (avg<50){cout<<"grade F";}

    return 0;
}
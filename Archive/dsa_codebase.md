
# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    for(int i=1;i<=N/2;i++){
        if(N%i==0) cout<<i<<endl;
    }
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
using namespace std;


int main() { 
    int year;cout<<"Enter the year:-";cin>>year;
    
    if((year%2000!=0) && (year%400==0) || ((year%4==0) && (year%100!=0)) ){cout<<"Yes a leap year";}
    else{cout<<"Not a leap year";}
    return 0;
}
```

# File: ${file}
```cpp

```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int x;
    cout<<"Enter a five digit number:-";
    cin>>x;
    int sum;
    cout<<sum;
    int a=x%10;
    sum+=a;

    x/=10;
    a=x%10;
    sum+=a;

    x/=10;
    a=x%10;
    sum+=a;

    x/=10;
    a=x%10;
    sum+=a;

    x/=10;
    a=x%10;
    sum+=a;



    cout<<"Sum of its digits is "<<sum;

    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    for(int i=N;i>=1;i--){
        for(int spaces=1;spaces<=N-i;spaces++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        
        
        cout<<endl;
    }
    
    return 0;
}

```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int g;cin>>g;
    cout<<fact(g);
    return 0;
}
int fact(int p);
int fact(int N){
    int f=1;
    for(int i=N;i>1;i--){
        f=f*i;
    }
    return f;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    return 0;
}
```

# File: ${file}
```cpp
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
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b;
    c=a;
    d=b;
    if(a%10==b%10 || c/10==d/10 ){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        if(i!=N){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){cout<<"*";}
            else{cout<<" ";}
        }
    }
    else{
        for(int j=1;j<=i;j++){
            for(int j=1;j<=1;j++){
                cout<<"*";
            }
        }
        
    }
        cout<<endl;
    }
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    int dig=0;
    // using while loop
    // while(N){
    //     dig+=1; 
    //     N/=10;
    // }
    for(int i=N;i>0;i/=10){
        dig+=1;
    }
    cout<<dig;
    return 0;
}
```

# File: ${file}
```cpp
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
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    // long sum=0;int sum1=0;
    // for(long i=n;i>0;i/=10){
    //         int ld=i%10;
    //         sum+=ld;
    //         for(int i=sum;i>0;i/=10){
    //             int g=i%10;
    //             sum1+=ld;
    //             if(sum1<10){
    //                 cout<<sum1;
    //                 return 0;
    //             }
    //         }
    //     }
        
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a ; cin>>a ;int b ; cin>>b; int c ; cin>>c;
    if(a>b && a>c)cout<<a<<"is largest";
    else if(b>a && b>c)cout<<b<<"is largest";
    else if(c>a && c>b)cout<<c<<"is largest";
    // int max=numeric_limits<int>::lowest();
    // while(true){
    //     if(a>max){
    //         max=a;
    //     }
    // }
    return 0;
}
```

# File: ${file}
```cpp
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
        if(s[i]!=s[j])
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
```

# File: ${file}
```cpp

```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    long n;cin>>n;
    long rev=0;
    // for(int i=n;i>0;i/=10){
    //     int ld=i%10;
    //     rev=rev*10 + ld;
    // }
    long on=n;
    while(n){
        rev*=10;
        rev+=n%10;
        n/=10;
    }
    if(rev==on) cout<<"Palindrome";
    
    else cout<<"Not a Palindrome";
    
    return 0;
}
```

# File: ${file}
```cpp



    #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        
        for(int spaces=1;spaces<=N-i;spaces++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }   
    for(int i=N-1;i>=1;i--){
        for(int spaces=1;spaces<=N-i;spaces++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        
        
        cout<<endl;
    }
    
    
  

    return 0;
}
```

# File: ${file}
```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        if(i==1 || i==N){
            for(int j=1;j<=N;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else {
            for(int j=1;j<=N;j++){
                if(j==1 || j==N){
                    cout<<"*";
                }
                cout<<" ";
            }
        cout<<endl;
        }
        }
        
    
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int age;
    cout<<"Enter your age sir/mam:-";
    cin>>age;
    if(age>=18){cout<<"Eligible to vote";}
    else {cout<<"Not eligible to vote sorry";}
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int num;
    cout<<"Entera number";
    cin>>num;
    if(num%2==0){
        cout<<"Even number";

    }else{ cout<<"odd number";}
    return 0;
}
```

# File: ${file}
```cpp
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
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int product=a*b*c*d;
    cout<<(product>1000 ? "True" : "false");//ternary operator

    return 0;
}
```

# File: ${file}
```cpp
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
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    int f=2;
    while(f<=7){
        if(f!=N && N%f==0){
            cout<<"No";return 0;
        }
        f++;
    }
    cout<<"Yes";
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        
        for(int spaces=1;spaces<=N-i;spaces++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b;cin>>a>>b;
    int i=2;
    while(true){
        if(a%i==0 && b%i==0){
            cout<<i;return 0;
        }
        i++;
    }
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int i;int sum=0;
    for( i=1;i<=5;i++) ;
        sum+=i;
    cout<<i<<" "<<sum;
    return 0;
}



```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int target;cin>>target;
    int n[]={34,54,32,54,22,67,77,36,52};
    int s=sizeof(n)/sizeof(int);
    for(int i=0;i<s;i++){
        if(target==(n[i]))  {cout<<"target found"; return i; }
    }
    return -1;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num%3==0 && num%5==0){cout<<"Divisible";}
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    int sum=0;
    for(int i=1;i<=N-1;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}
```

# File: ${file}
```cpp
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
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int n;cin>>n;
    
    return 0;
}
```

# File: ${file}
```cpp
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
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    int sum=0;

    for(int i=1;i<=N;i++){
        if(N%i==0) {
            sum+=i;
            cout<<i<<endl;
        }
    }
    cout<<sum;

    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N,x;cin>>N>>x;
    for(int i=1;i<=N;i++){
        cout<<x<<" X "<<i<<"="<<i*x<<endl;
    }
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N ; cin>>N;
    int arr[N];
    int b;cin>>b;
    for(int i =0 ; i<N ; i++){
        int a;cin>>a;
        arr[i]=a;
    }
    for(int i=0;i<N;i++){
        if(arr[i]==b){
            cout<<i;
        }
    }
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int rows;cin>>rows;



    // Loop through each row from total rows down to 1
    for (int i = rows; i >= 1; i--) {
        
        // 1. Print leading spaces to push the stars into a pyramid shape
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // 2. Print the odd number of stars (2 * i - 1)
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    cout<<"Enter a 3 digit number:-";
    int x;
    cin>>x;
    int sum=x%10+(x/10)%10+((x/10)/10)%10;
    cout<<sum;
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0; // Return 0 indicates successful execution
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int N;cin>>N;
    // for(int i=1;i<=N;i++){
    //     cout<<i;
    //     cout<<endl;
        
    // }
    // for(int i=1;i<=N;i++){
    //     cout<<i;
    //     cout<<endl;
        
    // }
    int i=1;
    do{
        cout<<i++<<endl;
    }while(i<=N);
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int x,y;cin>>x>>y;
    int a=x;
    for(int i=a;i<=y;i++){
        for(int j=x;j*j<=y;j++){
            if(y%j!=0){
                cout<<j;
            }
        }
    }
    return 0;
}
```

# File: ${file}
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int a,b;
    cout<<"Enter the 1st number:-";
    cin>>a;
    cout<<"Enter the 2nd number:-";
    cin>>b;
    if(a>b){cout<<a;}
    else{cout<<b;}
    return 0;
}
```

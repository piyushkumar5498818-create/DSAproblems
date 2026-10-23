y=int(input())
x=y
sum=0

while x :
    g=x%10
    sum+=(g**3)
    x=x//10
if sum==y :
    print(sum)
    print("True")
else :
    print(sum)
    print("False")
#include <iostream>
using namespace std;
int main(){
    int num,originalnum,sum=0,remainder;
    cout<<"Enter the number";
    cin>>num;
    originalnum=num;
    while(num!=0){
        remainder=num%10;
        sum+=remainder*remainder*remainder;
        num/=10;

    }
    if(originalnum==sum){
        cout<<"the entered number is an armstrong number";

    }
    else{
        cout<<"Entered number is not an armstrong number";

    }
    return 0;
    
}
#include <iostream>
using namespace std;
int main(){
    int num,reverse=0,originalnum,remainder;
    cout<<"Enter the number";
    cin>>num;
    originalnum=num;
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;

    }
    if(originalnum==reverse){
        cout<<"the entered number the a palindrome";

    }
    else{
        cout<<"Entered number is not a palindrome";

    }
    return 0;
    
}
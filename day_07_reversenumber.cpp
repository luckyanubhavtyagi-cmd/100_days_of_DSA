#include <iostream>
using namespace std;
int main(){
    int num,rem,reverse=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
        
    }
    cout<<"Reverse of the number is: "<<reverse<<endl;
    return 0;
}
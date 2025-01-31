#include<iostream>
using namespace std;
int main(){
    int num,reverse=0,rem;
    num=1234;
    cout<<"The number is"<<num<<endl;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;

    };
    cout<<"The reverse of the number is "<<reverse<<endl;


}
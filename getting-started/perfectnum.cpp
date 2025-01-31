#include<iostream>
using namespace std;
int main(){
    int n=28,sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(n==sum){
        cout<<"The number is a perfect number"<<endl;
    }else{
        cout<<"The number is not a perfect number"<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){

    int marks=80;
        cin>>marks;
    if (marks>80){
        cout<<"A"<<endl;
    }else if (marks>60){
        cout<<"B"<<endl;
    }else if (marks>40){
        cout<<"D"<<endl;
    }else{
        cout<<"F"<<endl;
    }
    
    return 0;
}
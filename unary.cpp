#include<iostream>
using namespace std;

int main(){

    int a=4;
    cout<<(a++)<<endl;

    int c=7;
    cout<<(++c)<<endl;
    
    int b=c+10;
    cout<<(b)<<endl;
    //question 
    bool p=false;
    bool q=false;
    bool r= true;
    cout<<(p==q==r);
    return 0;
}
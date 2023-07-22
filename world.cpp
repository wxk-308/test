#include<iostream>
// #include "swap.h"
using namespace std;

void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
int main(){
    int a=1,b=10;
    cout<<a<<' '<<b<<endl;
    swap(a,b);
    cout<<a<<' '<<b<<endl;
    return 0;
}
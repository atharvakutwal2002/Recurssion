#include<iostream>
using namespace std;
int count(int n){
    //base case
    if (n==0)
    {
        return 0 ;
    }
    //recurssive case (assumption)
    int smallans=count(n/10);
    //final calculation
    return smallans+1;
    
}
int main(){
    cout<<count(12345);
    return 0;
}
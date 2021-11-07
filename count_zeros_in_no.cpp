#include<iostream>
using namespace std;
int countZero(int n){
    //base case
    if (n==0)
    {
        return 0;
    }
    //recursive case
    int smallans=countZero(n/10);

    //final calculation
    int last_digit=n%10;
    if (last_digit==0)
    {
        return 1+smallans;
    }else{
        return smallans;
    }
    
}
int main(){
    cout<<countZero(10304000);
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "enter a number";
    cin  >> n;
    int ans=1/10;
    int i=0;
    // while(n !=0){
    //     int bit = n & 1;
    //     ans= (bit*pow(10,i))+ans;
    //     cout << ans << endl;
    //     n=n >> 1;
    //     i++;
    // }
    cout << "final" <<ans;
}

#include<iostream>
using namespace std;
int main(){

    long long n,m,a;
    cin>>n>>m>>a;

    long long flagstone_length = (n+a-1)/a ;
    long long flagstone_width = (m+a-1)/a; 
    
 long long total_flagstone = flagstone_length*flagstone_width;
 cout<< total_flagstone<< endl;

}
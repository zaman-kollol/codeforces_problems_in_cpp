#include <iostream>
using namespace std;

int main() {
   long long n,k,partValue,output;
   cin>>n>>k;
   if(n%2==0){
   partValue=n/2;
   }else{

        partValue=n/2+1;
   }
    if(k<=partValue){
       output=(2*k)-1;
    }else{
        output=(k-partValue)*2;
    }
    cout<<output<<endl;
    return 0;
}
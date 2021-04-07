#include <bits/stdc++.h>
using namespace std;
int main(){

    int t,m,n,avg,count=1;
    cin>>t;
    while(t--){
       cin>>m>>n;
       avg= (m+n)/2;
       cout<<"Case "<<count++<<": " <<avg <<endl;
    }
    return 0;
}

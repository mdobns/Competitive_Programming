#include <bits/stdc++.h>
using namespace std;
int main(){

    int a[100],i,j,n,turn=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >>a[i];
    }
    for(j=1; j<n; j++){
        if(a[j-1]>a[j]){
            turn+=(a[j-1]-a[j]);
            a[j]=a[j-1];
        }
    }
    cout <<turn <<endl;
    return 0;
}

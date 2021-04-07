#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,n,t;
    cin >> t;
    while(t--){
      cin>> n;
      int x[n], y[n];
      for( i=0; i<n; i++){
        cin >> x[i];
        if(x[i]>0)y[i]=1;
        else y[i]=0;
      }
      if(y[n-1]>0)y[n-1]=1;
      for(i=n-2;i>=0;i--){
        if(x[i+1]>1||x[i]>=1)y[i]=1;
        x[i] =max(x[i],x[i+1]-1);
      }
      for(int i=0;i<n;i++)cout<<y[i]<<" ";
      cout <<"\n";

    }

    return 0;
}



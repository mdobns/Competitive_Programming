#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,count=1;
    cin>>t;
    while(t--)
    {
      int k;
      cin >>k ;
      long long divisor[k+1],n;
      for(int i=0; i<k; i++)
        cin >> divisor[i];
      if(k==1)
        n=divisor[0]*divisor[0];
      else n=*min_element(divisor, divisor + k) * *max_element(divisor, divisor + k);

      cout << "Case " <<count++ << ": " <<n <<endl;


    }

    return 0;
}



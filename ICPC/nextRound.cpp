#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,input,count=0;
    vector<int> v;
    cin >> n >>k;
    while(n--){
      cin >> input;
      v.push_back(input);
    }
    while(1){
      if(v[count]<=k)break;
      count++;
    }
    cout << count <<endl;
    return 0;

}

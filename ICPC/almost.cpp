#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
     int low, high,temp,count=0;
     cin >> low >> high;
     for(int i=low+2; i<=high; i++){
        if(i%2==0){
           temp=i/2;
           if(temp%2 != 0 || temp==2){
                count++;
           }
        }
     }
     cout << count <<endl;
    }

    return 0;
}

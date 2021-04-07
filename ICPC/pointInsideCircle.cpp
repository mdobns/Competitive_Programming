#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,i=1;
    cin >> t;
    while(t--){
        int cx,cy,px,py,r,temp;
        cin >> cx >> cy >> r >> px >> py;
        temp = sqrt(pow(px-cx,2)+pow(py-cy,2));
        if(temp<r){
            cout <<"Case "<<i++<<": "<< "yes" <<endl;
        }else{
            cout <<"Case "<<i++<<": "<< "no" <<endl;
            }

    }
    return 0;
}


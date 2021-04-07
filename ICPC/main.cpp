#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,n,temp;
    cin >> T;
    int count =1;
    while(T--){
        temp =1;
        vector<int> v;
        cin >> n;
        if(n>1){
        for (int i=0; i<n; i++){
            int input;
            cin >>input;
            v.push_back(input);
        }
        for (int i=0; i<n; i++){
            temp *= v[i];
        }
        }else{
            cin >> temp;
            temp *=temp;

        }
        cout << "Case " <<count++ <<":"<< temp<<endl;


    }

    return 0;
}

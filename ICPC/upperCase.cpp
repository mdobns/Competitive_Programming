#include <bits/stdc++.h>

using namespace std;
int main(){
    int t,j=1;
    cin >> t;
    cin.ignore();
    while(t--){
        string inp;
        getline(cin,inp);
        for(int i=0; i<inp.length(); i++){
            if(inp[i]>='a'&&inp[i]<='z'){
                inp[i]= inp[i] - 32;
            }
        }
        cout << "Case "<<j++ <<": " <<inp <<endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    string msg;
    int n,r=1;
    cout << "Enter your Massage: ";
    cin >> msg;
    n = msg.size();
    while(pow(2,r)< n+r+1){
        r++;
    }

    vector<int> hammingCode(n + r);  ///hamming code size = numberOfBit + numberOfParity
    for(int i=0; i<r; i++){
        hammingCode[pow(2,i)-1] = 99;  ///set in parity position 99
    }

    for (int i = 0,j = 0; i < (r + n); i++) {
        if (hammingCode[i] != 99) {
            hammingCode[i] = msg[j] -48; ///set data
            j++;
        }
    }
    for (int i = 0; i < (r + n); i++) {
        if (hammingCode[i] != 99)
            continue;
        int pos = log2(i + 1);
        /**new update
        int p = i+1,counts = 0,OneCount = 0;
        for(int j =i; j <= r+n;){
            counts++;
            if(hammingCode[j]==1){
                OneCount++;
            }
            if(counts == p){
                j+=p+1;
                counts=0;
                continue;
            }
            j++;
        }
        **/
        ///1 1 1 1 0 1 1 1 1 0 1 0 1 0 0 0 1 0 1
        ///1 1 1 1 0 1 1 1 1 0 1 0 1 0 0 0 1 0 1
       // /**
        int oneCount = 0;
        for (int j = i + 2; j <= (r + n); j++) {
            if (j & (1 << pos)) {
                if (hammingCode[j - 1] == 1) {
                    oneCount++;
                }
            }
        }
       // **/
        if (oneCount % 2 == 0) {
            hammingCode[i] = 0;
        }
        else {
            hammingCode[i] = 1;
        }
    }

    cout << "Modify Data: " ;
    for (int i = 0; i < hammingCode.size(); i++)
        cout << hammingCode[i] << " ";
    cout << "\nNumber of parity bits: " <<r;
  return 0;
}


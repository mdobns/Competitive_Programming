#include <bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>> graph =   {{1,2,9,10,25},
            {4,3,8,11,24},
            {5,6,7,12,23},
            {16,15,14,13,22},
            {17,18,19,20,21}
        };
    int n,raw,colum;
    cin >>n;
    while(n--)
    {
        cin >> raw >> colum;
        cout << graph[raw-1][colum-1] <<endl;
        ///printf("%d\n",graph[raw-1][colum-1]);
    }

    return 0;
}



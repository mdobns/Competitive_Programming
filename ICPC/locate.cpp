#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int x, y;
    string location;

    cin >>x >> y;
    cin >> location;

    for(int i=0; i<location.size()-1; i+=2){
         if(location[i]=='E'||location[i]=='W')
            {
                if(location[i]=='E')
                    x+= (int) location[i+1]-48;
                else
                    x-= (int) location[i+1]-48;
            }
            else
            {
                if(location[i]=='N')
                    y+= (int) location[i+1]-48;
                else
                    y-= (int) location[i+1]-48;
            }
        }
        cout<<x<<" "<<y<<endl;

    }
    return 0;
}

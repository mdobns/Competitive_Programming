#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        string p;
        cin>>x>>y;
        cin>>p;
        int n=p.length();
        for(int i=0 ; i<n-1 ; i+=2)
        {
            if(p[i]=='E'||p[i]=='W')
            {
                /**
                2
                2 2
                N9W2N3W5S9E2S6
                3 5
                E9S9E5S2W4N9W3S7 5-9-2+9-7=
                10 -4
                */
                if(p[i]=='E')
                    x+= (int) p[i+1]-48;
                else
                    x-= (int) p[i+1]-48;
            }
            else
            {
                if(p[i]=='N')
                    y+= (int) p[i+1]-48;
                else
                    y-= (int) p[i+1]-48;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}

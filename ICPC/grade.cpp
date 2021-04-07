#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,c=1;
    cin>>t;
    int mark;
    while(t--)
    {
        cin>>mark;
        cout<<"Student "<<c<<": ";
        if(mark >= 90 && mark <=100)
        {
            cout<<"A+";
        }
        else if(mark >= 80 && mark<=89)
        {
            cout<<"A";
        }
        else if(mark >= 70 && mark <=79)
        {
            cout<<"A-";
        }
        else if(mark >= 60 && mark<=69)
        {
            cout<<"B+";
        }
        else if(mark >= 50 && mark<=59 )
        {
            cout<<"B-";
        }
        else if(mark >= 40 && mark<=49 )
        {
            cout<<"C";
        }
        else if(mark >= 35 && mark<=39)
        {
            cout<<"D";
        }
        else
        {
            cout<<"F";
        }
        cout<<endl;
        c++;
    }
    return 0;
}

#include<bits/stdc++.h>;
using namespace std;
int main()
{
    char str[10000];
    char str1[10000];
    int t;
    scanf("%d",&t);
    if(t>=1 && t<=20)
    {
        while(t--)
        {
            int i=0, j=0, x=0, x1=0, length1=0, length2=0;
            scanf("%s %s",str,str1);
            length1=strlen(str);
            length2=strlen(str1);
            if(length1==length2 && length1<=10000)
            {
                for(i=0; i<length1; i++)
                {
                    for(j=0; j<length1; j++)
                    {
                        if(str[i]==str[j]) x++;
                        if(str1[i]==str1[j]) x1++;
                    }
                }
            }
            if(x==x1) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}

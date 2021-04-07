#include<stdio.h>
int main()
{
    int n,raw,colum;
    scanf("%d",&n);
    while(n--)
    {


        int graph[200] [200]=   {{1,2,9,10,25},
            {4,3,8,11,24},
            {5,6,7,12,23},
            {16,15,14,13,22},
            {17,18,19,20,21}
        };

        scanf("%d",&raw);
        scanf("%d",&colum);
        printf("%d\n",graph[raw-1][colum-1]);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

/**
int maxSubArraySum(int a[], int size)
{
    int maxArr = a[0];
    int cMax = a[0];
    for (int i = 1; i < size; i++)
    {
        cMax = max(a[i], cMax+a[i]);
        maxArr = max(maxArr, cMax);
    }
    return maxArr;
}
**/

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];

   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}


int minSwaps(int arr[], int n)
{
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos, arrPos + n);
    vector<bool> vis(n, false);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] || arrPos[i].second == i)
            continue;
        int cycle_size = 0;
        int j = i;
        while (!vis[j])
        {
            vis[j] = 1;
            j = arrPos[j].second;
            cycle_size++;
        }
        if (cycle_size > 0)
        {
            ans += (cycle_size - 1);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,count=1;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        int ans=minSwaps(a,n);
        sort(a, a + n);
        int subSum = maxSubArraySum(a, n);
        cout << "Case " <<count++ <<": " << subSum << " " << ans <<"\n";
    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans = 0, maxvis = arr[0], j = 1;
    while (j < n)
    {
        if ((arr[j] > maxvis) && (arr[j + 1] < arr[j]))
        {
            maxvis = max(arr[j], maxvis);
            ans++;
        }
        else if(j==n-1 && (arr[j] > maxvis)) {
            maxvis = max(arr[j], maxvis);
            ans++;
        }

        j++;
    }

    cout << ans << endl;

    return 0;
}
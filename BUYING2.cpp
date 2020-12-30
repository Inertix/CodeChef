#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    int a[10000];
    int k(0), min, minSum;

    cin >> t;

    int i;
    for(i = 0; i < t; ++i)
    {
        int n,x;
        int sum(0);
        cin >> n >> x;

        int j;
        for(j = 0; j < n; j++)
        {
            cin >> a[j];
            sum += a[j];
        }

        k = sum/x;
        min =* min_element(a, a+n);
        minSum = (sum - min)/x;

        if(minSum == k)
        {
            cout << "-1" << endl;
        } else
        {
            cout << k << endl;
        }
    }

	return 0;
}

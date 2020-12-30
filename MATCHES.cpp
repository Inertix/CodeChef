#include <iostream>

using namespace std;

int main()
{
    int n;
    int a,b,sum;
    int mat[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int nums[10];
    int ans(0);

    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> a >> b;

        sum = a + b;

        int count = 0;
        while(sum != 0)
        {
            nums[count] = sum % 10;
            sum = sum/10;
            count++;
        }

        int j;
        for(j = count - 1; j >= 0; j--)
        {
            ans = ans + mat[nums[j]];
        }

        cout << ans << endl;
        ans = 0;
    }

    return 0;
}
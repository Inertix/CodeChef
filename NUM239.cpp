#include <iostream>
using namespace std;

int main() {
	int t;

    cin >> t;

    int i;
    for(i = 0; i < t; ++i)
    {
        int l,r;
        int count(0);

        cin >> l >> r;

        int j;
        for(j = l; j <= r; ++j)
        {
            if(j % 10 == 2 || j % 10 == 3 || j % 10 == 9)
            {
                count++;
            }
        }
        cout << count << endl;
    }
	return 0;
}
// find the maximum no of consecutive 1's in the array
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include <vector>
typedef pair<int, int> pii;
typedef vector<int> vi;
#define pb push_back
#define MP make_pair
#define endl "\n"
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define F first
#define S second
const int inf = (int)1e18;
const int ninf = (int)-1e17;
#define rep(a, b) for (int a = 0; a < b; a++)
#define per(a, b) for (int a = b - 1; a >= 0; a--)
#define FOR(it, start, end) for (auto it = start; it != end; it++)

int main()
{
    boost;
    int arr[9] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
    int n = 9;
    int count = 0;
    int res = 0;

    rep(i, n)
    {
        if (arr[i] == 1)
        {
            count++;
            res = max(count, res);
        }
        else
        {
            count = 0;
        }
    }
    return 0;
}
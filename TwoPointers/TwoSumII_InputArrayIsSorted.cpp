#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define endl '\n'

vector<int> twoSum(vector<int> &num, int target)
{
    int n = num.size();
    int i = 0, j = n - 1, a, b, sum;

    while (i < j)
    {
        sum = num[i] + num[j];
        if (sum == target)
        {
            a = i + 1;
            b = j + 1;
            break;
        }
        else if (sum > target)
            j--;
        else
            i++;
    }
    return {a, b};
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    vi v{2,7,11,15};
    int t=9;


    vi ans=twoSum(v,t);
    for(auto u:ans){
        cout<<u<<" ";

    }

    return 0;
}

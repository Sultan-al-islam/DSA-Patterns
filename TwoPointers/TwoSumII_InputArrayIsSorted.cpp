// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

//why 2two pointer this problem
//Arry,find,sorted
// Time Complexity: O(n)
// Space Complexity: O(1) (শুধু কয়েকটি variable ব্যবহার করা হয়েছে)


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


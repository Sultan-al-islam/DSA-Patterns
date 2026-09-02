// https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1


//arry,inplase
//tc o(n)



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define endl '\n'


class Solution {
  public:
    void segregate0and1(vector<int> &a) {
        // code here
        int n=a.size();
        int i=0,j=n-1;
        while(i<j){
            
            if(a[i]==0){
                i++;
            }
            if(a[j]==1){
                j--;
            }
            else{
                swap(a[i],a[j]);
            }
           
        }
        
        
    }
};
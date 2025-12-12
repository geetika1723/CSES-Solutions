#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long int n;
    cin>>n;
    unordered_set<long long int> s;
    for(long long int i =1; i<n; i++)
    {
        long long int k ;
        cin>>k;
        s.insert(k);
    }
    for(long long int i=1;i<=n; i++)
    {
        if (!s.contains(i)) cout<< i;
    }
}

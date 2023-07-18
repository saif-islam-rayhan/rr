
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    multiset<int> s;
    
    for(int i = 0; i < n;i++) {
        int x; cin>> x;
        s.insert(x);
    }
    //auto it = s.begin();

    for(int it : s){
        cout<<it<<" ";
    }
    return 0;
}
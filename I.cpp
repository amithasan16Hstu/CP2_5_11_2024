#include <bits/stdc++.h>
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define f front
using namespace std;
void result()
{
    int t;
    cin>>t;
    int array[t];
    int o=0,e=0;
    for(int i=0;i<t;i++)
    {
        cin>>array[i];
        if(array[i]%2==0) 
        e++;
        else 
        o++;
    }
    if(e>=1)
    {
        if(o%2==0) 
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
    else{
        if(o%2==0) 
        cout<<"yes"<<endl;
        else
         cout<<"no"<<endl;
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        result();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>primes;
    vector<bool>visited(n+1);
    //Here is a Harmonic Series .(n/2+n/3+n/3+n/4+n/5................)
    // So T.C=O(nlogn);;;
    for(int i=2;i<=n;i++)
    {
        if(visited[i]==false)
        {
            primes.push_back(i);
            for(int x=2;i*x<=n;x++)
            {
                visited[i*x]=true;
            }
        }
    }
   cout<<primes.size()<<"\n";
   for(int i=0;i<primes.size();i++)
        cout<<primes[i]<<" ";
   cout<<"\n";
   return 0;

}

#include <bits/stdc++.h>
using namespace std;


int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n;
  cin>>n;

  vector<int>in(n);
  for(int i=0;i<n;++i)
  {
    cin>>in[i];
  }

  vector<pair<int,int>>gather;
  for(int s=1;s<=n;++s)
  {
    for(int t=1;t*s<=n;++t)
    {
      int next_index = 0;
      int sets_A = 0, sets_B = 0;
      bool is_ok = true;
      while(max(sets_A,sets_B) < s && next_index<n)
      {
        int A = 0, B = 0;
        while(max(A,B)<t && next_index<n)
        {
          if(in[next_index] == 1)
          {
            ++A;
          }
          else
          {
            ++B;
          }
          ++next_index;
        }
        if(max(A,B)<t)
        {
          is_ok = false;
        }
        if(A==t)
        {
          sets_A++;
        }
        else
        {
          sets_B++;
        }
      }

      if(max(sets_A,sets_B)<s)
      {
        is_ok = false;
      }
      if(next_index<n)
      {
        is_ok=false;
      }
      if(is_ok)
      {
        gather.push_back({s,t});
      }


    }
  }

  cout<<gather.size()<<"\n";
  for(pair<int,int>p:gather)
  {
    cout<<p.first<<" "<<p.second<<"\n";
  }

}






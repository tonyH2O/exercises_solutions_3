#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, len;
  cin>>n>>len;
  vector<string>s(n);

  for(int i=0; i<n;++i)
  {
    cin>>s[i];

   }

   int answer = 0;
   for(int col=0; col<(int) s[0].length();++col)
   {
     bool is_sorted = true;
     for(int i=0;i<n-1;++i)
     {
       if(s[i][col]>s[i+1][col])
       {
         is_sorted = false;
       }
     }
     if(!is_sorted)
     {
       ++answer;
       for(int i=0;i<n;++i)
       {
         string new_string;
         for(int j=0;j<(int) s[i].length();++j)
         { 
           if(j!=col)
           {
             new_string+=s[i][j];
           }
       
         }
         s[i]=new_string;
       }
      }
    }
   
   cout<<answer<<endl;

   return 0;

   }



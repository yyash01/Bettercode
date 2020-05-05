#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    int x;cin>>x;
    v.push_back(x);
  }
  int q;cin>>q;
  while(q--)
  {
    int y;cin>>y;
    if(binary_search(v.begin(),v.end(),y)){
      cout<<"Yes"<<" ";
      auto low = lower_bound(v.begin(),v.end(),y);       //gives me the itterator which is greator than or equal to (>=)
      cout<< (low-v.begin())+1 <<endl;
    }
    else{
      cout<<"No"<<" ";
      auto high = upper_bound(v.begin(),v.end(),y);      //gives me the itterator which is greator (>)
      cout<<(high-v.begin())+1<<endl;

    }
  }
}

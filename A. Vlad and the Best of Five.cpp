#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
    int maxfreq=0;
    char maxCh;
    unordered_map<char,int>mp;
    string s;
    cin>>s;
    for(auto x:s){
      mp[x]++;
    }
 
    for(auto x: mp){
      if(x.second>maxfreq){
        maxCh=x.first;
        maxfreq=x.second;
      }
    }
 
    cout<<maxCh<<endl;
 
  }
  return 0;
}

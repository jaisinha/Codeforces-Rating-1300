#include <bits/stdc++.h>
#include<fstream>
using namespace std;
 
int main() {
	ifstream in("input.txt");
	ofstream out("output.txt");
 
	int n;
	in>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<2*n;i++)
	{
	    int x;
	    in>>x;
	    v.push_back({x,i+1});
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
	    if(v[2*i].first!=v[2*i+1].first)
	    {
	        out<<"-1";
	        return 0;
	    }
	}
	for(int i=0;i<n;i++)
	{
	    out<<v[2*i].second<<" "<<v[2*i+1].second<<"\n";
	}
	
	return 0;
}

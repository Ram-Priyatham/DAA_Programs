//Program to check whether a graph is connected or not using DFS
#include<bits/stdc++.h>
using namespace std;
vector<int> a[10001];
int vis[10001]; //to check whether node visited or not
int dfs(int node)
{
	vis[node]=1;
	for(int i : a[node])
	{
		if(vis[i]==0)
		{
			dfs(i);
		}
	}
}
int main()
{
    cout<<"Enter no. of vertices "<<endl;
    int n,e,v;
    cin>>v;
    cout<<"Enter no. of edges "<<endl;
    cin>>e;
    int e1=e;
    int x,y;
    cout<<"Enter edges "<<endl;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    cout<<"The adjacency matrix is "<<endl;
    for(int i=0;i<v;i++)
    {
        cout<<i<<"--";
        for(int j:a[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int count=0;
    for(int i=1;i<=v;i++)
	{
		if(vis[i]==0)
		{
			if(dfs(i));
			    count++;
		}
	}
	if(count>0)
	{
		cout<<"Connected Graph";
	}
	else
	{
		cout<<"Not Connected Graph";
	}
	return 0;
}

//Not completely done
#include<bits/stdc++.h>
using namespace std;

struct item
{
    int w,p;//w - weight, p- profit
};

bool cmp(pair<int,float>a, pair<int,float> b)
{
	return a.second>b.second;
}

int main()
{
    int n;
    float weight;
    cout<<"Enter maximum capacity: ";
    cin>>weight;
    cout<<"Enter number of items: ";
    cin>>n;
    item arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter weight and profit of item "<<i+1<<": ";
        cin>>arr[i].w;
        cin>>arr[i].p;
    }
    unordered_map<int,float> m;
    for(int i=0;i<n;i++)
    {
        m[i]=float(arr[i].p)/arr[i].w;
    }
    vector<pair<int,float>>v(m.begin(),m.end());
    sort(v.begin(),v.end(),cmp);
    cout<<"The ratios for corresponding objects :"<<endl;
    for(auto x:v)
	  {
		  cout<<x.first<<" "<<x.second<<endl;
	  }
    float max_profit=0;
    while(capacity > 0)
    {
        
    }
}

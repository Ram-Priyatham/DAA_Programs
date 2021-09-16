//Fractional Knapsack using Greedy

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
    float capacity;
    cout<<"Enter maximum capacity: ";
    cin>>capacity;
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
	cout<<"Object\tWeights used \t Profit"<<endl;
    float max_profit=0;
    int i=0,val,cap;
    while(capacity > 0 && i<n)
    {
        val=v[i].first;
        cap=arr[val].w;
        if(cap<capacity)
        {
            capacity=capacity-cap;
            max_profit=max_profit+arr[val].p;
            cout<<val<<"\t"<<arr[val].w<<"\t    \t "<<arr[val].p<<endl;
        }
        else
        {
            
            max_profit+=float(v[i].second)*capacity;
            cout<<val<<"\t"<<capacity<<"\t    \t "<<float(v[i].second)*capacity<<endl;
            capacity=0;
        }
        i++;
    }
    cout<<"Maximum Profit is "<<max_profit<<endl;
}

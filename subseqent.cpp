#include<bits/stdc++.h>
using namespace std;
void printsubseq(int ind,int n,vector<int>&ds,int arr[])
{
	if(ind==n)
	{
		for(auto it:ds)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
		return;
	}
	//to pic
	ds.push_back(arr[ind]);
	printsubseq(ind+1,n,ds,arr);
	ds.pop_back();
	//logic to not make a pic
	printsubseq(ind+1,n,ds,arr);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int>ds;
	printsubseq(0,n,ds,arr);
}

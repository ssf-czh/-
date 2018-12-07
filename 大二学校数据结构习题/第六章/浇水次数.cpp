#include <bits/stdc++.h>
using namespace std;
bool vis[100000+10];
struct node
{
	int v,val;
	node(int a, int b)
	{
		v=a;val=b;
	}
};
vector<node> adj[100000+10];
void add(int u,int v,int val)
{
	adj[u].push_back(node(v,val));
	adj[v].push_back(node(u,val));
}
int dfs(int s,int flag)//flag ��ʾ��ǰs������ûˮ ��ˮ1 ûˮ0 
{
//	if(vis[s])return 0;
	vis[s]=true;
	int sm=0;
	for(int i=0;i<adj[s].size();i++)//��һ���� ���ڽ������������ �����ж��Ƿ�Ҫ���Լ���㽽ˮ 
	{	
		int temp;
		int v=adj[s][i].v;
		int val=adj[s][i].val;
		if(vis[v])continue;
		if(val==1)temp=dfs(v,1);//���s-v֮����ˮ 
		else temp=dfs(v,0);//ûˮ 
		if(temp)flag=1;//����н�ˮ�Ļ� ��ǰ����һ������ˮ 
		sm+=temp;
	}
	if(flag==0)sm++;//�����ǰ����û��ˮ�Ļ� ��Ҫ�ཽһ��ˮ  ��Ҫ���Լ���㽽ˮ 
	return sm;
}
int main()
{
	fill(vis,vis+100020,false);
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int u,v,val;
		cin>>u>>v>>val;
		add(u,v,val);
	}
	cout<<dfs(1,1);
	return 0;
}

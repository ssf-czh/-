//����һ��mxa���� mxa[i]��ʾ��i��֮��������� 
#include <bits/stdc++.h>
using namespace std;
stack <int> s;
int n;
int a[100010];
int mxa[100010];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=n-1;i>=0;i--)
	{
		mxa[i]=a[i];
		mxa[i]=max(mxa[i],mxa[i+1]);
	}
	for(int i=0;i<n;)
	{
		int mx=mxa[i];
		//�ҵ������� ����һֱ��ջ 
		while(s.empty()||s.top()<mx)
		{
			s.push(a[i++]);
			if(i>=n)break;
		}
		//��������ջ 
		cout<<s.top()<<" ";
		s.pop();
		//���ջ�������������Ĵ� ��һֱ��ջ 
		while(s.size()&&i<n&&s.top()>mxa[i])
		{
			cout<<s.top()<<" ";
			s.pop();
		}
	}
	while(s.size())
	{
		cout<<s.top()<<" ";
			s.pop();
	}
	return 0;
}

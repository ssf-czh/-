//�򵥵��ַ���ƴ������ ̰��˼��
//string ���ͱȽ��ǰ����ֵ�������  

#include <bits/stdc++.h>
#define N 100001
using namespace std;
string s[N];
bool cmp(const string a,const string b)
{
	return a+b>b+a;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>s[i];
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++)
	cout<<s[i];
	return 0;
} 

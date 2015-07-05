#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main()
{
	ifstream get("file.in",ios::in);
	if(!get)
	{
		cerr<<"Failed opening."<<endl;
		exit(1);
	}
	int i;
	get>>i;
	vector<int> cow(i);
	for(int j=0;j<i;j++)
		get>>cow[j];
	sort(cow.begin(),cow.end());
	int count=0;
	for(int j=3;j<8;j++)
		count+=cow[j];
	cout<<count<<endl;
}


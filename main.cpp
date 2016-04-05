#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<fstream>
#include"cow.h"
#include<string>
using namespace std;
int main()
{
	int w;
	vector<int> weight;
	int total=0;
	cow cow;
	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
		cerr<<"Filed opening"<<endl;
		exit(1);
	}
	while(inFile>>w)
	{
		weight.push_back(w);
	}
	
	sort(weight.begin(),weight.end());


	for(int i=0;i<5;i++)
	{
		total+=weight.back();
		weight.pop_back();
	}

	cout<<total<<endl;

	return 0 ;
};

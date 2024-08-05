#include<cstdio>
#include<algorithm>
#include<iomanip>
#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>
#include<vector>
#include<map>
#include<iostream>
#include<queue>
#define MAX1 1000000005
#define MAX2 200005
#define MAX3 100005
//#include<conio.h>
using namespace std;
int main(){
	system("echo off & cls & title cmdplus");
	bool beta = 1;
	int v1,v2,v3,v4;
	v1 = 0;
	v2 = 1;
	v3 = 0;
	v4 = 1;
	cout<<"CMD PLUS [";
	if(beta) cout<<"beta版 ";
	else cout<<"正式版 ";
	printf("%d.%d.%d.%d]\n",v1,v2,v3,v4);
	//printf("CMD PLUS [正式版 0.1.0.0]\n");
	printf("by HTY201203 (Github.com)\n");
	printf("follow GNU V3 eula\n");
	return 0;
}


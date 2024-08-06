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
	printf("file name:\nCMDP cat command>");
	string s;
	cin>>s;
	printf("show lines?<0/1>\n");
	int f1;
	cin>>f1;
	std::ifstream file(s);
    if (!file.is_open()) {
        std::cerr << "无法打开文件" << std::endl;
        return -1;
    }

    std::string line;
    int i = 1;
    while (std::getline(file, line)) {
    	if(f1) printf("%4d|",i);
        cout<<line<<"\n";
        i++;
    }
    i--;
    printf("\n=================file end\nlines:%d\n",i);
	return 0;
}


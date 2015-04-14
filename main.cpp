#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int main(){

int a;
std::ifstream infile("file_in.txt");
std::ofstream outfile("file_out.txt");
vector<int>rock;
while(infile>>a)
     {
       rock.push_back(a);
       std::sort(rock.begin(),rock.end());
     }
    for(vector<int>::reverse_iterator it= rock.rbegin();it!=rock.rend();++it)
       {
        outfile<<*it<<endl;}
return 0;
}
    

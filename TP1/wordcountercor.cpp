#include <fstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <cstdlib>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
	ifstream fin;
	fin.open(argv[1]);
	string word;
	int count = 0;
	while(!fin.eof())
	{
		fin>>word;
		cout <<word<<endl;
		if (word == "." or word == "," or word == ":" or word == "?" or word ="!" or word == ";" or word=="(" or word == ")" or word == "{" or word == "}" or word == "\\" or word =="\"" or word == "/" or word == "[" or word == "]" or word == "-" or word == "_")
		{
			count--;
		}
	else count++;

	}
	if (word.empty()) return 0;
	cout<<"Number of words in file is"<<count<< endl;
	fin.close();
}
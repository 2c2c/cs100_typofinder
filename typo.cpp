#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;

int main(){
	ifstream dictin("./dictionary.txt");
	vector<string> wordlist;
	string line;
	while(getline(dictin,line))
		wordlist.push_back(line);

	ifstream textin("./out.txt");
	vector<string> text;
	string word;
	while(textin >> word)
		text.push_back(word);



}

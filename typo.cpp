#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <cassert>
#include <set>
#include <chrono>
using namespace std;

int main() {
  auto starttime = chrono::high_resolution_clock::now();
  ifstream dictin("dictionary.txt");
  vector<string> wordlist;
  string line;
  while (getline(dictin, line))
    wordlist.push_back(line);

  ifstream textin("out.txt");
  set<string> text;
  string word;
  while (textin >> word) {
    text.emplace(word);
  }

  set<string> typowords;
  for (auto &w : text) {
    auto itr = find(wordlist.begin(), wordlist.end(), w);
    if (itr == wordlist.end()) {
      typowords.emplace(w);
    }
  }
  vector<string> vwords(typowords.begin(), typowords.end());

  ofstream fout("finallist.txt");
  for (const auto &w : vwords) {
    fout << w << "\n";
    cout << w << "\n";
  }
  auto endtime = chrono::high_resolution_clock::now();
  auto ms = chrono::duration_cast<chrono::milliseconds>(endtime - starttime);

  cout << ms.count();
}

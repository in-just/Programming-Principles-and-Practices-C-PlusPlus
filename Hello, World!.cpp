#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
	vector<string> words;
	for (string temp; cin >> temp;)
		words.push_back(temp);
	cout << "Number of words: " << words.size() << '\n';

	sort(words.begin(), words.end());

	string banned = "politics";
	
	for (int i = 0; i < words.size(); ++i) {
		if (words[i] == banned) {
			cout << "BEEP BANNED WORD!!! \n";
		}
		else if (i == 0 || words[i - 1] != words[i])
			cout << words[i] << "\n";
	}
	
	return 0;
}
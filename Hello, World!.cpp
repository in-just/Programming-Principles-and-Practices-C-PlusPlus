#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
	
	// squaring without multiplication
	// for loop
	// add number in iterator number of times itself i.e. 2^2 = 2 + 2
	
	
	int squarei = 5;
	int squared = 0;
	for (int i = 0; i < squarei; ++i) {
		squared += squarei;
		cout << "squared: " << squared << '\n';
	}
	
	return 0;
}
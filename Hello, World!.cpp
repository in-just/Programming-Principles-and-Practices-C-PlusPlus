#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
//inline void keep_window_open() { char ch; cin >> ch; }


int floatFunction()
{
	std::cout << "Please enterr a floating-point value: ";
	double n;
	std::cin >> n;
	std::cout << "n==" << n
		<< "\nn + 1 ==" << n + 1
		<< "\nthree times n==" << 3 * n
		<< "\ntwice n ==" << n + n
		<< "\nn squared ==" << n * n
		<< "\nhalf of n ==" << n / 2
		<< "\nsquare root of n==" << sqrt(n)
		<< '\n'; // name for newline ("end of line") in output

	return 0;
}


int main() // C++ programs start by executing the function main
{
	string first_name;
	double age = 0;
	
	/*std::cout << "Enter your first name followed by age\n";	
	std::cin >> first_name;
	std::cin >> age;
	std::cout << "Hello " << first_name << "(age " << age << ")\n";
	std::cout << "Your age in months is " << age * 12;*/

	floatFunction();

	return 0;
}
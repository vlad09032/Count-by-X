/*
Create a function with two arguments that will return an array of the first n multiples of x.

Assume both the given number and the number of times to count will be positive numbers
greater than 0.

Return the results as an array or list ( depending on language ).
*/

#include<iostream>
#include <vector>
std::vector<int> countBy(int x, int n) {

	std::vector <int> newmass(n,0);
	for (int i{ 0 }; i < n; ++i)
	{
		newmass[i] = x * (i+1);
	}
	return newmass;
}

int main()
{
	countBy(1, 10);
}
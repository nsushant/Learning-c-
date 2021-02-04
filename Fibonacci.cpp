

#include<iostream> 
#include<string> 
#include<vector> 
#include<algorithm> 
#include<cmath> 


int fibonacci()
{
	int i = 0;
	int count = 0;
	int firstnum = 1;
	int secnum = 1;
	int s = 0;
	while (count<4) {
		++count;
		if (count < 2)
			std::cout << firstnum << '\n';
		

		else
			firstnum+=secnum;
			secnum += firstnum;
			std::cout << firstnum << '\n' << secnum << '\n' ;

	}
	return 0;
}

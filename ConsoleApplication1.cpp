
#include<iostream> 
#include<string> 
#include<vector> 
#include<algorithm> 
#include<cmath> 

int main()
{	//Count keeps track of the number of words entered
	int count = 0;
	//initialize variables
	std::string previousword = " ";
	std::string word;
	//keep accepting words until terminated 
	while (std::cin >> word) {
		++count;
		if (previous == word)
			//if a word is repeated, tell me where it is and what it is
			std::cout << "word number " << count
			<< " repeated: " << word << '\n';
		previous = word;
	}
}


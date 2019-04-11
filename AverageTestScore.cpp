#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	int scores = 0;
	double scoresTotal = 0.0;
	bool enteredScores = false;

	while (!enteredScores)
	{
		std::string entered;
		std::cout << "Enter a test score: (enter 0 to stop) ";
		std::cin >> entered;

		double score = stod(entered);
		enteredScores = score == 0;

		if (!enteredScores)
		{
			scoresTotal += score;
			scores++;
		}
	}

	std::cout << "Average score: " << scoresTotal / scores;
	return 0;
}
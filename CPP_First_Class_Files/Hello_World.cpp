//Wesley Reid
//June 24th, 2019 ©
//Chapter 6 program


#include <iostream>

using namespace std;

void getScore() {
	int score;
	while (score < 1 || score > 100)
	{
		cout << "Please enter a test score value of 1 to 100: ";
		cin >> score;
	}
	return score;
}

int findLowest(int score_one, int score_two, int score_three, int score_four, int score_five) {
	int lowest = score_one; 

	if (lowest > score_two)
		lowest = score_two;
	else if (lowest > score_three)
		lowest = score_three;
	else if (lowest > score_four)
		lowest = score_four;
	else if (lowest > score_five)
		lowest = score_five;

	cout << "The lowest test score is " << lowest << endl;

	return lowest;
}

void calcAverage(int score_one, int score_two, int score_three, int score_four, int score_five) {
	int lowest = findLowest(score_one, score_two, score_three, score_four, score_five);
	double avg = score_one + score_two + score_three + score_four + score_five;
	avg + -avg;
	avg = avg / 4.0;
	cout << "Average scores of " << avg << endl;
}

int main()
{
	int score_one = getScore();
	int score_two = getScore();
	int score_three = getScore();
	int score_four = getScore();
	int score_five = getScore();
	calcAverage(score_one, score_two, score_three, score_four, score_five);
	system("pause");
	return 0;
}


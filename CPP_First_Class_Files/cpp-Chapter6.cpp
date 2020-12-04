//Wesley Reid
//June 24th, 2019 ©
//Chapter 6 program
#include <iostream>

using namespace std;

void getScore(int &score) {
	cout << "Please enter a test score value of 1 to 100: ";
	cin >> score;
	while (score < 1 || score > 100)
	{
		cout << "ERROR Please enter a test score value of 1 to 100: ";
		cin >> score;
	}
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
	double avg = 0.0;
	avg += score_one;
	avg += score_two;
	avg += score_three;
	avg += score_four; 
	avg += score_five;
	avg += -lowest;
	double final = avg / 4.0;
	cout << "Average scores equal: " << final << endl;
}

int main()
{
	int score_one, score_two, score_three, score_four, score_five;
	getScore(score_one);
	getScore(score_two);
	getScore(score_three);
	getScore(score_four);
	getScore(score_five);
	calcAverage(score_one, score_two, score_three, score_four, score_five);
	system("pause");
	return 0;
}

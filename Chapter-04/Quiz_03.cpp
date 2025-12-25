/**
 * Write a short program to simulate a ball being dropped off of a tower.
 * To start, the user should be asked for the height of the tower in meters.
 * Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
 * Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds.
 * The ball should not go underneath the ground (height 0).
 * 
 * Use a function to calculate the height of the ball after x seconds.
 * The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2
*/
#include <iostream>

double getTowerHeight()
{
    double towerHeight;
    std::cout<<"Enter Tower Height : ";
    std::cin>>towerHeight;

    return towerHeight;
}

double calculateBallHeight(double towerHeight, int seconds)
{
	double gravity { 9.8 };

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	double fallDistance { gravity * (seconds * seconds) / 2.0 };
	double ballHeight { towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
	double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);
}

int main()
{
    int maxSeconds {500};
    double mTowerHeight {getTowerHeight()};

    for (int i = 0; i <= maxSeconds; i++)
    {
        calculateAndPrintBallHeight(mTowerHeight, i);
    }
}
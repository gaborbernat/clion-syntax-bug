#include <random>
#include <iostream>

using namespace std;
int main()
{
	random_device random_device;
	mt19937 random_engine{random_device()};
	bernoulli_distribution coin_distribution{0.25};

	bool outcome = coin_distribution(random_engine);

	cout << "toss outcome is " << outcome << endl;
}
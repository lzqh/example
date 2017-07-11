#include "strategy.h"

int main()
{
	Air *air = new Air();
	Train *train = new Train();
	Person *person = new Person(air);
	person->travel();
	person->setTravelMethod(train);
	person->travel();

	delete air;
	delete train;
	delete person;
	return 0;
}

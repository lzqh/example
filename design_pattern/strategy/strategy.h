#ifndef __STRATEGY_H
#define __STRATEGY_H

#include <stdlib.h>
#include <stdio.h>

class Travel{
public:
	virtual void travelMethod() =0;
};

class Air :public Travel{
	void travelMethod()
	{
		printf("travel by Air ! \n");
	}
};

class Train : public Travel{
	void travelMethod()
	{
		printf("travel by Train ! \n");
	}
};

class Boat : public Travel{
	void travelMethod()
	{
		printf("travel by Boat ! \n");
	}
};

class Person{
public:
	Person(Travel *travelWay)
	{
		this->m_travelWay =travelWay;
	}
	~Person() {}
	void setTravelMethod(Travel *travelWay)
	{
		this->m_travelWay = travelWay;
	}
	void travel()
	{
		this->m_travelWay->travelMethod();
	}
private:
Travel  *m_travelWay;

};
#endif

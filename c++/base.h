#ifndef  __BASE_H
#define __BASE_H

#include <stdlib.h>
#include <stdio.h>
class Base{
public:
	void func()
	{

	}
protected:
	int count;
private:
	//int count;

};

class Concreate :public Base{
public:
	void func1()
	{
		count =5;
		printf("count = %d\n",count);
	}
protected:

private:

};

class Concreate1 :public Base{
public:
	void func1()
	{
		count =7;
		printf("count = %d\n",count);
	}
protected:

private:

};


#endif

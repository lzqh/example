#ifndef __STATE_H
#define __STATE_H
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
/***
 *  have
 */

class  State{
public:
	virtual void put_one_dollar() = 0;
	virtual void return_one_dollar() = 0;
	virtual void turn_spiale() = 0;
	//virtual print_so

};//实现统一状态方法

class HaveOneDollar : public State{
	void put_one_dollar()
	{
		printf("please  put one dollar \n ");
	}
	void return_one_dollar()
	{
		printf("return one dollar \n ");
	}
	void turn_spiale()
	{
		printf(" turn spiale \n ");
	}
};

class HaveNoDollar : public State{
	void put_one_dollar()
	{
		printf("please  put one dollar \n ");
	}
	void return_one_dollar()
	{
		printf("return one dollar \n ");
	}
	void turn_spiale()
	{
		printf(" turn spiale \n ");
	}
};

class Sold : public State{
	void put_one_dollar()
	{
		printf("please  put one dollar \n ");
	}
	void return_one_dollar()
	{
		printf("return one dollar \n ");
	}
		void turn_spiale()
	{
		printf(" turn spiale \n ");
	}
};

class SoldOut: public State{
	void put_one_dollar()
	{
		printf("please  put one dollar \n ");
	}
	void return_one_dollar()
	{
		printf("return one dollar \n ");
	}
		void turn_spiale()
	{
		printf(" turn spiale \n ");
	}
};

class GlobalManager : public State{
public:
	GlobalManager()
	{
		m_HaveNoDollar = new HaveNoDollar();;
	   m_HaveOneDollar = new HaveOneDollar();
	   m_Sold = new Sold();
	   m_SoldOut = new SoldOut();
	   this->m_State = m_HaveNoDollar ;
	   count = 0;


	}
	~GlobalManager()
	{
		delete m_HaveNoDollar;
		delete m_HaveOneDollar;
		delete m_Sold;
		delete m_SoldOut;

	}

	void set_state(State * state)
	{
		this->m_State = state;
	}

	void put_one_dollar()
		{
			m_State->put_one_dollar();
			set_state(m_HaveOneDollar);
			//printf("please  put one dollar \n ");
		}
		void return_one_dollar()
		{
			printf("return one dollar \n ");
		}
		void turn_spiale()
		{
			m_State->turn_spiale();
			set_state(m_HaveNoDollar);
			//printf(" turn spiale \n ");
		}
private:
	int count ;
	State * m_State;
	HaveNoDollar * m_HaveNoDollar;
	HaveOneDollar *m_HaveOneDollar;
	Sold *m_Sold;
	SoldOut * m_SoldOut;

};

#endif







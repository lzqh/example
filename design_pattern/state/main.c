#include "state.h"
//#include <stdio.h>

int main()
{
	GlobalManager *m_global_M = new GlobalManager();
	m_global_M->put_one_dollar();
	m_global_M->turn_spiale();
	delete m_global_M;
	return 0;

}

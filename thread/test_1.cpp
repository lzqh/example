#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;
#define NUM_THREAD 5
//int thread_id[NUM_THREAD];

void * print_thead_id(void *id)
{
	long thread  = (long)id;
	std::cout<< "the thread create: \n"<< thread <<std::endl;
	pthread_exit(NULL);
}
int main()
{
	pthread_t threads[NUM_THREAD];
	int rc;
	int i;
	for(i=0; i<NUM_THREAD; i++)
	{
		cout << "main() : creating thread, " << i << endl;
		rc = pthread_create(&threads[i], NULL,print_thead_id,(void *)i);
		if(rc)
		{
			cout<< "Err: unabale to create thread" << rc << endl;
			exit(-1);
		}

	}

	pthread_exit(NULL);

}

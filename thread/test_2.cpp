#include <iostream>
#include <cstdlib>
#include <pthread.h>
using namespace std;
#define NUM_THREAD 5
struct thread_data
{
	int thread_id;
	char *message;
};

void * print_message(*thread_data)
{
	struct thread_data* data;
	data = (struct thread_data*)thread_data;
	cout << "Thread ID : " << data->thread_id;
	cout << "Message : " << data->message <<endl;
	pthread_exit(NULL);
}
int main()
{
	int i;
	int rc;
	pthread_t threads[NUM_THREAD];
	struct thread_data message[NUM_THREAD];
	for(i=0;i<NUM_THREAD;i++)
	{
		message[i].thread_id = i;
		message[i].message = "this is messsage";
		rc = pthread_create(&threads[i], NULL,print_message,(void *)&message[i]);
		if(rc)
		{
			cout << "Error:unable to create thread," << rc << endl;
			exit(-1);
		}
	}
	pthread_exit(NULL);
}

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* task1(void* arg) {
	for (int i=0; i<5; i++) {
		printf("thread 1 exe\n");
		sleep(1);
	}
	return NULL;
}

void* task2(void* arg){
	for(int i=0; i<5; i++)
	{
		printf("thread 2 exe\n");
		sleep(1);
	}
	return NULL;
}

int main() {
	pthread_t t1, t2;

	pthread_create(&t1,NULL,task1,NULL);
	pthread_create(&t2,NULL,task2,NULL);


	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	printf("finished\n");

	return 0;
}

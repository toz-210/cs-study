#include<stdio.h>
#include<unistd.h>

int global_var=10;

int main() {
	int local_var =20;

	pid_t pid=fork();

	if (pid ==0) {
		global_var +=5;
		local_var +=5;

		printf("Child\n");

		printf("global address: %p\n", &global_var);
		printf("local address: %p\n", &local_var);
		printf("global_var = %d\n",global_var);
		printf("local_var = %d\n",local_var);
	} else {

		sleep(1);

		printf("parent\n");

		printf("global address: %p\n", &global_var);
		printf("local address: %p\n",&local_var);



		printf("global_var = %d\n", global_var);
		printf("local_var = %d\n", local_var);
	}

	return 0;
}

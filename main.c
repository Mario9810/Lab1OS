#include <stdio.h>
#include <unistd.h>
#include <sys/types.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int f = fork();
	printf("Hello World!\n");
	printf("%d\n", (int)getpid());
	return (0);
}

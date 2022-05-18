#include<unistd.h>

int main () {

	char num = '1';

	while ( num <= '9')
	{
		write(1,&num,1);
		num++;
	}

}

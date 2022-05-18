#include<unistd.h>

int main () {


	char even = 'Y';
	char odd  = 'z';

	while ( 'A' <= even){
		
		write(1,&odd,1);
		write(1,&even,1);
		odd-=2;
		even-=2;
    }


}

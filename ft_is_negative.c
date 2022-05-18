#include <unistd.h>

void ft_is_negative(int n) {

char c1 = 'N';
char c2 = 'P';

if(n <0)
	write(1,&c1,1);
else 
	write(1,&c2,1);



}

int main() {

ft_is_negative(3);
ft_is_negative(-3);
ft_is_negative(0);



}

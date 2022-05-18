#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void) {

	int cnt = 97;
	char input = 'a';
		while(cnt <= 100 ){
		write(1,&input,1);
		input++;
		cnt++;
}
}

int main() {

	 ft_print_alphabet();
}

#include<unistd.h>

void ft_print_comb(void) {
	
	

}


int main() {

	char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	for (int i = 0; i <= 7; i++) {
		for (int j = i + 1; j <= 8; j++) {
			for (int k = j + 1; k <= 9; k++) {
				write(1, &(arr[i]), 1);
				write(1, &(arr[j]), 1);
				write(1, &(arr[k]), 1);
				if (!(i == 7 && j == 8 && k == 9))
					write(1, ", ", 2);
			}
		}
	}

}


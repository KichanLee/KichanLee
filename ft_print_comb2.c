#include<unistd.h>

int main() {


char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	int i =0;
	int j = i+1;
	int k = j+1;

	while ( i <= 7){
			write(1, &(arr[i]),1);
				k++;
		while( j <= 8) {
				write(1, &(arr[j]),1);
				j++;
			while(k <= 9){
					if(!(i == 7 && j == 8 && k ==9)) 
						write(1, &(arr[k]),1);
						
						i++;
  }	
 }
}	 

}	




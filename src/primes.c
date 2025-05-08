#include <stdio.h>
#include <math.h>
int main(){
	int range;
	int length;
	printf("Enter range lim:");
	scanf("%d",&range);
	length = range;
	int primes[range];
	for(int i=0;i<range;i++){
		//printf("%d\n",i);
		primes[i] = i;
	}
	for(int i=2;i<=ceil(range/2);i++) { //for every valid divisor:
		for(int j=0;j<range;j++){ //check all [] against it
			if(fmod(primes[j],i)==0.0 && primes[j]!=i){
				for(int k=j+1; k<range;k++) {
					primes[k-1] = primes[k];
				}
				length--;
			}
		}	
	}
	for(int i=0;i<length;i++) {
		printf("%d\n",primes[i]);
	}
	return 0;
}

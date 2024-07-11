#include <stdio.h>

int count_pairs(int N) {
	    int count = 0;
	        int A, B;
		    
		    for (A = 1; A <= 500; A++) {
			            for (B = 1; B <= A; B++) {
					                if (A * A - B * B == N) {
								                count++;
										            }
							        }
				        }
		        
		        return count;
}

int main() {
	    int N;
	        
	        printf("Enter the value of N (1 ≤ N ≤ 1000): ");
		    scanf("%d", &N);
		        
		        int result = count_pairs(N);
			    
			    printf("Number of pairs (A, B) satisfying A^2 - B^2 = %d: %d\n", N, result);
			        
			        return 0;
}


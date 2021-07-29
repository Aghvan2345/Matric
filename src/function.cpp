#include "matric.hpp"
int mat(){
	int sum=0,a,b=0,c=0,sum2=0;
	int arr [5][5] = {{2,7,8,1,7},
			  {1,4,8,3,4},
			  {5,9,1,7,8},
			  {2,1,3,9,8},
			  {7,1,2,4,6}};
	int arrErk[5];
	//this cycle takes the numbers above the diagonal and adds them to each other
	for(int i = 0; i <= 4; i++){
		for(int j = 0; j <= 4; j++){
			if(i < j){
				sum += arr[i][j];
				/*for(int k = 0; k<=4; k++){
					arr[i][j] = arrErk[k]
				}*/
				
			}
		
			cout << arr[i][j];
		}

		cout << endl;
	}
	//this cycle turns the number into a binary system 
	while(sum != 0){
		b++;
		c = b-1;
		//cout << a;
		a = sum % 2;
		arrErk[c] = a;
		sum /= 2;
	}
	for(int k = c; k >= 0; k--){
		cout << arrErk[k];
	
	}

	return 0;
}




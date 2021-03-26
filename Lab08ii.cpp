#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void LinearIndex(int i, int j){

srand(time(0));
int zero = 0;
int row1 = 8; int row2 = 32; int row3 = 128;
int column1 = 8; int column2 = 32; int column3 = 128;


int A1[row1][column1];
int A2[row2][column2];
int A3[row3][column3];

printf("\nHere is the 2D array for A1[8][8]:\n");


for(int m=0; m<row1; m++){
	for(int n =0; n<column1; n++){
		A1[row1][column1] = rand();
	}
}
   
for(int m =0; m<row1; m++){
	for(int n =0; n<column1; n++){
		if(m < n){
			cout << zero << " ";
		}
		else{
			cout << A1[m][n] << " ";
		}
	}
	cout << endl;}



printf("\nHere is the 2D array for A2[32][32]:\n");



for(int m=0; m<row2; m++){
	for(int n =0; n<column2; n++){
		A2[row2][column2] = rand();
	}
}
   
for(int m =0; m<row2; m++){
	for(int n =0; n<column2; n++){
		if(m < n){
			cout << zero << " ";
		}
		else{
			cout << A2[m][n] << " ";
		}
	}
	cout << endl;}


printf("\nHere is the 2D array for A3[8][8]:\n");


for(int m=0; m<row3; m++){
	for(int n =0; n<column3; n++){
		A3[row3][column3] = rand();
	}
}
   
for(int m =0; m<row3; m++){
	for(int n =0; n<column3; n++){
		if(m < n){
			cout << zero << " ";
		}
		else{
			cout << A3[m][n] << " ";
		}
	}
	cout << endl;}




printf("\nHere is the 1st 20 elements in 1D array for A1:\n");


int k =0;
int B1[row1*column1];

for(int m =0; m<row1; m++){
	for(int n=0; n<column1; n++){
		B1[k]=A1[m][n];
		k++;
	}
}


for(int i = 0; i<20; i++){
	printf("%d", B1[i]);
}



printf("\nHere is the 1st 20 elements in 1D array for A2:\n");


int l =0;
int B2[row2*column2];

for(int m =0; m<row2; m++){
	for(int n=0; n<column2; n++){
		B2[l]=A2[m][n];
		l++;
	}
}


for(int i = 0; i<20; i++){
	printf("%d", B2[i]);
}


printf("\nHere is the 1st 20 elements in 1D array for A3:\n");


int o =0;
int B3[row3*column3];

for(int m =0; m<row3; m++){
	for(int n=0; n<column3; n++){
		B3[o]=A3[m][n];
		o++;
	}
}


for(int i = 0; i<20; i++){
	printf("%d", B3[i]);
}




printf("\nThese are the 1d array indices for the i, j indices [1][1]\n");


printf("\nFor A1:\n");
int t =0;

for(int m=0; m<(row1*column1); m++){
	if(A1[i][j]==B1[t]){
		cout << t << endl;
		t++;
	}
}


printf("\nFor A2:\n");
int u =0;

for(int m=0; m<(row2*column2); m++){
	if(A2[i][j]==B2[u]){
		cout << u << endl;
		u++;
	}
}



printf("\nFor A3:\n");
int v =0;

for(int m=0; m<(row3*column3); m++){
	if(A3[i][j]==B3[t]){
		cout << v << endl;
		v++;
	}
}




}


void InverseIndex(int I){
srand(time(0));

int dim1 = 64; 


int B1[dim1];
int r =8;
int c=8;
int C[r][c];


for(int m=0; m<dim1; m++){
	B1[m]= rand()%1000;
}


for(int m=0; m<r; m++){
	for(int n=0; n<c; n++){
		C[m][n]=B1[h++];
		
	}
}


for(int m=0; m<r; m++){
	for(int n=0; n<c; n++){
		cout << C[m][n] << " ";
		cout << endl;
	}
}


printf("\nIndex of 2D array, B1, from index I, [1]\n");

for(int m=0; m<r; m++){
	for(int n=0; n<c; n++){
		if(B1[I]==C[m][n]){
			cout << m << " and " << n << endl;
		}
	}
}






}



int main(){
 LinearIndex(1,1);
InverseIndex(1);
 return 0;

}







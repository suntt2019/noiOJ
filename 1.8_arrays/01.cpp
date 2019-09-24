#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int A[5][5],a,b;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&A[i][j]);
		}
	}
	scanf("%d %d",&a,&b);
	a--;
	b--;
	//printf("a=%d,b=%d\n",a,b);
	for(int i=0;i<5;i++){
		swap(A[a][i],A[b][i]);
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
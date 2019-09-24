#include <stdio.h>

int main(){
	char str[256]={'\0'};
	int cnt=0;
	fgets(str,256,stdin);
	for(int i=0;i<256;i++){
		if(str[i]>='0'&&str[i]<='9')cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
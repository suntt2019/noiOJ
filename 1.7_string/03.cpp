#include <stdio.h>
#include <string.h>


int main(){
	double limit;
	char str1[505],str2[505];
	int len,same=0;
	scanf("%lf",&limit);
	getchar();
	fgets(str1,505,stdin);
	fgets(str2,505,stdin);
	len=strlen(str1)-1;//?
	//printf("%d\n",len);/////
	for(int i=0;i<len;i++){
		if(str1[i]==str2[i])same++;
	}
	if((double)same/len>=limit)printf("yes\n");
	else printf("no\n");
	return 0;
}
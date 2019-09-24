#include <stdio.h>
int cnt[30]={0},order=1,num,result=-1;

void view(){
	for(int i=0;i<30;i++)printf("%d#",cnt[i]);
	printf("\n");
	return;
}

int main(){
	
	char ch;
	if(scanf("%c",&ch)==EOF)return 0;
	while(ch<='z'&&ch>='a'){
		num=(int)(ch-'a');
		if(cnt[num]==0){
			cnt[num]=order;
			order++;
		}else if(cnt[num]>0){
			cnt[num]=-1;
		}
		if(scanf("%c",&ch)==EOF)break;
	}
	for(int i=0;i<30;i++)if(cnt[i]>0&&(result<0||cnt[i]<cnt[result])){
		result=i;
		//printf("result->%c\n",result+'a');
		//view();
	}
	if(result<0)printf("no\n");
	else printf("%c\n",(char)result+'a');
	return 0;
}
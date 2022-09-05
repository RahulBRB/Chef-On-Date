#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	
	int x,y;
	while(t--){
	scanf("%d%d", &x,&y);
	if(x>y || x==y){
	    printf("YES \n");
	}
	else{
	    printf("NO \n");
	}}
	return 0;
}


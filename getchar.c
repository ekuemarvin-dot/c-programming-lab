#include<stdio.h>
int main(){
/*copy input to output*/
int c;

c=getchar();

while(c!=EOF){
	putchar(c);
	c=getchar();
}

return 0;
}

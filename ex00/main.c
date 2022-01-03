#include <stdio.h>

void cat (char a){
	printf("%c\n",a);
}

int main(){
	FILE *fp = fopen("z","w");
	fputs("Z\n", fp);
	fclose(fp);
	return 0;
}



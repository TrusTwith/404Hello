#include <stdio.h>

unsigned long long rev(unsigned long long n, unsigned int bc){
	unsigned char *p = (unsigned char*)&n;
	for(register int i = 0;i < bc/2;i++)
		*(p+i)^=*(p+bc-i-1)^=*(p+i)^=*(p+bc-i-1);
	return n;
}

int main(){
	unsigned long long n;
	unsigned int b;
	scanf("%u%llx",b,&n);
	printf("0x%llx\n",rev(x,b));

    return 0;
}
	

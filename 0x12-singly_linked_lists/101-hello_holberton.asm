	;;  we will use function printf
	extern printf
	;;  mark label "main" as entry point of our executable
	global main

	;;  this section contains all data
	section .data
	message db "Hello, Holberton", 10, 0

	;;  this section contains all code
	section .text
main:
	;;  save registers on stack
	pushad

	;;  print message
	push dword message
	call printf
	add esp, 4

	;;  restore registers
	popad

	;;  exit with code 0
	mov eax,1
	mov ebx,0
	int 80h

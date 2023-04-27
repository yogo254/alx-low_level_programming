section .data
    hello db 'Hello, Holberton', 10 ; our string to print
    helloLen equ $-hello            ; string length (assembly syntax)

section .text
    global _start

_start:
    ; write the string to stdout
    mov eax, 1                  ; system call for write
    mov edi, 1                  ; file descriptor (1=stdout)
    mov esi, hello               ; pointer to string
    mov edx, helloLen            ; string length
    syscall

    ; exit with status code 0 (success)
    mov eax, 60                 ; system call for exit
    xor edi, edi                ; exit status code
    syscall


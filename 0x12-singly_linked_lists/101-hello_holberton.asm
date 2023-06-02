section .data
hello db 'Hello, Holberton', 10

section .text
global main

main:
; write hello to stdout
mov rax, 1
mov rdi, 1
mov rsi, hello
mov rdx, 17
syscall
; exit with status code 0
mov rax, 60
xor rdi, rdi
syscall

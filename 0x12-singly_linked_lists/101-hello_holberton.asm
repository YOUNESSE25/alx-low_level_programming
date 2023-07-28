extern printf
section .data
msg: db "Hello, Holberton"

global main
main:
call printf

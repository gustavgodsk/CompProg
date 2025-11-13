.globl main
.section .data
input_format: .string "%lld"
output_format: .string "%lld "
final_format: .string "%lld\n"

.section .text
main:
    pushq %rbp
    movq %rsp, %rbp
    subq $16, %rsp

    leaq -8(%rbp), %rsi
    movq $input_format, %rdi
    movq $0, %rax
    call scanf
    movq -8(%rbp), %rbx

.L_while_loop:
    cmpq $1, %rbx
    jle .L_end_loop

    movq %rbx, %rsi
    movq $output_format, %rdi
    movq $0, %rax
    call printf

    movq %rbx, %rax
    andq $1, %rax
    cmpq $0, %rax
    je .L_if_even

.L_if_odd:
    leaq (%rbx, %rbx, 2), %rbx
    incq %rbx
    jmp .L_while_loop

.L_if_even:
    shrq $1, %rbx
    jmp .L_while_loop

.L_end_loop:
    movq $1, %rsi
    movq $final_format, %rdi
    movq $0, %rax
    call printf

    movq $0, %rax
    leave
    ret

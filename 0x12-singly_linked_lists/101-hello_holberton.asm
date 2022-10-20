section .text
    default rel
    extern printf
    global main
main:
    ; Create a stack-frame, re-aligning the stack to 16-byte alignment before calls
    push rbp

    mov	rdi, fmt
    mov	rsi, message
    mov	rax, 0

    ; Call printf
    call printf wrt ..plt
    
    pop	rbp		; Pop stack

    mov	rax,0	; Exit code 0
    ret			; Return
section .data
    message:  db        "Hello, Holberton", 10, 0
    fmt:    db "%s", 10, 0

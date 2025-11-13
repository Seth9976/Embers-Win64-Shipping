// 函数: sub_142c8f150
// 地址: 0x142c8f150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1[0xb]
SOCKET r12 = r14[0x47]
int64_t rax
int64_t r8
rax, r8 = sub_142c8f090(arg1)
void* rbp = *r14
int32_t rdi = 0

if (rax s<= 0)
    sub_142c64760(rbp, "server response timeout", r8, arg3)
    return 0x1c

int64_t rbx_1

if (arg2 == 0)
    rbx_1 = 0
else
    rbx_1 = 0x3e8
    
    if (rax s< 0x3e8)
        rbx_1 = rax

char rax_2
int64_t rdx
int64_t r8_1
rax_2, rdx, r8_1 = j_sub_142c71c60(r14, 0)
int32_t rbx_2

if (rax_2 == 0)
    int64_t rcx_2 = arg1[6]
    
    if (rcx_2 != 0)
    label_142c8f209:
        int64_t rax_5 = arg1[6]
        SOCKET r8_2 = -1
        
        if (rax_5 != 0)
            r8_2 = r12
        
        if (rax_5 != 0)
            r12 = -1
        
        int32_t rax_6
        rax_6, rdx, r8_1 = sub_142c64080(r12, -1, r8_2, rbx_1)
        rbx_2 = rax_6
    else if (*arg1 == 0 || arg1[2] u>= arg1[1])
        if (rcx_2 != 0)
            goto label_142c8f209
        
        char rax_4
        rax_4, rdx, r8_1 = j_sub_142c71c60(r14, 0)
        
        if (rax_4 == 0)
            goto label_142c8f209
        
        rbx_2 = 1
    else
        rbx_2 = (rcx_2 + 1).d
else
    rbx_2 = 1

if (arg2 == 0)
label_142c8f269:
    
    if (rbx_2 == 0xffffffff)
        sub_142c64760(rbp, "select/poll error", r8_1, arg3)
        rdi = rbx_2 + 0x1c
    else if (rbx_2 != 0)
        rdi = arg1[0xc](r14)
else
    int32_t rax_7
    int512_t zmm2
    rax_7, zmm2 = sub_142c6f450(r14, rdx, arg3)
    
    if (rax_7 == 0)
        uint64_t var_28[0x2]
        int128_t var_38 = *sub_142c59600(&var_28)
        int32_t rax_9
        rax_9, r8_1, arg3 = sub_142c6fd10(rbp, &var_38, zmm2)
        rdi = rax_9
        
        if (rax_9 == 0)
            goto label_142c8f269
    else
        rdi = 0x2a

return zx.q(rdi)

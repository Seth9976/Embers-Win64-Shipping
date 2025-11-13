// 函数: sub_142c64440
// 地址: 0x142c64440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int64_t r14 = 0
int64_t rsi = arg4
int64_t rbp = arg3
int64_t r15 = 0

if (arg4 == 0)
    return 0

if ((*(rdi + 0x220) & 0x10) != 0)
    return sub_142c64f30(rdi, arg2, arg3, arg4)

if ((arg2.b & 1) != 0)
    r15 = *(rdi + 0x2d8)

if ((arg2.b & 2) != 0)
    int64_t rax_2 = *(rdi + 0x2e0)
    
    if (rax_2 != 0)
        r14 = rax_2
    else if (*(rdi + 0x288) != 0)
        if (rax_2 == 0)
            r14 = *(rdi + 0x2d8)
        else
            r14 = rax_2

int64_t rbx_1
int64_t temp0_1

do
    rbx_1 = 0x4000
    
    if (rsi u<= 0x4000)
        rbx_1 = rsi
    
    if (r15 != 0)
        int64_t rax_3
        int64_t r8_1
        rax_3, r8_1 = r15(rbp, 1, rbx_1, *(rdi + 0x278))
        
        if (rax_3 == 0x10000001)
            if ((*(arg1[0x87] + 0x80) & 0x10) == 0)
                return sub_142c64f30(rdi, arg2, rbp, rsi)
            
            sub_142c64760(rdi, "Write callback asked for PAUSE when not supported!", r8_1, arg5)
            return 0x17
        
        if (rax_3 != rbx_1)
            sub_142c64760(rdi, "Failed writing body (%zu != %zu)", rax_3, arg5)
            return 0x17
    
    if (r14 != 0)
        int64_t rax_4
        int64_t r8_3
        rax_4, r8_3 = r14(rbp, 1, rbx_1, *(rdi + 0x288))
        
        if (rax_4 == 0x10000001)
            return sub_142c64f30(rdi, 2, rbp, rsi)
        
        if (rax_4 != rbx_1)
            sub_142c64760(rdi, "Failed writing header", r8_3, arg5)
            return 0x17
    
    rbp += rbx_1
    temp0_1 = rsi
    rsi -= rbx_1
while (temp0_1 != rbx_1)
return 0

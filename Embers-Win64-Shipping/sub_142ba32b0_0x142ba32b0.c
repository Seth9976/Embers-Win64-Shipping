// 函数: sub_142ba32b0
// 地址: 0x142ba32b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u> arg2)
    return 

if (*(arg3 + 0x1c) s> *(arg4 + 0x1c))
    void* rax_2 = arg3
    arg3 = arg4
    arg4 = rax_2

int32_t r12_1 = *(arg3 + 0x18)
int32_t rcx = *(arg4 + 0x18)
int32_t rdi_1 = *(arg3 + 0x1c)
int32_t rsi_2 = r12_1 - rdi_1
int32_t r14_1 = *(arg4 + 0x1c)
int32_t r15_2 = rcx - r14_1
int32_t rax

if (r12_1 == rcx || rdi_1 == r14_1)
    void* r9 = arg1 + 0x18
    int64_t i_2 = (arg2 - arg1) u/ 0x30 + 1
    int64_t i
    
    do
        int32_t r8 = *(r9 + 4)
        int32_t r8_1
        
        if (r8 s> rdi_1)
            rax = r12_1
            
            if (r8 s>= r14_1)
                rax = r15_2 + r8
            
            r8_1 = rax
        else
            r8_1 = r8 + rsi_2
        
        *r9 = r8_1
        r9 += 0x30
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    uint32_t rax_3 = sub_142b91790(rcx - r12_1, r14_1 - rdi_1)
    uint32_t rcx_2 = rax_3
    void* rbx_1 = arg1 + 0x18
    int64_t i_3 = (arg2 - arg1) u/ 0x30 + 1
    int64_t i_1
    
    do
        int32_t rax_5 = *(rbx_1 + 4)
        
        if (rax_5 s<= rdi_1)
            rax = rax_5 + rsi_2
        else if (rax_5 s< r14_1)
            int32_t rax_7 = sub_142b93e80(rax_5 - rdi_1, rcx_2)
            rcx_2 = rax_3
            rax = rax_7 + r12_1
        else
            rax = rax_5 + r15_2
        
        *rbx_1 = rax
        rbx_1 += 0x30
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

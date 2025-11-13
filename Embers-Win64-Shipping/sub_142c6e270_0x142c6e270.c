// 函数: sub_142c6e270
// 地址: 0x142c6e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx_1 = *(arg2 + 0x70) + arg3
int64_t rbp = *(arg1 + 0xa78)

if (rcx_1 u>= rbp)
    if (rcx_1 u> 0x19000)
        sub_142c64760(arg1, "Avoided giant realloc for header (max is %d)!", 0x19000, arg5)
        return 0x1b
    
    uint64_t rbp_1 = rbp * 2
    uint64_t rax_3 = (rcx_1 * 3) u>> 1
    
    if (rax_3 u> rbp_1)
        rbp_1 = rax_3
    
    int64_t r14_2 = *(arg2 + 0x68) - *(arg1 + 0xa70)
    int64_t rax_4
    int64_t r8
    rax_4, r8 = data_143ccb8a8(arg4, rbp_1)
    
    if (rax_4 == 0)
        sub_142c64760(arg1, "Failed to alloc memory for big header!", r8, arg5)
        return 0x1b
    
    *(arg1 + 0xa70) = rax_4
    *(arg1 + 0xa78) = rbp_1
    *(arg2 + 0x68) = rax_4 + r14_2

memcpy(*(arg2 + 0x68), *(arg2 + 0x80), arg3.d)
*(arg2 + 0x68) += arg3
char* rax_6 = *(arg2 + 0x68)
*(arg2 + 0x70) += arg3
*rax_6 = 0
return 0

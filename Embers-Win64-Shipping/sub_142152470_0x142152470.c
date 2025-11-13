// 函数: sub_142152470
// 地址: 0x142152470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rax_1 = *(arg1 + 0x408)
int64_t r10_1 = sx.q(arg2)
int32_t rcx_1 = rax_1 - r10_1.d

if (rcx_1 != arg3)
    void* rax_2 = *(arg1 + 0x400)
    void* r9 = arg1
    
    if (rax_2 != 0)
        r9 = rax_2
    
    memmove((r10_1 << 4) + r9, (sx.q(r10_1.d + arg3) << 4) + r9, (rcx_1 - arg3) << 4)
    rax_1 = *(arg1 + 0x408)

*(arg1 + 0x408) = rax_1 - arg3

if (arg4 != 0)
    sub_142152e80(arg1)

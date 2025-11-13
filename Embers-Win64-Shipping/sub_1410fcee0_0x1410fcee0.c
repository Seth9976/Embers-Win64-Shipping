// 函数: sub_1410fcee0
// 地址: 0x1410fcee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rax_1 = *(arg1 + 0x50)
int64_t r10_1 = sx.q(arg2)
int32_t rcx_1 = rax_1 - r10_1.d

if (rcx_1 != arg3)
    void* rax_2 = *(arg1 + 0x40)
    void* r9 = arg1
    
    if (rax_2 != 0)
        r9 = rax_2
    
    memmove((r10_1 << 6) + r9, (sx.q(r10_1.d + arg3) << 6) + r9, (rcx_1 - arg3) << 6)
    rax_1 = *(arg1 + 0x50)

*(arg1 + 0x50) = rax_1 - arg3

if (arg4 != 0)
    sub_1409da950(arg1)

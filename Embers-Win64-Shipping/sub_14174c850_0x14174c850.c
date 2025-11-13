// 函数: sub_14174c850
// 地址: 0x14174c850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rax_1 = *(arg1 + 0x10)
int64_t r10_1 = sx.q(arg2)
int32_t rcx_1 = rax_1 - r10_1.d

if (rcx_1 != arg3)
    memmove((r10_1 << 4) + *(arg1 + 8), (sx.q(r10_1.d + arg3) << 4) + *(arg1 + 8), 
        (rcx_1 - arg3) << 4)
    rax_1 = *(arg1 + 0x10)

*(arg1 + 0x10) = rax_1 - arg3
sub_1405a5010(arg1 + 8)

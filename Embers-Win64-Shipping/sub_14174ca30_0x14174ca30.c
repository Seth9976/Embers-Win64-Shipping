// 函数: sub_14174ca30
// 地址: 0x14174ca30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rax_1 = *(arg1 + 0x10)
int64_t r10_1 = sx.q(arg2)
int32_t rcx_1 = rax_1 - r10_1.d

if (rcx_1 != arg3)
    memmove(r10_1 * 0x30 + *(arg1 + 8), sx.q(r10_1.d + arg3) * 0x30 + *(arg1 + 8), 
        (rcx_1 - arg3) * 0x30)
    rax_1 = *(arg1 + 0x10)

*(arg1 + 0x10) = rax_1 - arg3
sub_1407c4120(arg1 + 8)

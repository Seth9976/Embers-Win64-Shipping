// 函数: sub_1417b4110
// 地址: 0x1417b4110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rax_1 = *(arg1 + 0x10)
int64_t r9_1 = sx.q(arg2)
int32_t rcx_1 = rax_1 - r9_1.d

if (rcx_1 != arg3)
    int64_t r10_1 = *(arg1 + 8)
    memmove(r10_1 + r9_1 * 0x28, r10_1 + sx.q(r9_1.d + arg3) * 0x28, (rcx_1 - arg3) * 0x28)
    rax_1 = *(arg1 + 0x10)

*(arg1 + 0x10) = rax_1 - arg3
sub_1409da680(arg1 + 8)

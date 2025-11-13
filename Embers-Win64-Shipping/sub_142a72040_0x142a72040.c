// 函数: sub_142a72040
// 地址: 0x142a72040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x14)
int32_t rax = *(arg1 + 0xc) + 1

if (rax s>= rdx)
    *(arg1 + 0xc) = rdx
    return 0xffff

*(arg1 + 0xc) = rax
return zx.q(*(*(arg1 + 0x18) + (sx.q(rax) << 1)))

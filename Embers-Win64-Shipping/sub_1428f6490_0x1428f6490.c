// 函数: sub_1428f6490
// 地址: 0x1428f6490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int64_t r8 = sx.q(*(arg1 + 0x14))
int32_t rax = r8.d

if (rax != *(arg2 + 0x14))
    return zx.q(rax - *(arg2 + 0x14))

return memcmp(*(arg1 + 0x18), *(arg2 + 0x18), r8) __tailcall

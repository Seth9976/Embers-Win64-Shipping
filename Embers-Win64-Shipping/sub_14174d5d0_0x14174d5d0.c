// 函数: sub_14174d5d0
// 地址: 0x14174d5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x10)
int64_t r10 = sx.q(arg2)
int32_t rcx_2 = r9 - r10.d - 1

if (rcx_2 s>= 1)
    rcx_2 = 1

if (rcx_2 != 0)
    memcpy((r10 << 4) + *(arg1 + 8), (sx.q(r9 - rcx_2) << 4) + *(arg1 + 8), rcx_2 << 4)
    r9 = *(arg1 + 0x10)

*(arg1 + 0x10) = r9 - 1
return sub_1405a5010(arg1 + 8) __tailcall

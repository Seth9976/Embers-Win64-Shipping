// 函数: sub_14174d6a0
// 地址: 0x14174d6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x10)
int64_t r10 = sx.q(arg2)
int32_t rcx_2 = r9 - r10.d - 1

if (rcx_2 s>= 1)
    rcx_2 = 1

if (rcx_2 != 0)
    memcpy((r10 << 6) + *(arg1 + 8), (sx.q(r9 - rcx_2) << 6) + *(arg1 + 8), rcx_2 << 6)
    r9 = *(arg1 + 0x10)

*(arg1 + 0x10) = r9 - 1
return sub_1407c3fe0(arg1 + 8) __tailcall

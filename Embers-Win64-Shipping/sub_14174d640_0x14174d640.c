// 函数: sub_14174d640
// 地址: 0x14174d640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int32_t rcx = *(arg1 + 0x10)
int32_t rax_2 = rcx - r10.d - 1

if (rax_2 s>= 1)
    rax_2 = 1

if (rax_2 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + (r10 << 1), r9_1 + (sx.q(rcx - rax_2) << 1), rax_2 * 2)
    rcx = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx - 1
return sub_1405a50a0(arg1 + 8) __tailcall

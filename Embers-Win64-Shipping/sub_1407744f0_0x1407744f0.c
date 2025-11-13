// 函数: sub_1407744f0
// 地址: 0x1407744f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int32_t rcx = *(arg1 + 0x60)
int32_t rax_1 = rcx - r10.d

if (rax_1 != 1)
    int64_t r9_1 = *(arg1 + 0x58)
    memmove(r9_1 + (r10 << 3), r9_1 + (sx.q((r10 + 1).d) << 3), (rax_1 - 1) << 3)
    rcx = *(arg1 + 0x60)

*(arg1 + 0x60) = rcx - 1
return sub_1405c53d0(arg1 + 0x58) __tailcall

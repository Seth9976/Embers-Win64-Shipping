// 函数: sub_14090c3f0
// 地址: 0x14090c3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int64_t rdi_1 = rsi * 2
int64_t rcx = *(*(arg1 + 0x18) + (rdi_1 << 3))

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t rcx_2 = *(arg1 + 0x20)
int32_t rax_2 = rcx_2 - rsi.d

if (rax_2 != 1)
    int64_t r9_1 = *(arg1 + 0x18)
    memmove(r9_1 + (rdi_1 << 3), (sx.q((rsi + 1).d) << 4) + r9_1, (rax_2 - 1) << 4)
    rcx_2 = *(arg1 + 0x20)

*(arg1 + 0x20) = rcx_2 - 1
return sub_1405a5010(arg1 + 0x18) __tailcall

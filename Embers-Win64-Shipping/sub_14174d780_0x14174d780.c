// 函数: sub_14174d780
// 地址: 0x14174d780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int64_t rdi_1 = rsi * 2
int64_t rcx = *(*(arg1 + 8) + (rdi_1 << 3))

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t rcx_3 = *(arg1 + 0x10)
int32_t rdx_2 = rcx_3 - rsi.d - 1

if (rdx_2 s>= 1)
    rdx_2 = 1

if (rdx_2 != 0)
    int64_t rax_1 = *(arg1 + 8)
    memcpy(rax_1 + (rdi_1 << 3), (sx.q(rcx_3 - rdx_2) << 4) + rax_1, rdx_2 << 4)
    rcx_3 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_3 - 1
return sub_1405a5010(arg1 + 8) __tailcall

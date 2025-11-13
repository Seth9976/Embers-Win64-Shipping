// 函数: sub_14174d830
// 地址: 0x14174d830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t rsi_1 = rbx * 0x50
sub_1405ae080(*(arg1 + 8) + rsi_1)
int32_t rcx_2 = *(arg1 + 0x10)
int32_t rdx_2 = rcx_2 - rbx.d - 1

if (rdx_2 s>= 1)
    rdx_2 = 1

if (rdx_2 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + rsi_1, sx.q(rcx_2 - rdx_2) * 0x50 + r9_1, rdx_2 * 0x50)
    rcx_2 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_2 - 1
return sub_140976b40(arg1 + 8) __tailcall

// 函数: sub_142b0f0c0
// 地址: 0x142b0f0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1c)

if (rax == *(arg1 + 0x14))
    *(*(arg1 + 8) + 0x278) = sub_142b0f610(arg1, arg2) == 0
    *(*(arg1 + 8) + 0x1e0) = *(arg1 + 0x18)
    void* rax_5 = *(arg1 + 8)
    *(rax_5 + 0x1e4) = zx.d(*(arg1 + (sx.q(*(arg1 + 0x1c)) << 1) + 0x220))
    return rax_5

int32_t rax_7 = (rax + 1) & 0x7f
*(arg1 + 0x1c) = rax_7
*(*(arg1 + 8) + 0x1e0) = *(arg1 + (sx.q(rax_7) << 2) + 0x20)
void* rdx_1 = *(arg1 + 8)
*(arg1 + 0x18) = *(rdx_1 + 0x1e0)
int64_t rax_11 = sx.q(*(arg1 + 0x1c))
*(rdx_1 + 0x1e4) = zx.d(*(arg1 + (rax_11 << 1) + 0x220))
return rax_11

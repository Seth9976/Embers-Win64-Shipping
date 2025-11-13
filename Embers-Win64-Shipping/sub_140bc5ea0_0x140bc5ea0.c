// 函数: sub_140bc5ea0
// 地址: 0x140bc5ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg2)
int32_t temp0 = rax.d

if (temp0 == 0)
    return 0

if (temp0 s> 0)
    return *(*(arg1 + 0x130) + rax * 0x10 - 0x10)

if (rax.d s>= 0)
    return 0

int32_t rax_4 = not.d(rax.d)

if (data_14399fa4c != 0 && rax_4 s< *(arg1 + 0x174))
    return sub_140bc79e0(rax_4, *(arg1 + 0x148), *(arg1 + 0x158), *(arg1 + 0x150))

return sub_140bc8740((sx.q(rax_4) << 4) + *(arg1 + 0x148))

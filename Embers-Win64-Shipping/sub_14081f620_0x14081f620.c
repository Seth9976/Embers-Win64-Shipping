// 函数: sub_14081f620
// 地址: 0x14081f620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) != 0)
    int64_t r8 = sx.q(*(arg1 + 0x38))
    int32_t rbx = *(*(arg1 + 0x30) + (r8 << 2) - 4)
    *(arg1 + 0x38) = (r8 - 1).d
    sub_1405dac90(arg1 + 0x30)
    return zx.q(rbx)

int32_t rdx_1 = *(arg1 + 4)

if (rdx_1 s>= *(arg1 + 8))
    return 0xffffffff

*(arg1 + 4) = rdx_1 + 1
return zx.q(rdx_1)

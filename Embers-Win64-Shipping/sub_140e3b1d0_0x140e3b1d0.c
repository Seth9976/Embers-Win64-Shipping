// 函数: sub_140e3b1d0
// 地址: 0x140e3b1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140e3cc80(arg1, 1, arg5)

if (result != 0)
    void* r10_1 = *(arg1 + (sx.q(arg2) << 3) + 0x308)
    int32_t rdx = *(r10_1 + 0x18)
    result = *(arg1 + 0x26c)
    int16_t* r8_2 = sx.q(*(r10_1 + 8) * rdx * arg4) + sx.q(rdx * arg3) + *r10_1
    *r8_2 |= (1 << (result u% 0x20)).w

return result

// 函数: sub_140f5e500
// 地址: 0x140f5e500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2d4) &= 0xfffffffb
uint32_t result = zx.d(arg7) << 2
*(arg1 + 0x2d4) |= result
*(arg1 + 0x2bc) = arg3
*(arg1 + 0x2c4) = arg5
*(arg1 + 0x2b8) = arg2
*(arg1 + 0x2c0) = arg4
*(arg1 + 0x2c8) = arg6
*(arg1 + 0x2cc) = arg8

if (not(arg8 <= 0f))
    *(arg1 + 0x2d0) = 4

return result

// 函数: sub_1426eb0b0
// 地址: 0x1426eb0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1f0) &= 0xfffffffe
*(arg1 + 0x1f0) |= zx.d(arg2)
char result = *(arg1 + 0x4a)

if (arg2 == 0)
    if (result != 3)
        *(arg1 + 0x4a) = 3
    
    *(arg1 + 0xf9) = 4
else if (result == 3)
    *(arg1 + 0x4a) = 2

return result

// 函数: sub_1403c0290
// 地址: 0x1403c0290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0_1 = floor(10000000000.0 / float.d(arg1) + 0.5)
uint64_t result = zx.q(int.d(zmm0_1))

if (zmm0_1 < -2147483648.0)
    result = 0

if (2147483647.0 < zmm0_1)
    return 0

return result

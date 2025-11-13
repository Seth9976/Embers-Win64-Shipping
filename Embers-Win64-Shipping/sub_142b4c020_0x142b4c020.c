// 函数: sub_142b4c020
// 地址: 0x142b4c020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0 = *arg2
double zmm1 = *arg3

if (not(zmm1 <= zmm0))
    return 0xffffffff

zmm0 - zmm1

if (not(is_unordered.q(zmm0, zmm1)) && not(zmm0 != zmm1))
    return 0

return 1

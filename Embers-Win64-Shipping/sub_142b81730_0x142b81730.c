// 函数: sub_142b81730
// 地址: 0x142b81730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142b81680(arg1, arg2) != 0)
    double zmm0_1 = *(arg1 + 0x20)
    double temp0_1 = *(arg2 + 0x20)
    zmm0_1 - temp0_1
    
    if (not(is_unordered.q(zmm0_1, temp0_1)) && not(zmm0_1 != temp0_1))
        return 1

return 0

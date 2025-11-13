// 函数: sub_142a733d0
// 地址: 0x142a733d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142a6aef0(arg1, arg2) != 0)
    double zmm0_1 = *(arg1 + 0x268)
    double temp0_1 = *(arg2 + 0x268)
    zmm0_1 - temp0_1
    
    if (not(is_unordered.q(zmm0_1, temp0_1)) && not(zmm0_1 != temp0_1))
        return 1

return 0

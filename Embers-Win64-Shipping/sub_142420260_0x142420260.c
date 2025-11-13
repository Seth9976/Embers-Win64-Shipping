// 函数: sub_142420260
// 地址: 0x142420260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x268) = arg2

if (arg2 == 0)
    *(arg1 + 0x278) = 0
    *(arg1 + 0x280) = 0
    *(arg1 + 0x28c) = 0
    *(arg1 + 0x294) = 0
    *(arg1 + 0x2a0) = 0
    *(arg1 + 0x2a8) = 0
    *(arg1 + 0x270) = 0x3f800000
    *(arg1 + 0x284) = 0x3f800000
    *(arg1 + 0x298) = 0x3f800000
    *(arg1 + 0x2ac) = 0x3f800000
    return 0

void* result = data_143f5b298

if (*(result + 0xaf8) != 0)
    result = sub_142391f10(arg2)
    
    if (result.b != 0)
        jump(*(**(data_143f5b298 + 0xaf8) + 0xa8))

*(arg1 + 0x270) = *(arg2 + 0x3c0)
*(arg1 + 0x280) = *(arg2 + 0x3d0)
*(arg1 + 0x290) = *(arg2 + 0x3e0)
*(arg1 + 0x2a0) = *(arg2 + 0x3f0)
return result

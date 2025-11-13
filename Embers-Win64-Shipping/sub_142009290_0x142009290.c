// 函数: sub_142009290
// 地址: 0x142009290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_142008f10(arg1, arg2, arg3).b != 0 && arg1[0x16].b == arg2[0x16].b
        && arg1[0x17] == arg2[0x17])
    uint32_t zmm0_1[0x4] = *(arg1 + 0xa4)
    zmm0_1[0] = zmm0_1[0] f- *(arg2 + 0xa4)
    
    if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 0.100000001f))
        zmm0_1 = arg1[0x15].d
        zmm0_1[0] = zmm0_1[0] f- arg2[0x15].d
        
        if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 0.100000001f))
            zmm0_1 = *(arg1 + 0xac)
            zmm0_1[0] = zmm0_1[0] f- *(arg2 + 0xac)
            
            if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 0.100000001f))
                result.b = 1
                return result

result.b = 0
return result

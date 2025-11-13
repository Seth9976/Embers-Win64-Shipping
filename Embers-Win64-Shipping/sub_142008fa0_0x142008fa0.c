// 函数: sub_142008fa0
// 地址: 0x142008fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_142008f10(arg1, arg2, arg3).b != 0)
    uint32_t zmm0_1[0x4] = arg1[0x13].d
    zmm0_1[0] = zmm0_1[0] f- arg2[0x13].d
    
    if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 0.100000001f))
        zmm0_1 = *(arg1 + 0x9c)
        zmm0_1[0] = zmm0_1[0] f- *(arg2 + 0x9c)
        
        if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 0.100000001f))
            zmm0_1 = arg1[0x14].d
            zmm0_1[0] = zmm0_1[0] f- arg2[0x14].d
            
            if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 0.100000001f) && arg1[0x15] == arg2[0x15])
                result.b = 1
                return result

result.b = 0
return result

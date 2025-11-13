// 函数: sub_14078b990
// 地址: 0x14078b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (sub_14078bc80(arg1, arg2).b != 0 && *(arg2 + 0xd0) == *(arg1 + 0xd0)
        && *(arg2 + 0xd4) == *(arg1 + 0xd4) && *(arg2 + 0xdc) == *(arg1 + 0xdc)
        && *(arg2 + 0xd8) == *(arg1 + 0xd8))
    uint32_t zmm0_1[0x4] = *(arg2 + 0xe4)
    zmm0_1[0] = zmm0_1[0] f- *(arg1 + 0xe4)
    
    if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f))
        zmm0_1 = *(arg2 + 0xe8)
        zmm0_1[0] = zmm0_1[0] f- *(arg1 + 0xe8)
        
        if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f))
            result.b = 1
            return result

result.b = 0
return result

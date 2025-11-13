// 函数: sub_14200b1f0
// 地址: 0x14200b1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = *arg1
zmm0[0] = zmm0[0] f- *arg2
int64_t result

if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= arg3))
    zmm0 = *(arg1 + 4)
    zmm0[0] = zmm0[0] f- arg2[1]
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= arg3))
        zmm0 = *(arg1 + 8)
        zmm0[0] = zmm0[0] f- arg2[2]
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= arg3))
            result.b = 1
            return result

result.b = 0
return result

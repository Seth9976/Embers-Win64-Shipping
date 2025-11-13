// 函数: sub_141e44e80
// 地址: 0x141e44e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = *arg2
zmm0[0] = zmm0[0] f- *arg3
int64_t result

if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f))
    zmm0 = *(arg2 + 4)
    zmm0[0] = zmm0[0] f- arg3[1]
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f))
        result.b = 1
        return result

result.b = 0
return result

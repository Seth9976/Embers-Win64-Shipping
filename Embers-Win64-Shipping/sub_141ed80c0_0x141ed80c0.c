// 函数: sub_141ed80c0
// 地址: 0x141ed80c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (not(arg4[1][0] f== *arg4))
    result.b = 0
    return result

uint32_t zmm1[0x4] = *(arg2 + 4)
uint32_t zmm0[0x4] = *arg2
uint32_t zmm3[0x4] = zmm0 ^ data_142d3f780
uint32_t zmm6[0x4] = zmm1
zmm6[0] = zmm6[0] f+ zmm1[0]
zmm3[0] = zmm3[0] f+ zmm3[0]
zmm6[0] = zmm6[0] f* *(arg2 + 0xc)
zmm3[0] = zmm3[0] f* zmm0[0]
zmm6[0] = zmm6[0] f* zmm1[0]
zmm1 = *(arg3 + 4)
zmm3[0] = zmm3[0] f- zmm6[0]
zmm0 = *arg3
zmm1[0] = zmm1[0] f+ zmm1[0]
uint32_t zmm5[0x4] = zmm0 ^ data_142d3f780
zmm5[0] = zmm5[0] f+ zmm5[0]
zmm5[0] = zmm5[0] f* zmm0[0]
zmm1[0] = zmm1[0] f* zmm1[0]
zmm1[0] = zmm1[0] f* *(arg3 + 0xc)
zmm5[0] = zmm5[0] f- zmm1[0]
zmm3[0] = zmm3[0] f* *(arg2 + 8)
zmm6[0] = zmm6[0] f- zmm3[0]
zmm5[0] = zmm5[0] f* *(arg3 + 8)
zmm1[0] = zmm1[0] f- zmm5[0]
zmm6[0] = zmm6[0] f- zmm1[0]

if (not(_mm_and_ps(zmm6, 0x7fffffff)[0] f> 9.99999975e-05f))
    zmm3[0] = zmm3[0] f* *(arg2 + 0xc)
    zmm6[0] = zmm6[0] f* *(arg2 + 8)
    zmm5[0] = zmm5[0] f* *(arg3 + 0xc)
    zmm1[0] = zmm1[0] f* *(arg3 + 8)
    zmm3[0] = zmm3[0] f+ zmm6[0]
    zmm5[0] = zmm5[0] f+ zmm1[0]
    zmm3[0] = zmm3[0] f- zmm5[0]
    
    if (not(_mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999975e-05f))
        zmm3[0] = zmm3[0] f- zmm5[0]
        
        if (not(_mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999975e-05f))
            result.b = 1
            return result

result.b = 0
return result

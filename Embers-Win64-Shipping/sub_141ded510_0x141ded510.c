// 函数: sub_141ded510
// 地址: 0x141ded510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = arg1[1].d
float zmm4 = arg2
void* result

if (not(zmm4 < zmm5))
    result = *arg1
    uint128_t zmm3 = 0x3f800000
    uint128_t zmm2
    
    if (result == 0)
        zmm2 = 0x3f800000
    else
        zmm2 = *(result + 0x94)
    
    zmm2.d = zmm2.d f* *(arg1 + 0x14)
    
    if (not(__andps_xmmxud_memxud(zmm2, data_142d3f770).d f<= 9.99999994e-09f))
        zmm3 = zmm2
    
    uint128_t zmm0 = zx.o(arg1[3].d)
    arg2 = arg1[2].d f- *(arg1 + 0xc)
    zmm3 = __andps_xmmxud_memxud(zmm3, data_142d3f770)
    
    if (not(zmm4 > arg2 f* _mm_cvtepi32_ps(zmm0).d f/ zmm3.d + zmm5))
        result.b = 1
        return result

result.b = 0
return result

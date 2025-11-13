// 函数: sub_142376e80
// 地址: 0x142376e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm4[0x4] = *(arg2 + 4)
uint32_t zmm5[0x4] = arg3
float zmm1

if (__andps_xmmxud_memxud(zmm4, data_142d3f770)[0] f<= 9.99999994e-09f)
    zmm1 = *(arg2 + 0xc)
else
    zmm1 = *(arg2 + 8)
    
    if (zmm1 f> zmm4[0])
        zmm1 = *(arg2 + 0xc)
    else
        arg3 = *(arg2 + 0xc)
        arg3[0] = arg3[0] f- *(arg2 + 0x10)
        
        if (__andps_xmmxud_memxud(arg3, data_142d3f770)[0] f<= 9.99999994e-09f)
            zmm1 = *(arg2 + 0xc)
        else
            zmm1 = zmm1 f/ zmm4[0] f* arg3[0] f+ *(arg2 + 0x10)

zmm5 = __maxss_xmmss_memss(zmm5[0], 0x38d1b717)
*(arg2 + 0x10) = zmm1
int32_t temp0_3 = _mm_max_ss(arg4, zx.o(0)[0])
*(arg2 + 8) = 0
*(arg2 + 4) = temp0_3
float result = logf(zmm5[0]) * 8.68588924f
*(arg2 + 0xc) = result
return result

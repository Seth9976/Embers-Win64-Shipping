// 函数: sub_141ac6750
// 地址: 0x141ac6750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6

if (sub_141ea6180(arg1 + 0xc8, arg3) != 0)
    uint32_t zmm0[0x4] = *(arg1 + 0xdc)
    float zmm2 = *(arg1 + 0xd8)
    float zmm1 = *(arg1 + 0xe0)
    zmm6 = 0x3f800000
    zmm0[0] = zmm0[0] f* zmm0[0]
    zmm2 = zmm2 * zmm2 f+ zmm0[0]
    zmm0 = 0x3f800000
    zmm0[0] = 1f - (zmm2 + zmm1 * zmm1)
    
    if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f>= 0.00999999978f)
            && sub_141ea6180(arg1 + 0xe8, arg3) != 0)
        zmm0 = *(arg1 + 0xfc)
        zmm2 = *(arg1 + 0xf8)
        zmm1 = *(arg1 + 0x100)
        zmm0[0] = zmm0[0] f* zmm0[0]
        zmm6[0] = 1f - (zmm2 * zmm2 f+ zmm0[0] + zmm1 * zmm1)
        
        if (not(__andps_xmmxud_memxud(zmm6, data_142d3f770)[0] f>= 0.00999999978f)
                && *(arg1 + 0x12c) != 0xffff)
            return 0xff01

return 0

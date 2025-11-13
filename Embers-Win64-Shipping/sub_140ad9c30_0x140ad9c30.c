// 函数: sub_140ad9c30
// 地址: 0x140ad9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg1[3]
bool cond:0 = __andps_xmmxud_memxud(zmm1, data_142d3f770)[0] f>= 1f
arg2[3] = 0
float zmm6[0x4]
float var_18[0x4] = zmm6

if (not(cond:0))
    uint32_t zmm0[0x4] = 0xbf800000
    
    if (not(zmm1[0] < -1f))
        zmm0 = _mm_min_ss(zmm1[0], 0x3f800000)
    
    float zmm0_1[0x4] = acosf(zmm0[0])
    float zmm0_2[0x4] = sinf(zmm0_1[0])
    
    if (not(__andps_xmmxud_memxud(zmm0_2, data_142d3f770)[0] < 9.99999994e-09f))
        zmm0_1[0] = zmm0_1[0] / zmm0_2[0]
        zmm0_1[0] = zmm0_1[0] f* *arg1
        zmm0_1[0] = zmm0_1[0] f* arg1[1]
        zmm0_1[0] = zmm0_1[0] f* arg1[2]
        *arg2 = zmm0_1[0]
        arg2[1] = zmm0_1[0]
        arg2[2] = zmm0_1[0]
        return arg2

*arg2 = *arg1
arg2[1] = arg1[1]
arg2[2] = arg1[2]
return arg2

// 函数: sub_1400ed2d0
// 地址: 0x1400ed2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_18[0x4] = zmm7
float zmm6[0x4]
float var_28[0x4] = zmm6

if (arg3 s< 2)
    return 

int128_t* r9_1 = &arg1[3]
int64_t i = 1
float zmm0[0x4] = data_142d3f7c0
float zmm1[0x4] = data_142d3f7d0
float zmm2[0x4] = data_142d3f7b0

do
    float zmm3[0x4] = *r9_1
    float zmm4[0x4] = arg1[sx.q(*(arg2 + (i << 2))) * 3]
    float temp0_1[0x4] = _mm_permute_ps(zmm4, 0xff)
    float temp0_2[0x4] = _mm_broadcastss_ps(zmm4)
    float temp0_6[0x4] = _mm_fmadd_ps(
        __vmulps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0x1b), temp0_2), 
            zmm0), 
        zmm3, temp0_1)
    float temp0_7[0x4] = _mm_permute_ps(zmm4, 0x55)
    float temp0_10[0x4] =
        _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm3, 1), temp0_7), temp0_6, zmm1)
    float temp0_11[0x4] = _mm_permute_ps(zmm4, 0xaa)
    *r9_1 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0xb1), temp0_11), 
        temp0_10, zmm2)
    i += 1
    r9_1 = &r9_1[3]
while (zx.q(arg3) != i)

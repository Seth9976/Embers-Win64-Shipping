// 函数: sub_1400e9d20
// 地址: 0x1400e9d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 2)
    return 

int128_t* r9_1 = &arg1[3]
int64_t i = 1
float zmm16[0x4] = _mm_mask_load_ps(arg4, data_142d3f7c0)
float zmm17[0x4] = _mm_mask_load_ps(arg4, data_142d3f7d0)
float zmm2[0x4] = data_142d3f7b0

do
    float zmm3[0x4] = *r9_1
    float zmm4[0x4] = arg1[sx.q(*(arg2 + (i << 2))) * 3]
    float zmm5[0x4] = _mm_permute_ps(zmm4, 0xff)
    float zmm0[0x4] = _mm_broadcastss_ps(zmm4)
    zmm0 = _mm_fmadd_ps(
        _mm_mask_mul_ps(arg4, __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0x1b), zmm0), zmm16), 
        zmm3, zmm5)
    float zmm1[0x4] = _mm_permute_ps(zmm4, 0x55)
    zmm1 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm3, 1), zmm1), arg4, 
        zmm0, zmm17)
    zmm0 = _mm_permute_ps(zmm4, 0xaa)
    *r9_1 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0xb1), zmm0), zmm1, zmm2)
    i += 1
    r9_1 = &r9_1[3]
while (zx.q(arg3) != i)

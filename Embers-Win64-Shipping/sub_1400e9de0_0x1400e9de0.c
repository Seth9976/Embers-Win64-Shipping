// 函数: sub_1400e9de0
// 地址: 0x1400e9de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg3 - 1

if (i s<= 0)
    return 

int64_t i_1 = sx.q(i)
int32_t* r10_1 = arg2 + (i_1 << 2)
int128_t* rdx_2 = &arg1[i_1 * 3]
float zmm16[0x4] = _mm_mask_load_ps(arg4, data_142d3f690)
float zmm17[0x4] = _mm_mask_load_ps(arg4, data_142d3f7c0)
float zmm18[0x4] = _mm_mask_load_ps(arg4, data_142d3f7d0)
float zmm3[0x4] = data_142d3f7b0

do
    float zmm4[0x4] = *rdx_2
    float zmm5[0x4] =
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg4, zmm16, arg1[sx.q(*r10_1) * 3])
    float zmm0[0x4] = _mm_permute_ps(zmm5, 0xff)
    float zmm1[0x4] = _mm_broadcastss_ps(zmm5)
    zmm1 = _mm_fmadd_ps(
        _mm_mask_mul_ps(arg4, __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0x1b), zmm1), zmm17), 
        zmm4, zmm0)
    zmm0 = _mm_permute_ps(zmm5, 0x55)
    zmm0 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), zmm0), arg4, 
        zmm1, zmm18)
    zmm1 = _mm_permute_ps(zmm5, 0xaa)
    *rdx_2 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), zmm1), zmm0, zmm3)
    i -= 1
    r10_1 = &r10_1[-1]
    rdx_2 = &rdx_2[-3]
while (i s> 0)

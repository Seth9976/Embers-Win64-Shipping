// 函数: sub_1400eac30
// 地址: 0x1400eac30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

float zmm21[0x4] = _mm_mask_broadcastss_ps(arg5, arg3)
uint64_t i_1 = zx.q(arg4)
int64_t rax = 0x20
float zmm19[0x4] = _mm_mask_load_ps(arg5, data_142e6da00)
int128_t zmm20 = _mm_mask_load_ss(arg5, 1f)
float zmm16[0x4] = _mm_mask_load_ps(arg5, data_142d3f7c0)
float zmm17[0x4] = _mm_mask_load_ps(arg5, data_142d3f7d0)
float zmm18[0x4] = _mm_mask_load_ps(arg5, data_142d3f7b0)
char i

do
    float zmm3[0x4] = *(arg2 + rax - 0x10)
    float zmm5[0x4] =
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm21, *(arg2 + rax - 0x20))
    zmm3 =
        __vfmadd213ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm3, arg5, zmm21, *(arg1 + rax - 0x10))
    float zmm4[0x4] = __vmulps_xmmdq_xmmdq_memdq(
        _mm_mask3_fmadd_ps(*(arg2 + rax), arg5, zmm21, zmm19), *(arg1 + rax))
    float zmm1[0x4] = _mm_permute_ps(zmm5, 0xe7)
    
    if (not(zmm20 f<= zmm1 f* zmm1[0]))
        zmm1 = *(arg1 + rax - 0x20)
        arg3 = _mm_fmadd_ps(_mm_permute_ps(zmm5, 0xff), zmm1, 
            _mm_mask_mul_ps(arg5, 
                _mm_mask_mul_ps(arg5, _mm_mask_broadcastss_ps(arg5, zmm5), 
                    _mm_permute_ps(zmm1, 0x1b)), 
                zmm16))
        float zmm0[0x4] = _mm_mask3_fmadd_ps(
            _mm_mask_mul_ps(arg5, _mm_mask_permute_ps(arg5, zmm5, 0x55), _mm_permute_pd(zmm1, 1)), 
            arg5, arg3, zmm17)
        *(arg1 + rax - 0x20) = _mm_mask3_fmadd_ps(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm5, 0xaa), _mm_permute_ps(zmm1, 0xb1)), 
            arg5, zmm0, zmm18)
    
    *(arg1 + rax - 0x10) = zmm3
    *(arg1 + rax) = zmm4
    rax += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)

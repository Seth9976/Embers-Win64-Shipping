// 函数: sub_1400ebd10
// 地址: 0x1400ebd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm12
int128_t var_18 = zmm12
float zmm11[0x4]
float var_28[0x4] = zmm11
float zmm10[0x4]
float var_38[0x4] = zmm10
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm6[0x4]
float var_78[0x4] = zmm6
float zmm0[0x8] = *arg5
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))
float zmm4[0x4]

if (result.d != 0xff)
    if (arg4 s> 0)
        zmm0[0].o = _mm_broadcastss_ps(arg3)
        uint64_t i_3 = zx.q(arg4)
        result = 0x20
        zmm11 = data_142e6da00
        zmm8 = data_142d3f7c0
        zmm9 = data_142d3f7d0
        zmm10 = data_142d3f7b0
        uint64_t i
        
        do
            zmm6 = *(arg2 + result - 0x10)
            float temp0_22[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg2 + result - 0x20))
            float temp0_23[0x4] =
                __vfmadd213ps_xmmdq_xmmdq_memdq(zmm6, zmm0[0].o, *(arg1 + result - 0x10))
            float temp0_25[0x4] = __vmulps_xmmdq_xmmdq_memdq(
                _mm_fmadd_ps(*(arg2 + result), zmm0[0].o, zmm11), *(arg1 + result))
            float temp0_26[0x4] = _mm_permute_ps(temp0_22, 0xe7)
            
            if (not(0x3f800000 f<= (temp0_26 f* temp0_26[0])[0]))
                zmm4 = *(arg1 + result - 0x20)
                float temp0_32[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_22, 0xff), zmm4, 
                    __vmulps_xmmdq_xmmdq_xmmdq(
                        __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcastss_ps(temp0_22), 
                            _mm_permute_ps(zmm4, 0x1b)), 
                        zmm8))
                float temp0_36[0x4] = _mm_fmadd_ps(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_22, 0x55), 
                        _mm_permute_pd(zmm4, 1)), 
                    temp0_32, zmm9)
                *(arg1 + result - 0x20) = _mm_fmadd_ps(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_22, 0xaa), 
                        _mm_permute_ps(zmm4, 0xb1)), 
                    temp0_36, zmm10)
            
            *(arg1 + result - 0x10) = temp0_23
            *(arg1 + result) = temp0_25
            result += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (arg4 s> 0)
    zmm0[0].o = _mm_broadcastss_ps(arg3)
    uint64_t i_2 = zx.q(arg4)
    result = 0x20
    zmm11 = data_142e6da00
    zmm8 = data_142d3f7c0
    zmm9 = data_142d3f7d0
    zmm10 = data_142d3f7b0
    uint64_t i_1
    
    do
        zmm6 = *(arg2 + result - 0x10)
        float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, *(arg2 + result - 0x20))
        float temp0_3[0x4] =
            __vfmadd213ps_xmmdq_xmmdq_memdq(zmm6, zmm0[0].o, *(arg1 + result - 0x10))
        float temp0_5[0x4] = __vmulps_xmmdq_xmmdq_memdq(
            _mm_fmadd_ps(*(arg2 + result), zmm0[0].o, zmm11), *(arg1 + result))
        float temp0_6[0x4] = _mm_permute_ps(temp0_2, 0xe7)
        
        if (not(0x3f800000 f<= (temp0_6 f* temp0_6[0])[0]))
            zmm4 = *(arg1 + result - 0x20)
            float temp0_12[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_2, 0xff), zmm4, 
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcastss_ps(temp0_2), 
                        _mm_permute_ps(zmm4, 0x1b)), 
                    zmm8))
            float temp0_16[0x4] = _mm_fmadd_ps(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_2, 0x55), _mm_permute_pd(zmm4, 1)), 
                temp0_12, zmm9)
            *(arg1 + result - 0x20) = _mm_fmadd_ps(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_2, 0xaa), 
                    _mm_permute_ps(zmm4, 0xb1)), 
                temp0_16, zmm10)
        
        *(arg1 + result - 0x10) = temp0_3
        *(arg1 + result) = temp0_5
        result += 0x30
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
_mm256_zeroupper()
return result

// 函数: sub_140adde90
// 地址: 0x140adde90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm5[0x4] = arg4
int128_t zmm6 = arg6
arg4 = zx.o(0)
float var_28[0x4] = arg5

if (not(zmm6.d f<= 0f))
    arg5 = *arg2
    float zmm4[0x4] = *arg3
    float temp0_1[0x4] = _mm_sub_ps(arg5, zmm4)
    float temp0_2[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, __andps_xmmxud_memxud(temp0_1, data_143dbb000), 1))
            != 0 && _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
            __andps_xmmxud_memxud(_mm_add_ps(zmm4, arg5), data_143dbb000), 1)) != 0)
        zmm5[0] = zmm5[0] f* zmm6.d
        
        if (not(zmm5[0] f< 0f))
            arg4 = __minss_xmmss_memss(zmm5[0], 0x3f800000)
        
        float var_38[0x4]
        float (* rax_3)[0x4]
        int512_t zmm7
        rax_3, zmm7 = sub_140ae0e60(&var_38, arg2, arg3, arg4)
        float zmm6_1[0x4] = *rax_3
        *arg1 = zmm6_1
        float zmm5_1[0x4] = data_143dbb130
        float temp0_11[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
        float temp0_13[0x4] = _mm_add_ps(temp0_11, _mm_shuffle_ps(temp0_11, temp0_11, 0x4e))
        float temp0_15[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x39), temp0_13)
        float temp0_16[0x4] = _mm_rsqrt_ps(temp0_15)
        arg4 = _mm_mul_ps(temp0_15, zmm5_1)
        float temp0_22[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_16, temp0_16), arg4)), 
                temp0_16), 
            temp0_16)
        float temp0_25[0x4] = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_22, temp0_22), arg4))
        float temp0_27[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_15, 2)
        *arg1 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_25, temp0_22), temp0_22), zmm6_1)
                ^ data_143dbb120, 
            temp0_27) ^ data_143dbb120
        zmm7.o = var_28
        return arg1

*arg1 = *arg3
return arg1

// 函数: sub_141eeaa10
// 地址: 0x141eeaa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint128_t __saved_zmm8 = arg8

if (arg1[0x29] != 0 && not(0f f<= *(arg1 + 0xcc)))
    uint128_t var_18_1 = arg6
    
    if (arg3.d f< 0f)
    label_141eeaa91:
        
        if (0f f!= *(arg1 + 0xc4) || 0f f!= arg1[0x19].d)
            arg6 = *(arg2 + 4)
            float __saved_zmm9_1[0x4] = arg9
            arg9 = arg2[1].d
            uint128_t __saved_zmm10_1 = arg10
            float zmm1[0x4] = arg9
            arg10 = *arg2
            uint128_t __saved_zmm11_1 = arg11
            float __saved_zmm12_1[0x4] = arg12
            arg8.d = arg10.d f* arg10.d
            arg5.d = arg6.d f* arg6.d
            zmm1[0] = zmm1[0] * arg9[0]
            arg8.d = arg8.d f+ arg5.d
            uint128_t __saved_zmm13_1 = arg13
            zmm1[0] = zmm1[0] f+ arg8.d
            float temp0_1[0x4] = _mm_sqrt_ss(0, arg8.d)
            uint64_t var_a8
            int32_t var_a0
            
            if (not(zmm1[0] != 1f))
                arg5 = zx.o(*arg2)
                var_a0 = arg2[1].d
                arg12 = var_a0
                var_a8 = arg5.q
                arg13 = var_a8.d
                arg11 = _mm_shuffle_ps(arg5, arg5, 0x55)
            else if (zmm1[0] >= 9.99999994e-09f)
                arg12 = arg9
                arg5 = zmm1
                uint128_t zmm5 = _mm_rsqrt_ss(arg5.d, arg5.d)
                arg4.d = arg5.d f* 0.5f
                arg5.d = zmm5.d f* zmm5.d
                zmm1 = arg4
                zmm1[0] = zmm1[0] f* arg5.d
                arg3.d = 0.5f - zmm1[0]
                arg5.d = zmm5.d f* arg3.d
                zmm5.d = zmm5.d f+ arg5.d
                zmm1 = zmm5
                zmm1[0] = zmm1[0] f* zmm5.d
                arg4.d = arg4.d f* zmm1[0]
                arg5.d = zmm5.d f* (0.5f f- arg4.d)
                zmm5.d = zmm5.d f+ arg5.d
                arg5.d = arg6.d f* zmm5.d
                arg13.d = arg10.d f* zmm5.d
                arg11 = arg5
                arg12[0] = arg12[0] f* zmm5.d
            else
                arg13 = data_143dbb1f8
                arg11 = data_143dbb1fc
                arg12 = data_143dbb200
            
            (*(*arg1 + 0x6d0))(arg1, zmm1, arg3, arg4, var_a8, var_a0, arg14, __saved_zmm13_1, 
                __saved_zmm12_1, __saved_zmm11_1, __saved_zmm10_1, __saved_zmm9_1, __saved_zmm8, 
                arg7, var_18_1)
            arg12[0] = arg12[0] f* arg5.d
            arg13.d = arg13.d f* arg5.d
            arg11.d = arg11.d f* arg5.d
            float var_a0_1 = arg12[0]
            *(arg1 + 0x22c) = (_mm_unpacklo_ps(arg13, arg11.q)).q
            arg5.d = __andps_xmmxud_memxud(arg9, data_142d3f770).d f* 0.5f
            *(arg1 + 0x234) = var_a0_1
            
            if (not(temp0_1[0] f>= arg5.d))
                arg8.d = arg8.d f* 0.5f
                arg3.d = arg6.d f* arg1[0x19].d
                arg5.d = arg10.d f* *(arg1 + 0xc4)
                arg9[0] = arg9[0] f* *(arg1 + 0xcc)
                arg3.d = arg3.d f+ arg5.d
                arg3.d = arg3.d f+ arg9[0]
                
                if (not(arg3.d f<= arg8.d))
                    zmm1 = *(arg1 + 0x234)
                    *(arg1 + 0x22c) = (*(arg1 + 0x22c) ^ 0x80000000).d
                    arg5 = arg1[0x46].d ^ 0x80000000
                    *(arg1 + 0x234) = (zmm1 ^ 0x80000000)[0]
                    arg1[0x46].d = arg5.d
            
            result = arg1[0x29]
            void* rcx_3 = result[0x52]
            arg5 = *(rcx_3 + 0x1e0)
            float temp0_7[0x4] = _mm_min_ss(_mm_shuffle_ps(arg5, arg5, 0x55)[0], arg5.d)
            temp0_7[0] = temp0_7[0] f* *(rcx_3 + 0x424)
            temp0_7[0] = temp0_7[0] * 1.5f
            
            if (temp0_1[0] >= temp0_7[0])
                arg6.d = arg6.d f* arg1[0x19].d
                arg10.d = arg10.d f* *(arg1 + 0xc4)
                arg9[0] = arg9[0] f* *(arg1 + 0xcc)
                arg6.d = arg6.d f+ arg10.d
                arg6.d = arg6.d f+ arg9[0]
                
                if (not(arg6.d f>= 0f))
                    result = sub_1405be820(arg1)
                    zmm1 = 0x3e4ccccd
                    zmm1[0] = 0.200000003f f- result[0xa6].d
                    float temp0_8[0x4] = _mm_max_ss(zmm1[0], 0)
                    float zmm0 = temp0_8[0]
                    temp0_8[0] = temp0_8[0] f* arg1[0x19].d
                    arg1[0x19].d = temp0_8[0]
                    *(arg1 + 0xc4) = zmm0 f* *(arg1 + 0xc4)
            else
                *(arg1 + 0xc4) = 0
                *(arg1 + 0x22c) = data_143dbb1f8.q
                result = zx.q(data_143dbb200)
                *(arg1 + 0x234) = result.d
        else
            *(arg1 + 0x22c) = data_143dbb1f8.q
            result = zx.q(data_143dbb200)
            *(arg1 + 0x234) = result.d
    else
        (*(*arg1 + 0x3e8))()
        arg6 = arg5
        sub_1405be820(arg1)
        arg5, result = sub_1424365e0()
        arg5.d = arg5.d f* 0.899999976f
        
        if (not(arg6.d f<= arg5.d) && not(arg3.d f>= 0f))
            goto label_141eeaa91

return result

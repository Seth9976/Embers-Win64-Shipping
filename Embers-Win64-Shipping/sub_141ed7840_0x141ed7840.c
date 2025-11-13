// 函数: sub_141ed7840
// 地址: 0x141ed7840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
float zmm6[0x4] = arg2

if (0f f!= *(arg1 + 0xc4) || 0f f!= arg1[0x19].d || not(0f f== *(arg1 + 0xcc)))
    result = (*(*arg1 + 0x5c0))()
    
    if (result.b != 0 && arg1[0xb4].b == 0 && not(zmm6[0] < 9.99999997e-07f))
        float temp0_1[0x4] = _mm_max_ss(arg4[0], 0)
        float temp0_2[0x4] = _mm_max_ss(arg1[0x35].d[0], 0)
        temp0_2[0] = temp0_2[0] f* arg3.d
        float temp0_3[0x4] = _mm_max_ss(temp0_2[0], 0)
        char rcx
        
        if (temp0_3[0] != 0f)
            rcx = 0
        else
            rcx = 1
        
        char rdx_1
        
        if (temp0_1[0] != 0f)
            rdx_1 = 0
        else
            rdx_1 = 1
        
        if (rcx == 0 || rdx_1 == 0)
            uint128_t zmm7 = 0x3c5a740e
            int32_t rax_1 = *(arg1 + 0xcc)
            uint64_t var_d8_1 = *(arg1 + 0xc4)
            uint128_t zmm0 = arg1[0x36].d
            
            if (not(zmm0.d f< 0.0133333337f))
                zmm7 = __minss_xmmss_memss(zmm0.d, 0x3d4ccccd)
            
            uint128_t zmm11
            uint128_t var_68_1 = zmm11
            float zmm12[0x4]
            float var_78_1[0x4] = zmm12
            uint128_t result_2
            uint128_t result_3 = result_2
            uint64_t var_b8
            int32_t result_1
            uint128_t zmm4_1
            float zmm10[0x4]
            
            if (rdx_1 == 0)
                result_2 = arg1[0x19].d
                zmm12 = *(arg1 + 0xc4)
                zmm11 = *(arg1 + 0xcc)
                zmm12[0] = zmm12[0] * zmm12[0]
                arg2 = zmm11
                zmm0.d = result_2.d f* result_2.d
                arg2[0] = arg2[0] f* zmm11.d
                zmm12[0] = zmm12[0] f+ zmm0.d
                zmm12[0] = zmm12[0] + arg2[0]
                
                if (not(zmm12[0] != 1f))
                    zmm0 = zx.o(*(arg1 + 0xc4))
                    arg2 = zmm0
                    zmm11 = rax_1
                    zmm12 = zmm0.d
                    arg2 = _mm_shuffle_ps(arg2, arg2, 0x55)
                else if (zmm12[0] >= 9.99999994e-09f)
                    zmm0 = zmm12
                    float temp0_6[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0.d)
                    arg3 = 0x3f000000
                    arg4.d = zmm0.d f* 0.5f
                    zmm0.d = temp0_6.d f* temp0_6[0]
                    arg2 = arg4
                    arg2[0] = arg2[0] f* zmm0.d
                    arg3[0] = 0.5f - arg2[0]
                    zmm0.d = temp0_6.d f* arg3[0]
                    temp0_6[0] = temp0_6[0] f+ zmm0.d
                    temp0_6[0] = temp0_6[0] * temp0_6[0]
                    arg4.d = arg4.d f* temp0_6[0]
                    zmm4_1.d = 0.5f f- arg4.d
                    zmm0.d = temp0_6.d f* zmm4_1.d
                    temp0_6[0] = temp0_6[0] f+ zmm0.d
                    result_2.d = result_2.d f* temp0_6[0]
                    zmm12[0] = zmm12[0] * temp0_6[0]
                    arg2 = result_2
                    zmm11.d = zmm11.d f* temp0_6[0]
                else
                    zmm12 = data_143dbb1f8
                    arg2 = data_143dbb1fc
                    zmm11 = data_143dbb200
                
                zmm10 = temp0_1 ^ data_142d3f780
                zmm12[0] = zmm12[0] * zmm10[0]
                arg2[0] = arg2[0] * zmm10[0]
                zmm11.d = zmm11.d f* zmm10[0]
                var_b8.d = zmm12[0]
                var_b8:4.d = arg2[0]
                result_1 = zmm11.d
            else
                var_b8 = data_143dbb1f8.q
                result_1 = data_143dbb200
            
            result = result_1
            
            if (not(zmm6[0] < 9.99999997e-07f))
                float zmm8[0x4] = temp0_3 ^ data_142d3f780
                zmm10 = rax_1
                zmm12 = var_d8_1.d
                result_2 = result
                
                while (true)
                    float zmm5_1[0x4]
                    
                    if (zmm6[0] f<= zmm7.d || rcx != 0)
                        zmm5_1 = zmm6
                    else
                        zmm6[0] = zmm6[0] * 0.5f
                        zmm5_1 = _mm_min_ss(zmm6[0], zmm7.d)
                    
                    zmm0 = *(arg1 + 0xc4)
                    zmm6[0] = zmm6[0] - zmm5_1[0]
                    arg2 = arg1[0x19].d
                    arg4 = *(arg1 + 0xcc)
                    arg2[0] = arg2[0] * zmm8[0]
                    zmm4_1.d = zmm0.d f* zmm8[0]
                    arg2[0] = arg2[0] f+ var_b8:4.d
                    zmm4_1.d = zmm4_1.d f+ var_b8.d
                    arg2[0] = arg2[0] * zmm5_1[0]
                    zmm4_1.d = zmm4_1.d f* zmm5_1[0]
                    arg2[0] = arg2[0] + arg2[0]
                    zmm4_1.d = zmm4_1.d f+ zmm0.d
                    zmm0.d = arg4.d f* zmm8[0]
                    zmm0.d = zmm0.d f+ result_2.d
                    zmm0.d = zmm0.d f* zmm5_1[0]
                    zmm0.d = zmm0.d f+ arg4.d
                    result = zmm0.d
                    *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm4_1, arg2[0].q)).q
                    *(arg1 + 0xcc) = result
                    zmm12[0] = zmm12[0] f* *(arg1 + 0xc4)
                    zmm0.d = var_d8_1:4.d.d f* arg1[0x19].d
                    zmm10[0] = zmm10[0] f* *(arg1 + 0xcc)
                    zmm12[0] = zmm12[0] f+ zmm0.d
                    zmm12[0] = zmm12[0] + zmm10[0]
                    
                    if (zmm12[0] <= 0f)
                        break
                    
                    if (not(zmm6[0] >= 9.99999997e-07f))
                        goto label_141ed7bc0
                
                goto label_141ed7c0a
            
        label_141ed7bc0:
            zmm0 = arg1[0x19].d
            arg3 = *(arg1 + 0xc4)
            arg2 = *(arg1 + 0xcc)
            arg3[0] = arg3[0] * arg3[0]
            zmm0.d = zmm0.d f* zmm0.d
            arg2[0] = arg2[0] * arg2[0]
            arg3[0] = arg3[0] f+ zmm0.d
            arg3[0] = arg3[0] + arg2[0]
            
            if (arg3[0] <= 9.99999975e-05f)
            label_141ed7c0a:
                *(arg1 + 0xc4) = data_143dbb1f8.q
                result = data_143dbb200
                *(arg1 + 0xcc) = result
            else if (rdx_1 == 0 && not(arg3[0] > 100f))
                goto label_141ed7c0a

return result

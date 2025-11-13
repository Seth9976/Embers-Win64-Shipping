// 函数: sub_141ed8c60
// 地址: 0x141ed8c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = arg2
uint64_t result = (*(*arg1 + 0x5c0))()

if (result.b != 0 && arg1[0xb4].b == 0 && not(zmm9[0] < 9.99999997e-07f))
    result = arg1[0x29]
    
    if (result == 0 || *(result + 0xf0) != 1 || *(arg1 + 0x389) s< 0)
        int64_t rax_1 = *arg1
        float zmm7[0x4]
        float var_38_1[0x4] = zmm7
        float zmm12[0x4]
        float var_88_1[0x4] = zmm12
        float temp0_1[0x4] = _mm_max_ss(arg3[0], 0)
        (*(rax_1 + 0x6d0))(arg1)
        float zmm11[0x4] = arg5
        (*(*arg1 + 0x3f0))(arg1)
        arg3 = data_143dbb1fc
        int64_t rax_3 = *arg1
        float zmm10[0x4] = arg5
        float zmm6[0x4] = arg6
        int64_t rdi
        rdi.b = 1
        float var_d0 = data_143dbb1f8[0]
        float var_c8_1 = data_143dbb200[0]
        arg2 = zmm9
        float var_cc_1 = arg3[0]
        float var_100_1 = zmm6[0]
        float var_108_1 = temp0_1[0]
        int32_t arg_8 = 0
        float zmm8[0x4] = 0x3f800000
        char r14_1 = 1
        
        if ((*(rax_3 + 0x680))(arg1, arg2, zmm11, arg5, var_108_1, var_100_1, &var_d0, &arg_8) != 0)
            r14_1 = 0
        
        int64_t var_e0
        
        if ((*(arg1 + 0x1f1) & 2) != 0)
            zmm12 = arg1[0x46].d
            zmm7 = *(arg1 + 0x22c)
            zmm6 = *(arg1 + 0x234)
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm7[0] = zmm7[0] + zmm12[0]
            zmm7[0] = zmm7[0] + zmm6[0]
            float var_d8_2
            
            if (zmm7[0] <= 9.99999994e-09f)
                zmm7 = arg1[0x19].d
                zmm6 = *(arg1 + 0xc4)
                zmm12 = *(arg1 + 0xcc)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm12[0] = zmm12[0] * zmm12[0]
                zmm6[0] = zmm6[0] + zmm7[0]
                zmm6[0] = zmm6[0] + zmm12[0]
                int64_t* rax_6
                
                if (zmm6[0] >= 9.99999994e-09f)
                    if (not(zmm6[0] != 1f))
                        arg5 = zx.o(*(arg1 + 0xc4))
                        int32_t rax_7 = *(arg1 + 0xcc)
                        var_e0 = arg5.q
                        int32_t var_d8_3 = rax_7
                    else if (zmm6[0] >= 9.99999994e-09f)
                        float temp0_5[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
                        arg3 = 0x3f000000
                        zmm6[0] = zmm6[0] * 0.5f
                        temp0_5[0] = temp0_5[0] * temp0_5[0]
                        zmm6[0] = zmm6[0] * temp0_5[0]
                        arg3[0] = 0.5f - zmm6[0]
                        temp0_5[0] = temp0_5[0] * arg3[0]
                        temp0_5[0] = temp0_5[0] + temp0_5[0]
                        temp0_5[0] = temp0_5[0] * temp0_5[0]
                        zmm6[0] = zmm6[0] * temp0_5[0]
                        temp0_5[0] = temp0_5[0] * (0.5f - zmm6[0])
                        temp0_5[0] = temp0_5[0] + temp0_5[0]
                        zmm6[0] = zmm6[0] * temp0_5[0]
                        zmm7[0] = zmm7[0] * temp0_5[0]
                        zmm12[0] = zmm12[0] * temp0_5[0]
                        arg5 = zmm6
                        var_e0.d = zmm6[0]
                        var_e0:4.d = zmm7[0]
                        float var_d8_5 = zmm12[0]
                    else
                        arg3 = data_143dbb1f8
                        var_e0:4.d = data_143dbb1fc[0]
                        arg5 = arg3
                        var_e0.d = arg3[0]
                        float var_d8_4 = data_143dbb200[0]
                    
                    rax_6 = &var_e0
                else
                    rax_6 = sub_141f133e0(arg1[0x16], &var_e0)
                    arg5 = *rax_6
                
                arg2 = zmm11
                arg5[0] = arg5[0] * zmm11[0]
                arg2[0] = arg2[0] f* *(rax_6 + 4)
                zmm11[0] = zmm11[0] f* rax_6[1].d
                arg5 = _mm_unpacklo_ps(arg5, arg2[0].q)
                var_d8_2 = zmm11[0]
            else
                if (not(zmm7[0] != 1f))
                    arg5 = zx.o(*(arg1 + 0x22c))
                    zmm6 = *(arg1 + 0x234)
                    var_e0 = arg5.q
                    zmm7 = var_e0.d
                    arg2 = _mm_shuffle_ps(arg5, arg5, 0x55)
                else if (zmm7[0] >= 9.99999994e-09f)
                    float temp0_3[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                    arg3 = 0x3f000000
                    zmm7[0] = zmm7[0] * 0.5f
                    temp0_3[0] = temp0_3[0] * temp0_3[0]
                    zmm7[0] = zmm7[0] * temp0_3[0]
                    arg3[0] = 0.5f - zmm7[0]
                    temp0_3[0] = temp0_3[0] * arg3[0]
                    temp0_3[0] = temp0_3[0] + temp0_3[0]
                    temp0_3[0] = temp0_3[0] * temp0_3[0]
                    zmm7[0] = zmm7[0] * temp0_3[0]
                    temp0_3[0] = temp0_3[0] * (0.5f - zmm7[0])
                    temp0_3[0] = temp0_3[0] + temp0_3[0]
                    zmm12[0] = zmm12[0] * temp0_3[0]
                    zmm7[0] = zmm7[0] * temp0_3[0]
                    arg2 = zmm12
                    zmm6[0] = zmm6[0] * temp0_3[0]
                else
                    zmm7 = data_143dbb1f8
                    arg2 = data_143dbb1fc
                    zmm6 = data_143dbb200
                
                zmm7[0] = zmm7[0] * zmm11[0]
                arg2[0] = arg2[0] * zmm11[0]
                zmm6[0] = zmm6[0] * zmm11[0]
                arg5 = _mm_unpacklo_ps(zmm7, arg2[0].q)
                var_d8_2 = zmm6[0]
            
            zmm6 = arg6
            *(arg1 + 0x22c) = arg5.q
            *(arg1 + 0x234) = var_d8_2
            *(arg1 + 0x28c) = 0x3f800000
        
        (*(*arg1 + 0x6b8))(arg1, arg2)
        bool cond:1_1 = 0f f!= *(arg1 + 0x22c)
        zmm10[0] = zmm10[0] f* *(arg1 + 0x28c)
        zmm10 = _mm_max_ss(zmm10[0], arg5[0])
        float temp0_8[0x4] = __maxss_xmmss_memss(zmm10[0], arg_8)
        
        if (cond:1_1 || 0f f!= arg1[0x46].d || 0f f!= *(arg1 + 0x234))
            rdi.b = 0
        else
            rdi.b = 1
        
        result = (*(*arg1 + 0x418))(arg1, temp0_8)
        char rsi_1 = result.b
        
        if (rdi.b == 0)
            if (rsi_1 == 0)
                goto label_141ed92b8
            
            goto label_141ed90f9
        
        float zmm14[0x4]
        float result_1
        
        if (r14_1 != 0 || rsi_1 != 0)
        label_141ed90f9:
            bool cond:2_1 = (arg1[0x3e].b & 1) == 0
            int32_t rax_11 = *(arg1 + 0xcc)
            var_e0 = *(arg1 + 0xc4)
            
            if (cond:2_1)
                arg3 = temp0_1
            else
                arg3 = *(arg1 + 0x1ac)
            
            result = (*(*arg1 + 0x890))(arg1, zmm9, arg3, zmm6)
            
            if (rsi_1 == 0)
                zmm14 = 0x3f000000
            else
                arg5 = arg1[0x19].d
                arg3 = *(arg1 + 0xc4)
                arg2 = *(arg1 + 0xcc)
                arg5[0] = arg5[0] * arg5[0]
                arg3[0] = arg3[0] * arg3[0]
                arg2[0] = arg2[0] * arg2[0]
                arg3[0] = arg3[0] + arg5[0]
                temp0_8[0] = temp0_8[0] * temp0_8[0]
                arg3[0] = arg3[0] + arg2[0]
                
                if (arg3[0] >= temp0_8[0])
                    zmm14 = 0x3f000000
                else
                    zmm11 = var_e0:4.d
                    zmm7 = var_e0.d
                    zmm11[0] = zmm11[0] f* arg1[0x46].d
                    zmm7[0] = zmm7[0] f* *(arg1 + 0x22c)
                    zmm6 = rax_11
                    zmm6[0] = zmm6[0] f* *(arg1 + 0x234)
                    zmm11[0] = zmm11[0] + zmm7[0]
                    zmm11[0] = zmm11[0] + zmm6[0]
                    
                    if (zmm11[0] <= 0f)
                        zmm14 = 0x3f000000
                    else
                        zmm7[0] = zmm7[0] * zmm7[0]
                        zmm11[0] = zmm11[0] * zmm11[0]
                        zmm6[0] = zmm6[0] * zmm6[0]
                        zmm7[0] = zmm7[0] + zmm11[0]
                        zmm7[0] = zmm7[0] + zmm6[0]
                        
                        if (zmm7[0] != 1f)
                            zmm14 = 0x3f000000
                            
                            if (zmm7[0] >= 9.99999994e-09f)
                                float temp0_9[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                                arg3 = 0x3f000000
                                zmm7[0] = zmm7[0] * 0.5f
                                temp0_9[0] = temp0_9[0] * temp0_9[0]
                                zmm7[0] = zmm7[0] * temp0_9[0]
                                arg3[0] = 0.5f - zmm7[0]
                                temp0_9[0] = temp0_9[0] * arg3[0]
                                temp0_9[0] = temp0_9[0] + temp0_9[0]
                                temp0_9[0] = temp0_9[0] * temp0_9[0]
                                zmm7[0] = zmm7[0] * temp0_9[0]
                                temp0_9[0] = temp0_9[0] * (0.5f - zmm7[0])
                                temp0_9[0] = temp0_9[0] + temp0_9[0]
                                zmm7[0] = zmm7[0] * temp0_9[0]
                                zmm11[0] = zmm11[0] * temp0_9[0]
                                zmm6[0] = zmm6[0] * temp0_9[0]
                            else
                                zmm7 = data_143dbb1f8
                                zmm11 = data_143dbb1fc
                                zmm6 = data_143dbb200
                        else
                            zmm14 = 0x3f000000
                        
                        zmm7[0] = zmm7[0] * temp0_8[0]
                        zmm11[0] = zmm11[0] * temp0_8[0]
                        zmm6[0] = zmm6[0] * temp0_8[0]
                        arg5 = _mm_unpacklo_ps(zmm7, zmm11[0].q)
                        result_1 = zmm6[0]
                    label_141ed92a1:
                        result = zx.q(result_1)
                        *(arg1 + 0xc4) = arg5.q
                        *(arg1 + 0xcc) = result.d
        else
        label_141ed92b8:
            
            if (rdi.b == 0)
                zmm6 = arg1[0x46].d
                float zmm13[0x4] = *(arg1 + 0x22c)
                zmm12 = *(arg1 + 0x234)
                zmm13[0] = zmm13[0] * zmm13[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm12[0] = zmm12[0] * zmm12[0]
                zmm13[0] = zmm13[0] + zmm6[0]
                zmm13[0] = zmm13[0] + zmm12[0]
                
                if (zmm13[0] != 1f)
                    zmm14 = 0x3f000000
                    
                    if (zmm13[0] >= 9.99999994e-09f)
                        float temp0_12[0x4] = _mm_rsqrt_ss(zmm13[0], zmm13[0])
                        arg3 = 0x3f000000
                        zmm13[0] = zmm13[0] * 0.5f
                        temp0_12[0] = temp0_12[0] * temp0_12[0]
                        zmm13[0] = zmm13[0] * temp0_12[0]
                        arg3[0] = 0.5f - zmm13[0]
                        temp0_12[0] = temp0_12[0] * arg3[0]
                        temp0_12[0] = temp0_12[0] + temp0_12[0]
                        temp0_12[0] = temp0_12[0] * temp0_12[0]
                        zmm13[0] = zmm13[0] * temp0_12[0]
                        temp0_12[0] = temp0_12[0] * (0.5f - zmm13[0])
                        temp0_12[0] = temp0_12[0] + temp0_12[0]
                        zmm6[0] = zmm6[0] * temp0_12[0]
                        zmm13[0] = zmm13[0] * temp0_12[0]
                        zmm11 = zmm6
                        zmm12[0] = zmm12[0] * temp0_12[0]
                    else
                        zmm13 = data_143dbb1f8
                        zmm11 = data_143dbb1fc
                        zmm12 = data_143dbb200
                else
                    arg5 = zx.o(*(arg1 + 0x22c))
                    zmm14 = 0x3f000000
                    zmm12 = *(arg1 + 0x234)
                    var_e0 = arg5.q
                    zmm13 = var_e0.d
                    zmm11 = _mm_shuffle_ps(arg5, arg5, 0x55)
                
                zmm6 = *(arg1 + 0xc4)
                zmm7 = arg1[0x19].d
                float zmm5_2[0x4] = *(arg1 + 0xcc)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                float zmm4_2 = zmm9[0]
                zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                zmm6[0] = zmm6[0] + zmm7[0]
                float temp0_13 = _mm_min_ss(zmm4_2 * temp0_1[0], 0x3f800000)
                zmm6[0] = zmm6[0] + zmm5_2[0]
                float temp0_14[0x4] = _mm_sqrt_ss(0, zmm6[0])
                zmm13[0] = zmm13[0] * temp0_14[0]
                zmm11[0] = zmm11[0] * temp0_14[0]
                zmm6[0] = zmm6[0] - zmm13[0]
                zmm12[0] = zmm12[0] * temp0_14[0]
                zmm6[0] = zmm6[0] * temp0_13
                zmm6[0] = zmm6[0] - zmm6[0]
                zmm7[0] = zmm7[0] - zmm11[0]
                zmm7[0] = zmm7[0] * temp0_13
                zmm7[0] = zmm7[0] - zmm7[0]
                zmm5_2[0] = zmm5_2[0] - zmm12[0]
                zmm5_2[0] = zmm5_2[0] * temp0_13
                zmm5_2[0] = zmm5_2[0] - zmm5_2[0]
                arg5 = _mm_unpacklo_ps(zmm6, zmm7[0].q)
                result_1 = zmm5_2[0]
                goto label_141ed92a1
            
            zmm14 = 0x3f000000
        
        if (arg4 != 0)
            zmm9[0] = zmm9[0] * temp0_1[0]
            zmm8[0] = 1f - _mm_min_ss(zmm9[0], 0x3f800000)[0]
            zmm8[0] = zmm8[0] f* *(arg1 + 0xc4)
            zmm8[0] = zmm8[0] f* arg1[0x19].d
            zmm8[0] = zmm8[0] f* *(arg1 + 0xcc)
            *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm8, zmm8[0].q)).q
            result = zx.q(zmm8[0])
            *(arg1 + 0xcc) = result.d
        
        float zmm3[0x4]
        
        if (rdi.b == 0)
            if ((*(*arg1 + 0x418))(arg1, zmm10) != 0)
                arg5 = arg1[0x19].d
                arg3 = *(arg1 + 0xc4)
                arg2 = *(arg1 + 0xcc)
                arg3[0] = arg3[0] * arg3[0]
                arg5[0] = arg5[0] * arg5[0]
                arg2[0] = arg2[0] * arg2[0]
                arg3[0] = arg3[0] + arg5[0]
                arg3[0] = arg3[0] + arg2[0]
                zmm10 = _mm_sqrt_ss(0, arg3[0])
            
            bool cond:7_1 = zmm10[0] >= 9.99999975e-05f
            zmm7 = arg1[0x46].d
            zmm8 = *(arg1 + 0x234)
            zmm9[0] = zmm9[0] f* *(arg1 + 0x22c)
            zmm7[0] = zmm7[0] * zmm9[0]
            zmm9[0] = zmm9[0] f+ *(arg1 + 0xc4)
            zmm8[0] = zmm8[0] * zmm9[0]
            zmm7[0] = zmm7[0] f+ arg1[0x19].d
            zmm8[0] = zmm8[0] f+ *(arg1 + 0xcc)
            *(arg1 + 0xc4) = zmm9[0]
            arg1[0x19].d = zmm7[0]
            *(arg1 + 0xcc) = zmm8[0]
            
            if (cond:7_1)
                zmm9[0] = zmm9[0] * zmm9[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm9[0]
                zmm10[0] = zmm10[0] * zmm10[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] <= zmm10[0])
                    arg2 = zx.o(*(arg1 + 0xc4))
                    result = zx.q(*(arg1 + 0xcc))
                else
                    float temp0_21[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                    zmm7[0] = zmm7[0] * zmm14[0]
                    temp0_21[0] = temp0_21[0] * temp0_21[0]
                    zmm7[0] = zmm7[0] * temp0_21[0]
                    zmm14[0] = zmm14[0] - zmm7[0]
                    temp0_21[0] = temp0_21[0] * zmm14[0]
                    temp0_21[0] = temp0_21[0] + temp0_21[0]
                    temp0_21[0] = temp0_21[0] * temp0_21[0]
                    zmm7[0] = zmm7[0] * temp0_21[0]
                    arg2 = zx.o(var_e0)
                    zmm14[0] = zmm14[0] - zmm7[0]
                    temp0_21[0] = temp0_21[0] * zmm14[0]
                    temp0_21[0] = temp0_21[0] + temp0_21[0]
                    temp0_21[0] = temp0_21[0] * zmm10[0]
                    zmm9[0] = zmm9[0] * temp0_21[0]
                    zmm7[0] = zmm7[0] * temp0_21[0]
                    arg2[0] = zmm9[0]
                    zmm8[0] = zmm8[0] * temp0_21[0]
                    float temp0_22[0x4] = _mm_shuffle_ps(arg2, arg2, 0xe1)
                    temp0_22[0] = zmm7[0]
                    arg2 = _mm_shuffle_ps(temp0_22, temp0_22, 0xe1)
                    result = zx.q(zmm8[0])
                    var_e0 = arg2.q
            else
                arg2 = zx.o(var_e0)
                arg5 = data_143dbb200
                zmm3 = data_143dbb1fc
                arg2[0] = data_143dbb1f8[0]
                result = zx.q(arg5[0])
                float temp0_19[0x4] = _mm_shuffle_ps(arg2, arg2, 0xe1)
                temp0_19[0] = zmm3[0]
                float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xe1)
                var_e0 = temp0_20.q
                arg2 = temp0_20
            
            *(arg1 + 0xc4) = arg2.q
            *(arg1 + 0xcc) = result.d
        
        if (r14_1 == 0)
            if ((*(*arg1 + 0x418))(arg1, arg_8) == 0)
                zmm10 = arg_8
            else
                arg5 = arg1[0x19].d
                arg3 = *(arg1 + 0xc4)
                arg2 = *(arg1 + 0xcc)
                arg3[0] = arg3[0] * arg3[0]
                arg5[0] = arg5[0] * arg5[0]
                arg2[0] = arg2[0] * arg2[0]
                arg3[0] = arg3[0] + arg5[0]
                arg3[0] = arg3[0] + arg2[0]
                zmm10 = _mm_sqrt_ss(zx.o(0)[0], arg3[0])
            
            bool cond:9_1 = zmm10[0] >= 9.99999975e-05f
            zmm6 = var_d0
            zmm7 = var_cc_1
            zmm8 = var_c8_1
            zmm6[0] = zmm6[0] * zmm9[0]
            zmm7[0] = zmm7[0] * zmm9[0]
            zmm6[0] = zmm6[0] f+ *(arg1 + 0xc4)
            zmm8[0] = zmm8[0] * zmm9[0]
            zmm7[0] = zmm7[0] f+ arg1[0x19].d
            zmm8[0] = zmm8[0] f+ *(arg1 + 0xcc)
            *(arg1 + 0xc4) = zmm6[0]
            arg1[0x19].d = zmm7[0]
            *(arg1 + 0xcc) = zmm8[0]
            
            if (cond:9_1)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm10[0] = zmm10[0] * zmm10[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] <= zmm10[0])
                    arg2 = zx.o(*(arg1 + 0xc4))
                    result = zx.q(*(arg1 + 0xcc))
                else
                    float temp0_27[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                    zmm7[0] = zmm7[0] * zmm14[0]
                    temp0_27[0] = temp0_27[0] * temp0_27[0]
                    zmm7[0] = zmm7[0] * temp0_27[0]
                    zmm14[0] = zmm14[0] - zmm7[0]
                    temp0_27[0] = temp0_27[0] * zmm14[0]
                    temp0_27[0] = temp0_27[0] + temp0_27[0]
                    temp0_27[0] = temp0_27[0] * temp0_27[0]
                    zmm7[0] = zmm7[0] * temp0_27[0]
                    arg2 = zx.o(var_e0)
                    zmm14[0] = zmm14[0] - zmm7[0]
                    temp0_27[0] = temp0_27[0] * zmm14[0]
                    temp0_27[0] = temp0_27[0] + temp0_27[0]
                    temp0_27[0] = temp0_27[0] * zmm10[0]
                    zmm6[0] = zmm6[0] * temp0_27[0]
                    zmm7[0] = zmm7[0] * temp0_27[0]
                    arg2[0] = zmm6[0]
                    zmm8[0] = zmm8[0] * temp0_27[0]
                    float temp0_28[0x4] = _mm_shuffle_ps(arg2, arg2, 0xe1)
                    temp0_28[0] = zmm7[0]
                    result = zx.q(zmm8[0])
                    arg2 = _mm_shuffle_ps(temp0_28, temp0_28, 0xe1)
            else
                arg5 = data_143dbb200
                arg2 = zx.o(var_e0)
                zmm3 = data_143dbb1fc
                arg2[0] = data_143dbb1f8[0]
                result = zx.q(arg5[0])
                float temp0_25[0x4] = _mm_shuffle_ps(arg2, arg2, 0xe1)
                temp0_25[0] = zmm3[0]
                arg2 = _mm_shuffle_ps(temp0_25, temp0_25, 0xe1)
            
            *(arg1 + 0xc4) = arg2.q
            *(arg1 + 0xcc) = result.d
        
        if ((*(arg1 + 0x389) & 0x10) != 0)
            return (*(*arg1 + 0xac0))(arg1, zmm9)

return result

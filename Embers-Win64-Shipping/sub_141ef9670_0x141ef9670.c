// 函数: sub_141ef9670
// 地址: 0x141ef9670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_3 = arg1[0x97]
int64_t* rsi = arg1
float zmm7[0x4] = arg2
uint64_t result_2 = result_3
uint64_t result

if (result_3 != 0)
label_141ef96cc:
    result = zx.q(*(rsi + 0x16a))
    double zmm6[0x2]
    double var_48_1[0x2] = zmm6
    double zmm8[0x2]
    double var_68_1[0x2] = zmm8
    uint32_t zmm9[0x4]
    uint32_t var_78_1[0x4] = zmm9
    double zmm10[0x2]
    double var_88_1[0x2] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    uint32_t zmm12[0x4]
    uint32_t var_a8_1[0x4] = zmm12
    double zmm13[0x2]
    double var_b8_1[0x2] = zmm13
    int64_t* arg_8
    float zmm2[0x4]
    uint128_t zmm3
    
    if (result.b == 1)
        sub_1405be820(rsi)
        zmm6 = *(result_3 + 0xf0)
        double zmm4_1[0x2] = zx.o(0)
        bool cond:0_1 = zmm6[0].d f<= 9.99999994e-09f
        zmm4_1[0] = fconvert.d(zmm7[0])
        zmm4_1[0] = zmm4_1[0] f+ *(result_3 + 0x108)
        *(result_3 + 0x108) = zmm4_1.q
        uint32_t zmm0_1[0x4]
        uint128_t zmm5_1
        
        if (cond:0_1)
            zmm4_1 = 0x3f800000
        label_141ef99c1:
            char rax_2
            
            if (_mm_and_ps(*(rsi + 0xc4), 0x7fffffff)[0] f> 9.99999975e-05f)
                rax_2 = 0
            else if (_mm_and_ps(rsi[0x19].d, 0x7fffffff)[0] f> 9.99999975e-05f)
                rax_2 = 0
            else if (_mm_and_ps(*(rsi + 0xcc), 0x7fffffff)[0] f> 9.99999975e-05f)
                rax_2 = 0
            else
                rax_2 = 1
            
            if (rax_2 == 0)
                zmm0_1 = data_143dbb1f8
                zmm5_1.d = 1f f- zmm4_1[0].d
                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0].d
                zmm2 = zmm5_1
                arg2 = zmm5_1
                zmm2[0] = zmm2[0] f* *(result_3 + 0xa4)
                arg2[0].d = arg2[0].d f* *(result_3 + 0xa8)
                zmm5_1.d = zmm5_1.d f* *(result_3 + 0xac)
                zmm2[0] = zmm2[0] f+ zmm0_1[0]
                zmm0_1 = data_143dbb1fc
                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0].d
                arg2[0].d = arg2[0].d f+ zmm0_1[0]
                zmm0_1 = data_143dbb200
                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0].d
                zmm5_1.d = zmm5_1.d f+ zmm0_1[0]
                *(result_3 + 0xb0) = (_mm_unpacklo_ps(zmm2, arg2[0])).q
                *(result_3 + 0xb8) = zmm5_1.d
                result = 0
                *(rsi + 0x1f1) &= 0x7f
                
                if (zmm4_1[0].d f>= 1.14999998f)
                    result = 0x80
                
                *(rsi + 0x1f1) |= result.b
                *(result_3 + 0xd0) = *(result_3 + 0xe0)
            else
                *(result_3 + 0xb0) = data_143dbb1f8.q
                *(result_3 + 0xb8) = data_143dbb200
                result = *(result_3 + 0x100)
                *(result_3 + 0x108) = result
                *(rsi + 0x1f1) |= 0x80
                *(result_3 + 0xd0) = *(result_3 + 0xe0)
        else
            zmm3 = zx.o(*(result_3 + 0x100))
            zmm0_1 = zmm6
            zmm0_1[0] = zmm0_1[0] f* 0.150000006f
            zmm7 = zx.o(0)
            arg2 = _mm_cvtps_pd(zmm0_1[0].q)
            zmm0_1 = _mm_cvtpd_ps(zmm4_1)
            arg2[0] = arg2[0] f+ zmm3.q
            arg2 = _mm_cvtps_pd(_mm_min_ss(_mm_cvtpd_ps(arg2)[0], zmm0_1[0])[0].q)
            zmm3.q = zmm3.q f- arg2[0]
            *(result_3 + 0x108) = arg2.q
            zmm0_1 = _mm_cvtpd_ps(zmm3)
            zmm6[0].d = zmm6[0].d f- zmm0_1[0]
            zmm6[0].d = zmm6[0].d f/ zmm6[0].d
            
            if (zmm6[0].d f>= zmm7[0])
                zmm4_1 = _mm_min_ss(zmm6[0].d, 0x3f933333)
                
                if (zmm4_1[0].d f>= 0.999899983f)
                    goto label_141ef99c1
            else
                zmm4_1 = zx.o(0)
            
            zmm0_1 = data_143dbb1f8
            zmm5_1.d = 1f f- zmm4_1[0].d
            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0].d
            zmm2 = zmm5_1
            zmm2[0] = zmm2[0] f* *(result_3 + 0xa8)
            arg2 = zmm5_1
            zmm3.d = zmm5_1.d f* *(result_3 + 0xa4)
            arg2[0].d = arg2[0].d f* *(result_3 + 0xac)
            zmm3.d = zmm3.d f+ zmm0_1[0]
            zmm0_1 = data_143dbb1fc
            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0].d
            zmm2[0] = zmm2[0] f+ zmm0_1[0]
            zmm0_1 = data_143dbb200
            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0].d
            arg2[0].d = arg2[0].d f+ zmm0_1[0]
            *(result_3 + 0xb0) = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
            result = zx.q(arg2[0].d)
            *(result_3 + 0xb8) = result.d
            zmm3 = *(result_3 + 0xe4)
            zmm11 = *(result_3 + 0xc0)
            zmm0_1 = zmm3
            zmm10 = *(result_3 + 0xc4)
            zmm6 = *(result_3 + 0xe0)
            zmm8 = *(result_3 + 0xe8)
            zmm12 = *(result_3 + 0xc8)
            zmm9 = *(result_3 + 0xec)
            zmm13 = *(result_3 + 0xcc)
            zmm11[0] = zmm11[0] f* zmm6[0].d
            zmm0_1[0] = zmm0_1[0] f* zmm10[0].d
            zmm8[0].d = zmm8[0].d f* zmm12[0]
            zmm11[0] = zmm11[0] f+ zmm0_1[0]
            zmm9[0] = zmm9[0] f* zmm13[0].d
            zmm11[0] = zmm11[0] f+ zmm8[0].d
            zmm11[0] = zmm11[0] f+ zmm9[0]
            
            if (not(zmm11[0] >= zmm7[0]))
                zmm5_1 ^= data_142d3f780
            
            zmm0_1 = zmm5_1
            zmm6[0].d = zmm6[0].d f* zmm4_1[0].d
            arg_8.d = 0x322bcc77
            zmm0_1[0] = zmm0_1[0] f* zmm11[0]
            zmm3.d = zmm3.d f* zmm4_1[0].d
            zmm6[0].d = zmm6[0].d f+ zmm0_1[0]
            zmm8[0].d = zmm8[0].d f* zmm4_1[0].d
            zmm0_1 = zmm5_1
            zmm9[0] = zmm9[0] f* zmm4_1[0].d
            zmm0_1[0] = zmm0_1[0] f* zmm10[0].d
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
            zmm3.d = zmm3.d f+ zmm0_1[0]
            zmm0_1 = zmm5_1
            zmm0_1[0] = zmm0_1[0] f* zmm12[0]
            zmm5_1.d = zmm5_1.d f* zmm13[0].d
            zmm8[0].d = zmm8[0].d f+ zmm0_1[0]
            zmm6[0].d = zmm3.d
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
            zmm9[0] = zmm9[0] f+ zmm5_1.d
            zmm5_1 = data_143f3a9f0
            zmm6[0].d = zmm8[0].d
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
            zmm6[0].d = zmm9[0]
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
            arg2 = _mm_mul_ps(zmm6, zmm6)
            arg2 = _mm_add_ps(arg2, _mm_shuffle_ps(arg2, arg2, 0x4e))
            zmm4_1 = _mm_add_ps(_mm_shuffle_ps(arg2, arg2, 0x39), arg2)
            arg2 = _mm_rsqrt_ps(zmm4_1)
            zmm3 = _mm_mul_ps(zmm4_1, zmm5_1)
            zmm2 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(arg2, arg2), zmm3)), arg2), 
                arg2)
            zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
            zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
            *(result_3 + 0xd0) = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, zmm2), zmm2), zmm6) ^ data_143f3a9e0, 
                zmm0_1) ^ data_143f3a9e0
    else if (result.b == 2)
        if (0f f!= *(rsi + 0xc4) || 0f f!= rsi[0x19].d || 0f f!= *(rsi + 0xcc))
            result.b = 0
        else
            result.b = 1
        
        arg2 = *(result_3 + 0x120)
        
        if (result.b != 0)
            arg2[0].d = arg2[0].d f* 0.5f
        
        zmm3 = 0x3f800000
        
        if (zmm7[0] f>= arg2[0].d)
            *(result_3 + 0xb0) = data_143dbb1f8.q
            result = zx.q(data_143dbb200)
        else
            zmm2 = 0x3f800000
            zmm7[0] = zmm7[0] f/ arg2[0].d
            zmm2[0] = 1f - zmm7[0]
            arg2 = zmm2
            zmm2[0] = zmm2[0] f* *(result_3 + 0xb0)
            arg2[0].d = arg2[0].d f* *(result_3 + 0xb4)
            zmm2[0] = zmm2[0] f* *(result_3 + 0xb8)
            *(result_3 + 0xb0) = (_mm_unpacklo_ps(zmm2, arg2[0])).q
            result = zx.q(zmm2[0])
        
        float zmm0[0x4] = *(result_3 + 0x124)
        bool cond:3_1 = zmm7[0] >= zmm0[0]
        *(result_3 + 0xb8) = result.d
        zmm8 = *(result_3 + 0xe0)
        uint32_t zmm4[0x4]
        
        if (cond:3_1)
            *(result_3 + 0xd0) = *(result_3 + 0xe0)
        else
            zmm11 = *(result_3 + 0xd4)
            zmm12 = *(result_3 + 0xd0)
            zmm13 = *(result_3 + 0xd8)
            zmm2 = zmm12
            zmm7[0] = zmm7[0] / zmm0[0]
            zmm2[0] = zmm2[0] f* zmm8[0].d
            double zmm5[0x2] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm11[0] = zmm11[0] f* zmm5[0].d
            zmm9 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            zmm13[0].d = zmm13[0].d f* zmm9[0]
            zmm2[0] = zmm2[0] + zmm11[0]
            zmm10 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
            zmm0 = *(result_3 + 0xdc)
            zmm0[0] = zmm0[0] f* zmm10[0].d
            zmm2[0] = zmm2[0] f+ zmm13[0].d
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm0 = zmm7
            
            if (not(zmm2[0] >= 0f))
                zmm3 = 0xbf800000
                zmm0 ^= data_142d3f780
            
            zmm3.d = zmm3.d f- zmm0[0]
            zmm7[0] = zmm7[0] f* zmm8[0].d
            zmm6 = zmm3
            zmm2 = zmm3
            zmm6[0].d = zmm6[0].d f* zmm12[0]
            arg2 = zmm3
            zmm3.d = zmm3.d f* *(result_3 + 0xdc)
            zmm6[0].d = zmm6[0].d f+ zmm7[0]
            zmm2[0] = zmm2[0] * zmm11[0]
            arg2[0].d = arg2[0].d f* zmm13[0].d
            zmm7[0] = zmm7[0] f* zmm5[0].d
            zmm5 = data_143f3a9f0
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
            zmm2[0] = zmm2[0] + zmm7[0]
            zmm7[0] = zmm7[0] f* zmm9[0]
            zmm7[0] = zmm7[0] f* zmm10[0].d
            arg2[0].d = arg2[0].d f+ zmm7[0]
            zmm6[0].d = zmm2[0]
            arg_8.d = 0x322bcc77
            zmm3.d = zmm3.d f+ zmm7[0]
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
            zmm6[0].d = arg2[0].d
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
            zmm6[0].d = zmm3.d
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
            arg2 = _mm_mul_ps(zmm6, zmm6)
            arg2 = _mm_add_ps(arg2, _mm_shuffle_ps(arg2, arg2, 0x4e))
            zmm4 = _mm_add_ps(_mm_shuffle_ps(arg2, arg2, 0x39), arg2)
            arg2 = _mm_rsqrt_ps(zmm4)
            zmm3 = _mm_mul_ps(zmm4, zmm5)
            zmm2 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(arg2, arg2), zmm3)), arg2), arg2)
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
            zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
            *(result_3 + 0xd0) = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, zmm2), zmm2), zmm6) ^ data_143f3a9e0, zmm0)
                ^ data_143f3a9e0
        
        if (not(_mm_and_ps(*(result_3 + 0xb0), 0x7fffffff)[0] > 0.00999999978f)
                && not(_mm_and_ps(*(result_3 + 0xb4), 0x7fffffff)[0] > 0.00999999978f)
                && not(_mm_and_ps(*(result_3 + 0xb8), 0x7fffffff)[0] > 0.00999999978f))
            zmm3 = *(result_3 + 0xd0)
            zmm4 = data_143f3a9d0
            arg_8.d = 0x3727c5ac
            arg2 = _mm_sub_ps(zmm3, zmm8)
            zmm2 = _mm_shuffle_ps(0x3727c5ac, 0x3727c5ac, 0)
            uint32_t temp0_74 = _mm_movemask_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(arg2, zmm4), 1))
            
            if (temp0_74 != 0)
                result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(zmm2, 
                    _mm_and_ps(_mm_add_ps(zmm8, zmm3), zmm4), 1)))
            
            if (temp0_74 == 0 || result.d == 0)
                *(rsi + 0x1f1) |= 0x80
                *(result_3 + 0xb0) = data_143dbb1f8.q
                result = zx.q(data_143dbb200)
                *(result_3 + 0xb8) = result.d
                *(result_3 + 0xd0) = zmm8
    else if (result.b == 3)
        result = sub_1405be820(rsi)
        uint64_t result_5 = result
        
        if (result != 0)
            result = *(result + 0xf0)
            
            if (result != 0)
                zmm6 = *(result + 0x750)
                zmm10 = 0x3f800000
                
                if (*(result_3 + 0x158) s> 0)
                    zmm7 = zmm6
                    zmm7[0] = zmm7[0] - 1f
                    
                    do
                        void* rcx_3 = *(result_3 + 0x150)
                        
                        if (zmm7[0] f< *(rcx_3 + 0x34))
                            break
                        
                        int32_t rax_6 = *(result_3 + 0x158)
                        
                        if (rax_6 != 1)
                            memmove(rcx_3, rcx_3 + 0x38, (rax_6 - 1) * 0x38)
                            rax_6 = *(result_3 + 0x158)
                        
                        *(result_3 + 0x158) = rax_6 - 1
                        sub_1407c4070(result_3 + 0x150)
                    while (*(result_3 + 0x158) s> 0)
                
                int512_t zmm1
                result, zmm1 = sub_141fb5b60(*(result_5 + 0xf0), rsi[0x29])
                zmm7 = 0x7fffffff
                int32_t rdi_1 = 0
                uint64_t result_4 = result
                int32_t r12_1 = 1
                uint32_t zmm0_2[0x4]
                
                if (result != 0 && *(result + 8) s> 0)
                    int64_t** rsi_1 = nullptr
                    int32_t rbx = 0
                    int32_t i_2
                    
                    do
                        int64_t rax_9 = *result_4
                        char var_e8 = 0
                        uint32_t var_e4 = 0
                        int64_t* rdi_2 = *(rsi_1 + rax_9)
                        uint32_t var_118[0x4]
                        sub_141ed18e0(&var_118, rdi_2)
                        int128_t var_108
                        sub_141ed18e0(&var_108:8, rdi_2)
                        uint32_t var_f8[0x4]
                        int64_t r8_2
                        int512_t zmm3_1
                        r8_2, zmm3_1, zmm6, zmm7 = sub_141ed18e0(&var_f8[1], rdi_2)
                        zmm1 = sub_140ae04f0(&var_118[3], rdi_2, r8_2, zmm3_1)
                        int64_t* rcx_10 = rdi_2[1]
                        char* rdx_8 = *rcx_10
                        
                        if (&rdx_8[1] u> rcx_10[1])
                            (*(*rdi_2 + 0x150))(rdi_2, &var_e8, 1)
                        else
                            var_e8 = *rdx_8
                            int64_t* rax_12 = rdi_2[1]
                            *rax_12 += 1
                        
                        if ((rdi_2[5].b & 2) != 0)
                        label_141ef9fa4:
                            uint32_t** rcx_13 = rdi_2[1]
                            uint32_t* rdx_10 = *rcx_13
                            
                            if (&rdx_10[1] u> rcx_13[1])
                                int32_t* rdx_11 = &var_e4
                                
                                if ((*(rdi_2 + 0x29) & 0x20) != 0)
                                    sub_140b54070(rdi_2, rdx_11, zmm1)
                                else
                                    (*(*rdi_2 + 0x150))(rdi_2, rdx_11, 4)
                            else
                                var_e4 = *rdx_10
                                int64_t* rax_18 = rdi_2[1]
                                *rax_18 += 4
                        else if ((*(*rdi_2 + 0x30))(rdi_2) == 0 && (*(rdi_2 + 0x29) & 1) == 0)
                            goto label_141ef9fa4
                        
                        if (not(_mm_and_ps(var_e4, zmm7)[0] f> 9.99999994e-09f))
                            var_e4 = (*(*(rsi_1 + *result_4) + 0xb0))[0]
                        
                        int64_t rdi_3 = sx.q(*(result_3 + 0x158))
                        int32_t rax_21 = (rdi_3 + 1).d
                        *(result_3 + 0x158) = rax_21
                        
                        if (rax_21 s> *(result_3 + 0x15c))
                            sub_1407c3b60(result_3 + 0x150)
                        
                        result = *(result_3 + 0x150)
                        rbx += 1
                        int64_t rcx_17 = rdi_3 * 0x38
                        rsi_1 = &rsi_1[1]
                        *(rcx_17 + result) = var_118
                        zmm1.o = var_108
                        *(rcx_17 + result + 0x10) = zmm1.o
                        *(rcx_17 + result + 0x20) = var_f8
                        zmm1.o = zx.o(var_e8.q)
                        *(rcx_17 + result + 0x30) = (zmm1.o).q
                        i_2 = *(result_4 + 8)
                    while (rbx s< i_2)
                    
                    result_3 = result_2
                    rsi = arg1
                    
                    if (data_143a2d684 s> 0)
                        int32_t i = 1
                        
                        if (*(result_3 + 0x158) s> 1)
                            int64_t rdi_4 = 0x38
                            result = 1
                            int32_t r15_1 = 2
                            
                            do
                                uint32_t (* r9_1)[0x4] = *(result_3 + 0x150)
                                zmm0_2 = *(r9_1 + rdi_4)
                                zmm0_2[0] = zmm0_2[0] f- *(r9_1 + rdi_4 - 0x38)
                                
                                if (not(_mm_and_ps(zmm0_2, zmm7)[0] f> 9.99999975e-05f))
                                    zmm0_2 = *(r9_1 + rdi_4 + 4)
                                    zmm0_2[0] = zmm0_2[0] f- *(r9_1 + rdi_4 - 0x34)
                                    
                                    if (not(_mm_and_ps(zmm0_2, zmm7)[0] f> 9.99999975e-05f))
                                        zmm0_2 = *(r9_1 + rdi_4 + 8)
                                        zmm0_2[0] = zmm0_2[0] f- *(r9_1 + rdi_4 - 0x30)
                                        
                                        if (not(_mm_and_ps(zmm0_2, zmm7)[0] f> 9.99999975e-05f))
                                            zmm0_2 = *(r9_1 + rdi_4 - 0x1c)
                                            float zmm2_1 = *(r9_1 + rdi_4 - 0x20)
                                            zmm1.o = *(r9_1 + rdi_4 - 0x18)
                                            zmm0_2[0] = zmm0_2[0] f* zmm0_2[0]
                                            zmm1.d = zmm1.d f* zmm1.d
                                            
                                            if (not(zmm2_1 * zmm2_1 f+ zmm0_2[0] f+ zmm1.d
                                                    <= 9.99999905e-09f))
                                                zmm0_2 = *(r9_1 + rdi_4 + 0x1c)
                                                zmm2_1 = *(r9_1 + rdi_4 + 0x18)
                                                zmm1.o = *(r9_1 + rdi_4 + 0x20)
                                                zmm0_2[0] = zmm0_2[0] f* zmm0_2[0]
                                                zmm1.d = zmm1.d f* zmm1.d
                                                
                                                if (not(zmm2_1 * zmm2_1 f+ zmm0_2[0] f+ zmm1.d
                                                        <= 9.99999905e-09f))
                                                    int32_t rcx_19 = *(result_3 + 0x158)
                                                    int32_t rax_23 = rcx_19 - i
                                                    
                                                    if (rax_23 != 1)
                                                        memmove(sx.q(i) * 0x38 + r9_1, 
                                                            sx.q(r15_1) * 0x38 + r9_1, 
                                                            (rax_23 - 1) * 0x38)
                                                        rcx_19 = *(result_3 + 0x158)
                                                    
                                                    *(result_3 + 0x158) = rcx_19 - 1
                                                    sub_1407c4070(result_3 + 0x150)
                                                    result -= 1
                                                    i -= 1
                                                    r15_1 -= 1
                                                    rdi_4 -= 0x38
                                
                                i += 1
                                r15_1 += 1
                                result += 1
                                rdi_4 += 0x38
                            while (i s< *(result_3 + 0x158))
                            
                            i_2 = *(result_4 + 8)
                    
                    int64_t* r14_2 = *result_4
                    
                    if (i_2 != 0)
                        int32_t i_1
                        
                        do
                            void*** rdi_5 = *r14_2
                            
                            if (rdi_5 != 0)
                                int64_t rcx_23 = rdi_5[0x12]
                                
                                if (rcx_23 != 0)
                                    sub_140a74f90(rcx_23)
                                
                                sub_140b4cb40(rdi_5)
                                result, zmm1 = j_sub_140a74f90(rdi_5)
                            
                            r14_2 = &r14_2[1]
                            i_1 = i_2
                            i_2 -= 1
                        while (i_1 != 1)
                    
                    rdi_1 = 0
                    *(result_4 + 8) = 0
                    
                    if (*(result_4 + 0xc) != 0)
                        result = sub_140638c50(result_4, 0)
                
                int32_t rdx_16 = *(result_3 + 0x158)
                int32_t rcx_27 = 0
                int64_t var_168
                uint32_t var_158[0x4]
                float var_d8[0x4]
                
                if (rdx_16 - 1 s<= 0)
                label_141efa283:
                    
                    if (rdx_16 s> 0)
                        void* r8_5 = *(result_3 + 0x150)
                        zmm1.o = *(r8_5 + 0x34)
                        zmm1.d = zmm1.d f- zmm6[0].d
                        zmm1.o = _mm_and_ps(zmm1.o, zmm7)
                        
                        if (rdx_16 s> 1)
                            uint32_t (* rcx_28)[0x4] = r8_5 + 0x6c
                            
                            do
                                zmm0_2 = *rcx_28
                                int32_t rax_29 = r12_1
                                zmm0_2[0] = zmm0_2[0] f- zmm6[0].d
                                zmm0_2 = _mm_and_ps(zmm0_2, zmm7)
                                bool cond:4_1 = zmm1.d f<= zmm0_2[0]
                                zmm0_2 = _mm_min_ss(zmm0_2[0], zmm1.d)
                                
                                if (cond:4_1)
                                    rax_29 = rdi_1
                                
                                r12_1 += 1
                                rcx_28 = &(*rcx_28)[0xe]
                                rdi_1 = rax_29
                                zmm1.o = zmm0_2
                            while (r12_1 s< rdx_16)
                        
                        void* rdi_8 = sx.q(rdi_1) * 0x38 + r8_5
                        *(rsi + 0xc4) = *(rdi_8 + 0x18)
                        *(rsi + 0xcc) = *(rdi_8 + 0x20)
                        *(rsi + 0x22c) = *(rdi_8 + 0x24)
                        *(rsi + 0x234) = *(rdi_8 + 0x2c)
                        void* rax_34 = rsi[0x29]
                        zmm0_2 = _mm_cvtepi32_ps(zx.o(*(rdi_8 + 0x30)))
                        zmm0_2[0] = zmm0_2[0] f* 1.40625f
                        *(rax_34 + 0x248) = zmm0_2[0]
                        (*(*rsi + 0x460))(rsi, zmm1)
                        void* rax_36 = rsi[0x29]
                        void* r14_3 = *(rax_36 + 0x280)
                        
                        if (r14_3 != 0)
                            int32_t rax_37 = *(rax_36 + 0x304)
                            var_168 = *(rax_36 + 0x2fc)
                            int32_t var_160_4 = rax_37
                            sub_141f48c60(r14_3, &var_168)
                            int64_t* rcx_31 = rsi[0x29]
                            int64_t* rax_40 =
                                sub_140adf5d0((*(*rcx_31 + 0x778))(rcx_31, &var_d8), &var_158)
                            int32_t rax_41 = rax_40[1].d
                            var_168 = *rax_40
                            int32_t var_160_5 = rax_41
                            sub_141f48ec0(r14_3, &var_168)
                        
                        *(result_3 + 0xb0) = *rdi_8
                        *(result_3 + 0xb8) = *(rdi_8 + 8)
                        result = sub_140ade170(rdi_8 + 0xc, &var_d8)
                        *(result_3 + 0xd0) = *result
                else
                    void* rdi_6 = *(result_3 + 0x150)
                    result = rdi_6 + 0x34
                    
                    while (zmm6[0].d f< *result || not(zmm6[0].d f<= *(result + 0x38)))
                        rcx_27 += 1
                        result += 0x38
                        
                        if (rcx_27 s>= rdx_16 - 1)
                            rdi_1 = 0
                            goto label_141efa283
                    
                    int64_t rcx_35 = sx.q(rcx_27)
                    int32_t* r15_2 = rcx_35 * 0x38
                    int128_t* r14_4 = (rcx_35 + 1) * 0x38
                    zmm1.o = *(r15_2 + rdi_6 + 0x34)
                    zmm0_2 = *(r14_4 + rdi_6 + 0x34)
                    zmm0_2[0] = zmm0_2[0] f- zmm1.d
                    
                    if (zmm0_2[0] f<= 9.99999994e-09f)
                        zmm6 = 0x3f800000
                    else
                        zmm6[0].d = zmm6[0].d f- zmm1.d
                        zmm6[0].d = zmm6[0].d f/ zmm0_2[0]
                        
                        if (zmm6[0].d f>= 0f)
                            zmm6 = _mm_min_ss(zmm6[0].d, 0x3f800000)
                        else
                            zmm6 = zx.o(0)
                    
                    zmm0_2 = *(r14_4 + rdi_6)
                    zmm0_2[0] = zmm0_2[0] f- *(r15_2 + rdi_6)
                    zmm1.o = *(r14_4 + rdi_6 + 4)
                    zmm1.d = zmm1.d f- *(r15_2 + rdi_6 + 4)
                    zmm0_2[0] = zmm0_2[0] f* zmm6[0].d
                    zmm1.d = zmm1.d f* zmm6[0].d
                    zmm0_2[0] = zmm0_2[0] f+ *(r15_2 + rdi_6)
                    zmm1.d = zmm1.d f+ *(r15_2 + rdi_6 + 4)
                    uint32_t var_148_1 = zmm0_2[0]
                    zmm0_2 = *(r14_4 + rdi_6 + 8)
                    zmm0_2[0] = zmm0_2[0] f- *(r15_2 + rdi_6 + 8)
                    int32_t var_144_1 = zmm1.d
                    zmm0_2[0] = zmm0_2[0] f* zmm6[0].d
                    zmm0_2[0] = zmm0_2[0] f+ *(r15_2 + rdi_6 + 8)
                    uint32_t result_1 = zmm0_2[0]
                    float (* rax_44)[0x4]
                    int512_t zmm7_1
                    rax_44, zmm7_1 = sub_140ade170(rdi_6 + 0xc + r14_4, &var_158)
                    zmm7_1.o = *rax_44
                    float (* rax_45)[0x4]
                    int32_t zmm6_1
                    float zmm7_2[0x4]
                    rax_45, zmm6_1, zmm7_2 = sub_140ade170(rdi_6 + 0xc + r15_2, &var_168)
                    float zmm3_2[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x55)
                    float zmm4_2[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xaa)
                    float zmm2_2[0x4] = *rax_45
                    float zmm5_2[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xff)
                    float zmm8_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                    zmm2_2[0] = zmm2_2[0] * zmm7_2[0]
                    uint32_t zmm0_5[0x4] = zmm8_1
                    zmm0_5[0] = zmm0_5[0] f* zmm3_2[0]
                    zmm9 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
                    zmm11 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
                    zmm2_2[0] = zmm2_2[0] f+ zmm0_5[0]
                    zmm9[0] = zmm9[0] f* zmm4_2[0]
                    zmm2_2[0] = zmm2_2[0] f+ zmm9[0]
                    zmm0_5 = zmm11
                    zmm0_5[0] = zmm0_5[0] f* zmm5_2[0]
                    zmm2_2[0] = zmm2_2[0] f+ zmm0_5[0]
                    float zmm1_1[0x4]
                    
                    if (zmm2_2[0] < 0f)
                        zmm1_1 = 0xbf800000
                    else
                        zmm1_1 = 0x3f800000
                    
                    zmm12 = data_143f3a9f0
                    zmm10[0].d = 1f f- zmm6_1
                    zmm7_2[0] = zmm7_2[0] f* zmm6_1
                    arg_8.d = 0x322bcc77
                    zmm4_2[0] = zmm4_2[0] f* zmm6_1
                    zmm3_2[0] = zmm3_2[0] f* zmm6_1
                    zmm0_5 = zmm10
                    zmm0_5[0] = zmm0_5[0] f* zmm1_1[0]
                    zmm5_2[0] = zmm5_2[0] f* zmm6_1
                    zmm2_2[0] = zmm2_2[0] f* zmm0_5[0]
                    zmm8_1[0] = zmm8_1[0] f* zmm0_5[0]
                    zmm9[0] = zmm9[0] f* zmm0_5[0]
                    zmm7_2[0] = zmm7_2[0] + zmm2_2[0]
                    zmm11[0] = zmm11[0] f* zmm0_5[0]
                    zmm3_2[0] = zmm3_2[0] + zmm8_1[0]
                    zmm4_2[0] = zmm4_2[0] f+ zmm9[0]
                    zmm7_2 = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xe1)
                    zmm5_2[0] = zmm5_2[0] + zmm11[0]
                    zmm7_2[0] = zmm3_2[0]
                    zmm7_2 = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xc6)
                    zmm7_2[0] = zmm4_2[0]
                    zmm7_2 = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x27)
                    zmm7_2[0] = zmm5_2[0]
                    zmm7_2 = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x39)
                    var_158 = zmm7_2
                    zmm1_1 = _mm_mul_ps(zmm7_2, zmm7_2)
                    zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                    zmm4_2 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                    zmm1_1 = _mm_rsqrt_ps(zmm4_2)
                    zmm3_2 = _mm_mul_ps(zmm4_2, zmm12)
                    zmm2_2 = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm12, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3_2)), 
                            zmm1_1), 
                        zmm1_1)
                    zmm12 = _mm_sub_ps(zmm12, _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_2))
                    zmm0_5 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
                    zmm4_2 = *(r14_4 + rdi_6 + 0x18)
                    zmm4_2[0] = zmm4_2[0] f- *(r15_2 + rdi_6 + 0x18)
                    zmm12 = _mm_mul_ps(zmm12, zmm2_2)
                    zmm4_2[0] = zmm4_2[0] f* zmm6_1
                    zmm12 = _mm_add_ps(zmm12, zmm2_2)
                    zmm2_2 = *(r14_4 + rdi_6 + 0x1c)
                    zmm2_2[0] = zmm2_2[0] f- *(r15_2 + rdi_6 + 0x1c)
                    zmm4_2[0] = zmm4_2[0] f+ *(r15_2 + rdi_6 + 0x18)
                    zmm12 = _mm_mul_ps(zmm12, zmm7_2)
                    zmm2_2[0] = zmm2_2[0] f* zmm6_1
                    zmm12 ^= data_143f3a9e0
                    zmm2_2[0] = zmm2_2[0] f+ *(r15_2 + rdi_6 + 0x1c)
                    zmm12 = _mm_and_ps(zmm12, zmm0_5)
                    zmm0_5 = *(r14_4 + rdi_6 + 0x20)
                    zmm0_5[0] = zmm0_5[0] f- *(r15_2 + rdi_6 + 0x20)
                    zmm12 ^= data_143f3a9e0
                    zmm0_5[0] = zmm0_5[0] f* zmm6_1
                    zmm0_5[0] = zmm0_5[0] f+ *(r15_2 + rdi_6 + 0x20)
                    uint32_t var_160_6 = zmm0_5[0]
                    *(rsi + 0xc4) = (_mm_unpacklo_ps(zmm4_2, zmm2_2[0].q)).q
                    *(rsi + 0xcc) = var_160_6
                    uint32_t rax_47
                    
                    if (data_143f3a91c == 0)
                        *(rsi + 0x22c) = *(r14_4 + rdi_6 + 0x24)
                        rax_47 = *(r14_4 + rdi_6 + 0x2c)
                    else
                        zmm0_5 = *(r14_4 + rdi_6 + 0x2c)
                        zmm0_5[0] = zmm0_5[0] f- *(r15_2 + rdi_6 + 0x2c)
                        zmm4_2 = *(r14_4 + rdi_6 + 0x24)
                        zmm4_2[0] = zmm4_2[0] f- *(r15_2 + rdi_6 + 0x24)
                        zmm2_2 = *(r14_4 + rdi_6 + 0x28)
                        zmm2_2[0] = zmm2_2[0] f- *(r15_2 + rdi_6 + 0x28)
                        zmm0_5[0] = zmm0_5[0] f* zmm6_1
                        zmm4_2[0] = zmm4_2[0] f* zmm6_1
                        zmm0_5[0] = zmm0_5[0] f+ *(r15_2 + rdi_6 + 0x2c)
                        zmm2_2[0] = zmm2_2[0] f* zmm6_1
                        zmm4_2[0] = zmm4_2[0] f+ *(r15_2 + rdi_6 + 0x24)
                        zmm2_2[0] = zmm2_2[0] f+ *(r15_2 + rdi_6 + 0x28)
                        rax_47 = zmm0_5[0]
                        *(rsi + 0x22c) = (_mm_unpacklo_ps(zmm4_2, zmm2_2[0].q)).q
                    
                    *(rsi + 0x234) = rax_47
                    int64_t var_124_1 = 0
                    zmm0_5 = _mm_cvtepi32_ps(zx.o(*(r15_2 + rdi_6 + 0x30)))
                    zmm0_5[0] = zmm0_5[0] f* 1.40625f
                    uint32_t var_128 = zmm0_5[0]
                    int64_t var_134_1 = 0
                    zmm0_5 = _mm_cvtepi32_ps(zx.o(*(r14_4 + rdi_6 + 0x30)))
                    zmm0_5[0] = zmm0_5[0] f* 1.40625f
                    uint32_t var_138 = zmm0_5[0]
                    float (* rax_50)[0x4]
                    int512_t zmm7_3
                    rax_50, zmm7_3 = sub_140ade170(&var_138, &var_168)
                    zmm7_3.o = *rax_50
                    float (* rax_51)[0x4]
                    int32_t zmm6_2
                    float zmm7_4[0x4]
                    rax_51, zmm6_2, zmm7_4 = sub_140ade170(&var_128, &var_d8)
                    float zmm3_3[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0x55)
                    float zmm4_3[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xaa)
                    float zmm2_3[0x4] = *rax_51
                    uint32_t zmm5_3[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xff)
                    float zmm8_2[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                    zmm2_3[0] = zmm2_3[0] * zmm7_4[0]
                    zmm8_2[0] = zmm8_2[0] * zmm3_3[0]
                    zmm9 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                    zmm11 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                    zmm2_3[0] = zmm2_3[0] + zmm8_2[0]
                    float zmm0_6[0x4] = zmm9
                    zmm0_6[0] = zmm0_6[0] * zmm4_3[0]
                    zmm2_3[0] = zmm2_3[0] + zmm0_6[0]
                    zmm11[0] = zmm11[0] f* zmm5_3[0]
                    zmm2_3[0] = zmm2_3[0] + zmm11[0]
                    
                    if (not(zmm2_3[0] >= 0f))
                        zmm10 ^= data_142d3f780
                    
                    zmm5_3[0] = zmm5_3[0] f* zmm6_2
                    arg_8.d = 0x322bcc77
                    zmm7_4[0] = zmm7_4[0] f* zmm6_2
                    zmm0_6 = zmm10
                    zmm0_6[0] = zmm0_6[0] * zmm2_3[0]
                    zmm4_3[0] = zmm4_3[0] f* zmm6_2
                    zmm7_4[0] = zmm7_4[0] + zmm0_6[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm6_2
                    zmm0_6 = zmm10
                    zmm0_6[0] = zmm0_6[0] * zmm8_2[0]
                    zmm7_4 = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xe1)
                    zmm3_3[0] = zmm3_3[0] + zmm0_6[0]
                    zmm0_6 = zmm10
                    zmm0_6[0] = zmm0_6[0] f* zmm9[0]
                    zmm10[0].d = zmm10[0].d f* zmm11[0]
                    zmm4_3[0] = zmm4_3[0] + zmm0_6[0]
                    zmm7_4[0] = zmm3_3[0]
                    zmm7_4 = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xc6)
                    zmm5_3[0] = zmm5_3[0] f+ zmm10[0].d
                    zmm7_4[0] = zmm4_3[0]
                    zmm7_4 = _mm_shuffle_ps(zmm7_4, zmm7_4, 0x27)
                    zmm7_4[0] = zmm5_3[0]
                    zmm5_3 = data_143f3a9f0
                    zmm7_4 = _mm_shuffle_ps(zmm7_4, zmm7_4, 0x39)
                    float zmm1_2[0x4] = _mm_mul_ps(zmm7_4, zmm7_4)
                    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                    zmm4_3 = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                    zmm1_2 = _mm_rsqrt_ps(zmm4_3)
                    zmm3_3 = _mm_mul_ps(zmm4_3, zmm5_3)
                    zmm2_3 = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_3)), 
                            zmm1_2), 
                        zmm1_2)
                    zmm5_3 = _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(zmm2_3, zmm2_3), zmm3_3))
                    zmm0_6 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_3, 2)
                    var_158 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_3, zmm2_3), zmm2_3), zmm7_4)
                            ^ data_143f3a9e0, 
                        zmm0_6) ^ data_143f3a9e0
                    int32_t var_c8
                    sub_140adf5d0(&var_158, &var_c8)
                    *(rsi[0x29] + 0x248) = var_c8.d
                    (*(*rsi + 0x460))(rsi)
                    void* rax_54 = rsi[0x29]
                    void* rdi_9 = *(rax_54 + 0x280)
                    
                    if (rdi_9 != 0)
                        int32_t rax_55 = *(rax_54 + 0x304)
                        var_168 = *(rax_54 + 0x2fc)
                        int32_t var_160_8 = rax_55
                        sub_141f48c60(rdi_9, &var_168)
                        int64_t* rcx_45 = rsi[0x29]
                        int64_t* rax_58 =
                            sub_140adf5d0((*(*rcx_45 + 0x778))(rcx_45, &var_d8), &var_158)
                        int32_t rax_59 = rax_58[1].d
                        var_168 = *rax_58
                        int32_t var_160_9 = rax_59
                        sub_141f48ec0(rdi_9, &var_168)
                    
                    result = zx.q(result_1)
                    *(result_3 + 0xb0) = var_148_1.q
                    *(result_3 + 0xb8) = result.d
                    *(result_3 + 0xd0) = zmm12
                *(rsi + 0x1f1) &= 0x7f
else
    result = (*(arg1[0x28] + 0x28))(&arg1[0x28])
    result_2 = result
    result_3 = result
    rsi[0x97] = result
    
    if (result != 0)
        goto label_141ef96cc

return result

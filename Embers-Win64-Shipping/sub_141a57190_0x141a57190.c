// 函数: sub_141a57190
// 地址: 0x141a57190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x18))

if (rbx == 0)
    sub_141a56f70(arg1, arg2)
else
    uint64_t var_a0
    uint128_t zmm6_1 = sub_141a570a0(arg1[1].q + sx.q(*(arg1 + 0x18) - 1) * 0x14, &var_a0, 
        *(*arg3 + (sx.q(arg3[1].d) << 2) - 4))
    int64_t i = rbx - 1
    
    if (rbx == 1)
        *arg2 = var_a0
        int32_t var_98
        arg2[2] = var_98
    else
        uint128_t var_38_1 = zmm6_1
        int32_t var_90 = 0x3f800000
        int32_t rax_23
        uint128_t zmm0_1
        
        do
            i -= 1
            int64_t rcx_1 = sx.q(i.d)
            uint64_t rdx_2 = zx.q(*(*arg3 + (rcx_1 << 2)))
            int128_t* r8_2 = arg1[1].q + rcx_1 * 0x14
            uint128_t zmm2_1
            
            if ((rdx_2 - 1).d u> 0xfffffffd)
                int64_t var_8c_2 = 0
            else
                zmm0_1.d = float.s(rdx_2)
                zmm2_1.q =
                    _mm_cvtepi32_pd(zx.q(r8_2[1].d - *(r8_2 + 0xc))).q f* _mm_cvtps_pd(zmm0_1.q).q
                int64_t rcx_3 = int.q(zmm2_1.q)
                
                if (rcx_3 != -0x8000000000000000)
                    zmm0_1.q = float.d(rcx_3)
                    
                    if (not(zmm0_1.q f== zmm2_1.q))
                        zmm2_1.q = float.d(rcx_3
                            - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2_1, zmm2_1.q))) & 1))
                
                int32_t var_b4_1 = 0
                int64_t var_8c_1 = int.d(zmm2_1.q).q
            
            float var_6c
            float* rax_14
            uint128_t zmm6_2
            rax_14, zmm6_2 = sub_141a56f70(r8_2, &var_6c)
            float var_78
            sub_141a359a0(&var_78, rax_14, &var_90)
            float zmm4_1[0x2] = var_78
            uint64_t rdx_5
            uint128_t zmm1_1
            
            if (zmm4_1[0] != 1f)
                zmm2_1.q = _mm_cvtepi32_pd(zx.q(var_a0:4.d)).q f+ _mm_cvtps_pd(var_a0:4.d.q).q
                zmm2_1.q = zmm2_1.q f* _mm_cvtps_pd(zmm4_1).q
                int64_t rcx_7 = int.q(zmm2_1.q)
                zmm0_1 = zmm2_1
                
                if (rcx_7 != -0x8000000000000000)
                    zmm1_1.q = float.d(rcx_7)
                    
                    if (not(zmm1_1.q f== zmm2_1.q))
                        zmm0_1.q = float.d(rcx_7
                            - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
                
                zmm2_1.q = zmm2_1.q f- zmm0_1.q
                zmm1_1 = _mm_cvtpd_ps(zmm2_1)
                int32_t arg_c
                
                if (zmm1_1.d f>= zmm6_2.d)
                    zmm1_1 = _mm_min_ss(zmm1_1.d, 0x3f7fffff)
                    
                    if (zmm1_1.d f>= zmm6_2.d)
                        goto label_141a57371
                    
                    arg_c = 0
                else
                    zmm1_1 = zmm6_2
                label_141a57371:
                    
                    if (zmm1_1.d f>= 0.99999994f)
                        arg_c = 0x3f7fffff
                    else
                        arg_c = zmm1_1.d
                rdx_5 = int.d(zmm0_1.q).q
            else
                rdx_5 = var_a0
            
            int64_t var_74
            zmm2_1.d = rdx_5:4.d.d f+ var_74:4.d
            zmm1_1.d = zmm2_1.d f+ zmm2_1.d
            zmm1_1.d = zmm1_1.d f- 0.5f
            int32_t rcx_9 = int.d(zmm1_1.d)
            zmm1_1 = zmm2_1
            int32_t rcx_13 = int.d(zmm1_1.d)
            
            if (rcx_13 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_13)).d f== zmm1_1.d))
                zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_13
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1.q)) & 1)))
            
            zmm2_1.d = zmm2_1.d f- zmm1_1.d
            
            if (not(zmm2_1.d f>= zmm6_2.d))
                int32_t arg_24 = 0
            else if (zmm2_1.d f>= 0.99999994f)
                arg_24 = 0x3f7fffff
            else
                arg_24 = zmm2_1.d
            
            rax_23 = ((rcx_9 s>> 1) + rdx_5.d + var_74.d).q:4.d
            zmm1_1.d = var_a0.d.d f* zmm4_1[0]
            int32_t var_98_1 = rax_23
            zmm0_1.d = zmm1_1.d
            uint64_t var_84 = zmm0_1.q
            var_a0 = zmm0_1.q
        while (i != 0)
        
        *arg2 = zmm0_1.q
        arg2[2] = rax_23

return arg2

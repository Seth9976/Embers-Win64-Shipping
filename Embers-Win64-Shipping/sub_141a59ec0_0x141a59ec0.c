// 函数: sub_141a59ec0
// 地址: 0x141a59ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f5b298

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0x810)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x268))(rcx_1) == 2)
        int32_t var_38
        sub_140af61f0(&var_38)
        int64_t var_48
        sub_140af6280(&var_48)
        int64_t r8 = var_48
        int64_t temp0 = _mm_cvtepi32_pd(zx.q(var_48:4.d))
        uint128_t zmm1
        zmm1.q = _mm_cvtepi32_pd(zx.q(r8.d)).q f/ temp0
        float temp0_2 = _mm_cvtpd_ps(zmm1)
        uint64_t zmm0
        zmm0.d = -0.5f - (temp0_2 + temp0_2)
        int32_t r11_2 = neg.d(int.d(zmm0.d) s>> 1)
        int32_t rbp = r11_2 * 0x3c
        int32_t r14 = rbp * 0x3c
        int32_t rcx_4
        
        if (r11_2 s> 0)
            int32_t var_2c
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_2c)
            int32_t var_30
            int32_t rcx_6 = var_30 + divs.dp.d(temp2_1:temp3_1, r11_2)
            int32_t rdx_5 = rcx_6 s/ 0x3c
            int32_t var_34
            int32_t r10_2 = var_34 + rdx_5
            int32_t rdx_10 = r10_2 s/ 0x3c
            int32_t r9_4 = var_38 + rdx_10
            int32_t r10_3 = r10_2 + rdx_10 * 0xffffffc4
            char var_28
            int32_t r9_6
            
            if (var_28 == 0)
                r9_6 = r9_4 * r14
            else
                int32_t rsi_1 = 4
                
                if (r11_2 s<= 0x1e)
                    rsi_1 = 2
                
                int32_t rdx_12 = r9_4 * 0x3c + r10_3
                zmm1.q = _mm_cvtepi32_pd(zx.q(rdx_12)).q f* 0.10000000000000001
                int64_t rdi_1 = int.q(zmm1.q)
                
                if (zmm1.q f>= 0.0)
                    if (rdi_1 != -0x8000000000000000 && not(float.d(rdi_1) f== zmm1.q))
                        zmm1.q = float.d(rdi_1
                            - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))
                else if (rdi_1 != -0x8000000000000000 && not(float.d(rdi_1) f== zmm1.q))
                    zmm1.q = float.d(rdi_1
                        + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1) ^ 1))
                
                r9_6 = r9_4 * r14 - (rdx_12 - int.d(zmm1.q)) * rsi_1
            
            rcx_4 = (rcx_6 + rdx_5 * 0xffffffc4) * r11_2 + r10_3 * rbp
                + mods.dp.d(temp2_1:temp3_1, r11_2) + r9_6
        else
            rcx_4 = 0
        
        int32_t var_3c = 0
        sub_1408ec700(arg2, rcx_4.q, r8, *(arg3 + 8))
        return arg2

*arg2 = 0
return arg2

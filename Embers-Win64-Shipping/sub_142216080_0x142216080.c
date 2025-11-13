// 函数: sub_142216080
// 地址: 0x142216080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rcx = *(arg1 + 0x18)

if (rcx != 0)
    void* rsi_1 = **(*(arg1 + 0x10) + 0x40)
    float rax_3
    float zmm2[0x4]
    
    if ((*(*(rsi_1 + 0x30) + 0x59) & 1) != 0)
        *(arg1 + 0x14c) = data_143dbb1f8.q
        *(arg1 + 0x154) = data_143dbb200
        *(arg1 + 0x140) = data_143dbb1f8.q
        rax_3 = data_143dbb200
    else
        zmm2 = *(rcx + 0x1d0)
        float var_f0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
        *(arg1 + 0x14c) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
        *(arg1 + 0x154) = var_f0_1
        zmm2 = *(rcx + 0x1d0)
        rax_3 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
        *(arg1 + 0x140) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    
    *(arg1 + 0x148) = rax_3
    int64_t rax_5 = sx.q(*(arg1 + 0x118))
    *(arg1 + 0x158) = 1
    float var_e8[0x4] = *(rcx + 0x1e0)
    
    if (rax_5.d s> 0)
        float zmm5 = 3.40282347e+38f
        int64_t r10_1 = 0
        float zmm3[0x4] = var_e8[2]
        float zmm4[0x4] = 0x7f7fffff
        float zmm0[0x4] = var_e8[0]
        float zmm6[0x4] = 0xff7fffff
        float zmm7[0x4] = 0xff7fffff
        float zmm8[0x4]
        float var_58_1[0x4] = zmm8
        float zmm9[0x4] = var_e8[1]
        float zmm10[0x4]
        float var_78_1[0x4] = zmm10
        uint32_t zmm11[0x4] = 0x7fffffff
        float zmm14[0x4] = 0xff7fffff
        float zmm15[0x4] = 0x7f7fffff
        float arg_10 = 3.40282347e+38f
        float var_108_1 = 3.40282347e+38f
        float arg_8 = 3.40282347e+38f
        int32_t var_104_1 = 0x7f7fffff
        float var_100_1 = 3.40282347e+38f
        float var_f8_1 = -3.40282347e+38f
        int32_t var_f4_1 = 0xff7fffff
        float arg_18 = -3.40282347e+38f
        float var_f0_3 = -3.40282347e+38f
        float zmm1[0x4]
        
        if (rax_5 s< 4)
            zmm8 = var_e8[2]
        else
            int32_t rdi_1 = *(arg1 + 0x114)
            int16_t* r11_2 = *(arg1 + 0xf8) + 4
            int64_t r14_1 = *(arg1 + 0xf0)
            int64_t r9_3 = ((rax_5 - 4) u>> 2) + 1
            float zmm12[0x4]
            float var_98_1[0x4] = zmm12
            float zmm13[0x4]
            float var_a8_1[0x4] = zmm13
            r10_1 = r9_3 << 2
            
            while (true)
                void* rcx_2 = sx.q(zx.d(r11_2[-2]) * rdi_1) + r14_1
                int32_t rax_9 = zx.d(r11_2[-1]) * rdi_1
                zmm0[0] = zmm0[0] f* *(rcx_2 + 0x50)
                zmm9[0] = zmm9[0] f* *(rcx_2 + 0x54)
                zmm2 = *(rcx_2 + 0x14)
                zmm0 = _mm_and_ps(zmm0, zmm11)
                zmm12 = *(rcx_2 + 0x18)
                zmm13 = *(rcx_2 + 0x10)
                zmm1 = _mm_and_ps(zmm9, zmm11)
                zmm13[0] = zmm13[0] - zmm0[0]
                zmm3[0] = zmm3[0] f* *(rcx_2 + 0x58)
                zmm2[0] = zmm2[0] - zmm1[0]
                zmm1 = zmm9
                void* rcx_4 = sx.q(rax_9) + r14_1
                int32_t rax_11 = zx.d(*r11_2) * rdi_1
                zmm0 = _mm_and_ps(zmm3, zmm11)
                zmm5 = zmm13[0]
                float temp0_10[0x4] = __minss_xmmss_memss(zmm13[0], arg_10)
                zmm12[0] = zmm12[0] - zmm0[0]
                zmm1[0] = zmm1[0] f* *(rcx_4 + 0x54)
                float temp0_11[0x4] = _mm_max_ss(zmm2[0], zmm14[0])
                zmm9 = *(rcx_4 + 0x10)
                float temp0_12 = _mm_max_ss(zmm5, zmm6[0])
                zmm8 = *(rcx_4 + 0x14)
                zmm7 = *(rcx_4 + 0x18)
                zmm1 = _mm_and_ps(zmm1, zmm11)
                float temp0_14[0x4] = __minss_xmmss_memss(zmm2[0], arg_8)
                zmm0 = var_e8[0]
                zmm8[0] = zmm8[0] - zmm1[0]
                zmm0[0] = zmm0[0] f* *(rcx_4 + 0x50)
                zmm1 = var_e8[0]
                zmm2 = var_e8[1]
                float temp0_15[0x4] = _mm_min_ss(zmm12[0], zmm15[0])
                float temp0_16[0x4] = __maxss_xmmss_memss(zmm12[0], arg_18)
                zmm0 = _mm_and_ps(zmm0, zmm11)
                float temp0_18[0x4] = _mm_max_ss(temp0_11[0], zmm8[0])
                zmm9[0] = zmm9[0] - zmm0[0]
                zmm3[0] = zmm3[0] f* *(rcx_4 + 0x58)
                float temp0_19[0x4] = _mm_min_ss(zmm8[0], temp0_14[0])
                uint32_t rax_12 = zx.d(r11_2[1])
                void* rcx_6 = sx.q(rax_11) + r14_1
                zmm0 = _mm_and_ps(zmm3, zmm11)
                float temp0_21[0x4] = _mm_min_ss(temp0_10[0], zmm9[0])
                zmm7[0] = zmm7[0] - zmm0[0]
                zmm0 = zmm3
                float temp0_22[0x4] = _mm_max_ss(zmm9[0], temp0_12)
                zmm3 = *(rcx_6 + 0x14)
                zmm0[0] = zmm0[0] f* *(rcx_6 + 0x58)
                zmm1[0] = zmm1[0] f* *(rcx_6 + 0x50)
                float temp0_23[0x4] = _mm_min_ss(temp0_15[0], zmm7[0])
                zmm2[0] = zmm2[0] f* *(rcx_6 + 0x54)
                float temp0_24[0x4] = _mm_max_ss(temp0_16[0], zmm7[0])
                zmm10 = *(rcx_6 + 0x10)
                zmm0 = _mm_and_ps(zmm0, zmm11)
                zmm1 = _mm_and_ps(zmm1, zmm11)
                zmm2 = _mm_and_ps(zmm2, zmm11)
                zmm10[0] = zmm10[0] - zmm1[0]
                zmm11 = *(rcx_6 + 0x18)
                zmm3[0] = zmm3[0] - zmm2[0]
                zmm11[0] = zmm11[0] f- zmm0[0]
                float temp0_28[0x4] = _mm_min_ss(temp0_21[0], zmm10[0])
                float temp0_29[0x4] = _mm_max_ss(zmm10[0], temp0_22[0])
                float temp0_30[0x4] = _mm_min_ss(temp0_23[0], zmm11[0])
                zmm11 = _mm_max_ss(zmm11[0], temp0_24[0])
                float temp0_32[0x4] = _mm_min_ss(zmm3[0], temp0_19[0])
                float temp0_33[0x4] = _mm_max_ss(temp0_18[0], zmm3[0])
                r11_2 = &r11_2[4]
                zmm9 = var_e8[1]
                zmm8 = var_e8[2]
                zmm1 = var_e8[0]
                void* rcx_8 = sx.q(rax_12 * rdi_1) + r14_1
                zmm8[0] = zmm8[0] f* *(rcx_8 + 0x58)
                zmm6 = *(rcx_8 + 0x10)
                zmm1[0] = zmm1[0] f* *(rcx_8 + 0x50)
                zmm9[0] = zmm9[0] f* *(rcx_8 + 0x54)
                zmm0 = _mm_and_ps(zmm8, 0x7fffffff)
                zmm7 = *(rcx_8 + 0x18)
                zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                zmm7[0] = zmm7[0] - zmm0[0]
                zmm0 = var_e8[0]
                zmm6[0] = zmm6[0] - zmm1[0]
                zmm2 = _mm_and_ps(zmm9, 0x7fffffff)
                zmm3 = *(rcx_8 + 0x14)
                zmm3[0] = zmm3[0] - zmm2[0]
                zmm15 = _mm_min_ss(temp0_30[0], zmm7[0])
                zmm7 = _mm_max_ss(zmm7[0], zmm11[0])
                zmm11 = 0x7fffffff
                zmm5 = zmm6[0]
                zmm6 = _mm_max_ss(zmm6[0], temp0_29[0])
                zmm5 = _mm_min_ss(zmm5, temp0_28[0])
                zmm4 = _mm_min_ss(temp0_32[0], zmm3[0])
                var_100_1 = zmm15[0]
                zmm14 = _mm_max_ss(temp0_33[0], zmm3[0])
                arg_18 = zmm7[0]
                var_f8_1 = zmm6[0]
                arg_10 = zmm5
                var_108_1 = zmm5
                arg_8 = zmm4[0]
                float var_104_2 = zmm4[0]
                float var_f4_2 = zmm14[0]
                var_f0_3 = zmm7[0]
                int64_t temp0_43 = r9_3
                r9_3 -= 1
                
                if (temp0_43 == 1)
                    break
                
                zmm3 = var_e8[2]
        
        if (r10_1 s< rax_5)
            int64_t i_1 = rax_5 - r10_1
            int32_t r11_3 = *(arg1 + 0x114)
            int64_t rdi_2 = *(arg1 + 0xf0)
            zmm10 = arg_8
            int16_t* r9_4 = *(arg1 + 0xf8) + (r10_1 << 1)
            float temp0_48[0x4]
            float temp0_50[0x4]
            float temp0_52[0x4]
            int64_t i
            
            do
                int32_t rax_16 = zx.d(*r9_4) * r11_3
                r9_4 = &r9_4[1]
                void* rcx_10 = sx.q(rax_16) + rdi_2
                zmm0[0] = zmm0[0] f* *(rcx_10 + 0x50)
                zmm4 = *(rcx_10 + 0x10)
                zmm9[0] = zmm9[0] f* *(rcx_10 + 0x54)
                zmm2 = *(rcx_10 + 0x18)
                zmm0 = _mm_and_ps(zmm0, zmm11)
                zmm3 = *(rcx_10 + 0x14)
                zmm4[0] = zmm4[0] - zmm0[0]
                zmm1 = _mm_and_ps(zmm9, zmm11)
                zmm8[0] = zmm8[0] f* *(rcx_10 + 0x58)
                zmm3[0] = zmm3[0] - zmm1[0]
                zmm0 = _mm_and_ps(zmm8, zmm11)
                zmm2[0] = zmm2[0] - zmm0[0]
                float temp0_47[0x4] = _mm_min_ss(zmm4[0], zmm5)
                temp0_48 = _mm_min_ss(zmm3[0], zmm10[0])
                float temp0_49[0x4] = _mm_max_ss(zmm4[0], zmm6[0])
                temp0_50 = _mm_max_ss(zmm3[0], zmm14[0])
                zmm5 = temp0_47[0]
                float temp0_51[0x4] = _mm_min_ss(zmm2[0], zmm15[0])
                zmm10 = temp0_48
                temp0_52 = _mm_max_ss(zmm2[0], zmm7[0])
                zmm6 = temp0_49
                zmm14 = temp0_50
                zmm15 = temp0_51
                zmm0 = var_e8[0]
                zmm7 = temp0_52
                i = i_1
                i_1 -= 1
            while (i != 1)
            zmm4 = temp0_48
            arg_8 = temp0_48[0]
            float var_104_3 = zmm4[0]
            var_108_1 = zmm5
            var_100_1 = zmm15[0]
            var_f8_1 = zmm6[0]
            float var_f4_3 = temp0_50[0]
            var_f0_3 = temp0_52[0]
        
        float rax_17 = zx.d(*(arg1 + 0x158))
        
        if (rax_17.b == 0)
            zmm1 = zx.o(var_108_1.q)
            *(arg1 + 0x14c) = zmm1.q
            *(arg1 + 0x140) = zmm1.q
            *(arg1 + 0x154) = var_100_1
            *(arg1 + 0x148) = var_100_1
            rax_17.b = 1
            *(arg1 + 0x158) = 1
        else
            zmm0 = *(arg1 + 0x140)
            float temp0_53[0x4] = __minss_xmmss_memss(zmm4[0], *(arg1 + 0x144))
            float temp0_54[0x4] = _mm_min_ss(zmm0[0], zmm5)
            *(arg1 + 0x144) = temp0_53[0]
            zmm1 = *(arg1 + 0x14c)
            *(arg1 + 0x140) = temp0_54[0]
            float temp0_55[0x4] = _mm_max_ss(zmm1[0], zmm5)
            float temp0_56[0x4] = _mm_min_ss((*(arg1 + 0x148))[0], zmm15[0])
            float temp0_57[0x4] = __maxss_xmmss_memss(zmm15[0], *(arg1 + 0x154))
            *(arg1 + 0x14c) = temp0_55[0]
            *(arg1 + 0x148) = temp0_56[0]
            float temp0_58[0x4] = _mm_max_ss((*(arg1 + 0x150))[0], zmm4[0])
            *(arg1 + 0x154) = temp0_57[0]
            *(arg1 + 0x150) = temp0_58[0]
        
        if (rax_17.b == 0)
            zmm1 = zx.o(var_f8_1.q)
            *(arg1 + 0x14c) = zmm1.q
            *(arg1 + 0x140) = zmm1.q
            *(arg1 + 0x154) = var_f0_3
            *(arg1 + 0x148) = var_f0_3
            *(arg1 + 0x158) = 1
        else
            zmm1 = *(arg1 + 0x144)
            float temp0_59[0x4] = __minss_xmmss_memss(zmm6[0], *(arg1 + 0x140))
            float temp0_60[0x4] = _mm_min_ss(zmm1[0], zmm14[0])
            float temp0_61[0x4] = __maxss_xmmss_memss(zmm14[0], *(arg1 + 0x150))
            *(arg1 + 0x140) = temp0_59[0]
            float temp0_62[0x4] = _mm_min_ss((*(arg1 + 0x148))[0], zmm7[0])
            *(arg1 + 0x144) = temp0_60[0]
            float temp0_63[0x4] = _mm_max_ss((*(arg1 + 0x14c))[0], zmm6[0])
            *(arg1 + 0x150) = temp0_61[0]
            *(arg1 + 0x148) = temp0_62[0]
            float temp0_64[0x4] = _mm_max_ss((*(arg1 + 0x154))[0], zmm7[0])
            *(arg1 + 0x14c) = temp0_63[0]
            *(arg1 + 0x154) = temp0_64[0]
    
    result = *(rsi_1 + 0x30)
    
    if ((*(result + 0x59) & 1) != 0)
        uint64_t* rax_19 = sub_140ae2c60(arg1 + 0x140, &var_e8, *(arg1 + 0x18) + 0x1c0)
        *(arg1 + 0x140) = *rax_19
        *(arg1 + 0x150) = rax_19[2]
        result = zx.q(rax_19[3].d)
        *(arg1 + 0x158) = result.d

return result

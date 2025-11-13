// 函数: sub_14175fb00
// 地址: 0x14175fb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg2
float zmm6[0x4] = arg2[2].d
float zmm8[0x4] = *(arg2 + 0x28)
float zmm9[0x4] = *(arg2 + 0x24)
float zmm12[0x4] = arg2[1].d
float zmm13[0x4] = *(arg2 + 0x14)
zmm2[0] = zmm2[0] + zmm13[0]
zmm12[0] = zmm12[0] * zmm12[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm2[0] = zmm2[0] + zmm8[0]
float arg_10 = zmm12[0]
float zmm5 = zmm12[0] + zmm6[0]
zmm2[0] = zmm2[0] * 0.333333343f
bool cond:0 = zmm2[0] > 9.99999994e-09f
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)

if (cond:0)
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] + zmm5
    zmm9[0] = zmm9[0] / zmm2[0]
    
    if (zmm9[0] >= 9.99999994e-09f)
        zmm5 = zmm5 * 0.166666672f
        zmm2[0] = zmm2[0] - zmm2[0]
        int64_t i = 0
        float zmm1 = zmm8[0] - zmm2[0]
        float zmm3 = zmm13[0] - zmm2[0]
        zmm9[0] = zmm9[0] * 0.333333343f
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm3 = zmm3 * zmm3 + zmm2[0]
        zmm9[0] = zmm9[0] + zmm5
        zmm9[0] = zmm9[0] + zmm5
        float temp0_1[0x4] = _mm_sqrt_ss(0, (zmm3 + zmm1 * zmm1) * 0.166666672f + zmm9[0])
        int32_t var_f8
        
        do
            *(&var_f8 + i) = _mm_mul_ps(*(i + &data_14399f6e0), temp0)
            i += 0x10
        while (i s< 0x40)
        
        float zmm0[0x4] = *arg2
        zmm0[0] = zmm0[0] f- var_f8
        float var_e8
        zmm1 = zmm12[0] - var_e8
        zmm2 = 0x3f800000
        int32_t var_15c_1 = 0
        zmm2[0] = 1f / temp0_1[0]
        int32_t var_14c_1 = 0
        int32_t var_13c_1 = 0
        zmm0[0] = zmm0[0] * zmm2[0]
        zmm1 = zmm1 * zmm2[0]
        float var_168 = zmm0[0]
        int32_t var_d8
        zmm6[0] = zmm6[0] f- var_d8
        float var_158_1 = zmm1
        float var_f4
        zmm1 = *(arg2 + 4) - var_f4
        zmm6[0] = zmm6[0] * zmm2[0]
        zmm1 = zmm1 * zmm2[0]
        float var_148_1 = zmm6[0]
        int32_t var_e4
        zmm13[0] = zmm13[0] f- var_e4
        float var_164_1 = zmm1
        float var_d4
        zmm1 = zmm9[0] - var_d4
        zmm13[0] = zmm13[0] * zmm2[0]
        zmm1 = zmm1 * zmm2[0]
        float var_154_1 = zmm13[0]
        zmm0 = *(arg2 + 8)
        int32_t var_f0
        zmm0[0] = zmm0[0] f- var_f0
        float var_144_1 = zmm1
        float var_e0
        zmm1 = *(arg2 + 0x18) - var_e0
        zmm0[0] = zmm0[0] * zmm2[0]
        zmm1 = zmm1 * zmm2[0]
        float var_160_1 = zmm0[0]
        zmm0 = *(arg2 + 0x28)
        int32_t var_d0
        zmm0[0] = zmm0[0] f- var_d0
        float var_150_1 = zmm1
        zmm0[0] = zmm0[0] * zmm2[0]
        float var_140_1 = zmm0[0]
        float var_138_1[0x4] = data_142d3f660
        float zmm0_1[0x4]
        float zmm7_1[0x4]
        float zmm8_1[0x4]
        float zmm9_1[0x4]
        float zmm10_1[0x4]
        float zmm11_1[0x4]
        float zmm12_1[0x4]
        float zmm13_1[0x4]
        float zmm14_1[0x4]
        float zmm15_1[0x4]
        zmm0_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
            sub_14062b8d0(&var_168)
        zmm0_1[0] = zmm0_1[0] * 0.5f
        float zmm6_1[0x4]
        
        if (not(zmm0_1[0] > -1f))
            zmm6_1 = 0x3f860a92
        else if (zmm0_1[0] < zmm15_1[0])
            zmm6_1 = acosf(zmm0_1[0])
            zmm6_1[0] = zmm6_1[0] * zmm7_1[0]
        else
            zmm6_1 = zx.o(0)
        
        zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
        float zmm0_2[0x4] = cosf(zmm6_1[0])
        zmm6_1[0] = zmm6_1[0] + 2.09439516f
        zmm7_1 = zmm0_2
        zmm7_1[0] = zmm7_1[0] * zmm8_1[0]
        zmm7_1[0] = zmm7_1[0] + zmm10_1[0]
        float var_120_1 = zmm7_1[0]
        float zmm0_3[0x4] = cosf(zmm6_1[0])
        zmm0_3[0] = zmm0_3[0] * zmm8_1[0]
        zmm0_3[0] = zmm0_3[0] + zmm10_1[0]
        zmm10_1[0] = zmm10_1[0] * 3f
        zmm10_1[0] = zmm10_1[0] - zmm7_1[0]
        float var_118_1 = zmm0_3[0]
        zmm7_1[0] = zmm7_1[0] - zmm0_3[0]
        zmm10_1[0] = zmm10_1[0] - zmm0_3[0]
        zmm0_3[0] = zmm0_3[0] - zmm10_1[0]
        bool rcx_1 = zmm7_1[0] <= zmm0_3[0]
        
        if (rcx_1 != 0)
            zmm7_1 = zmm10_1
        
        float zmm3_1[0x4] = *(arg2 + 0x28)
        zmm8_1 = zmm9_1
        float zmm2_1[0x4] = arg2[2].d
        zmm3_1[0] = zmm3_1[0] - zmm7_1[0]
        float zmm1_1[0x4] = *arg2
        float zmm4_1[0x4] = *(arg2 + 0x14)
        zmm1_1[0] = zmm1_1[0] - zmm7_1[0]
        zmm4_1[0] = zmm4_1[0] - zmm7_1[0]
        zmm8_1[0] = zmm8_1[0] * zmm12_1[0]
        zmm2_1[0] = zmm2_1[0] * zmm12_1[0]
        zmm1_1[0] = zmm1_1[0] * zmm9_1[0]
        zmm9_1[0] = zmm9_1[0] * zmm2_1[0]
        zmm2_1[0] = zmm2_1[0] - zmm1_1[0]
        zmm4_1[0] = zmm4_1[0] * zmm2_1[0]
        zmm8_1[0] = zmm8_1[0] - zmm4_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm12_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm1_1[0]
        zmm9_1[0] = zmm9_1[0] - zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
        zmm4_1[0] = zmm4_1[0] * zmm1_1[0]
        zmm3_1[0] = zmm3_1[0] - zmm14_1[0]
        zmm3_1[0] = zmm3_1[0] - zmm11_1[0]
        zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
        zmm4_1[0] = zmm4_1[0] - arg_10
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] + zmm9_1[0]
        zmm3_1[0] = zmm3_1[0] + zmm9_1[0]
        zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
        zmm3_1[0] = zmm3_1[0] + zmm8_1[0]
        zmm3_1[0] = zmm3_1[0] + zmm2_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm8_1[0]
        bool cond:1_1 = zmm3_1[0] <= zmm3_1[0]
        zmm4_1[0] = zmm4_1[0] + zmm2_1[0]
        
        if (not(cond:1_1) && not(zmm3_1[0] <= zmm4_1[0]))
            float temp0_3[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm3_1[0])
            zmm15_1[0] = zmm15_1[0] / temp0_3[0]
            zmm11_1 = zmm15_1
            zmm9_1[0] = zmm9_1[0] * zmm15_1[0]
            zmm11_1[0] = zmm11_1[0] * zmm3_1[0]
            zmm8_1[0] = zmm8_1[0] * zmm15_1[0]
        else if (not(zmm3_1[0] <= zmm4_1[0]))
            zmm8_1 = zmm15_1
            float temp0_4[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm3_1[0])
            zmm8_1[0] = zmm8_1[0] / temp0_4[0]
            zmm11_1 = zmm8_1
            zmm11_1[0] = zmm11_1[0] * zmm9_1[0]
            zmm9_1 = zmm3_1
            zmm9_1[0] = zmm9_1[0] * zmm8_1[0]
            zmm8_1[0] = zmm8_1[0] * zmm2_1[0]
        else if (zmm4_1[0] <= zmm13_1[0])
            zmm11_1 = zmm15_1
            zmm9_1 = zx.o(0)
            zmm8_1 = zx.o(0)
        else
            float temp0_5[0x4] = _mm_sqrt_ss(zmm4_1[0], zmm4_1[0])
            zmm15_1[0] = zmm15_1[0] / temp0_5[0]
            zmm11_1 = zmm15_1
            zmm9_1 = zmm15_1
            zmm11_1[0] = zmm11_1[0] * zmm8_1[0]
            zmm8_1 = zmm4_1
            zmm8_1[0] = zmm8_1[0] * zmm15_1[0]
            zmm9_1[0] = zmm9_1[0] * zmm2_1[0]
        
        zmm1_1 = _mm_and_ps(zmm11_1, 0x7fffffff)
        zmm2_1 = _mm_and_ps(zmm9_1, 0x7fffffff)
        bool cond:2_1 = zmm1_1[0] > zmm2_1[0]
        zmm0_3 = _mm_and_ps(zmm8_1, 0x7fffffff)
        float var_174_1
        
        if (cond:2_1 || zmm1_1[0] > zmm0_3[0])
            if (zmm0_3[0] > zmm1_1[0] || zmm0_3[0] > zmm2_1[0])
                zmm14_1 = 0x80000000
                zmm6_1 = zmm8_1 ^ 0x80000000
                zmm12_1 = zx.o(0)
                zmm7_1 = zmm11_1
            else
                zmm14_1 = 0x80000000
                zmm12_1 = zmm11_1 ^ 0x80000000
                zmm6_1 = zmm9_1
                zmm7_1 = zx.o(0)
            
            var_174_1 = zmm12_1[0]
        else
            zmm14_1 = 0x80000000
            zmm7_1 = zmm9_1 ^ 0x80000000
            var_174_1 = zmm8_1[0]
            zmm6_1 = zx.o(0)
            zmm12_1 = zmm8_1
        
        float var_178 = zmm6_1[0]
        zmm12_1[0] = zmm12_1[0] * zmm12_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
        zmm12_1[0] = zmm12_1[0] + zmm6_1[0]
        float var_170_1 = zmm7_1[0]
        zmm12_1[0] = zmm12_1[0] + zmm7_1[0]
        
        if (not(zmm12_1[0] != zmm15_1[0]))
            zmm0_3 = zx.o(var_178.q)
            zmm7_1 = var_170_1
            var_178.q = zmm0_3.q
            zmm6_1 = var_178
            zmm12_1 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x55)
        else if (zmm12_1[0] >= 9.99999994e-09f)
            zmm4_1 = 0x3f000000
            zmm3_1 = zx.o(0)
            zmm2_1 = 0x3f000000
            zmm3_1[0] = zmm12_1[0]
            float temp0_10[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            temp0_10[0] = temp0_10[0] * temp0_10[0]
            zmm3_1[0] = zmm3_1[0] * temp0_10[0]
            zmm2_1[0] = 0.5f - zmm3_1[0]
            temp0_10[0] = temp0_10[0] * zmm2_1[0]
            temp0_10[0] = temp0_10[0] + temp0_10[0]
            temp0_10[0] = temp0_10[0] * temp0_10[0]
            zmm3_1[0] = zmm3_1[0] * temp0_10[0]
            zmm4_1[0] = 0.5f - zmm3_1[0]
            temp0_10[0] = temp0_10[0] * zmm4_1[0]
            temp0_10[0] = temp0_10[0] + temp0_10[0]
            arg_10 = temp0_10[0]
            zmm6_1[0] = zmm6_1[0] * temp0_10[0]
            zmm12_1[0] = zmm12_1[0] * temp0_10[0]
            zmm7_1[0] = zmm7_1[0] * temp0_10[0]
        else
            zmm6_1 = data_143dbb1f8
            zmm12_1 = data_143dbb1fc
            zmm7_1 = data_143dbb200
        
        zmm7_1[0] = zmm7_1[0] * zmm9_1[0]
        zmm12_1[0] = zmm12_1[0] * zmm8_1[0]
        zmm12_1[0] = zmm12_1[0] * zmm11_1[0]
        zmm7_1[0] = zmm7_1[0] - zmm12_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm8_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm11_1[0]
        float var_128_1 = zmm7_1[0]
        zmm6_1[0] = zmm6_1[0] - zmm7_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm9_1[0]
        zmm12_1[0] = zmm12_1[0] - zmm6_1[0]
        float var_124_1 = zmm6_1[0]
        zmm7_1[0] = zmm7_1[0] f* *arg2
        zmm6_1[0] = zmm6_1[0] f* *(arg2 + 0x14)
        zmm6_1[0] = zmm6_1[0] f* *(arg2 + 4)
        zmm6_1[0] = zmm6_1[0] f* *(arg2 + 0x24)
        zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
        arg_10 = zmm12_1[0]
        zmm12_1[0] = zmm12_1[0] f* *(arg2 + 8)
        zmm7_1[0] = zmm7_1[0] f* arg2[1].d
        zmm6_1[0] = zmm6_1[0] + zmm12_1[0]
        zmm1_1 = arg_10
        zmm1_1[0] = zmm1_1[0] f* *(arg2 + 0x18)
        zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
        zmm7_1[0] = zmm7_1[0] f* arg2[2].d
        zmm6_1[0] = zmm6_1[0] + zmm1_1[0]
        zmm1_1 = arg_10
        zmm1_1[0] = zmm1_1[0] f* *(arg2 + 0x28)
        zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
        zmm12_1[0] = zmm12_1[0] * zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm1_1[0]
        float arg_20 = zmm6_1[0]
        zmm12_1[0] = zmm12_1[0] f* *(arg2 + 4)
        zmm12_1[0] = zmm12_1[0] + zmm6_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] f* *arg2
        zmm12_1[0] = zmm12_1[0] + zmm7_1[0]
        zmm7_1[0] = zmm7_1[0] f* *(arg2 + 8)
        zmm12_1[0] = zmm12_1[0] + zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] f* arg2[1].d
        float var_11c_1 = zmm12_1[0]
        zmm12_1[0] = zmm12_1[0] f* *(arg2 + 0x14)
        zmm12_1[0] = zmm12_1[0] + zmm7_1[0]
        zmm7_1[0] = zmm7_1[0] f* *(arg2 + 0x18)
        zmm12_1[0] = zmm12_1[0] + zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] f* arg2[2].d
        zmm12_1[0] = zmm12_1[0] * zmm6_1[0]
        zmm12_1[0] = zmm12_1[0] + zmm7_1[0]
        zmm7_1[0] = zmm7_1[0] f* *(arg2 + 0x28)
        zmm12_1[0] = zmm12_1[0] * zmm12_1[0]
        zmm12_1[0] = zmm12_1[0] + zmm12_1[0]
        float arg_18 = zmm12_1[0]
        zmm12_1[0] = zmm12_1[0] f* *(arg2 + 0x24)
        zmm12_1[0] = zmm12_1[0] + zmm6_1[0]
        zmm0_3 = arg_18
        zmm12_1[0] = zmm12_1[0] + zmm7_1[0]
        zmm12_1[0] = zmm12_1[0] * zmm7_1[0]
        zmm0_3[0] = zmm0_3[0] + zmm12_1[0]
        zmm1_1 = arg_20
        zmm1_1[0] = zmm1_1[0] * var_124_1
        zmm6_1[0] = zmm6_1[0] * var_128_1
        zmm6_1[0] = zmm6_1[0] * arg_10
        arg_18 = zmm0_3[0]
        zmm1_1[0] = zmm1_1[0] + zmm6_1[0]
        zmm1_1[0] = zmm1_1[0] + zmm6_1[0]
        
        zmm0_3 = rcx_1 == 0 ? zmm10_1 : var_120_1
        
        zmm4_1 = arg_18
        zmm1_1[0] = zmm1_1[0] - zmm0_3[0]
        zmm2_1 = var_11c_1
        zmm4_1[0] = zmm4_1[0] - zmm0_3[0]
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        arg_20 = zmm1_1[0]
        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
        zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
        zmm1_1[0] = zmm1_1[0] + zmm2_1[0]
        zmm4_1[0] = zmm4_1[0] + zmm2_1[0]
        float temp0_11[0x4] = _mm_max_ss(zmm1_1[0], zmm13_1[0])
        float temp0_12[0x4] = _mm_max_ss(zmm4_1[0], zmm13_1[0])
        float temp0_13[0x4] = _mm_sqrt_ss(0, temp0_11[0])
        float temp0_14[0x4] = _mm_sqrt_ss(0, temp0_12[0])
        float var_108_1
        
        if (temp0_13[0] > 9.99999975e-05f || temp0_14[0] > 9.99999975e-05f)
            if (temp0_11[0] <= temp0_12[0])
                if (temp0_12[0] <= zmm13_1[0])
                    arg_18.q = 0x3f800000
                else
                    zmm0_3 = 0xbf800000
                    zmm0_3[0] = -1f / temp0_14[0]
                    zmm4_1[0] = zmm4_1[0] / temp0_14[0]
                    zmm0_3[0] = zmm0_3[0] * zmm2_1[0]
                    arg3 = zmm4_1[0]
                    arg_18 = zmm0_3[0]
                
                arg_18.q = arg_18.q
            else
                zmm15_1[0] = zmm15_1[0] / temp0_13[0]
                zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                zmm15_1[0] = zmm15_1[0] * arg_20
                arg3 = (zmm2_1 ^ zmm14_1)[0]
                arg_18 = zmm15_1[0]
            
            zmm3_1 = 0x322bcc77
            zmm2_1 = arg3
            zmm1_1 = arg_18
            zmm2_1[0] = zmm2_1[0] * var_128_1
            zmm6_1[0] = zmm6_1[0] * zmm1_1[0]
            zmm12_1[0] = zmm12_1[0] * zmm1_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm2_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm1_1[0]
            zmm2_1[0] = zmm2_1[0] * arg_10
            zmm2_1[0] = zmm2_1[0] * var_124_1
            zmm7_1[0] = zmm7_1[0] + zmm2_1[0]
            zmm12_1[0] = zmm12_1[0] + zmm2_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
            zmm12_1[0] = zmm12_1[0] * zmm12_1[0]
            zmm12_1[0] = zmm12_1[0] + zmm6_1[0]
            zmm12_1[0] = zmm12_1[0] + zmm7_1[0]
            float zmm5_1[0x4]
            
            if (zmm12_1[0] == zmm15_1[0])
                zmm5_1 = data_143dbb1fc
                zmm4_1 = data_143dbb200
            else if (zmm12_1[0] >= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm3_1 = zx.o(0)
                zmm2_1 = 0x3f000000
                zmm3_1[0] = zmm12_1[0]
                float temp0_15[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                temp0_15[0] = temp0_15[0] * temp0_15[0]
                zmm3_1[0] = zmm3_1[0] * temp0_15[0]
                zmm2_1[0] = 0.5f - zmm3_1[0]
                temp0_15[0] = temp0_15[0] * zmm2_1[0]
                temp0_15[0] = temp0_15[0] + temp0_15[0]
                temp0_15[0] = temp0_15[0] * temp0_15[0]
                zmm3_1[0] = zmm3_1[0] * temp0_15[0]
                zmm4_1[0] = 0.5f - zmm3_1[0]
                zmm3_1 = 0x322bcc77
                temp0_15[0] = temp0_15[0] * zmm4_1[0]
                temp0_15[0] = temp0_15[0] + temp0_15[0]
                zmm6_1[0] = zmm6_1[0] * temp0_15[0]
                zmm12_1[0] = zmm12_1[0] * temp0_15[0]
                zmm7_1[0] = zmm7_1[0] * temp0_15[0]
                zmm5_1 = data_143dbb1fc
                zmm4_1 = data_143dbb200
            else
                zmm5_1 = data_143dbb1fc
                zmm4_1 = data_143dbb200
                zmm12_1 = zmm5_1
                zmm6_1 = data_143dbb1f8
                zmm7_1 = zmm4_1
            
            zmm13_1 = zmm8_1
            zmm9_1[0] = zmm9_1[0] * zmm7_1[0]
            zmm14_1 = zmm11_1
            zmm13_1[0] = zmm13_1[0] * zmm12_1[0]
            zmm15_1 = zmm9_1
            zmm14_1[0] = zmm14_1[0] * zmm7_1[0]
            zmm13_1[0] = zmm13_1[0] - zmm9_1[0]
            zmm15_1[0] = zmm15_1[0] * zmm6_1[0]
            zmm8_1[0] = zmm8_1[0] * zmm6_1[0]
            zmm14_1[0] = zmm14_1[0] - zmm8_1[0]
            zmm11_1[0] = zmm11_1[0] * zmm12_1[0]
            zmm15_1[0] = zmm15_1[0] - zmm11_1[0]
            zmm14_1[0] = zmm14_1[0] * zmm14_1[0]
            zmm13_1[0] = zmm13_1[0] * zmm13_1[0]
            zmm15_1[0] = zmm15_1[0] * zmm15_1[0]
            zmm14_1[0] = zmm14_1[0] + zmm13_1[0]
            zmm14_1[0] = zmm14_1[0] + zmm15_1[0]
            
            if (not(zmm14_1[0] == 1f))
                if (zmm14_1[0] >= zmm3_1[0])
                    zmm4_1 = 0x3f000000
                    float temp0_16[0x4] = _mm_rsqrt_ss(zmm14_1[0], zmm14_1[0])
                    zmm2_1 = 0x3f000000
                    zmm14_1[0] = zmm14_1[0] * 0.5f
                    temp0_16[0] = temp0_16[0] * temp0_16[0]
                    zmm14_1[0] = zmm14_1[0] * temp0_16[0]
                    zmm2_1[0] = 0.5f - zmm14_1[0]
                    temp0_16[0] = temp0_16[0] * zmm2_1[0]
                    temp0_16[0] = temp0_16[0] + temp0_16[0]
                    temp0_16[0] = temp0_16[0] * temp0_16[0]
                    zmm14_1[0] = zmm14_1[0] * temp0_16[0]
                    zmm4_1[0] = 0.5f - zmm14_1[0]
                    temp0_16[0] = temp0_16[0] * zmm4_1[0]
                    temp0_16[0] = temp0_16[0] + temp0_16[0]
                    temp0_16[0] = temp0_16[0] * zmm13_1[0]
                    temp0_16[0] = temp0_16[0] * zmm14_1[0]
                    temp0_16[0] = temp0_16[0] * zmm15_1[0]
                    zmm13_1 = temp0_16
                    zmm14_1 = temp0_16
                    zmm15_1 = temp0_16
                else
                    zmm13_1 = data_143dbb1f8
                    zmm14_1 = zmm5_1
                    zmm15_1 = zmm4_1
            
            zmm2_1 = data_142d3f660
            var_15c_1.q = 0
            var_164_1.q = 0
            zmm0_3 = var_168.o
            var_150_1.q = 0
            zmm0_3[0] = var_120_1[0]
            zmm1_1 = var_158_1.o
            *arg2 = zmm0_3
            var_168.o = zmm0_3
            float temp0_17[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
            var_148_1.q = 0
            temp0_17[0] = var_118_1[0]
            int32_t var_13c_2 = 0
            zmm0_3 = var_148_1.o
            float temp0_18[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xd2)
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xe1)
            temp0_18[0] = zmm10_1[0]
            float temp0_20[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
            arg2[1] = temp0_19
            var_148_1.o = temp0_20
            var_158_1.o = temp0_19
            arg2[2] = temp0_20
            float var_144_2 = zmm15_1[0]
            arg2[3] = zmm2_1
            int32_t var_13c_3 = 0
            float var_164_2 = zmm13_1[0]
            float var_154_2 = zmm14_1[0]
            int32_t var_15c_2 = 0
            int32_t var_14c_2 = 0
            float var_158_2
            float var_148_2
            
            if (rcx_1 == 0)
                var_168 = zmm11_1[0]
                var_158_2 = zmm9_1[0]
                var_148_2 = zmm8_1[0]
                float var_160_3 = zmm6_1[0]
                float var_150_3 = zmm12_1[0]
                float var_140_3 = zmm7_1[0]
            else
                var_168 = zmm6_1[0]
                float var_160_2 = (zmm11_1 ^ 0x80000000)[0]
                float var_150_2 = (zmm9_1 ^ 0x80000000)[0]
                float var_140_2 = (zmm8_1 ^ 0x80000000)[0]
                var_158_2 = zmm12_1[0]
                var_148_2 = zmm7_1[0]
            
            float var_138_2[0x4] = data_142d3f660
            zmm2_1 = var_168.o
            zmm3_1 = var_158_2.o
            zmm4_1 = var_148_2.o
            float temp0_21[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float temp0_22[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            float var_158_3 = temp0_21[0]
            float var_154_3 = temp0_22[0]
            float temp0_23[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            float temp0_24[0x4] = _mm_shuffle_ps(var_138_2, var_138_2, 0x55)
            float var_150_4 = temp0_23[0]
            float var_14c_3 = temp0_24[0]
            float temp0_25[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            float temp0_26[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            float var_148_3 = temp0_25[0]
            float var_144_3 = temp0_26[0]
            float temp0_27[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
            float temp0_28[0x4] = _mm_shuffle_ps(var_138_2, var_138_2, 0xaa)
            var_168 = zmm2_1[0]
            float var_164_3 = zmm3_1[0]
            float var_160_4 = zmm4_1[0]
            float var_15c_3 = var_138_2[0]
            float temp0_29[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
            float temp0_30[0x4] = _mm_shuffle_ps(var_138_2, var_138_2, 0xff)
            float temp0_31[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
            float temp0_32[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
            var_138_2[2] = temp0_29[0]
            var_138_2[3] = temp0_30[0]
            float var_140_4 = temp0_27[0]
            float var_13c_4 = temp0_28[0]
            var_138_2[0] = temp0_31[0]
            var_138_2[1] = temp0_32[0]
            sub_14077e4a0(&var_178, &var_168)
            zmm0_3 = var_178
            var_108_1 = zmm0_3[0]
            zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
            float var_104_1 = var_174_1
            float var_100_1 = var_170_1
            float var_16c
            float var_fc_1 = var_16c
            float temp0_33[0x4] = _mm_sqrt_ss(0, 
                var_174_1 * var_174_1 + zmm0_3[0] + var_170_1 * var_170_1 + var_16c * var_16c)
            temp0_33[0] = temp0_33[0] - 1f
            zmm0_3 = __andps_xmmxud_memxud(temp0_33, data_142d3f770)
        
        if ((not(temp0_13[0] > 9.99999975e-05f) && not(temp0_14[0] > 9.99999975e-05f))
                || zmm0_3[0] > 9.99999975e-05f)
            *arg1 = data_142d3f660
        else
            *arg1 = var_108_1.o
    else
        *arg1 = data_142d3f660
else
    *arg1 = data_142d3f660

return arg1

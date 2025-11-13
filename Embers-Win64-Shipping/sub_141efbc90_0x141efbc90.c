// 函数: sub_141efbc90
// 地址: 0x141efbc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (not(arg5.d f< 9.99999997e-07f) && not(arg4[0] < 9.99999997e-07f))
    float var_98
    float zmm2[0x4]
    
    if (arg1[0xb4].b == 0 && sub_142008320(&arg1[0x9b]) == 0 && (*(arg1 + 0x387) & 0x20) == 0)
        void* rax_1 = arg1[0x16]
        zmm2 = 0x3f800000
        zmm2[0] = 1f / arg4[0]
        arg4 = *(rax_1 + 0x1d0)
        arg4[0] = arg4[0] f- *arg2
        float temp0_1[0x4] = _mm_shuffle_ps(arg4, arg4, 0x55)
        temp0_1[0] = temp0_1[0] f- arg2[1]
        float temp0_2[0x4] = _mm_shuffle_ps(arg4, arg4, 0xaa)
        temp0_2[0] = temp0_2[0] f- arg2[2]
        arg4[0] = arg4[0] * zmm2[0]
        temp0_1[0] = temp0_1[0] * zmm2[0]
        temp0_2[0] = temp0_2[0] * zmm2[0]
        *(arg1 + 0xc4) = (_mm_unpacklo_ps(arg4, temp0_1[0].q)).q
        *(arg1 + 0xcc) = temp0_2[0]
        float zmm0[0x4] = *(arg1 + 0xcc)
        float zmm1[0x4] = *(arg1 + 0xc4)
        zmm0[0] = zmm0[0] + zmm0[0]
        zmm2 = arg1[0x19].d
        zmm1[0] = zmm1[0] + zmm1[0]
        zmm2[0] = zmm2[0] + zmm2[0]
        zmm0[0] = zmm0[0] f- arg3[2]
        zmm1[0] = zmm1[0] f- *arg3
        zmm2[0] = zmm2[0] f- arg3[1]
        float var_70_2 = zmm0[0]
        *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm1, zmm2[0].q)).q
        *(arg1 + 0xcc) = var_70_2
        float zmm12[0x4] = *((*(*arg1 + 0x430))(arg1) + 0x258)
        float rax_6
        
        if (zmm12[0] >= 9.99999975e-05f)
            float zmm8[0x4] = arg1[0x19].d
            float zmm7[0x4] = *(arg1 + 0xc4)
            float zmm10[0x4] = *(arg1 + 0xcc)
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm7[0] = zmm7[0] + zmm8[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm7[0] = zmm7[0] + zmm10[0]
            
            if (zmm7[0] <= zmm12[0])
                zmm1 = zx.o(*(arg1 + 0xc4))
                rax_6 = *(arg1 + 0xcc)
            else
                float temp0_7[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                zmm2 = 0x3f000000
                zmm7[0] = zmm7[0] * 0.5f
                temp0_7[0] = temp0_7[0] * temp0_7[0]
                zmm7[0] = zmm7[0] * temp0_7[0]
                zmm2[0] = 0.5f - zmm7[0]
                temp0_7[0] = temp0_7[0] * zmm2[0]
                temp0_7[0] = temp0_7[0] + temp0_7[0]
                temp0_7[0] = temp0_7[0] * temp0_7[0]
                zmm7[0] = zmm7[0] * temp0_7[0]
                zmm1 = zx.o(var_98.q)
                temp0_7[0] = temp0_7[0] * (0.5f - zmm7[0])
                temp0_7[0] = temp0_7[0] + temp0_7[0]
                temp0_7[0] = temp0_7[0] * zmm12[0]
                zmm7[0] = zmm7[0] * temp0_7[0]
                zmm8[0] = zmm8[0] * temp0_7[0]
                zmm1[0] = zmm7[0]
                zmm10[0] = zmm10[0] * temp0_7[0]
                float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                temp0_8[0] = zmm8[0]
                zmm1 = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
                rax_6 = zmm10[0]
                var_98.q = zmm1.q
        else
            zmm1 = zx.o(var_98.q)
            zmm0 = data_143dbb200
            arg4 = data_143dbb1fc
            zmm1[0] = data_143dbb1f8[0]
            rax_6 = zmm0[0]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            temp0_5[0] = arg4[0]
            float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
            var_98.q = temp0_6.q
            zmm1 = temp0_6
        
        *(arg1 + 0xc4) = zmm1.q
        *(arg1 + 0xcc) = rax_6
    
    int32_t rax_7 = arg2[2]
    int64_t var_88 = *arg2
    int32_t var_80_1 = rax_7
    zmm2 = *(arg1[0x16] + 0x1d0)
    float var_90_3 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    int64_t var_78 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    int64_t r9_2
    float zmm6_1
    int32_t zmm11_1
    r9_2, zmm6_1, zmm11_1 = sub_141ee1580(arg1, &var_98, &var_78, &var_88)
    result = arg1[0x16]
    float zmm8_1[0x4] = var_98
    float zmm4_2[0x4] = *(result + 0x1d0)
    var_78.o = zmm4_2
    float var_94
    float zmm0_1[0x4]
    float zmm1_1
    
    if (zmm8_1[0] != zmm4_2[0] || var_94 f!= var_78:4.d || not(var_90_3 == var_90_3))
        zmm1_1 = zmm4_2[0] f- *arg2
        float temp0_13[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
        temp0_13[0] = temp0_13[0] f- arg2[1]
        float temp0_14[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
        temp0_14[0] = temp0_14[0] f- arg2[2]
        temp0_13[0] = temp0_13[0] * temp0_13[0]
        temp0_14[0] = temp0_14[0] * temp0_14[0]
        temp0_13[0] = temp0_13[0] + zmm1_1 * zmm1_1
        temp0_13[0] = temp0_13[0] + temp0_14[0]
        int32_t temp0_15 = _mm_sqrt_ss(0, temp0_13[0])
        
        if (not(temp0_15 f<= 9.99999975e-05f))
            float temp0_16[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
            zmm8_1[0] = zmm8_1[0] - zmm4_2[0]
            float zmm3 = var_94 - temp0_16[0]
            zmm1_1 = var_90_3 - _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)[0]
            zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
            float temp0_18[0x4] = _mm_sqrt_ss(0, zmm3 * zmm3 + zmm8_1[0] + zmm1_1 * zmm1_1)
            temp0_18[0] = temp0_18[0] f* zmm11_1
            temp0_18[0] = temp0_18[0] f/ temp0_15
            zmm6_1 = zmm6_1 + temp0_18[0]
        
        zmm0_1 = *(result + 0x1c0)
        zmm8_1[0] = zmm8_1[0] - zmm4_2[0]
        int64_t rax_10 = *arg1
        var_78.o = zmm0_1
        float temp0_19[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
        r9_2.b = 1
        float temp0_20[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
        float zmm7_1 = var_94 - temp0_19[0]
        float zmm5_2 = var_90_3 - temp0_20[0]
        var_98 = zmm8_1[0]
        float var_94_1 = zmm7_1
        result = (*(rax_10 + 0x478))(arg1, &var_98, &var_78, r9_2, 0, 0, var_98, zmm5_2)
    
    if (arg1[0xb4].b == 0)
        result = sub_142008320(&arg1[0x9b])
        
        if (result.b == 0)
            zmm1_1 = *(arg1 + 0xcc)
            
            if (not(zmm1_1 <= -160f) && not(zmm1_1 >= zx.o(0)[0]))
                zmm0_1 = arg1[0x19].d
                zmm1_1 = *(arg1 + 0xc4)
                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                zmm1_1 = zmm1_1 * zmm1_1 + zmm0_1[0]
                zmm0_1 = 0xc2a00000
                float temp0_21[0x4] = _mm_sqrt_ss(0, zmm1_1)
                temp0_21[0] = temp0_21[0] * 0.699999988f
                zmm0_1[0] = -80f - temp0_21[0]
                *(arg1 + 0xcc) = zmm0_1[0]
    
    if (not(zmm6_1 < 9.99999997e-07f) && arg6 s< arg1[0x54].d)
        return (*(*arg1 + 0x848))(arg1, zmm6_1, arg6)

return result

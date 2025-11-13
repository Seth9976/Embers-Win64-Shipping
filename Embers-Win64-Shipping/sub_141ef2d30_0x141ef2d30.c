// 函数: sub_141ef2d30
// 地址: 0x141ef2d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(*arg1 + 0x5c0))()

if (result != 0)
    int64_t* rsi_1 = *(arg1[0x29] + 0x298)
    result = sub_141ea5e60(rsi_1)
    
    if (result != 0)
        result = sub_141dce090(arg1[0x29])
        
        if (result == 0)
            sub_141ea3bd0(rsi_1, *(arg1[0x29] + 0x2a0), &arg1[0x30], &arg1[0x2e])
            bool cond:0_1 = (arg1[0x71].b & 0x40) == 0
            void* rsi_2 = arg1[0x16]
            float zmm2_1[0x4] = *(rsi_2 + 0x1d0)
            zmm2_1[0] = zmm2_1[0] f- arg1[0x30].d
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            temp0_1[0] = temp0_1[0] f- *(arg1 + 0x184)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            temp0_2[0] = temp0_2[0] f- arg1[0x31].d
            float var_1c8 = zmm2_1[0]
            float var_1c4_1 = temp0_1[0]
            float var_1c0_1 = temp0_2[0]
            float var_1d8[0x4]
            float var_1b8[0x4]
            float var_168[0x4]
            
            if (not(cond:0_1))
                float zmm1_1[0x4] = *(rsi_2 + 0x1c0)
                uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rsi_2 + 0x180), zmm1_1, 4))
                var_1b8 = zmm1_1
                
                if (temp0_4 != 0)
                    *(rsi_2 + 0x180) = zmm1_1
                    int32_t* rax_3 = sub_140adf5d0(&var_1b8, &var_168)
                    *(rsi_2 + 0x190) = *rax_3
                    *(rsi_2 + 0x198) = rax_3[2]
                
                void* rcx_4 = arg1[0x29]
                var_1d8[0].q = *(rsi_2 + 0x190)
                var_1d8[2] = *(rsi_2 + 0x198)
                return sub_141eac110(rcx_4, &var_1c8, &var_1d8, 0)
            
            float var_138[0x10]
            float* rax_6
            int512_t zmm7_1
            int512_t zmm8_1
            int512_t zmm9_1
            int512_t zmm10_1
            int512_t zmm11_1
            rax_6, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_140626b90(&var_138, &arg1[0x2e])
            var_1d8 = *rax_6
            zmm9_1.o = rax_6[4]
            zmm10_1.o = rax_6[8]
            zmm11_1.o = rax_6[0xc]
            zmm7_1.o = rax_6[9]
            zmm8_1.o = rax_6[0xd]
            int128_t zmm12 = rax_6[6]
            int128_t zmm13 = rax_6[0xa]
            int128_t zmm14 = rax_6[0xe]
            int128_t zmm15 = rax_6[7]
            float var_158_1[0x4] = rax_6[2]
            float var_148_1[0x4] = rax_6[3]
            float arg_8 = rax_6[0xb][0]
            float arg_18 = rax_6[0xf][0]
            float zmm0_2[0x4] = *(rsi_2 + 0x1c0)
            var_168 = rax_6[1]
            rax_6[5]
            var_1b8 = zmm0_2
            float var_f8[0x10]
            float* rax_7
            float zmm6_2[0x4]
            float zmm7_2[0x4]
            float zmm8_2[0x4]
            float zmm9_2[0x4]
            int32_t zmm10_2
            int32_t zmm11_2
            rax_7, zmm6_2, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2 =
                sub_140626b90(&var_f8, &var_1b8)
            float zmm2_2[0x4] = *rax_7
            float zmm4_1[0x4] = *(rax_7 + 0x10)
            float zmm5_1[0x4] = *(rax_7 + 0x20)
            var_1b8 = *(rax_7 + 0x30)
            float zmm0_3[0x4] = var_168
            float temp0_5[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xe1)
            temp0_5[0] = zmm6_2[0]
            float temp0_6[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
            temp0_7[0] = zmm7_2[0]
            float temp0_8[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm7_2 = var_1d8
            float temp0_9[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xe1)
            temp0_9[0] = zmm9_2[0]
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
            temp0_10[0] = zmm8_2[0]
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
            temp0_11[0] = zmm10_2
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
            float temp0_13[0x4] = _mm_shuffle_ps(var_158_1, var_158_1, 0xe1)
            temp0_13[0] = zmm12.d
            float temp0_14[0x4] = _mm_mul_ps(temp0_6, temp0_12)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
            var_168 = temp0_12
            temp0_15[0] = zmm13.d
            float var_198_1[0x4] = temp0_12
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x27)
            temp0_16[0] = zmm11_2
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
            temp0_17[0] = zmm14.d
            float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), temp0_18)
            float var_1a8[0x4] = temp0_18
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x39)
            float temp0_22[0x4] = _mm_add_ps(temp0_14, temp0_20)
            zmm6_2 = var_168
            float temp0_23[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
            float temp0_24[0x4] = _mm_mul_ps(temp0_8, temp0_21)
            float temp0_25[0x4] = _mm_shuffle_ps(var_148_1, var_148_1, 0xe1)
            temp0_25[0] = zmm15.d
            float var_188_1[0x4] = temp0_21
            float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc6)
            float temp0_27[0x4] = _mm_add_ps(temp0_22, temp0_24)
            temp0_26[0] = arg_8[0]
            float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), temp0_21)
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x27)
            temp0_30[0] = arg_18[0]
            float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), temp0_18)
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x39)
            float var_178_1[0x4] = temp0_33
            float temp0_35[0x4] = _mm_add_ps(temp0_27, _mm_mul_ps(temp0_23, temp0_33))
            float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm6_2)
            float temp0_38[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
            var_1a8 = temp0_35
            float temp0_39[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
            float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_32)
            float temp0_41[0x4] = _mm_mul_ps(temp0_39, temp0_18)
            float temp0_42[0x4] = _mm_mul_ps(temp0_38, temp0_33)
            float temp0_43[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
            float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_29)
            float temp0_45[0x4] = _mm_mul_ps(temp0_43, zmm6_2)
            float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), temp0_21)
            float temp0_48[0x4] = _mm_add_ps(temp0_41, temp0_45)
            float temp0_49[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_50[0x4] = _mm_add_ps(temp0_44, temp0_42)
            float temp0_51[0x4] = _mm_mul_ps(temp0_49, temp0_33)
            float var_198_2[0x4] = temp0_50
            float var_188_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_48, temp0_47), temp0_51)
            float zmm3_1[0x4] = var_1b8
            float temp0_54[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
            float temp0_55[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            float temp0_56[0x4] = _mm_mul_ps(temp0_54, temp0_18)
            float temp0_57[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            float temp0_58[0x4] = _mm_mul_ps(temp0_55, zmm6_2)
            float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_21)
            float temp0_60[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
            float temp0_61[0x4] = _mm_add_ps(temp0_56, temp0_58)
            float temp0_62[0x4] = _mm_mul_ps(temp0_60, temp0_33)
            float var_178_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_61, temp0_59), temp0_62)
            sub_140adf440(&var_1a8, &var_1d8)
            return sub_141eac110(arg1[0x29], &var_1c8, &var_1d8, 1)

return result

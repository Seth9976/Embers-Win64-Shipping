// 函数: sub_14204c290
// 地址: 0x14204c290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
float zmm6[0x4]
int128_t zmm7
float zmm8[0x4]
result, zmm6, zmm7, zmm8 = sub_14207bdf0(arg1, arg2)

if (result != 0xffffffff)
    void* rcx = arg1[0x88]
    
    if (rcx != 0)
        if (sub_142368cd0(rcx, 1, 0xffffffff) != 0)
            char rcx_1 = arg1[0xbc].b | 2
            int32_t r14_3 = *(arg1 + 0x5dc) - arg1[0x9b].d + result
            float var_28_1[0x4] = zmm6
            int128_t var_38_1 = zmm7
            float var_48_1[0x4] = zmm8
            arg1[0xbc].b = (((rcx_1 << 2 | rcx_1) ^ rcx_1) & 4) ^ rcx_1
            int64_t r15_1 = sx.q(arg1[0x9b].d)
            int32_t rax_2 = (r15_1 + 1).d
            arg1[0x9b].d = rax_2
            
            if (rax_2 s> *(arg1 + 0x4dc))
                sub_1405a4cf0(&arg1[0x9a])
            
            *(arg1[0x9a] + (r15_1 << 2)) = r14_3
            *(arg1 + 0x5dc) += 1
            float zmm1_1[0x4] = *arg2
            float temp0_1[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
            float temp0_4[0x4] = _mm_mul_ps(zmm1_1, temp0_1)
            float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
            float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_3)
            zmm1_1 = arg2[2]
            float temp0_9[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
            float temp0_10[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
            float temp0_12[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_4, temp0_4, 1))
            float zmm4_1[0x4] = data_143f43310
            float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_6)
            float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_8)
            float temp0_15[0x4] = _mm_sub_ps(zmm4_1, temp0_12)
            float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm1_1)
            float temp0_17[0x4] = _mm_mul_ps(temp0_10, temp0_14)
            float zmm3_1[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_15, zmm1_1), data_143f43320)
            float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, zmm3_1, 0x32)
            float temp0_22[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3_1, 0), temp0_20, 0x82)
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_16, zmm3_1, 0x31)
            float temp0_25[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm3_1, 0x10), temp0_23, 0x88)
            float zmm0_1[0x4] = arg2[1]
            zmm4_1[0].q = zmm0_1 u>> 0x40
            float temp0_26[0x4] = _mm_shuffle_ps(temp0_16, temp0_17, 0x12)
            float temp0_27[0x4] = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, zmm3_1, 0xe8)
            float var_78_1[0x4] = temp0_27
            float var_a8[0x4] = temp0_22
            float var_98_1[0x4] = temp0_25
            float var_88_1[0x4] = temp0_28
            sub_14207bd70(&arg1[0x9f], &var_a8)
            void var_68
            int128_t* rax_4 = sub_1423633d0(arg1[0x88], &var_68)
            zmm6 = *rax_4
            float zmm2_1[0x4] = *(rax_4 + 8)
            int128_t zmm5_2 = *(rax_4 + 4)
            zmm2_1[0] = zmm2_1[0] f+ *(rax_4 + 0x14)
            zmm6[0] = zmm6[0] f- *(rax_4 + 0xc)
            zmm6[0] = zmm6[0] f+ *(rax_4 + 0xc)
            zmm2_1[0] = zmm2_1[0] f- *(rax_4 + 0x14)
            zmm7 = zmm5_2
            zmm5_2.d = zmm5_2.d f- rax_4[1].d
            zmm7.d = zmm7.d f+ rax_4[1].d
            float var_b8_1 = zmm2_1[0]
            float var_c4_1 = zmm2_1[0]
            int64_t var_e8 = (_mm_unpacklo_ps(zmm6, zmm5_2.q)).q
            float var_e0_1 = var_c4_1
            int64_t var_dc_1 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
            float var_d4_1 = var_b8_1
            char var_d0_1 = 1
            float var_108[0x4]
            float zmm1_2[0x4]
            int512_t zmm6_1
            int512_t zmm7_1
            zmm1_2, zmm6_1, zmm7_1 = sub_140ae2c60(&var_e8, &var_108, arg2)
            float zmm2_2[0x4] = var_108
            zmm7_1.o = var_38_1
            zmm6_1.o = var_28_1
            int64_t var_f8
            int32_t var_f0
            
            if (*(arg1 + 0x59c) == 0)
                if (var_f0.b != 0)
                    *(arg1 + 0x584) = zmm2_2
                    *(arg1 + 0x594) = var_f8
                    *(arg1 + 0x59c) = var_f0
            else if (var_f0.b != 0)
                zmm1_2 = arg1[0xb1].d
                *(arg1 + 0x584) = _mm_min_ss((*(arg1 + 0x584))[0], zmm2_2[0])[0]
                float temp0_32[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                float temp0_33[0x4] = _mm_min_ss(zmm1_2[0], temp0_32[0])
                float temp0_35[0x4] =
                    __minss_xmmss_memss(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)[0], *(arg1 + 0x58c))
                arg1[0xb1].d = temp0_33[0]
                zmm1_2 = arg1[0xb2].d
                *(arg1 + 0x58c) = temp0_35[0]
                float temp0_36[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
                float temp0_37[0x4] = _mm_max_ss(zmm1_2[0], temp0_36[0])
                float temp0_38[0x4] = __maxss_xmmss_memss(var_f8.d[0], *(arg1 + 0x594))
                arg1[0xb2].d = temp0_37[0]
                zmm1_2 = __maxss_xmmss_memss(arg1[0xb3].d[0], var_f8:4.d)
                *(arg1 + 0x594) = temp0_38[0]
                arg1[0xb3].d = zmm1_2[0]
            
            int64_t r14_4 = sx.q(arg1[0xb5].d)
            int32_t rax_8 = (r14_4 + 1).d
            arg1[0xb5].d = rax_8
            
            if (rax_8 s> *(arg1 + 0x5ac))
                sub_1405c50f0(&arg1[0xb4])
                zmm2_2 = var_108
            
            int64_t rcx_7 = arg1[0xb4]
            float (* rdx_6)[0x4] = r14_4 * 0x1c
            *(rdx_6 + rcx_7) = zmm2_2
            *(rdx_6 + rcx_7 + 0x10) = var_f8
            *(rdx_6 + rcx_7 + 0x18) = var_f0
            
            if ((arg1[0xbc].b & 8) != 0)
                rdx_6.b = arg1[0x94].d s> 1
                sub_1420516f0(arg1, rdx_6.b, 0, zmm1_2)

return result

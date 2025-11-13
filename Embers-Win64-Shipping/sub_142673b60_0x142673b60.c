// 函数: sub_142673b60
// 地址: 0x142673b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
uint64_t result = __security_cookie ^ &var_108
uint64_t result_1 = result
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t rsi_1 = 0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    
    do
        bool rdx = false
        void* rcx_1 = *arg2 + rsi_1
        
        if (arg4 u<= 0xf)
            result = zx.q(*(rcx_1 + 0x14))
            rdx = test_bit(result.d, arg4)
        
        if (rdx != 0)
            zmm8 = *arg3
            float zmm0[0x4] = *(rcx_1 + 0x38)
            float zmm4[0x4] = arg3[2]
            float zmm3[0x4] = *(rcx_1 + 0x30)
            float temp0_1[0x4] = _mm_unpacklo_ps(*(rcx_1 + 0x34), zx.o(0)[0].q)
            float zmm5[0x4] = arg3[1]
            float temp0_4[0x4] =
                _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_1[0].q), zmm4)
            int16_t var_9c_1 = 0
            float temp0_5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
            char var_9a_1 = 0
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_6)
            float temp0_12[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_5), temp0_9)
            float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
            float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_6)
            float temp0_18[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_15, temp0_5), temp0_16)
            float temp0_20[0x4] = _mm_add_ps(_mm_mul_ps(temp0_7, temp0_13), temp0_4)
            zmm3 = *(rcx_1 + 0x3c)
            float temp0_22[0x4] = _mm_add_ps(_mm_add_ps(temp0_18, temp0_20), zmm5)
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
            float var_d8_1 = (temp0_22 ^ 0x80000000)[0]
            float temp0_24[0x4] = _mm_unpacklo_ps(zmm3, (*(rcx_1 + 0x44))[0].q)
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
            float var_d0_1 = (temp0_23 ^ 0x80000000)[0]
            float var_d4_1 = temp0_25[0]
            float temp0_28[0x4] = _mm_mul_ps(
                _mm_unpacklo_ps(temp0_24, _mm_unpacklo_ps(*(rcx_1 + 0x40), 0)[0].q), zmm4)
            float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_6)
            float temp0_33[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_5), temp0_30)
            float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
            float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
            float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xd2)
            float temp0_37[0x4] = _mm_mul_ps(temp0_35, temp0_6)
            float temp0_43[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_36, temp0_5), temp0_37), 
                    _mm_add_ps(_mm_mul_ps(temp0_7, temp0_34), temp0_28)), 
                zmm5)
            float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x55)
            float var_cc_1 = (temp0_43 ^ 0x80000000)[0]
            bool cond:0_1 = *(rcx_1 + 0x1c) == 0
            float temp0_45[0x4] = _mm_unpacklo_ps(*(rcx_1 + 0x48), (*(rcx_1 + 0x50))[0].q)
            result.b = cond:0_1
            float var_c8_1 = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)[0]
            result.b += 4
            float var_c4_1 = (temp0_44 ^ 0x80000000)[0]
            float temp0_49[0x4] = _mm_mul_ps(
                _mm_unpacklo_ps(temp0_45, _mm_unpacklo_ps(*(rcx_1 + 0x4c), 0)[0].q), zmm4)
            char var_99_1 = result.b
            float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xc9)
            float temp0_51[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xd2)
            float temp0_52[0x4] = _mm_mul_ps(temp0_50, temp0_6)
            float temp0_54[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_51, temp0_5), temp0_52)
            float temp0_55[0x4] = _mm_add_ps(temp0_54, temp0_54)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xc9)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xd2)
            float temp0_58[0x4] = _mm_mul_ps(temp0_56, temp0_6)
            float temp0_60[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_57, temp0_5), temp0_58)
            float temp0_62[0x4] = _mm_add_ps(_mm_mul_ps(temp0_7, temp0_55), temp0_49)
            zmm3 = *(rcx_1 + 0x54)
            float temp0_64[0x4] = _mm_add_ps(_mm_add_ps(temp0_60, temp0_62), zmm5)
            float zmm1[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55) ^ 0x80000000
            float temp0_66[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xaa)
            float var_c0_1 = (temp0_64 ^ 0x80000000)[0]
            float temp0_67[0x4] = _mm_unpacklo_ps(zmm3, (*(rcx_1 + 0x5c))[0].q)
            float var_b8_1 = zmm1[0]
            float var_bc_1 = temp0_66[0]
            float temp0_70[0x4] = _mm_mul_ps(
                _mm_unpacklo_ps(temp0_67, _mm_unpacklo_ps(*(rcx_1 + 0x58), 0)[0].q), zmm4)
            float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xc9), temp0_6)
            float temp0_75[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xd2), temp0_5), temp0_72)
            float temp0_76[0x4] = _mm_add_ps(temp0_75, temp0_75)
            float temp0_77[0x4] = _mm_mul_ps(temp0_7, temp0_76)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc9)
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xd2)
            float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_6)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_5)
            float temp0_82[0x4] = _mm_add_ps(temp0_77, temp0_70)
            float temp0_85[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_81, temp0_80), temp0_82), zmm5)
            zmm1 = _mm_shuffle_ps(temp0_85, temp0_85, 0x55) ^ 0x80000000
            float temp0_87[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)
            float var_b4_1 = (temp0_85 ^ 0x80000000)[0]
            float var_ac_1 = zmm1[0]
            float var_b0_1 = temp0_87[0]
            float var_a8_1 = (*(rcx_1 + 0xc))[0]
            
            if ((*(rcx_1 + 0x1d) & 1) == 0)
                int32_t var_a4_2 = arg5.d
            else
                float var_a4_1 = (*(rcx_1 + 0x10))[0]
            
            int32_t var_a0_1 = *(rcx_1 + 8)
            void* rax_2 = sub_141dc5740(rcx_1)
            int64_t* rdi_1 = arg1[2]
            int32_t var_e8
            sub_140865c40(rdi_1, &var_e8, rax_2)
            int64_t rax_3 = sx.q(var_e8)
            void* const r8_1
            
            if (rax_3.d == 0xffffffff)
                r8_1 = nullptr
            else
                r8_1 = *rdi_1 + rax_3 * 0x18
            
            char* rcx_3 = r8_1 + 8
            
            if (r8_1 == 0)
                rcx_3 = nullptr
            
            if (rcx_3 != 0)
                char var_9a_2 = *rcx_3
                int16_t var_9c_2 = *(arg1[3] + (sx.q(*rcx_3) << 1))
            
            int64_t rdi_2 = sx.q(arg1[1].d)
            int32_t rax_7 = (rdi_2 + 1).d
            arg1[1].d = rax_7
            
            if (rax_7 s> *(arg1 + 0xc))
                sub_1405c4fe0(arg1)
            
            result = *arg1
            int64_t rcx_8 = rdi_2 << 6
            *(rcx_8 + result) = var_d8_1.o
            *(rcx_8 + result + 0x10) = var_c8_1.o
            *(rcx_8 + result + 0x20) = var_b8_1.o
            *(rcx_8 + result + 0x30) = var_a8_1.o
        
        i += 1
        rsi_1 += 0x60
    while (i s< arg2[1].d)

__security_check_cookie(result_1 ^ &var_108)
return result

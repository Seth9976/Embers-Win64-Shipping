// 函数: sub_142673780
// 地址: 0x142673780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
uint64_t result = __security_cookie ^ &var_118
uint64_t result_1 = result
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t rsi_1 = 0
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    
    do
        bool rcx = false
        void* r8_1 = *arg2 + rsi_1
        
        if (arg4 u<= 0xf)
            result = zx.q(*(r8_1 + 0x14))
            rcx = test_bit(result.d, arg4)
        
        if (rcx != 0)
            zmm9 = *arg3
            float zmm0[0x4] = *(r8_1 + 0x38)
            float zmm4[0x4] = *(r8_1 + 0x30)
            float temp0_1[0x4] = _mm_unpacklo_ps(*(r8_1 + 0x34), zx.o(0)[0].q)
            float temp0_4[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm0[0].q), temp0_1[0].q), arg3[2])
            int64_t var_dc_1 = 0
            float temp0_5[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
            int32_t var_d4_1 = 0
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
            float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
            int64_t var_c4_1 = 0
            int32_t var_bc_1 = 0
            int16_t var_ac_1 = 0
            char var_aa_1 = 0
            float temp0_12[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_8, temp0_6), temp0_10)
            float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
            float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
            float zmm2[0x4] = *(r8_1 + 0x40)
            float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_4)
            float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_5)
            float temp0_22[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_6), temp0_18), temp0_17), arg3[1])
            float zmm1[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55) ^ 0x80000000
            float var_e8_1 = (temp0_22 ^ 0x80000000)[0]
            zmm0 = *(r8_1 + 0x44)
            float var_e0_1 = zmm1[0]
            float temp0_24[0x4] = _mm_unpacklo_ps(zmm2, 0)
            float var_e4_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
            float temp0_28[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(*(r8_1 + 0x3c), zmm0[0].q), temp0_24[0].q), arg3[2])
            float temp0_33[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_6), 
                _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_5))
            float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
            float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xd2)
            float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
            float temp0_37[0x4] = _mm_mul_ps(temp0_34, temp0_7)
            float temp0_38[0x4] = _mm_mul_ps(temp0_35, temp0_6)
            float temp0_39[0x4] = _mm_mul_ps(temp0_36, temp0_5)
            float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_28)
            float temp0_43[0x4] =
                __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_38, temp0_39), temp0_40), arg3[1])
            zmm1 = _mm_shuffle_ps(temp0_43, temp0_43, 0x55) ^ 0x80000000
            float var_d0_1 = (temp0_43 ^ 0x80000000)[0]
            zmm0 = *(r8_1 + 0xc)
            rcx = ((*(r8_1 + 0x1c) == 0) + 2) | (*(r8_1 + 0x1d) & 2) << 2
            float var_cc_1 = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)[0]
            float var_c8_1 = zmm1[0]
            float var_b8_1 = zmm0[0]
            bool var_a9_1 = rcx
            
            if ((*(r8_1 + 0x1d) & 1) == 0)
                int32_t var_b4_2 = arg5.d
            else
                float var_b4_1 = (*(r8_1 + 0x10))[0]
            
            int32_t var_b0_1 = *(r8_1 + 8)
            void* rax_3 = sub_141dc5740(r8_1)
            int64_t* rdi_1 = arg1[2]
            int32_t var_f8
            sub_140865c40(rdi_1, &var_f8, rax_3)
            int64_t rax_4 = sx.q(var_f8)
            void* const r8_3
            
            if (rax_4.d == 0xffffffff)
                r8_3 = nullptr
            else
                r8_3 = *rdi_1 + rax_4 * 0x18
            
            char* rcx_3 = r8_3 + 8
            
            if (r8_3 == 0)
                rcx_3 = nullptr
            
            if (rcx_3 != 0)
                char var_aa_2 = *rcx_3
                int16_t var_ac_2 = *(arg1[3] + (sx.q(*rcx_3) << 1))
            
            int64_t rdi_2 = sx.q(arg1[1].d)
            int32_t rax_8 = (rdi_2 + 1).d
            arg1[1].d = rax_8
            
            if (rax_8 s> *(arg1 + 0xc))
                sub_1405c4fe0(arg1)
            
            result = *arg1
            int64_t rcx_8 = rdi_2 << 6
            *(rcx_8 + result) = var_e8_1.o
            *(rcx_8 + result + 0x10) = var_dc_1:4.o
            *(rcx_8 + result + 0x20) = var_c8_1.o
            *(rcx_8 + result + 0x30) = var_b8_1.o
        
        i += 1
        rsi_1 += 0x48
    while (i s< arg2[1].d)

__security_check_cookie(result_1 ^ &var_118)
return result

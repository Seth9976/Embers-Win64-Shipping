// 函数: sub_1421cdea0
// 地址: 0x1421cdea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg2[5]
int64_t var_f0 = 0
int32_t var_e8
int128_t zmm1 = sub_141fe56b0(arg1 + 0x30, &var_e8, *(arg2 + 0x12c), arg3, (arg2[3]).d, nullptr)
int64_t var_f0_1 = 0
int32_t var_d8
int64_t* result
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
result, zmm6, zmm7, zmm8, zmm9 =
    sub_141fe56b0(arg1 + 0x78, &var_d8, *(arg2 + 0x12c), zmm1, (arg2[3]).d, nullptr)
bool cond:0 = (*(arg1 + 0xc0) & 1) != 0
int32_t var_e0
float zmm10[0x4] = var_e0
int32_t var_e4
float zmm11[0x4] = var_e4
float zmm12[0x4] = var_e8
int32_t var_d0
float zmm13[0x4] = __minss_xmmss_memss(zmm10[0], var_d0)
int32_t var_d4
float zmm14[0x4] = __minss_xmmss_memss(zmm11[0], var_d4)
zmm10 = __maxss_xmmss_memss(zmm10[0], var_d0)
zmm11 = __maxss_xmmss_memss(zmm11[0], var_d4)
float zmm15[0x4] = __minss_xmmss_memss(zmm12[0], var_d8)
zmm12 = __maxss_xmmss_memss(zmm12[0], var_d8)
float zmm2_2[0x4]

if (not(cond:0))
    result = arg2[3]
    zmm2_2 = *(result + 0x1d0)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
    zmm2_2[0] = zmm2_2[0] + zmm15[0]
    temp0_6[0] = temp0_6[0] + zmm14[0]
    zmm15 = zmm2_2
    float temp0_7[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
    zmm14 = temp0_6
    temp0_7[0] = temp0_7[0] + zmm13[0]
    float temp0_8[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
    temp0_8[0] = temp0_8[0] + zmm11[0]
    zmm13 = temp0_7
    float temp0_9[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
    zmm2_2[0] = zmm2_2[0] + zmm12[0]
    temp0_9[0] = temp0_9[0] + zmm10[0]
    zmm11 = temp0_8
    zmm12 = zmm2_2
    zmm10 = temp0_9

int32_t rdi = arg2[0x23].d
int32_t result_1 = rdi - 1
int64_t r14 = arg2[0x1e]
int32_t r15 = *(arg2 + 0x114)

if (rdi - 1 s>= 0)
    float var_38_1[0x4] = zmm6
    float var_48_1[0x4] = zmm7
    result = sx.q(result_1)
    float var_58_1[0x4] = zmm8
    float var_68_1[0x4] = zmm9
    int16_t* rsi_1 = arg2[0x1f] + (result << 1)
    int32_t result_2
    
    do
        void* rcx_5 = zx.q(zx.d(*rsi_1) * r15) + r14
        
        if ((*(rcx_5 + 0x5c) & 0x4000000) == 0)
            zmm6 = *(rcx_5 + 0x10)
            zmm2_2 = *(arg2 + 0x1ac)
            float zmm3_1[0x4] = arg2[0x36].d
            bool cond:2_1 = (*(*(r13 + 0x30) + 0x59) & 1) == 0
            zmm6[0] = zmm6[0] f+ arg2[0x35].d
            zmm2_2[0] = zmm2_2[0] f+ *(rcx_5 + 0x14)
            zmm3_1[0] = zmm3_1[0] f+ *(rcx_5 + 0x18)
            int32_t rcx_6
            
            if (cond:2_1)
                rcx_6 = *(arg1 + 0xc0)
                
                if ((rcx_6.b & 5) == 0)
                    void* rax_2 = arg2[3]
                    float temp0_34[0x4] = _mm_unpacklo_ps(zmm2_2, 0)
                    float temp0_36[0x4] =
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm3_1[0].q), temp0_34[0].q)
                    zmm9 = *(rax_2 + 0x1d0)
                    zmm6 = *(rax_2 + 0x1e0)
                    float temp0_37[0x4] = _mm_sub_ps(temp0_36, zmm9)
                    float temp0_38[0x4] = __mulps_xmmps_memps(*(rax_2 + 0x1c0), data_143f4eb20)
                    float temp0_39[0x4] = _mm_rcp_ps(zmm6)
                    zmm8 = __andps_xmmxud_memxud(temp0_37, data_143f4deb0)
                    float temp0_41[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc9)
                    float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xd2)
                    float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_42)
                    float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_41)
                    float temp0_47[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xff)
                    float temp0_48[0x4] = _mm_sub_ps(temp0_46, temp0_44)
                    float temp0_49[0x4] = _mm_mul_ps(temp0_39, temp0_39)
                    float temp0_50[0x4] = _mm_add_ps(temp0_39, temp0_39)
                    float temp0_51[0x4] = _mm_add_ps(temp0_48, temp0_48)
                    float temp0_52[0x4] = _mm_mul_ps(temp0_49, zmm6)
                    float temp0_53[0x4] = _mm_mul_ps(temp0_47, temp0_51)
                    float temp0_54[0x4] = _mm_sub_ps(temp0_50, temp0_52)
                    float temp0_56[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xd2), temp0_41)
                    float temp0_57[0x4] = _mm_add_ps(temp0_53, zmm8)
                    float temp0_58[0x4] = _mm_mul_ps(temp0_54, temp0_54)
                    float temp0_59[0x4] = _mm_add_ps(temp0_54, temp0_54)
                    float temp0_60[0x4] = _mm_mul_ps(temp0_58, zmm6)
                    float temp0_62[0x4] = __cmpps_xmmps_memps_immb(
                        __andps_xmmxud_memxud(zmm6, data_143f4dee0), data_143f4eb10, 2)
                    float temp0_63[0x4] = _mm_sub_ps(temp0_59, temp0_60)
                    float temp0_66[0x4] = _mm_sub_ps(temp0_56, 
                        _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xc9), temp0_42))
                    zmm6 = _mm_and_ps(temp0_62, temp0_63 ^ zx.o(0)) ^ temp0_63
                    float temp0_69[0x4] = _mm_mul_ps(_mm_add_ps(temp0_66, temp0_57), zmm6)
                    temp0_69[0] = temp0_69[0] + zmm9[0]
                    float temp0_70[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
                    zmm3_1 = _mm_shuffle_ps(temp0_69, temp0_69, 0xaa)
                    zmm6 = temp0_69
                    float temp0_72[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                    temp0_70[0] = temp0_70[0] + temp0_72[0]
                    float temp0_73[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                    zmm3_1[0] = zmm3_1[0] + temp0_73[0]
                    zmm2_2 = temp0_70
            else
                void* rax_1 = arg2[3]
                rcx_6 = *(arg1 + 0xc0)
                float temp0_11[0x4] = _mm_unpacklo_ps(zmm2_2, 0)
                float temp0_12[0x4] = _mm_unpacklo_ps(zmm6, zmm3_1[0].q)
                float zmm4_1[0x4] = *(rax_1 + 0x1c0)
                float temp0_14[0x4] =
                    __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_12, temp0_11[0].q), *(rax_1 + 0x1e0))
                float temp0_15[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                float temp0_16[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                float temp0_17[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                float temp0_22[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xd2), temp0_15), 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), temp0_16))
                float temp0_23[0x4] = _mm_add_ps(temp0_22, temp0_22)
                float temp0_24[0x4] = _mm_mul_ps(temp0_17, temp0_23)
                float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc9)
                float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xd2), temp0_15)
                float temp0_28[0x4] = _mm_mul_ps(temp0_25, temp0_16)
                float temp0_29[0x4] = _mm_add_ps(temp0_24, temp0_14)
                zmm6 = _mm_add_ps(_mm_sub_ps(temp0_27, temp0_28), temp0_29)
                zmm2_2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm3_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            
            if (not(zmm6[0] <= zmm15[0]) && not(zmm6[0] >= zmm12[0]) && not(zmm2_2[0] <= zmm14[0])
                    && not(zmm2_2[0] >= zmm11[0]) && not(zmm3_1[0] <= zmm13[0]))
                result = 1
            
            if (zmm6[0] <= zmm15[0] || zmm6[0] >= zmm12[0] || zmm2_2[0] <= zmm14[0]
                    || zmm2_2[0] >= zmm11[0] || zmm3_1[0] <= zmm13[0] || not(zmm3_1[0] < zmm10[0]))
                result = nullptr
            
            if ((rcx_6 u>> 1 & 1) == result.d)
                result = (*(*arg2 + 0xe8))(arg2, zx.q(result_1))
        
        rsi_1 -= 2
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

return result

// 函数: sub_142232f90
// 地址: 0x142232f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
uint64_t result = __security_cookie ^ &var_128
uint64_t result_1 = result
int64_t* rcx = *(arg1 + 0xa0)
float var_108 = 0f

if (rcx != 0)
    float zmm0[0x4] = data_143dbb200
    float zmm3[0x4] = data_143dbb1f8
    int64_t rax_1 = *rcx
    float temp0_1[0x4] = _mm_unpacklo_ps(data_143dbb1fc, 0)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    zmm0 = *(arg2 + 8)
    float temp0_3[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float zmm11[0x4] = data_14399f720
    float temp0_6[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, zmm0[0].q), _mm_unpacklo_ps(*(arg2 + 4), 0)[0].q)
    float var_e8_1[0x4] = zmm11
    int32_t rax_2 = (*(rax_1 + 0x40))(rcx, zx.o(0))
    int64_t* rcx_1 = *(arg1 + 0xa0)
    int64_t rdx = *rcx_1
    int64_t rax_3 = (*(rdx + 0x30))(rcx_1, rdx)
    int64_t* rcx_2 = *(arg1 + 0xa0)
    int64_t rdx_1 = *rcx_2
    result = (*(rdx_1 + 0x38))(rcx_2, rdx_1)
    int32_t rbx_1 = 0
    uint64_t result_2 = result
    
    if (rax_2 s> 0)
        float zmm7[0x4]
        float var_38_1[0x4] = zmm7
        float zmm8[0x4]
        float var_48_1[0x4] = zmm8
        float zmm9[0x4]
        float var_58_1[0x4] = zmm9
        float zmm10[0x4]
        float var_68_1[0x4] = zmm10
        float zmm12[0x4]
        float var_88_1[0x4] = zmm12
        float zmm13[0x4]
        float var_98_1[0x4] = zmm13
        float zmm14[0x4]
        float var_a8_1[0x4] = zmm14
        
        do
            int64_t* rcx_3 = *(arg1 + 0xa0)
            int64_t r9_1 = *rcx_3
            void var_d8
            result = (*(r9_1 + 0x48))(rcx_3, zx.q(rbx_1), &var_d8, r9_1, var_108)
            
            if (result.b != 0)
                int16_t var_c8
                uint32_t r8_2 = zx.d(var_c8)
                
                if (r8_2 u> 2)
                    int16_t var_c6
                    uint64_t rdx_3 = zx.q(var_c6)
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xd2)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                    char* rdx_5 = rdx_3 + 2 + result_2
                    uint64_t i_1 = zx.q(r8_2 - 2)
                    uint64_t rax_4 = zx.q(*(rdx_3 + result_2)) * 3
                    float temp0_13[0x4] = _mm_mul_ps(
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rax_3 + (rax_4 << 2)), 
                                (*(rax_3 + (rax_4 << 2) + 8))[0].q), 
                            _mm_unpacklo_ps(*(rax_3 + (rax_4 << 2) + 4), zx.o(0)[0].q)[0].q), 
                        temp0_6)
                    float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
                    float temp0_16[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_7)
                    float temp0_18[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_14, temp0_8), temp0_16)
                    uint64_t i
                    
                    do
                        uint64_t rcx_5 = zx.q(*rdx_5) * 3
                        result = zx.q(rdx_5[-1])
                        uint64_t rcx_6 = result * 3
                        float temp0_21[0x4] = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rax_3 + (rcx_5 << 2)), 
                                (*(rax_3 + (rcx_5 << 2) + 8))[0].q), 
                            _mm_unpacklo_ps(*(rax_3 + (rcx_5 << 2) + 4), 0)[0].q)
                        float zmm2[0x4] = *(rax_3 + (rcx_6 << 2) + 4)
                        float temp0_22[0x4] = _mm_mul_ps(temp0_21, temp0_6)
                        float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
                        float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xd2)
                        float temp0_25[0x4] = _mm_mul_ps(temp0_23, temp0_7)
                        float temp0_27[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_24, temp0_8), temp0_25)
                        float temp0_28[0x4] = _mm_add_ps(temp0_27, temp0_27)
                        float temp0_30[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_7)
                        float temp0_33[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_8), temp0_30)
                        float temp0_34[0x4] = _mm_mul_ps(temp0_9, temp0_28)
                        float temp0_35[0x4] = _mm_unpacklo_ps(zmm2, 0)
                        float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_22)
                        zmm3 = *(rax_3 + (rcx_6 << 2))
                        float temp0_37[0x4] = _mm_add_ps(temp0_33, temp0_36)
                        float temp0_40[0x4] = _mm_mul_ps(
                            _mm_unpacklo_ps(
                                _mm_unpacklo_ps(zmm3, (*(rax_3 + (rcx_6 << 2) + 8))[0].q), 
                                temp0_35[0].q), 
                            temp0_6)
                        float temp0_41[0x4] = _mm_add_ps(temp0_37, temp0_3)
                        float temp0_42[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xc9)
                        float temp0_43[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xd2)
                        float temp0_44[0x4] = _mm_mul_ps(temp0_42, temp0_7)
                        float temp0_46[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_43, temp0_8), temp0_44)
                        float temp0_47[0x4] = _mm_add_ps(temp0_46, temp0_46)
                        float temp0_48[0x4] = _mm_mul_ps(temp0_9, temp0_47)
                        float temp0_49[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xd2)
                        float temp0_51[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc9), temp0_7)
                        float temp0_52[0x4] = _mm_add_ps(temp0_48, temp0_40)
                        float temp0_53[0x4] = _mm_mul_ps(temp0_49, temp0_8)
                        float temp0_54[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xaa)
                        float temp0_56[0x4] = _mm_add_ps(_mm_sub_ps(temp0_53, temp0_51), temp0_52)
                        float temp0_57[0x4] = _mm_add_ps(temp0_18, temp0_18)
                        float temp0_58[0x4] = _mm_add_ps(temp0_56, temp0_3)
                        float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xd2)
                        float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc9)
                        float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_8)
                        float temp0_62[0x4] = _mm_mul_ps(temp0_60, temp0_7)
                        float temp0_63[0x4] = _mm_mul_ps(temp0_57, temp0_9)
                        float temp0_64[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
                        float temp0_65[0x4] = _mm_sub_ps(temp0_61, temp0_62)
                        float temp0_66[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
                        float zmm4_1 = temp0_64[0]
                        float temp0_67[0x4] = _mm_add_ps(temp0_63, temp0_13)
                        zmm4_1 = zmm4_1 * temp0_54[0]
                        float temp0_69[0x4] = _mm_add_ps(_mm_add_ps(temp0_65, temp0_67), temp0_3)
                        temp0_64[0] = temp0_64[0] * temp0_41[0]
                        rdx_5 = &rdx_5[1]
                        temp0_66[0] = temp0_66[0] * temp0_41[0]
                        float temp0_70[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x55)
                        temp0_66[0] = temp0_66[0] * temp0_70[0]
                        zmm4_1 = zmm4_1 - temp0_66[0]
                        temp0_58[0] = temp0_58[0] * temp0_54[0]
                        temp0_58[0] = temp0_58[0] * temp0_70[0]
                        zmm4_1 = zmm4_1 * temp0_69[0]
                        temp0_66[0] = temp0_66[0] - temp0_58[0]
                        temp0_58[0] = temp0_58[0] - temp0_64[0]
                        float temp0_71[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
                        float temp0_72[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xaa)
                        temp0_66[0] = temp0_66[0] * temp0_71[0]
                        temp0_58[0] = temp0_58[0] * temp0_72[0]
                        float zmm6[0x4] = var_108
                        temp0_66[0] = temp0_66[0] * 0.166666672f
                        temp0_58[0] = temp0_58[0] * 0.166666672f
                        temp0_66[0] = temp0_66[0] + zmm4_1 * 0.166666672f
                        temp0_66[0] = temp0_66[0] + temp0_58[0]
                        zmm6[0] = zmm6[0] + temp0_66[0]
                        var_108 = zmm6[0]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    zmm11 = var_e8_1
            
            rbx_1 += 1
        while (rbx_1 s< rax_2)

__security_check_cookie(result_1 ^ &var_128)
return result

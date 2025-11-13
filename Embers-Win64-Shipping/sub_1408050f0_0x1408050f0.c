// 函数: sub_1408050f0
// 地址: 0x1408050f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(arg2)

if (result.b == 0 || (arg1 != 0 && arg2[0x5e] != *(arg1 + 0x58)))
    result.b = 1
else
    void* rcx_1 = *(arg2 + 8)
    
    if (rcx_1 != 0)
        int32_t rdx = arg2[0x5f]
        int64_t* rcx_2 = *(rcx_1 + 0x50)
        uint32_t rax = zx.d(*(rcx_2 + 0x5f))
        
        if (rax s>= rdx)
            rdx = rax
        
        result = sub_1423647f0(rcx_2, rdx)
    
    if (rcx_1 != 0 && result.d s> arg2[0x60])
        result.b = 1
    else
        result = *(arg2 + 8)
        bool cond:0_1
        
        if (result == 0)
            cond:0_1 = (arg2[0x45].b & 7) != 0
        label_1408051d7:
            
            if (cond:0_1)
                result.b = 1
            else
                arg2[0x44] = arg4[0]
                
                if (sub_140d3e110(arg2).b == 0)
                    result.b = 0
                    *(arg2 + 0x90) = data_14399f6e0
                    *(arg2 + 0xa0) = data_14399f6f0
                    *(arg2 + 0xb0) = data_14399f700
                    *(arg2 + 0xc0) = data_14399f710
                    *(arg2 + 0xd0) = data_14399f6e0
                    *(arg2 + 0xe0) = data_14399f6f0
                    *(arg2 + 0xf0) = data_14399f700
                    *(arg2 + 0x100) = data_14399f710
                    *(arg2 + 0x10) = data_14399f6e0
                    *(arg2 + 0x20) = data_14399f6f0
                    *(arg2 + 0x30) = data_14399f700
                    *(arg2 + 0x40) = data_14399f710
                    *(arg2 + 0x50) = data_14399f6e0
                    *(arg2 + 0x60) = data_14399f6f0
                    *(arg2 + 0x70) = data_14399f700
                    *(arg2 + 0x80) = data_14399f710
                else
                    float zmm1[0x4] = *(arg2 + 0x20)
                    *(arg2 + 0x90) = *(arg2 + 0x10)
                    float zmm0[0x4] = *(arg2 + 0x30)
                    *(arg2 + 0xa0) = zmm1
                    zmm1 = *(arg2 + 0x40)
                    *(arg2 + 0xb0) = zmm0
                    *(arg2 + 0xd0) = *(arg2 + 0x50)
                    zmm0 = *(arg2 + 0x70)
                    *(arg2 + 0xc0) = zmm1
                    *(arg2 + 0xe0) = *(arg2 + 0x60)
                    zmm1 = *(arg2 + 0x80)
                    *(arg2 + 0xf0) = zmm0
                    *(arg2 + 0x100) = zmm1
                    void* rax_1 = sub_140d3c6e0(arg2)
                    arg4 = *(rax_1 + 0x1c0)
                    float temp0_1[0x4] = _mm_add_ps(arg4, arg4)
                    float temp0_2[0x4] = _mm_shuffle_ps(arg4, arg4, 4)
                    float temp0_3[0x4] = _mm_shuffle_ps(arg4, arg4, 0xff)
                    float temp0_4[0x4] = _mm_mul_ps(arg4, temp0_1)
                    float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
                    float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
                    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
                    float temp0_9[0x4] = _mm_mul_ps(temp0_3, temp0_7)
                    zmm1 = *(rax_1 + 0x1e0)
                    float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
                    float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                    float zmm4[0x4] = data_143ce2b60
                    float temp0_13[0x4] = _mm_add_ps(temp0_9, temp0_6)
                    float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_9)
                    float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
                    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
                    float zmm2[0x4] = __andps_xmmxud_memxud(
                        _mm_mul_ps(_mm_sub_ps(zmm4, temp0_11), zmm1), data_143ce2b70)
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
                    float temp0_22[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_20, 0x82)
                    float temp0_23[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
                    float temp0_25[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_23, 0x88)
                    zmm0 = *(rax_1 + 0x1d0)
                    *(arg2 + 0x10) = temp0_22
                    *(arg2 + 0x20) = temp0_25
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
                    zmm4[0].q = zmm0 u>> 0x40
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, zmm2, 0xe8)
                    float temp0_28[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
                    *(arg2 + 0x30) = temp0_27
                    *(arg2 + 0x40) = temp0_28
                    uint32_t var_e8[0x4][0x4]
                    result = sub_140631b10(&arg2[4], &var_e8)
                    float zmm4_1[0x4] = *result
                    int32_t zmm0_1 = *(result + 0x10)
                    int32_t zmm7_1 = *(result + 0x18)
                    int32_t zmm11_1 = *(result + 0x1c)
                    int32_t zmm9_1 = *(result + 0x28)
                    int32_t zmm13_1 = *(result + 0x2c)
                    int32_t zmm10_1 = *(result + 0x38)
                    int32_t zmm14_1 = *(result + 0x3c)
                    float zmm8_1[0x4] = *(result + 4)
                    float zmm12_1[0x4] = *(result + 8)
                    int32_t zmm3 = *(result + 0x14)
                    float zmm15_1[0x4] = *(result + 0xc)
                    int32_t zmm1_1 = *(result + 0x20)
                    int32_t zmm5_1 = *(result + 0x24)
                    int32_t zmm2_1 = *(result + 0x30)
                    int32_t zmm6_1 = *(result + 0x34)
                    result.b = 0
                    float temp0_29[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xe1)
                    float temp0_30[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xe1)
                    temp0_29[0] = zmm3
                    float temp0_31[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xe1)
                    temp0_30[0] = zmm7_1
                    temp0_31[0] = zmm11_1
                    float temp0_32[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                    temp0_32[0] = zmm0_1
                    float temp0_33[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc6)
                    float temp0_34[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc6)
                    temp0_33[0] = zmm5_1
                    float temp0_35[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
                    temp0_34[0] = zmm9_1
                    temp0_35[0] = zmm13_1
                    float temp0_36[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
                    temp0_36[0] = zmm1_1
                    float temp0_37[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x27)
                    float temp0_38[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x27)
                    temp0_37[0] = zmm6_1
                    float temp0_39[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x27)
                    temp0_38[0] = zmm10_1
                    temp0_39[0] = zmm14_1
                    float temp0_40[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x27)
                    float temp0_41[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x39)
                    temp0_40[0] = zmm2_1
                    float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x39)
                    float temp0_43[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x39)
                    *(arg2 + 0x50) = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
                    *(arg2 + 0x60) = temp0_41
                    *(arg2 + 0x70) = temp0_42
                    *(arg2 + 0x80) = temp0_43
        else
            uint8_t r8 = *(result + 0x94)
            int32_t rdx_1 = arg2[0x45]
            int32_t r10_1
            
            if ((rdx_1.b & 2) == 0 || (*(result + 0x95) & 1) == 0)
                r10_1 = 0
            else
                r10_1 = 1
            
            if (r8 u>> 7 == (rdx_1.b & 1) && (r8 u>> 3 & 1) == ((rdx_1 u>> 1).b & 1))
                cond:0_1 = r10_1 != (rdx_1 u>> 2 & 1)
                goto label_1408051d7
            
            result.b = 1

return result

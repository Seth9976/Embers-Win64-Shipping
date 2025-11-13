// 函数: sub_140804df0
// 地址: 0x140804df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg2)
void* rbx = rax
float (* result)[0x4]

if (rax != 0)
label_140804e6b:
    float zmm3[0x4] = *(rbx + 0x1c0)
    float temp0_1[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_4[0x4] = _mm_mul_ps(zmm3, temp0_1)
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
    float temp0_9[0x4] = _mm_mul_ps(temp0_3, temp0_7)
    float zmm1[0x4] = *(rbx + 0x1e0)
    float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
    float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
    float zmm4[0x4] = data_143ce2b60
    float temp0_13[0x4] = _mm_add_ps(temp0_9, temp0_6)
    float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_9)
    float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
    float zmm2[0x4] =
        __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_11), zmm1), data_143ce2b70)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
    float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_20, 0x82)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
    float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_23, 0x88)
    float zmm0[0x4] = *(rbx + 0x1d0)
    *(arg2 + 0x10) = temp0_22
    *(arg2 + 0x20) = temp0_25
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
    zmm4[0].q = zmm0 u>> 0x40
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, zmm2, 0xe8)
    float temp0_28[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
    *(arg2 + 0x30) = temp0_27
    *(arg2 + 0x40) = temp0_28
    float var_e8[0x4][0x4]
    result = sub_1408041d0(&arg2[4], &var_e8)
    float zmm4_1[0x4] = *result
    float zmm0_1 = result[1][0]
    float zmm1_1 = result[2][0]
    float zmm2_1 = result[3][0]
    float zmm8_1[0x4] = (*result)[1]
    float zmm3_1 = (*result)[5]
    float zmm5_1 = (*result)[9]
    float zmm6_1 = (*result)[0xd]
    float zmm12_1[0x4] = (*result)[2]
    float zmm7_1 = (*result)[6]
    float zmm9_1 = (*result)[0xa]
    float zmm10_1 = (*result)[0xe]
    float zmm15_1[0x4] = (*result)[3]
    float zmm11_1 = (*result)[7]
    float zmm13_1 = (*result)[0xb]
    float zmm14_1 = (*result)[0xf]
    float temp0_29[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
    temp0_29[0] = zmm0_1
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc6)
    float temp0_31[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xe1)
    temp0_30[0] = zmm1_1
    float temp0_32[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xe1)
    temp0_31[0] = zmm3_1
    float temp0_33[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xe1)
    temp0_32[0] = zmm7_1
    temp0_33[0] = zmm11_1
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
    temp0_34[0] = zmm5_1
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc6)
    temp0_35[0] = zmm9_1
    temp0_36[0] = zmm13_1
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x27)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x27)
    temp0_37[0] = zmm6_1
    temp0_38[0] = zmm10_1
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x27)
    temp0_39[0] = zmm14_1
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x27)
    temp0_40[0] = zmm2_1
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x39)
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x39)
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x39)
    *(arg2 + 0x50) = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
    *(arg2 + 0x60) = temp0_41
    *(arg2 + 0x70) = temp0_42
    *(arg2 + 0x80) = temp0_43
else
    int64_t* rdi_1 = *(arg1 + 0x30)
    
    if (rdi_1 != 0)
    label_140804e3f:
        int64_t rax_2 = sub_1425a2960()
        int64_t r8 = *rdi_1
        rbx = (*(r8 + 0x610))(rdi_1, rax_2, r8)
    else
        void* rcx_1 = *(arg3 + 0x28)
        
        if (rcx_1 != 0)
            int64_t* rax_1 = sub_141f3ba40(rcx_1)
            rdi_1 = rax_1
            
            if (rax_1 != 0)
                goto label_140804e3f
    
    sub_140d3a3a0(arg2, rbx)
    
    if (rbx != 0)
        goto label_140804e6b

result.b = 0
return result

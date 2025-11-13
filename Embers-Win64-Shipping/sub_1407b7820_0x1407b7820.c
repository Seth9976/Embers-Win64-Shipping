// 函数: sub_1407b7820
// 地址: 0x1407b7820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(arg2)
int64_t result_1 = result

if (result == 0)
    result.b = 1
else
    char rax = sub_140d3e110(&arg2[0x12])
    int64_t rbx_1
    
    if (rax != 0)
        rbx_1 = *(result_1 + 0xc0)
        result = sub_140d3c6e0(&arg2[0x12])
    
    if (rax != 0 && rbx_1 != result)
        result.b = 1
    else
        void* rax_1 = sub_142591550()
        void* rdx = *(result_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        label_1407b795e:
            
            if (*(arg1 + 0xb4) != arg2[0x7a])
                result.b = 1
            else
                arg2[0x64] = arg4[0]
                
                if (sub_140d3e110(arg2) == 0)
                    *(arg2 + 0x150) = data_14399f6e0
                    *(arg2 + 0x160) = data_14399f6f0
                    *(arg2 + 0x170) = data_14399f700
                    *(arg2 + 0x180) = data_14399f710
                    *(arg2 + 0xd0) = data_14399f6e0
                    *(arg2 + 0xe0) = data_14399f6f0
                    *(arg2 + 0xf0) = data_14399f700
                    *(arg2 + 0x100) = data_14399f710
                    *(arg2 + 0x110) = data_14399f6e0
                    *(arg2 + 0x120) = data_14399f6f0
                    *(arg2 + 0x130) = data_14399f700
                    *(arg2 + 0x140) = data_14399f710
                else
                    float zmm1[0x4] = *(arg2 + 0xe0)
                    *(arg2 + 0x150) = *(arg2 + 0xd0)
                    float zmm0_1[0x4] = *(arg2 + 0xf0)
                    *(arg2 + 0x160) = zmm1
                    zmm1 = *(arg2 + 0x100)
                    *(arg2 + 0x170) = zmm0_1
                    *(arg2 + 0x180) = zmm1
                    void* rax_5 = sub_140d3c6e0(arg2)
                    float zmm7[0x4] = data_143ce0340
                    float zmm2[0x4] = *(rax_5 + 0x1c0)
                    float temp0_1[0x4] = _mm_add_ps(zmm2, zmm2)
                    float temp0_2[0x4] = _mm_mul_ps(temp0_1, zmm2)
                    float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x29)
                    float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
                    float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 1)
                    float temp0_7[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x1a), temp0_5)
                    float temp0_9[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(zmm2, zmm2, 4))
                    float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                    float temp0_11[0x4] = _mm_sub_ps(zmm7, temp0_7)
                    float temp0_12[0x4] = _mm_mul_ps(temp0_4, temp0_10)
                    zmm1 = *(rax_5 + 0x1e0)
                    float temp0_13[0x4] = _mm_mul_ps(temp0_11, zmm1)
                    float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_9)
                    float temp0_15[0x4] = _mm_sub_ps(temp0_9, temp0_12)
                    float zmm6[0x4] = __andps_xmmxud_memxud(temp0_13, data_143ce0350)
                    float temp0_17[0x4] = _mm_mul_ps(temp0_14, zmm1)
                    float temp0_19[0x4] = _mm_mul_ps(temp0_15, _mm_shuffle_ps(zmm1, zmm1, 0xc9))
                    float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm6, 0), 
                        _mm_shuffle_ps(temp0_19, zmm6, 0x32), 0x82)
                    float temp0_23[0x4] = _mm_shuffle_ps(temp0_17, zmm6, 0x31)
                    float temp0_25[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm6, 0x10), temp0_23, 0x88)
                    zmm0_1 = *(rax_5 + 0x1d0)
                    *(arg2 + 0xd0) = temp0_22
                    *(arg2 + 0xe0) = temp0_25
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_17, temp0_19, 0x12)
                    zmm7[0].q = zmm0_1 u>> 0x40
                    float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, zmm6, 0xe8)
                    float temp0_28[0x4] = _mm_shuffle_ps(zmm0_1, zmm7, 0xc4)
                    *(arg2 + 0xf0) = temp0_27
                    *(arg2 + 0x100) = temp0_28
                    uint32_t var_e8[0x4][0x4]
                    uint32_t (* rax_6)[0x4] = sub_140631b10(&arg2[0x34], &var_e8)
                    float zmm4_2[0x4] = *rax_6
                    uint32_t zmm0_2 = rax_6[1][0]
                    uint32_t zmm1_1 = rax_6[2][0]
                    uint32_t zmm2_1 = rax_6[3][0]
                    float zmm8_1[0x4] = (*rax_6)[1]
                    uint32_t zmm3 = (*rax_6)[5]
                    uint32_t zmm5_2 = (*rax_6)[9]
                    uint32_t zmm6_1 = (*rax_6)[0xd]
                    float zmm12_1[0x4] = (*rax_6)[2]
                    uint32_t zmm7_1 = (*rax_6)[6]
                    uint32_t zmm9_1 = (*rax_6)[0xa]
                    uint32_t zmm11_1 = (*rax_6)[7]
                    uint32_t zmm13_1 = (*rax_6)[0xb]
                    uint32_t zmm10_1 = (*rax_6)[0xe]
                    uint32_t zmm14_1 = (*rax_6)[0xf]
                    float zmm15_1[0x4] = (*rax_6)[3]
                    float temp0_29[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xe1)
                    float temp0_30[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xe1)
                    temp0_29[0] = zmm3
                    float temp0_31[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xe1)
                    temp0_30[0] = zmm7_1
                    temp0_31[0] = zmm11_1
                    float temp0_32[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
                    temp0_32[0] = zmm0_2
                    float temp0_33[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc6)
                    float temp0_34[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc6)
                    temp0_33[0] = zmm5_2
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
                    *(arg2 + 0x110) = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
                    *(arg2 + 0x120) = temp0_41
                    *(arg2 + 0x130) = temp0_42
                    *(arg2 + 0x140) = temp0_43
                
                arg2[0x71] = (arg2[0x71] - 1) & 1
                uint32_t zmm6_2[0x4]
                float zmm7_2[0x4]
                float zmm8_2[0x4]
                float zmm9_2[0x4]
                result, zmm6_2, zmm7_2, zmm8_2, zmm9_2 = sub_1407cdc80(arg2)
                
                if (*(arg2 + 0x210) != 0)
                    void* rax_10 = sub_140d3c6e0(arg2)
                    
                    if (rax_10 != 0)
                        void* rax_11 = sub_142591550()
                        void* rcx_15 = *(rax_10 + 0x10)
                        int64_t rdx_4 = sx.q(*(rax_11 + 0x38))
                        
                        if (rdx_4.d s<= *(rcx_15 + 0x38)
                                && *(*(rcx_15 + 0x30) + (rdx_4 << 3)) == rax_11 + 0x30
                                && sub_140d3e110(rax_10 + 0x438) != 0)
                            sub_140d3c6e0(rax_10 + 0x438)
                    
                    sub_1407b64a0(*(arg2 + 0x210), arg2, arg2[0x1a], zmm6_2, zmm7_2, zmm8_2, zmm9_2)
                
                result.b = 0
        else if (*(result_1 + 0x430) == 0)
            result.b = 1
        else
            bool rax_3 = sub_1407b50a0(arg1 + 0x38)
            int64_t rdx_2
            
            if (rax_3 != 0)
                result = sx.q(arg2[2])
                char rcx_5
                void* rdx_1
                
                if (result.d != 0xffffffff)
                    rdx_1 = *(arg2 + 0x10)
                    
                    if (result.d s< 0 || result.d s>= *(rdx_1 + 0x48))
                        rcx_5 = 0
                    else
                        rcx_5 = 1
                
                if (result.d == 0xffffffff || rcx_5 == 0)
                    rdx_2 = 0
                else
                    rdx_2 = *(*(rdx_1 + 0x40) + (result << 3))
            
            if (rax_3 != 0 && *(arg2 + 0x50) != rdx_2)
                result.b = 1
            else
                result = *(result_1 + 0x430)
                int64_t rcx_7 = *(arg2 + 0x58)
                
                if (result == rcx_7 || rcx_7 == 0 || result == 0)
                    goto label_1407b795e
                
                CRITICAL_SECTION* lpCriticalSection = *(arg2 + 0x70)
                
                if (lpCriticalSection != 0)
                    EnterCriticalSection(lpCriticalSection)
                    lpCriticalSection->__offset(0x90).b = 1
                    LeaveCriticalSection(lpCriticalSection)
                
                result.b = 1

return result

// 函数: sub_1413ccb80
// 地址: 0x1413ccb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg2 + 0x590))(arg2)

if (result != 0)
    arg2[0x56] = result
    float zmm2[0x4] = *(arg2 + 0x1c0)
    float zmm4_1[0x4] = data_143eca1e0
    int64_t rax_1 = *arg2
    float temp0_1[0x4] = _mm_add_ps(zmm2, zmm2)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 4)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float temp0_4[0x4] = _mm_mul_ps(zmm2, temp0_1)
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
    float temp0_9[0x4] = _mm_mul_ps(temp0_3, temp0_7)
    float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
    float temp0_12[0x4] = _mm_add_ps(temp0_9, temp0_6)
    float temp0_13[0x4] = _mm_sub_ps(temp0_6, temp0_9)
    float zmm3[0x4] = __andps_xmmxud_memxud(_mm_sub_ps(zmm4_1, temp0_11), data_143eca1f0)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, zmm3, 0x32)
    float temp0_18[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_12, zmm3, 0), temp0_16, 0x82)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_12, zmm3, 0x31)
    float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_13, zmm3, 0x10), temp0_19, 0x88)
    float zmm0[0x4] = *(arg2 + 0x1d0)
    zmm4_1[0].q = zmm0 u>> 0x40
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_12, temp0_13, 0x12)
    float temp0_23[0x4] = _mm_shuffle_ps(zmm0, zmm4_1, 0xc4)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, zmm3, 0xe8)
    float var_28_1[0x4] = temp0_23
    float var_58[0x4] = temp0_18
    float var_48_1[0x4] = temp0_21
    float var_38_1[0x4] = temp0_24
    void var_88
    sub_141f26cb0(result, &var_58, (*(rax_1 + 0x540))(arg2, &var_88))
    void*** rax_3 = j_sub_140a82f30(0x88)
    
    if (rax_3 != 0)
        rax_3 = sub_141218f00(rax_3, result, 1)
    
    result[0x18] = rax_3
    *(arg1 + 0x65c0) += 1
    void* rdi_1 = result[0x18]
    void* var_90_1 = rdi_1
    char rax_4 = sub_140a80f40()
    
    if (rax_4 != 0)
    label_1413ccd09:
        sub_140b33630("Scene_AddLight")
        sub_1413ccdb0(arg1, rdi_1)
        return sub_140b37f60("Scene_AddLight")
    
    if (data_143f138f4 == rax_4)
        if (data_143de5480 == rax_4)
            goto label_1413ccd09
        
        uint32_t rax_5
        rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_5.b != 0)
            goto label_1413ccd09
    
    void var_78
    int64_t* rax_6 = sub_1413daa00(&var_78, nullptr, 0xff)
    *(*rax_6 + 0x10) = arg1.o
    void* rcx_7 = *rax_6
    int32_t r8_3 = rax_6[2].d
    int64_t* rdx_4 = rax_6[1]
    int64_t* rbx_1 = *(rcx_7 + 0x28)
    int64_t* arg_18 = rbx_1
    int32_t* rdi_2 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_2 += 1
        rbx_1 = arg_18
    
    result = sub_1405e48c0(rcx_7, rdx_4, r8_3, 1)
    
    if (rbx_1 != 0)
        result = zx.q(*rdi_2)
        *rdi_2 -= 1
        
        if (result.d == 1)
            return sub_140a2f6e0(arg_18)

return result

// 函数: sub_1413cc900
// 地址: 0x1413cc900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t result = (*(*arg2 + 0x590))(arg2)

if (result != 0)
    arg2[0x56] = result
    float zmm2[0x4] = *(arg2 + 0x1c0)
    float zmm4_1[0x4] = data_143eca1e0
    int64_t rax_3 = *arg2
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
    float var_c8_1[0x4] = temp0_23
    float var_f8[0x4] = temp0_18
    float var_e8_1[0x4] = temp0_21
    float var_d8_1[0x4] = temp0_24
    void var_b8
    sub_141f26cb0(result, &var_f8, (*(rax_3 + 0x540))(arg2, &var_b8))
    void*** rax_5 = j_sub_140a82f30(0x88)
    void*** rbx_1
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = sub_141218f00(rax_5, result, 0)
    
    *(result + 0xc0) = rbx_1
    void*** var_110_1 = rbx_1
    
    if (sub_140a80f40() == 0)
        uint32_t rax_8
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_8.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_8.b == 0))
            void var_a8
            void** rax_9 = sub_1413da8b0(&var_a8, nullptr, 0xff)
            *(*rax_9 + 0x10) = arg1.o
            void* rcx_10 = *rax_9
            int32_t r8_2 = rax_9[2].d
            int64_t* rdx_7 = rax_9[1]
            int64_t* rbx_2 = *(rcx_10 + 0x28)
            int64_t* var_118_2 = rbx_2
            void* rdi_1 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rdi_1 += 1
                rbx_2 = var_118_2
            
            result = sub_1405e48c0(rcx_10, rdx_7, r8_2, 1)
            
            if (rbx_2 != 0)
                result = zx.q(*rdi_1)
                *rdi_1 -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(var_118_2)
        else
            void var_58
            sub_141228a60(&var_58, rbx_1)
            result = sub_1413cc430(arg1 + 0xf20, &var_58)
            rbx_1[5].d = result.d
    else
        void var_88
        sub_141228a60(&var_88, rbx_1)
        result = sub_1413cc430(arg1 + 0xf20, &var_88)
        rbx_1[5].d = result.d

__security_check_cookie(rax_1 ^ &var_138)
return result

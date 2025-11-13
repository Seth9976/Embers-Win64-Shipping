// 函数: sub_141403000
// 地址: 0x141403000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg2[0x56] != 0)
    float zmm2[0x4] = *(arg2 + 0x1c0)
    float zmm6[0x4] = *(arg2 + 0x1d0)
    float temp0_1[0x4] = _mm_add_ps(zmm2, zmm2)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 4)
    int64_t rax = *arg2
    float temp0_4[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
    float temp0_5[0x4] = _mm_mul_ps(zmm2, temp0_1)
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_6)
    float temp0_11[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x1a), _mm_shuffle_ps(temp0_5, temp0_5, 1))
    float temp0_12[0x4] = _mm_add_ps(temp0_8, temp0_4)
    float temp0_13[0x4] = _mm_sub_ps(temp0_4, temp0_8)
    zmm2 = data_143eca1e0
    zmm2[0].q = zmm6 u>> 0x40
    float temp0_14[0x4] = _mm_shuffle_ps(zmm6, zmm2, 0xc4)
    float var_c8_1[0x4] = temp0_14
    float var_88_1[0x4] = temp0_14
    float zmm1[0x4] = __andps_xmmxud_memxud(_mm_sub_ps(zmm2, temp0_11), data_143eca1f0)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, zmm1, 0x32)
    float temp0_19[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_12, zmm1, 0), temp0_17, 0x82)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_12, zmm1, 0x31)
    float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_13, zmm1, 0x10), temp0_20, 0x88)
    float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_12, temp0_13, 0x12), zmm1, 0xe8)
    float var_e8_1[0x4] = temp0_22
    float var_a8_1[0x4] = temp0_22
    float var_f8_1[0x4] = temp0_19
    float var_d8_1[0x4] = temp0_24
    float var_b8_1[0x4] = temp0_19
    float var_98_1[0x4] = temp0_24
    void var_108
    float (* rax_1)[0x4] = (*(rax + 0x540))(arg2, &var_108)
    float var_1b8[0x4] = temp0_19
    float zmm0[0x4] = *rax_1
    float var_78_1[0x4] = zmm0
    void* rcx_1 = *(arg2[0x56] + 0xc0)
    float var_178[0x4] = zmm0
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            uint32_t rax_5
            
            if (data_143de5480 != 0)
                rax_5.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rax_5.b != 0)
                zmm1 = var_1b8
                float var_168[0x4] = arg1.o
                float var_158_1[0x4] = zmm1
                float var_148_1[0x4] = temp0_22
                float var_138_1[0x4] = temp0_24
                float var_128_1[0x4] = temp0_14
                float var_118_1[0x4] = var_178
                return sub_1413c8ad0(&var_168)
        
        void var_68
        void** rax_6 = sub_1413ddbe0(&var_68, nullptr, 0xff)
        void* rcx_10 = *rax_6
        *(rcx_10 + 0x10) = arg1.o
        *(rcx_10 + 0x20) = var_1b8
        *(rcx_10 + 0x30) = temp0_22
        *(rcx_10 + 0x40) = temp0_24
        *(rcx_10 + 0x50) = temp0_14
        *(rcx_10 + 0x60) = var_178
        void* rcx_11 = *rax_6
        int32_t r8_2 = rax_6[2].d
        int64_t* rdx_4 = rax_6[1]
        int64_t* rbx_2 = *(rcx_11 + 0x78)
        int64_t* arg_18 = rbx_2
        int32_t* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_18
        
        result = sub_140778260(rcx_11, rdx_4, r8_2, 1)
        
        if (rbx_2 != 0)
            result = zx.q(*rdi_1)
            *rdi_1 -= 1
            
            if (result.d == 1)
                return sub_140a2f6e0(arg_18)
    else
        result = sub_1419a2d00()
        
        if (rcx_1 != 0 && (*(rcx_1 + 0x64) & 2) != 0)
            void* rcx_2 = *(rcx_1 + 0x20)
            
            if (*(rcx_2 + 0x13c) != 0)
                sub_14122fa20(rcx_1)
                rcx_2 = *(rcx_1 + 0x20)
            
            sub_141f26cb0(rcx_2, &var_1b8, &var_178)
            result = sx.q(*(rcx_1 + 0x28))
            
            if (result.d != 0xffffffff)
                sub_141228a60(result * 0x30 + *(*(rcx_1 + 0x80) + 0xee8), rcx_1)
                result = *(rcx_1 + 0x20)
                
                if (*(result + 0x13c) != 0)
                    return sub_14121c3c0(rcx_1)

return result

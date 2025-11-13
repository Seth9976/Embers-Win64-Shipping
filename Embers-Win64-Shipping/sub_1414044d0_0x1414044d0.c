// 函数: sub_1414044d0
// 地址: 0x1414044d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg2 + 0x230) != 0)
    int32_t* rax = sub_141f3c970(arg2)
    float zmm3[0x4] = *(arg2 + 0x1c0)
    bool cond:1_1 = rax == 0
    void* rax_1 = *(arg2 + 0x230)
    float temp0_1[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_4[0x4] = _mm_mul_ps(zmm3, temp0_1)
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
    float temp0_9[0x4] = _mm_mul_ps(temp0_3, temp0_7)
    float zmm1_1[0x4] = *(arg2 + 0x1e0)
    float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
    float temp0_12[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
    float zmm4_1[0x4] = data_143eca1e0
    float temp0_13[0x4] = _mm_add_ps(temp0_9, temp0_6)
    float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_9)
    float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1_1)
    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
    float zmm2[0x4] =
        __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4_1, temp0_11), zmm1_1), data_143eca1f0)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
    float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_20, 0x82)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
    float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_23, 0x88)
    float zmm0_1[0x4] = *(arg2 + 0x1d0)
    zmm4_1[0].q = zmm0_1 u>> 0x40
    float temp0_26[0x4] = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)
    float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, temp0_16, 0x12), zmm2, 0xe8)
    float var_48_1[0x4] = temp0_26
    float var_78_1[0x4] = temp0_22
    float var_68_1[0x4] = temp0_25
    float var_58_1[0x4] = temp0_28
    float var_128[0x4] = temp0_22
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            uint32_t rax_7
            
            if (data_143de5480 != 0)
                rax_7.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rax_7.b != 0)
                zmm1_1 = var_128
                float var_d8[0x4] = arg1.o
                float var_c8_1[0x4] = zmm1_1
                float var_b8_1[0x4] = temp0_25
                float var_a8_1[0x4] = temp0_28
                float var_98_1[0x4] = temp0_26
                float var_88_1[0x4] = cond:1_1.o
                return sub_1413c8320(&var_d8)
        
        void var_38
        void** rax_8 = sub_1413dc6e0(&var_38, nullptr, 0xff)
        void* rcx_6 = *rax_8
        *(rcx_6 + 0x10) = arg1.o
        *(rcx_6 + 0x20) = var_128
        *(rcx_6 + 0x30) = temp0_25
        *(rcx_6 + 0x40) = temp0_28
        *(rcx_6 + 0x50) = temp0_26
        *(rcx_6 + 0x60) = cond:1_1.o
        void* rcx_7 = *rax_8
        int32_t r8_2 = rax_8[2].d
        int64_t* rdx_2 = rax_8[1]
        int64_t* rbx_1 = *(rcx_7 + 0x78)
        int64_t* arg_18 = rbx_1
        void* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_18
        
        result = sub_140778260(rcx_7, rdx_2, r8_2, 1)
        
        if (rbx_1 != 0)
            result = zx.q(*rdi_1)
            *rdi_1 -= 1
            
            if (result.d == 1)
                return sub_140a2f6e0(arg_18)
    else
        void* rcx_1 = rax_1
        
        if (*(rcx_1 + 0xc0) != 0)
            arg1[0xc39].d -= 1
            rcx_1 = rax_1
        
        *(rcx_1 + 0xc0) = cond:1_1
        
        if (cond:1_1 != 0)
            arg1[0xc39].d += 1
        
        arg1[0x206].b = 1
        sub_141f49500(rax_1, &var_128)
        result = arg1
        
        if (result[1].d s<= 1)
            return sub_141f4dd60(rax_1)

return result

// 函数: sub_1421a5020
// 地址: 0x1421a5020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (data_143a2ecfc != 0 && data_1439c7a6a != 0 && data_1439c7a18 != 0 && data_1439c88a8 != 0
        && data_1439c7a17 != 0 && data_1439c7a0c != 0)
    int64_t* rcx = *(arg2 + 0x428)
    
    if (rcx != 0 && *(arg1 + 8) == 0)
        float zmm2[0x4] = *(arg2 + 0x108)
        float zmm1[0x4] = *(arg2 + 0x114)
        float zmm4[0x4] = *(arg2 + 0x10c)
        zmm2[0] = zmm2[0] + zmm1[0]
        float zmm5[0x4] = *(arg2 + 0x104)
        zmm2[0] = zmm2[0] - zmm1[0]
        float zmm3[0x4] = *(arg2 + 0x110)
        float zmm6[0x4] = *(arg2 + 0x100)
        float var_b0_1 = zmm2[0]
        zmm5[0] = zmm5[0] + zmm3[0]
        float var_c0_1 = zmm2[0]
        zmm5[0] = zmm5[0] - zmm3[0]
        zmm3 = *(arg2 + 0x1c0)
        zmm6[0] = zmm6[0] + zmm4[0]
        zmm6[0] = zmm6[0] - zmm4[0]
        float var_1e0_1 = var_c0_1
        float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float var_1d4_1 = var_b0_1
        uint128_t zmm9 = zx.o((_mm_unpacklo_ps(zmm6, zmm5[0].q)).q)
        float var_1e8[0x4]
        var_1e8[0].q = (_mm_unpacklo_ps(zmm6, zmm5[0].q)).q
        float temp0_4[0x4] = _mm_add_ps(zmm3, zmm3)
        int32_t var_130_1 = 1.d
        float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_6[0x4] = _mm_mul_ps(zmm3, temp0_4)
        float temp0_8[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x1a)
        float temp0_11[0x4] = _mm_mul_ps(temp0_5, temp0_9)
        zmm1 = *(arg2 + 0x1e0)
        float temp0_13[0x4] = _mm_add_ps(temp0_10, _mm_shuffle_ps(temp0_6, temp0_6, 1))
        float temp0_14[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        zmm4 = data_143f4d4a0
        float temp0_15[0x4] = _mm_add_ps(temp0_11, temp0_8)
        float temp0_16[0x4] = _mm_sub_ps(temp0_8, temp0_11)
        float temp0_17[0x4] = _mm_mul_ps(temp0_15, zmm1)
        float temp0_18[0x4] = _mm_mul_ps(temp0_14, temp0_16)
        zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_13), zmm1), data_143f4d4b0)
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_18, zmm2, 0x32)
        float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm2, 0), temp0_22, 0x82)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_17, zmm2, 0x31)
        float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm2, 0x10), temp0_25, 0x88)
        float var_88_1[0x4] = temp0_27
        float var_98_1[0x4] = temp0_24
        float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, temp0_18, 0x12), zmm2, 0xe8)
        zmm3 = *(arg2 + 0x1d0)
        float var_138[0x4]
        var_138[0].q = zmm9.q
        zmm2 = *(arg2 + 0x414)
        float var_138_1[0x4] = var_138
        float var_e8[0x4]
        var_e8[0] = (*(arg2 + 0x410))[0]
        zmm4[0].q = zmm3 u>> 0x40
        float temp0_30[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xe1)
        float temp0_31[0x4] = _mm_shuffle_ps(zmm3, zmm4, 0xc4)
        temp0_30[0] = zmm2[0]
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xe1)
        float var_e8_1[0x4] = temp0_32
        float var_78_1[0x4] = temp0_29
        float var_68_1[0x4] = temp0_31
        float var_198[0x4] = temp0_24
        
        if (sub_140a80f40() != 0)
            *(rcx + 8) = var_1e8
            rcx[3] = var_138[0].q
            rcx[4].d = var_138[2]
            *(rcx + 0xf4) = temp0_32[0][0]
            rcx[0x1e].d = temp0_32[1][0]
            return sub_1424256a0(rcx, &var_198)
        
        if (data_143f138f4 == 0)
            uint32_t rax_8
            
            if (data_143de5480 != 0)
                rax_8.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rax_8.b != 0)
                float var_148[0x4] = arg1.o
                int96_t var_128 = var_138[0].12
                float var_118[0x4] = var_198
                float var_108[0x4] = temp0_27
                float var_f8[0x4] = temp0_29
                float var_e8_2[0x4] = temp0_31
                int64_t var_d8 = temp0_32[0].q
                void* rcx_3 = var_148[2].q
                *(rcx_3 + 8) = var_1e8
                *(rcx_3 + 0x18) = var_128.q
                *(rcx_3 + 0x20) = var_128:8.d
                *(var_148[2].q + 0xf4) = var_d8.d[0]
                *(var_148[2].q + 0xf0) = var_d8:4.d[0]
                return sub_1424256a0(var_148[2].q, &var_118)
        
        void var_b8
        int64_t* rax_13 = sub_14218ad60(&var_b8, nullptr, 0xff)
        void* rcx_6 = *rax_13
        *(rcx_6 + 0x10) = arg1.o
        *(rcx_6 + 0x20) = var_1e8
        *(rcx_6 + 0x30) = var_138
        *(rcx_6 + 0x40) = var_198
        *(rcx_6 + 0x50) = temp0_27
        *(rcx_6 + 0x60) = temp0_29
        *(rcx_6 + 0x70) = temp0_31
        *(rcx_6 + 0x80) = temp0_32
        void* rcx_7 = *rax_13
        int32_t r8_1 = rax_13[2].d
        int64_t* rdx_2 = rax_13[1]
        int64_t* rbx_1 = *(rcx_7 + 0x98)
        int64_t* arg_20 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_20
        
        result = sub_1405d3670(rcx_7, rdx_2, r8_1, 1)
        
        if (rbx_1 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_20)

return result

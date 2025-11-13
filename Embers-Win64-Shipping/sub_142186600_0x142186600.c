// 函数: sub_142186600
// 地址: 0x142186600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (data_143a2ecfc != 0 && data_1439c7a6a != 0 && data_1439c7a18 != 0 && data_1439c88a8 != 0
        && data_1439c7a17 != 0 && data_1439c7a0c != 0 && *(arg2 + 0x408) != 0 && *(arg1 + 8) == 0)
    int64_t* rax = j_sub_140a82f30(0x110)
    int64_t* rbx_1 = rax
    float zmm1[0x4]
    
    if (rax == 0)
        rbx_1 = rax
    else
        *rbx_1 = 0
        *(rbx_1 + 0x30) = data_14399f6e0
        *(rbx_1 + 0x40) = data_14399f6f0
        *(rbx_1 + 0x50) = data_14399f700
        *(rbx_1 + 0x60) = data_14399f710
        *(rbx_1 + 0x70) = data_14399f6e0
        *(rbx_1 + 0x80) = data_14399f6f0
        *(rbx_1 + 0x90) = data_14399f700
        *(rbx_1 + 0xa0) = data_14399f710
        *(rbx_1 + 0xb0) = data_14399f6e0
        *(rbx_1 + 0xc0) = data_14399f6f0
        *(rbx_1 + 0xd0) = data_14399f700
        zmm1 = data_14399f710
        *(rbx_1 + 0xfc) &= 0xfffffff0
        *(rbx_1 + 0xe0) = zmm1
        rbx_1[0x1e] = 0
        rbx_1[0x1f].d = 0xffffffff
        rbx_1[0x20].b = 0
    
    int64_t* rcx = *(arg2 + 0x408)
    (*(*rcx + 0x260))(rcx, rbx_1, 0)
    *(arg2 + 0x428) = rbx_1
    float zmm6[0x4] = *(arg2 + 0x100)
    float zmm2[0x4] = *(arg2 + 0x108)
    zmm1 = *(arg2 + 0x114)
    float zmm4_1[0x4] = *(arg2 + 0x10c)
    zmm2[0] = zmm2[0] + zmm1[0]
    float zmm5_1[0x4] = *(arg2 + 0x104)
    zmm2[0] = zmm2[0] - zmm1[0]
    float zmm3[0x4] = *(arg2 + 0x110)
    zmm6[0] = zmm6[0] - zmm4_1[0]
    zmm6[0] = zmm6[0] + zmm4_1[0]
    zmm5_1[0] = zmm5_1[0] - zmm3[0]
    float var_f0_1 = zmm2[0]
    zmm5_1[0] = zmm5_1[0] + zmm3[0]
    float var_170_1 = zmm2[0]
    int64_t var_16c_1 = (_mm_unpacklo_ps(zmm6, zmm5_1[0].q)).q
    float var_164_1 = var_f0_1
    float var_178[0x4]
    var_178[0].q = (_mm_unpacklo_ps(zmm6, zmm5_1[0].q)).q
    *(rbx_1 + 8) = var_178
    rbx_1[3] = var_16c_1
    rbx_1[4].d = 1.d
    *(rbx_1 + 0xf4) = *(arg2 + 0x410)
    rbx_1[0x1e].d = *(arg2 + 0x414)
    zmm1 = *(arg2 + 0x1c0)
    float temp0_3[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_6[0x4] = _mm_mul_ps(zmm1, temp0_3)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x29), temp0_4)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x12), temp0_5)
    zmm1 = *(arg2 + 0x1e0)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x1a)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 1)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
    float temp0_14[0x4] = _mm_add_ps(temp0_10, temp0_8)
    float temp0_15[0x4] = _mm_sub_ps(temp0_8, temp0_10)
    float temp0_16[0x4] = _mm_add_ps(temp0_11, temp0_12)
    zmm4_1 = data_143f4d4a0
    float temp0_17[0x4] = _mm_mul_ps(temp0_14, zmm1)
    float temp0_18[0x4] = _mm_mul_ps(temp0_13, temp0_15)
    zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4_1, temp0_16), zmm1), data_143f4d4b0)
    float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm2, 0), 
        _mm_shuffle_ps(temp0_18, zmm2, 0x32), 0x82)
    float var_88_1[0x4] = temp0_24
    float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm2, 0x10), 
        _mm_shuffle_ps(temp0_17, zmm2, 0x31), 0x88)
    float zmm0_1[0x4] = *(arg2 + 0x1d0)
    zmm4_1[0].q = zmm0_1 u>> 0x40
    float temp0_28[0x4] = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)
    float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, temp0_18, 0x12), zmm2, 0xe8)
    float var_58_1[0x4] = temp0_28
    float var_78_1[0x4] = temp0_27
    float var_68_1[0x4] = temp0_30
    void* var_158 = arg1
    int64_t* var_150_1 = rbx_1
    
    if (sub_140a80f40() != 0)
        return sub_1421846d0(&var_158)
    
    if (data_143f138f4 == 0)
        uint32_t rax_8
        
        if (data_143de5480 != 0)
            rax_8.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_8.b != 0)
            float var_d8[0x4] = var_158.o
            float var_b8_1[0x4] = temp0_27
            float var_c8_1[0x4] = temp0_24
            float var_98_1[0x4] = temp0_28
            float var_a8_1[0x4] = temp0_30
            return sub_1421846d0(&var_d8)
    
    void var_f8
    void** rax_9 = sub_14218a820(&var_f8, nullptr, 0xff)
    void* rcx_4 = *rax_9
    *(rcx_4 + 0x10) = var_158.o
    *(rcx_4 + 0x20) = temp0_24
    *(rcx_4 + 0x30) = temp0_27
    *(rcx_4 + 0x40) = temp0_30
    *(rcx_4 + 0x50) = temp0_28
    void* rcx_5 = *rax_9
    int32_t r8_1 = rax_9[2].d
    int64_t* rdx_3 = rax_9[1]
    int64_t* rbx_2 = *(rcx_5 + 0x68)
    int64_t* arg_20 = rbx_2
    void* rdi_1 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rdi_1 += 1
        rbx_2 = arg_20
    
    result = sub_14106e0b0(rcx_5, rdx_3, r8_1, 1)
    
    if (rbx_2 != 0)
        int32_t rsi_1 = *rdi_1
        *rdi_1 -= 1
        
        if (rsi_1 == 1)
            return sub_140a2f6e0(arg_20)

return result

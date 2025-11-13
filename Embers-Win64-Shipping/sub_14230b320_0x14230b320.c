// 函数: sub_14230b320
// 地址: 0x14230b320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t rdi = 0
arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405a5130(arg2, 0)

uint32_t result = arg1[0xf4].d

if (result s< 0 || result s>= arg1[0x101].d)
    result.b = 0
else
    uint32_t zmm2[0x4] = data_143f57850
    float zmm3[0x4] = data_143f57940
    float zmm9[0x4] = *(arg1 + 0x1e0)
    float var_b8[0x4]
    uint32_t zmm1[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(zmm9, zmm2), 1)) == 0)
        zmm1 = data_143dbb0d0
        var_b8 = data_143dbb0c0
        float var_98_2[0x4] = data_143dbb0e0
        uint32_t var_a8_2[0x4] = zmm1
    else
        float zmm0[0x4] = data_143f57810
        float zmm5[0x4] = *(arg1 + 0x1d0)
        zmm0[0].q = zmm9 u>> 0x40
        float temp0_4[0x4] = _mm_shuffle_ps(zmm9, zmm0, 0xc4)
        zmm1 = _mm_rcp_ps(temp0_4)
        float temp0_6[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f57950)
        float temp0_7[0x4] = _mm_mul_ps(zmm1, zmm1)
        zmm1 = _mm_add_ps(zmm1, zmm1)
        var_b8 = temp0_6
        zmm1 = _mm_sub_ps(zmm1, _mm_mul_ps(temp0_7, temp0_4))
        float temp0_11[0x4] = _mm_mul_ps(zmm1, zmm1)
        zmm1 = _mm_add_ps(zmm1, zmm1)
        float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_4)
        float temp0_15[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_4, zmm2), zmm3, 2)
        zmm3 = _mm_shuffle_ps(temp0_6, temp0_6, 0xd2)
        zmm1 = _mm_sub_ps(zmm1, temp0_13)
        zmm2 = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
        zmm9 = __andps_xmmxud_memxud(_mm_and_ps(temp0_15, zx.o(0) ^ zmm1) ^ zmm1, data_143f57820)
        float temp0_22[0x4] = _mm_mul_ps(zmm5, zmm9)
        float var_98_1[0x4] = zmm9
        float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xc9), zmm3)
        float temp0_27[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xd2), zmm2), temp0_24)
        float temp0_28[0x4] = _mm_add_ps(temp0_27, temp0_27)
        float temp0_29[0x4] = _mm_mul_ps(temp0_19, temp0_28)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), zmm2)
        float temp0_32[0x4] = _mm_add_ps(temp0_29, temp0_22)
        zmm1 = _mm_add_ps(
            _mm_sub_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), zmm3)), temp0_32)
        float var_a8_1[0x4] = __andps_xmmxud_memxud(_mm_sub_ps(zx.o(0), zmm1), data_143f57820)
    
    int128_t* rax_6 = (*(*arg1 + 0x4b0))(arg1, zmm1, zmm2, zmm3)
    int128_t var_148
    sub_142259c00(&var_148)
    int64_t rax_7 = *arg7
    int64_t r12_1 = sx.q(arg7[9].d)
    var_148 = *rax_6
    int128_t zmm1_1 = rax_6[1]
    int64_t var_128 = rax_7
    void* rbx_2 = &arg7[4]
    int64_t var_120_1 = arg7[1]
    char var_118_1 = arg7[2].b
    char var_117_1 = *(arg7 + 0x11)
    char var_116_1 = *(arg7 + 0x12)
    char var_115_1 = *(arg7 + 0x13)
    char var_114_1 = *(arg7 + 0x14)
    char var_113_1 = *(arg7 + 0x15)
    int32_t var_110_1 = arg7[3].d
    char var_10c_1 = *(arg7 + 0x1c)
    char var_10a_1 = *(arg7 + 0x1e)
    void* rax_18 = *(rbx_2 + 0x20)
    void* var_e8_1 = nullptr
    int32_t var_e0_1 = r12_1.d
    int128_t var_138_1 = zmm1_1
    
    if (r12_1.d != 0)
        void var_108
        sub_140775110(&var_108, r12_1.d, 0)
        void* rcx_4 = &var_108
        
        if (rax_18 != 0)
            rbx_2 = rax_18
        
        if (var_e8_1 != 0)
            rcx_4 = var_e8_1
        
        memcpy(rcx_4, rbx_2, (r12_1 << 2).d)
    else
        int32_t var_dc_1 = 8
    
    int64_t rbx_3 = sx.q(arg7[0xd].d)
    void* rsi_1 = &arg7[0xa]
    void* var_c8_1 = nullptr
    int32_t var_c0_1 = rbx_3.d
    void* r12_2 = *(rsi_1 + 0x10)
    
    if (rbx_3.d != 0)
        void var_d8
        sub_140775080(&var_d8, rbx_3.d, 0)
        void* rcx_6 = &var_d8
        
        if (r12_2 != 0)
            rsi_1 = r12_2
        
        if (var_c8_1 != 0)
            rcx_6 = var_c8_1
        
        memcpy(rcx_6, rsi_1, (rbx_3 << 2).d)
    else
        int32_t var_bc_1 = 4
    
    sub_141eb8c10(&var_128, arg1)
    void** rsi_2 = arg1[0x100]
    rbx_3.b = 0
    uint64_t r14_2 = sx.q(arg1[0x101].d) << 3 u>> 3
    
    if (rsi_2 u> &rsi_2[arg1[0x101]])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t var_170_1 = arg8
            bool cond:3_1 =
                sub_14221cdb0(*rsi_2, arg2, arg3, &var_b8, arg4, arg5, arg6, &var_128, &var_148)
                != 0
            rbx_3 = zx.q(rbx_3.b)
            rsi_2 = &rsi_2[1]
            
            if (cond:3_1)
                rbx_3 = 1
            
            rdi += 1
        while (rdi != r14_2)
    
    if (var_c8_1 != 0)
        sub_140a74f90(var_c8_1)
    
    if (var_e8_1 != 0)
        sub_140a74f90(var_e8_1)
    
    result = zx.d(rbx_3.b)

__security_check_cookie(rax_1 ^ &var_1b8)
return result

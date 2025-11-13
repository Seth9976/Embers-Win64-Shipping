// 函数: sub_1405d1df0
// 地址: 0x1405d1df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg6
float zmm10[0x4] = arg4
int32_t result

if (rdi != 0)
    uint128_t zmm6
    uint128_t var_18_1 = zmm6
    float zmm0_1[0x4] = tanf(arg3 * 0.5f)
    zmm0_1[0] = zmm0_1[0] f* arg5
    int32_t rax_6 = arg1[2].d
    float zmm1[0x4] = arg1[1]
    arg4 = *arg1
    int32_t var_170_1 = 0x3f000000
    float zmm9[0x4] = *(arg1 + 0x14)
    int32_t zmm5_1 = *(arg1 + 0x1c)
    zmm6 = arg1[2].d
    arg3 = 1f / zmm0_1[0]
    int32_t var_16c_1 = 0x3f000000
    zmm0_1[0] = zmm0_1[0] / zmm10[0]
    zmm10[0] = zmm10[0] f* *(arg1 + 0x18)
    int64_t rbx_4 = *(rdi + 0x18)
    float zmm4_1 = 1f / zmm0_1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
    float var_198_1[0x4] = zmm1
    temp0_3[0] = zmm10[0]
    float var_208_1[0x4] = rax_6.o
    float var_178[0x4]
    var_178[0] = arg3
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
    float var_158[0x4]
    var_158[0] = arg7.d
    temp0_4[0] = zmm5_1
    float temp0_5[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
    float temp0_6[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
    temp0_5[0] = zmm4_1
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
    temp0_6[0] = arg8.d
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
    temp0_9[0] = zmm6.d
    float var_178_1[0x4] = temp0_7
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
    float var_1a8_1[0x4] = arg4
    float var_228[0x4] = arg4
    float var_168_1[0x4] = temp0_10
    float var_158_1[0x4] = temp0_8
    int64_t* rax_7 = sub_140cbe180(rdi)
    void* rax_8 = *(arg2 + 0x1b0)
    int64_t var_1c0 = rbx_4
    int32_t rcx_10 = *(rax_8 + 8)
    
    if (sub_140a80f40() != 0)
        return sub_1405d2250(&data_143f02b98, &var_228, &var_1c0, rax_7, var_18_1, rcx_10)
    
    if (data_143f138f4 == 0)
        uint32_t rax_10
        
        if (data_143de5480 != 0)
            rax_10.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_10.b != 0)
            float var_138[0x4] = var_228
            float var_128_1[0x4] = zmm1
            float var_118_1[0x4] = var_208_1
            float var_108_1[0x4] = temp0_7
            float var_f8_1[0x4] = temp0_10
            float var_e8_1[0x4] = temp0_8
            float var_d8[0x4] = rax_7.o
            return sub_1405d2250(&data_143f02b98, &var_138, &var_d8[2], var_d8[0].q, var_18_1, 
                rcx_10.o[0])
    
    void var_78
    int64_t* rax_11 = sub_1405d1c90(&var_78, nullptr, 0xff)
    void* rcx_14 = *rax_11
    *(rcx_14 + 0x10) = var_228
    *(rcx_14 + 0x20) = zmm1
    *(rcx_14 + 0x30) = var_208_1
    *(rcx_14 + 0x40) = temp0_7
    *(rcx_14 + 0x50) = temp0_10
    *(rcx_14 + 0x60) = temp0_8
    *(rcx_14 + 0x70) = rax_7.o
    *(rcx_14 + 0x80) = rcx_10.o
    void* rcx_15 = *rax_11
    int32_t r8_4 = rax_11[2].d
    int64_t* rdx_6 = rax_11[1]
    int64_t* rbx_5 = *(rcx_15 + 0x98)
    int64_t* var_238_1 = rbx_5
    int32_t* rdi_2 = &rbx_5[9]
    
    if (rbx_5 != 0)
        *rdi_2 += 1
        rbx_5 = var_238_1
    
    result = sub_1405d3670(rcx_15, rdx_6, r8_4, 1)
    
    if (rbx_5 != 0)
        int32_t rbx_6 = *rdi_2
        *rdi_2 -= 1
        
        if (rbx_6 == 1)
            return sub_140a2f6e0(var_238_1)
else
    sub_140b58170(&arg6, "Blueprint", (rdi + 1).d)
    void var_b8
    int64_t* rax = _vfprintf_p_l(&var_b8, 
        DrawUVDisplacementToRenderTarget: Output render target is required.", LensDistortionPlugin")
    void var_148
    void var_a0
    sub_140ae44d0(sub_140accdf0(&var_a0, &arg6), &var_148, rax)
    int64_t* var_140
    
    if (var_140 != 0)
        var_140[1].d -= 1
        
        if (var_140[1].d == 1)
            (**var_140)(var_140)
            int32_t temp2_1 = *(var_140 + 0xc)
            *(var_140 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_140 + 8))(var_140, zx.q((rdi + 1).d))
    
    result = sub_140acd9c0(&var_a0)
    int64_t* var_b0
    
    if (var_b0 != 0)
        result = var_b0[1].d
        var_b0[1].d -= 1
        
        if (result == 1)
            result = (**var_b0)(var_b0)
            int32_t rbx_3 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rbx_3 == 1)
                return (*(*var_b0 + 8))(var_b0, zx.q(rbx_3))

return result

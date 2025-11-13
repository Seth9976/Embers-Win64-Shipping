// 函数: sub_142247400
// 地址: 0x142247400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t result = __security_cookie ^ &var_128
int64_t result_1 = result
int64_t* r13 = *(arg1 + 0xa0)

if (r13 != 0)
    int32_t rax_2 = (*(*r13 + 0x28))(r13)
    int64_t rdx = *r13
    void* rax_3 = (*(rdx + 0x30))(r13, rdx)
    float var_a8[0x4]
    float zmm6_1[0x4]
    float zmm8_1[0x4]
    zmm6_1, zmm8_1 = sub_140ad8030(arg1 + 0x70, &var_a8, arg3)
    int32_t var_e0_1 = rax_2
    int64_t var_e8 = 0
    int64_t r14_1 = 0
    int32_t var_dc_1 = 0
    
    if (rax_2 s> 0)
        sub_140638a00(&var_e8)
        r14_1 = var_e8
    
    int32_t r8_1 = 0
    
    if (rax_2 != 0)
        float var_48_1[0x4] = zmm6_1
        void* rdx_3 = rax_3 + 8
        
        do
            float zmm5_1[0x4] = var_a8
            zmm8_1[0] = zmm8_1[0] f* *(rdx_3 - 8)
            int64_t rax_4 = sx.q(r8_1)
            r8_1 += 1
            float temp0_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            zmm8_1[0] = zmm8_1[0] f* *rdx_3
            zmm8_1[0] = zmm8_1[0] f* *(rdx_3 - 4)
            int64_t rcx_4 = rax_4 * 3
            rdx_3 += 0xc
            float var_88[0x4]
            float temp0_5[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_1, zmm8_1[0].q), 
                    _mm_unpacklo_ps(zmm8_1, 0)[0].q), 
                var_88)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
            float temp0_12[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_1), temp0_9)
            float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
            float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
            float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_1)
            float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_6)
            float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_5)
            float var_98[0x4]
            float temp0_22[0x4] =
                __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_17, temp0_18), temp0_19), var_98)
            float var_e0_2 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
            *(r14_1 + (rcx_4 << 2)) =
                (_mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)).q
            *(r14_1 + (rcx_4 << 2) + 8) = var_e0_2
        while (r8_1 u< rax_2)
    
    int64_t rax_7 = (*(*r13 + 0x38))(r13)
    int64_t rdx_4 = *r13
    int64_t rbx_2 = rax_7
    var_e8 = rax_7
    result = (*(rdx_4 + 0x40))(r13, rdx_4)
    int32_t var_d8_1 = result.d
    int32_t r12_1 = 0
    
    if (result.d != 0)
        do
            int64_t r9_1 = *r13
            char var_108
            int32_t var_100
            int32_t var_f8
            char var_f0
            void var_c0
            result =
                (*(r9_1 + 0x48))(r13, zx.q(r12_1), &var_c0, r9_1, var_108, var_100, var_f8, var_f0)
            int16_t var_ae
            char* rdi_1 = zx.q(var_ae) + rbx_2
            int16_t var_b0
            int16_t rcx_9 = var_b0
            int16_t rbx_3 = 0
            
            if (0 u< rcx_9)
                do
                    uint64_t rcx_10 = zx.q(rbx_3)
                    char rbp_2 = rdi_1[zx.q(rbx_3)]
                    char rsi_1
                    
                    if (rcx_10.d != zx.d(rcx_9) - 1)
                        rsi_1 = rdi_1[rcx_10 + 1]
                    else
                        rsi_1 = *rdi_1
                    
                    if (rcx_10.d == zx.d(rcx_9) - 1)
                        rsi_1 = *rdi_1
                    
                    void var_d4
                    void arg_28
                    sub_140acc920(&var_d4, &arg_28)
                    var_f0 = 0
                    var_f8 = 0
                    var_100 = 0
                    var_108 = 0
                    result = (*(*arg2 + 0x30))(arg2, r14_1 + zx.q(rbp_2) * 0xc, 
                        r14_1 + zx.q(rsi_1) * 0xc, &var_d4, var_108, var_100, var_f8, var_f0)
                    rcx_9 = var_b0
                    rbx_3 += 1
                while (rbx_3 u< rcx_9)
            
            rbx_2 = var_e8
            r12_1 += 1
        while (r12_1 u< var_d8_1)
    
    if (r14_1 != 0)
        result = sub_140a74f90(r14_1)

__security_check_cookie(result_1 ^ &var_128)
return result

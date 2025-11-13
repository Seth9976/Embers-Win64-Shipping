// 函数: sub_141eb2f10
// 地址: 0x141eb2f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int128_t* result

if (arg1 == 0 || *(arg1 + 0x1f8) == 0)
    result.b = 0
else
    int64_t r14
    r14.b = 0
    float zmm6[0x4] = *arg5
    int128_t zmm7 = *(arg5 + 4)
    int128_t zmm8 = *(arg5 + 8)
    float zmm11[0x4] = *arg4
    zmm6[0] = zmm6[0] - zmm11[0]
    float zmm12[0x4] = *(arg4 + 4)
    zmm7.d = zmm7.d f- zmm12[0]
    int128_t zmm13 = *(arg4 + 8)
    zmm8.d = zmm8.d f- zmm13.d
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm7.d f* zmm7.d + zmm6[0] * zmm6[0] + zmm8.d f* zmm8.d)
    
    if (not(temp0_1[0] <= 9.99999994e-09f) && not(temp0_1[0] <= 0f))
        void var_e8
        void** var_d8
        sub_141eb5350(&var_d8, arg7, 0, 
            sub_1422655c0(&var_e8, arg6, *(arg7 + 0x10), arg8, arg7, arg9, 0))
        void* r14_1 = *(arg1 + 0x1f8)
        float var_118_1[0x4] = data_142fc5a80
        float zmm0_1[0x4] = 0x3f800000
        zmm0_1[0] = 1f / temp0_1[0]
        void** const var_148 = &data_14325a568
        char var_b7_1 = 1
        int64_t var_140_1 = 0
        int64_t var_138_1 = 0
        int32_t var_130_1 = 0xffffffff
        int16_t var_128_1 = 0
        int64_t var_124_1 = 0
        int32_t var_11c_1 = 0
        int64_t var_108_1 = 0
        char var_100_1 = 0
        int64_t var_f8_1 = 0
        int64_t var_f0_1 = 0
        float temp0_2[0x4] = _mm_unpacklo_ps(zmm12, 0)
        zmm6[0] = zmm6[0] * zmm0_1[0]
        zmm8.d = zmm8.d f* zmm0_1[0]
        zmm7.d = zmm7.d f* zmm0_1[0]
        int32_t var_18c_1 = zmm8.d
        float temp0_3[0x4] = _mm_unpacklo_ps(zmm6, zmm7.q)
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11, zmm13.q), temp0_2[0].q)
        int64_t var_180_1 = temp0_3.q
        void* rax_3
        float zmm6_1[0x4]
        rax_3, zmm6_1 = sub_141d3bad0()
        void* const rax_4
        
        if (rax_3 == 0)
            rax_4 = nullptr
        else
            rax_4 = sub_1407faf10(rax_3)
        
        SRWLOCK* SRWLock = rax_4 + 8
        
        if (rax_4 == 0)
            SRWLock = nullptr
        
        if (SRWLock != 0)
            AcquireSRWLockShared(SRWLock)
        
        int64_t* rax_5 = sub_14226e750(r14_1)
        
        if (rax_5 != 0)
            (*(*rax_5 + 0x348))(rax_5, "Runtime\Engine\Public\PhysXInterfaceWrapper.h", 0x18)
        
        int32_t rcx_7 = *(arg7 + 0x18)
        int16_t rsi_1
        
        if (rcx_7 == 0)
            rsi_1 = 0x17
        else if (rcx_7 == 1)
            rsi_1 = 0x15
        else if (rcx_7 != 2)
            rsi_1 = 0x17
        else
            rsi_1 = (rcx_7 - 1).w + 0x15
        
        int16_t var_150_1 = rsi_1
        char var_14e_1 = 0
        float var_194
        int128_t var_160 = *sub_140acc970(&var_194, &var_e8)
        int64_t* rax_8 = sub_14226e750(r14_1)
        float var_170 = var_180_1.d[0]
        int512_t zmm3
        zmm3.o = temp0_1
        int64_t var_1a8_1 = 0
        void*** var_1b0_1 = &var_d8
        char var_1b8_1
        var_1b8_1.q = &var_160
        float var_168_1 = var_18c_1[0]
        int16_t var_198
        int16_t* var_1c0_2 = &var_198
        float temp0_7[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
        var_194 = zmm6_1[0]
        int32_t var_16c_1 = var_180_1:4.d
        float var_190_1 = temp0_7[0]
        var_198 = 0
        void** const* var_1c8_2 = &var_148
        float var_18c_2 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)[0]
        (*(*rax_8 + 0x2f0))(rax_8, &var_194, &var_170, zmm3, var_1c8_2, var_1c0_2, var_1b8_1, 
            var_1b0_1, var_1a8_1)
        r14 = 0
        
        if (var_100_1 != 0)
            r14 = 1
        
        if (rax_5 != 0)
            int64_t rdx_5 = *rax_5
            (*(rdx_5 + 0x350))(rax_5, rdx_5)
        
        if (SRWLock != 0)
            ReleaseSRWLockShared(SRWLock)
    
    result = zx.q(r14.b)

__security_check_cookie(rax_1 ^ &var_1e8)
return result

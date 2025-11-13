// 函数: sub_141eb4270
// 地址: 0x141eb4270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int128_t* result

if (arg1 == 0 || *(arg1 + 0x1f8) == 0)
    result.b = 0
else
    float zmm11[0x4] = *arg4
    int128_t zmm6
    zmm6.d = (*arg5).d f- zmm11[0]
    float zmm12[0x4] = *(arg4 + 4)
    int128_t zmm7
    zmm7.d = (*(arg5 + 4)).d f- zmm12[0]
    int128_t zmm13 = *(arg4 + 8)
    int128_t zmm8
    zmm8.d = (*(arg5 + 8)).d f- zmm13.d
    float zmm9[0x4] = _mm_sqrt_ss(0, zmm7.d f* zmm7.d + zmm6.d f* zmm6.d + zmm8.d f* zmm8.d)
    
    if (not(zmm9[0] > 9.99999994e-09f))
        zmm9 = zx.o(0)
    
    void var_138
    void** var_128
    sub_141eb5350(&var_128, arg7, 1, 
        sub_1422655c0(&var_138, arg6, *(arg7 + 0x10), arg8, arg7, arg9, 0))
    uint128_t var_168_1 = data_142fc5a80
    bool cond:0_1 = zmm9[0] <= 0f
    void** const var_198 = &data_14325a568
    char var_107_1 = 1
    int64_t var_190_1 = 0
    int64_t var_188_1 = 0
    int32_t var_180_1 = 0xffffffff
    int16_t var_178_1 = 0
    int64_t var_174_1 = 0
    int32_t var_16c_1 = 0
    char var_150_1 = 0
    int64_t var_148_1 = 0
    int64_t var_140_1 = 0
    float var_1f4
    int64_t var_1f0
    uint128_t zmm0_1
    
    if (cond:0_1)
        var_1f4 = 1f
        var_1f0 = 0
    else
        zmm0_1.d = 1f / zmm9[0]
        zmm6.d = zmm6.d f* zmm0_1.d
        zmm7.d = zmm7.d f* zmm0_1.d
        zmm8.d = zmm8.d f* zmm0_1.d
        var_1f4 = zmm6.d
        var_1f0.d = zmm7.d
        var_1f0:4.d = zmm8.d
    
    zmm0_1 = zx.o(var_1f4.q)
    float zmm3[0x4] = data_14399f668
    float zmm5_1[0x4] = *(arg3 + 0x30)
    void* r14_1 = *(arg1 + 0x1f8)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm12, 0)
    float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11, zmm13.q), temp0_2[0].q)
    uint64_t var_1e0_1 = zmm0_1.q
    zmm0_1 = data_14399f670
    float temp0_5[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
    float var_d8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1.q), temp0_5[0].q)
    void* rax_3 = sub_141d3bad0()
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
        rsi_1 = 0x1f
    else if (rcx_7 == 1)
        rsi_1 = 0x1d
    else if (rcx_7 != 2)
        rsi_1 = 0x1f
    else
        rsi_1 = (rcx_7 - 1).w + 0x1d
    
    int16_t var_1a0_1 = rsi_1
    char var_19e_1 = 0
    int128_t var_1b0 = *sub_140acc970(&var_1f4, &var_138)
    int64_t* rax_8 = sub_14226e750(r14_1)
    var_1f4 = var_1e0_1.d[0]
    var_1f0:4.d = var_1f0:4.d[0]
    int32_t var_208_1 = 0
    int64_t var_210_1 = 0
    void*** var_218_1 = &var_128
    int128_t* var_220_1 = &var_1b0
    char var_228_1
    int16_t var_1f8
    var_228_1.q = &var_1f8
    float var_1cc_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)[0]
    var_1f0.d = var_1e0_1:4.d[0]
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
    float var_1d0 = zmm5_1[0]
    float var_1c0_1 = temp0_4[0]
    float temp0_11[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
    void** const* var_230_2 = &var_198
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float var_1b8_1 = temp0_12[0]
    float var_1c8_1 = temp0_11[0]
    float var_1c4_1 = temp0_13[0]
    float var_1bc_1 = temp0_10[0]
    var_1f8 = 0
    void* var_238_1
    var_238_1.d = zmm9[0]
    (*(*rax_8 + 0x2f8))(rax_8, arg3, &var_1d0, &var_1f4, var_238_1, var_230_2, var_228_1, 
        var_220_1, var_218_1, var_210_1, var_208_1)
    char result_1 = 0
    
    if (var_150_1 != 0)
        result_1 = 1
    
    if (rax_5 != 0)
        int64_t rdx_5 = *rax_5
        (*(rdx_5 + 0x350))(rax_5, rdx_5)
    
    if (SRWLock != 0)
        ReleaseSRWLockShared(SRWLock)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_258)
return result

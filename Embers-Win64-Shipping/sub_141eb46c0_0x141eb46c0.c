// 函数: sub_141eb46c0
// 地址: 0x141eb46c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int128_t* var_1f0 = arg5
int32_t* var_240 = arg9
uint128_t var_1a8
memset(&var_1a8, 0, 0x88)
int32_t var_1a0 = 0x3f800000
*arg2 = var_1a8
int128_t var_198
arg2[1] = var_198
uint128_t var_188
arg2[2] = var_188
int128_t var_178
arg2[3] = var_178
uint128_t var_168
arg2[4] = var_168
int128_t var_158
arg2[5] = var_158
uint128_t var_148
arg2[6] = var_148
uint128_t var_138
arg2[7] = var_138
int64_t var_128
arg2[8].q = var_128
arg2[4].q = *arg4
uint128_t zmm0 = zx.o(*arg5)
*(arg2 + 0x48) = arg4[1].d
uint32_t result = arg5[1].d
*(arg2 + 0x4c) = zmm0.q
*(arg2 + 0x54) = result

if (arg1 == 0 || *(arg1 + 0x1f8) == 0)
    result.b = 0
else
    uint128_t zmm6
    zmm6.d = (*arg5).d f- *arg4
    int128_t zmm7
    zmm7.d = (*(arg5 + 4)).d f- *(arg4 + 4)
    int128_t zmm8
    zmm8.d = arg5[1].d.d f- arg4[1].d
    zmm0.d = zmm6.d f* zmm6.d
    int128_t zmm1
    zmm1.d = zmm8.d f* zmm8.d
    float zmm9[0x4] = _mm_sqrt_ss(0, zmm7.d f* zmm7.d f+ zmm0.d f+ zmm1.d)
    
    if (not(zmm9[0] > 9.99999994e-09f))
        zmm9 = zx.o(0)
    
    float zmm15[0x4] = zmm9
    void var_1c0
    void** var_118
    sub_141eb5350(&var_118, arg7, 1, 
        sub_1422655c0(&var_1c0, arg6, *(arg7 + 0x10), arg8, arg7, var_240, 0))
    var_1a8.q = &data_14325a568
    uint64_t r12
    r12.b = 0
    char var_f7_1 = 1
    bool cond:0_1 = zmm9[0] <= 0f
    var_1a0.q = 0
    var_198.q = 0
    var_198:8.d = 0xffffffff
    var_188.w = 0
    var_188:4.q = 0
    var_188:0xc.d = 0
    var_168:8.b = 0
    uint128_t var_178_1 = data_142fc5a80
    var_158.q = 0
    var_158:8.q = 0
    bool var_248 = false
    int32_t var_238_1
    
    if (cond:0_1)
        var_240 = 0x3f800000
        var_238_1 = 0
    else
        int128_t zmm10
        zmm10.d = 1f / zmm9[0]
        zmm6.d = zmm6.d f* zmm10.d
        zmm7.d = zmm7.d f* zmm10.d
        zmm8.d = zmm8.d f* zmm10.d
        var_240.d = zmm6.d
        var_240:4.d = zmm7.d
        var_238_1 = zmm8.d
    
    uint128_t zmm0_1 = zx.o(var_240)
    float zmm4_1[0x4] = *arg4
    float zmm3[0x4] = data_14399f668
    int32_t* rbx_1 = *(arg1 + 0x1f8)
    float temp0_2[0x4] = _mm_unpacklo_ps(*(arg4 + 4), 0)
    uint64_t var_228_1 = zmm0_1.q
    float temp0_3[0x4] = _mm_unpacklo_ps(zmm4_1, arg4[1].d.q)
    zmm0_1 = data_14399f670
    float temp0_4[0x4] = _mm_unpacklo_ps(temp0_3, temp0_2[0].q)
    float temp0_5[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
    float var_c8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1.q), temp0_5[0].q)
    float var_e8[0x4] = *(arg3 + 0x30)
    var_240 = rbx_1
    void* rax_8 = sub_141d3bad0()
    void* const rax_9
    
    if (rax_8 == 0)
        rax_9 = nullptr
    else
        rax_9 = sub_1407faf10(rax_8)
    
    SRWLOCK* SRWLock = rax_9 + 8
    
    if (rax_9 == 0)
        SRWLock = nullptr
    
    if (SRWLock != 0)
        AcquireSRWLockShared(SRWLock)
    
    int64_t* rax_10 = sub_14226e750(rbx_1)
    
    if (rax_10 != 0)
        (*(*rax_10 + 0x348))(rax_10, "Runtime\Engine\Public\PhysXInterfaceWrapper.h", 0x18)
    
    int32_t rcx_7 = *(arg7 + 0x18)
    int16_t r14_1
    
    if (rcx_7 == 0)
        r14_1 = 7
    else if (rcx_7 == 1)
        r14_1 = 5
    else if (rcx_7 != 2)
        r14_1 = 7
    else
        r14_1 = (rcx_7 - 1).w + 5
    
    float var_210
    int32_t* rax_12 = sub_140acc970(&var_210, &var_1c0)
    int32_t* rcx_10 = var_240
    int16_t var_1c8_1 = r14_1
    char var_1c6_1 = 0
    int128_t var_1d8 = *rax_12
    int64_t* rax_13 = sub_14226e750(rcx_10)
    float zmm2_2[0x4] = var_e8
    var_240.d = var_228_1.d[0]
    float var_238_2 = var_238_1[0]
    int32_t var_268_1 = 0
    int64_t var_270_1 = 0
    void*** var_278_1 = &var_118
    int128_t* var_280_1 = &var_1d8
    char var_288_1
    int16_t var_230
    var_288_1.q = &var_230
    float var_20c_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0]
    var_240:4.d = var_228_1:4.d[0]
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
    var_210 = zmm2_2[0]
    float var_200_1 = temp0_4[0]
    float temp0_11[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
    int128_t* var_290_2 = &var_1a8
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
    float var_1f8_1 = temp0_12[0]
    float var_208_1 = temp0_11[0]
    float var_204_1 = temp0_13[0]
    float var_1fc_1 = temp0_10[0]
    var_230 = 0x207
    void* var_298_1
    var_298_1.d = zmm9[0]
    (*(*rax_13 + 0x2f8))(rax_13, arg3, &var_210, &var_240, var_298_1, var_290_2, var_288_1, 
        var_280_1, var_278_1, var_270_1, var_268_1)
    char rax_15 = var_168:8.b
    int32_t rdi_1
    rdi_1.b = rax_15 != 0
    
    if (rax_15 != 0)
        r12.b = 1
        var_248 = true
        void var_1ac
        zmm15 = *(&var_1ac + (zx.q(rdi_1) << 6))
    
    if (rdi_1 != 0)
        char var_250_1 = *(arg7 + 0x13)
        var_268_1.q = &var_e8
        var_288_1.q = arg2
        var_298_1.d = zmm9[0]
        sub_141eafcf0(&var_248, arg1, zx.q(rdi_1), &var_1a8:8, var_298_1.d, &var_1c0, var_288_1, 
            arg4, var_1f0, arg3, var_268_1, zmm15[0].b, *(arg7 + 0x12))
        r12 = zx.q(var_248)
    
    if (rax_10 != 0)
        int64_t rdx_5 = *rax_10
        (*(rdx_5 + 0x350))(rax_10, rdx_5)
    
    if (SRWLock != 0)
        ReleaseSRWLockShared(SRWLock)
    
    result = zx.d(r12.b)

__security_check_cookie(rax_1 ^ &var_2b8)
return result

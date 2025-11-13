// 函数: sub_141eb32e0
// 地址: 0x141eb32e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void* var_1f8 = arg8
int32_t* var_1e8 = arg9
uint128_t var_188
memset(&var_188, 0, 0x88)
int32_t var_180 = 0x3f800000
*arg2 = var_188
int128_t var_178
arg2[1] = var_178
uint128_t var_168
arg2[2] = var_168
int128_t var_158
arg2[3] = var_158
uint128_t var_148
arg2[4] = var_148
int128_t var_138
arg2[5] = var_138
uint128_t var_128
arg2[6] = var_128
uint128_t var_118
arg2[7] = var_118
int64_t var_108
arg2[8].q = var_108
arg2[4].q = *arg4
uint128_t zmm0 = zx.o(*arg5)
*(arg2 + 0x48) = arg4[1].d
uint32_t result = arg5[1].d
*(arg2 + 0x4c) = zmm0.q
*(arg2 + 0x54) = result

if (arg1 == 0 || *(arg1 + 0x1f8) == 0)
    result.b = 0
else
    int64_t rsi
    rsi.b = 0
    uint128_t zmm7
    zmm7.d = (*arg5).d f- *arg4
    int128_t zmm8
    zmm8.d = (*(arg5 + 4)).d f- *(arg4 + 4)
    int128_t zmm9
    zmm9.d = arg5[1].d.d f- arg4[1].d
    zmm0.d = zmm7.d f* zmm7.d
    int128_t zmm6
    zmm6.d = zmm8.d f* zmm8.d
    int128_t zmm1
    zmm1.d = zmm9.d f* zmm9.d
    zmm6.d = zmm6.d f+ zmm0.d
    zmm6.d = zmm6.d f+ zmm1.d
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm6.d)
    
    if (not(temp0_1[0] <= 9.99999994e-09f) && not(temp0_1[0] <= 0f))
        void var_1a0
        void** var_c8
        sub_141eb5350(&var_c8, arg7, 0, 
            sub_1422655c0(&var_1a0, arg6, *(arg7 + 0x10), var_1f8, arg7, var_1e8, 0))
        uint128_t zmm4_1 = data_143f3a510
        float zmm2_1[0x4] = *(arg4 + 4)
        void* rbx_1 = *(arg1 + 0x1f8)
        uint128_t var_158_1 = data_142fc5a80
        uint128_t zmm0_1
        zmm0_1.d = 1f / temp0_1[0]
        var_188.q = &data_14325a568
        char var_a7_1 = 1
        var_180.q = 0
        var_178.q = 0
        var_178:8.d = 0xffffffff
        var_168.w = 0
        var_168:4.q = 0
        var_168:0xc.d = 0
        var_148.q = 0
        var_148:8.b = 0
        var_138.q = 0
        var_138:8.q = 0
        var_1f8 = rbx_1
        float temp0_2[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
        zmm7.d = zmm7.d f* zmm0_1.d
        zmm9.d = zmm9.d f* zmm0_1.d
        zmm8.d = zmm8.d f* zmm0_1.d
        zmm0_1 = zmm7
        zmm7 = *arg4
        int32_t var_1d8_1 = zmm9.d
        uint64_t var_1d0_1 = (_mm_unpacklo_ps(zmm0_1, zmm8.q)).q
        zmm4_1 = __andps_xmmxud_memxud(zmm4_1, data_143f3a520)
        zmm0_1.q = zx.o(0) u>> 0x40
        uint128_t zmm3 = _mm_shuffle_ps(zx.o(0), zmm0_1, 0xc4)
        zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, arg4[1].d.q), temp0_2[0].q)
        uint128_t var_e8_1 = zmm7
        uint128_t var_f8 = zmm3
        uint128_t var_d8_1 = zmm4_1
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
        int16_t rsi_1
        
        if (rcx_7 == 0)
            rsi_1 = 7
        else if (rcx_7 == 1)
            rsi_1 = 5
        else if (rcx_7 != 2)
            rsi_1 = 7
        else
            rsi_1 = (rcx_7 - 1).w + 5
        
        int32_t var_1e0
        int32_t* rax_12 = sub_140acc970(&var_1e0, &var_1a0)
        void* rcx_10 = var_1f8
        int16_t var_1a8_1 = rsi_1
        char var_1a6_1 = 0
        int128_t var_1b8 = *rax_12
        int64_t* rax_13 = sub_14226e750(rcx_10)
        var_1f8.d = var_1d0_1.d[0]
        int64_t var_218_1 = 0
        void*** var_220_1 = &var_c8
        char var_228_1
        var_228_1.q = &var_1b8
        float var_1f0_1 = var_1d8_1[0]
        int32_t** var_230_2 = &var_1e8
        float temp0_9[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        var_1e0 = zmm7.d
        var_1f8:4.d = var_1d0_1:4.d
        float var_1dc_1 = temp0_9[0]
        var_1e8.w = 0x607
        int128_t* var_238_2 = &var_188
        int32_t var_1d8_2 = _mm_shuffle_ps(zmm7, zmm7, 0xaa).d
        (*(*rax_13 + 0x2f0))(rax_13, &var_1e0, &var_1f8, temp0_1, var_238_2, var_230_2, var_228_1, 
            var_220_1, var_218_1)
        char rax_15 = var_148:8.b
        int32_t rcx_12
        rcx_12.b = rax_15 != 0
        rsi = 0
        
        if (rax_15 != 0)
            rsi = 1
        
        if (rcx_12 != 0)
            var_228_1.q = arg5
            rsi.b = sub_141ebeee0(arg1, &var_188:8, arg2, temp0_1, &var_1a0, arg4, var_228_1, 
                nullptr, &var_f8, *(arg7 + 0x12), *(arg7 + 0x13)) == 0
        
        if (rax_10 != 0)
            int64_t rdx_6 = *rax_10
            (*(rdx_6 + 0x350))(rax_10, rdx_6)
        
        if (SRWLock != 0)
            ReleaseSRWLockShared(SRWLock)
    
    result = zx.d(rsi.b)

__security_check_cookie(rax_1 ^ &var_258)
return result

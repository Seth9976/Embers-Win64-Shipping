// 函数: sub_141e9dbc0
// 地址: 0x141e9dbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t result = __security_cookie ^ &var_208
int64_t result_1 = result
int64_t i_2 = sx.q(*(arg1 + 0x18))
void* rsi = arg2
float (* var_178)[0x4] = arg3

if (i_2.d s> 0)
    char rcx = (data_1439c7a34).b
    int128_t var_108 = zx.o(0)
    int64_t* rcx_1 = data_143f0f180
    uint64_t r15_1 = zx.q((i_2 * 2).d)
    float var_f4_1[0x4] = data_143dbb1e0
    int32_t var_f8_1 = 1
    int32_t var_e4_1 = (1 << rcx) - 1
    char var_e0_1 = 0
    int64_t var_d8_1 = 0
    int32_t var_d0_1 = 0
    uint32_t rbx_2 = (r15_1 * 9).d << 4
    int32_t var_190_1 = r15_1.d
    int64_t var_198
    (*(*rcx_1 + 0x498))(rcx_1, &var_198, &data_143f02b98, zx.q(rbx_2), 4, &var_108)
    int64_t* rcx_2 = data_143f0f180
    int128_t* var_1e0_1
    var_1e0_1.d = 1
    void* rax_5 = (*(*rcx_2 + 0x130))(rcx_2, &data_143f02b98, var_198, 0, rbx_2, var_1e0_1)
    
    if (i_2.d s> 0)
        float (* rsi_1)[0x4] = var_178
        float zmm0[0x4] = zx.o(0)
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        int64_t i_1 = i_2
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        float zmm10[0x4]
        float var_88_1[0x4] = zmm10
        zmm0[0] = float.s(zx.q(arg4))
        int128_t* r14_1 = nullptr
        int32_t var_17c_1 = 0x3f800000
        void* r12_1 = rax_5 + 0x60
        float zmm11[0x4]
        float var_98_1[0x4] = zmm11
        int128_t zmm12
        zmm12.d = 1f / zmm0[0]
        int64_t i
        
        do
            void* rdi = *(arg1 + 0x10)
            int32_t var_19c_1 = 0x3f800000
            zmm11 = *(r14_1 + rdi + 0xc)
            zmm0 = *(r14_1 + rdi)
            zmm10 = zmm11
            zmm10[0] = zmm10[0] f* *arg6
            float var_188[0x4]
            var_188[0] = zmm0[0]
            char* rbx_4 = rdi + 0x10 + r14_1
            float zmm1[0x4] = *(r14_1 + rdi + 4)
            zmm9 = zmm11
            zmm9[0] = zmm9[0] f* arg6[1]
            zmm8 = zmm11
            zmm8[0] = zmm8[0] f* arg6[2]
            zmm11 ^= 0x80000000
            float zmm2[0x4] = *(r14_1 + rdi + 8)
            float temp0_1[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
            temp0_1[0] = zmm1[0]
            zmm10[0] = zmm10[0] f* zmm12.d
            zmm11[0] = zmm11[0] f* *arg7
            zmm11[0] = zmm11[0] f* arg7[1]
            zmm11[0] = zmm11[0] f* arg7[2]
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = zmm2[0]
            zmm9[0] = zmm9[0] f* zmm12.d
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
            var_188 = temp0_3
            float temp0_5[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), rsi_1[3])
            float temp0_7[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), rsi_1[1])
            float temp0_9[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), rsi_1[2])
            arg5 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *rsi_1)
            float temp0_12[0x4] = _mm_add_ps(temp0_5, temp0_9)
            zmm8[0] = zmm8[0] f* zmm12.d
            zmm11[0] = zmm11[0] f* zmm12.d
            float temp0_13[0x4] = _mm_add_ps(temp0_7, arg5)
            zmm11[0] = zmm11[0] f* zmm12.d
            zmm11[0] = zmm11[0] f* zmm12.d
            float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_13)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xff)
            zmm10[0] = zmm10[0] * temp0_15[0]
            zmm9[0] = zmm9[0] * temp0_15[0]
            zmm8[0] = zmm8[0] * temp0_15[0]
            zmm11[0] = zmm11[0] * temp0_15[0]
            zmm11[0] = zmm11[0] * temp0_15[0]
            zmm11[0] = zmm11[0] * temp0_15[0]
            sub_140acc920(&var_178, rbx_4)
            int32_t var_1a8 = *(r14_1 + rdi + 0x14)
            zmm8[0] = zmm8[0] f+ *(r14_1 + rdi + 8)
            int32_t var_1cc_1 = 0x3f800000
            zmm10[0] = zmm10[0] f+ *(r14_1 + rdi)
            int64_t var_1c8_1 = 0x3f800000
            zmm9[0] = zmm9[0] f+ *(r14_1 + rdi + 4)
            zmm8[0] = zmm8[0] - zmm11[0]
            zmm10[0] = zmm10[0] - zmm11[0]
            zmm9[0] = zmm9[0] - zmm11[0]
            float var_1d0_1 = zmm8[0]
            float var_1d8_1 = zmm10[0]
            float var_1c0_1[0x4] = var_178.o
            float var_1d4_1 = zmm9[0]
            void var_1b0
            sub_14208ca90(&var_1a8, &var_1b0)
            *(r12_1 - 0x60) = var_1d8_1.o
            *(r12_1 - 0x50) = var_1c8_1.o
            *(r12_1 - 0x40) = var_1c0_1
            float var_160[0x4]
            sub_140acc920(&var_160, rbx_4)
            var_1a8 = *(r14_1 + rdi + 0x14)
            zmm8[0] = zmm8[0] f+ *(r14_1 + rdi + 8)
            int32_t var_1cc_2 = 0x3f800000
            zmm10[0] = zmm10[0] f+ *(r14_1 + rdi)
            var_1c8_1.d = 0x3f800000
            zmm9[0] = zmm9[0] f+ *(r14_1 + rdi + 4)
            zmm8[0] = zmm8[0] + zmm11[0]
            var_1c8_1:4.d = 0x3f800000
            zmm10[0] = zmm10[0] + zmm11[0]
            zmm9[0] = zmm9[0] + zmm11[0]
            float var_1d0_2 = zmm8[0]
            float var_1d8_2 = zmm10[0]
            float var_1c0_2[0x4] = var_160
            float var_1d4_2 = zmm9[0]
            sub_14208ca90(&var_1a8, &var_1b0)
            *(r12_1 - 0x30) = var_1d8_2.o
            *(r12_1 - 0x20) = var_1c8_1.o
            *(r12_1 - 0x10) = var_1c0_2
            int128_t var_150
            sub_140acc920(&var_150, rbx_4)
            zmm2 = *(r14_1 + rdi)
            int128_t zmm0_3
            zmm0_3.d = (*(r14_1 + rdi + 8)).d f- zmm8[0]
            zmm1 = *(r14_1 + rdi + 4)
            zmm2[0] = zmm2[0] - zmm10[0]
            int32_t rax_10 = *(r14_1 + rdi + 0x14)
            zmm1[0] = zmm1[0] - zmm9[0]
            var_1a8 = rax_10
            var_1cc_2.q = 0x3f800000
            zmm0_3.d = zmm0_3.d f- zmm11[0]
            var_1c8_1:4.d = 0
            zmm2[0] = zmm2[0] - zmm11[0]
            zmm1[0] = zmm1[0] - zmm11[0]
            int32_t var_1d0_3 = zmm0_3.d
            float var_1d8_3 = zmm2[0]
            int128_t var_1c0_3 = var_150
            float var_1d4_3 = zmm1[0]
            sub_14208ca90(&var_1a8, &var_1b0)
            *r12_1 = var_1d8_3.o
            *(r12_1 + 0x10) = var_1c8_1.o
            *(r12_1 + 0x20) = var_1c0_3
            float var_140[0x4]
            sub_140acc920(&var_140, rbx_4)
            int32_t rax_11 = *(r14_1 + rdi + 0x14)
            zmm10[0] = zmm10[0] f+ *(r14_1 + rdi)
            var_1a8 = rax_11
            zmm9[0] = zmm9[0] f+ *(r14_1 + rdi + 4)
            zmm8[0] = zmm8[0] f+ *(r14_1 + rdi + 8)
            zmm10[0] = zmm10[0] + zmm11[0]
            zmm9[0] = zmm9[0] + zmm11[0]
            zmm8[0] = zmm8[0] + zmm11[0]
            float var_1d0_4 = zmm8[0]
            int32_t var_1cc_3 = 0x3f800000
            float var_1d8_4 = zmm10[0]
            float var_1c0_4[0x4] = var_140
            var_1c8_1.d = 0x3f800000
            float var_1d4_4 = zmm9[0]
            var_1c8_1:4.d = 0x3f800000
            sub_14208ca90(&var_1a8, &var_1b0)
            *(r12_1 + 0x30) = var_1d8_4.o
            *(r12_1 + 0x40) = var_1c8_1.o
            *(r12_1 + 0x50) = var_1c0_4
            int128_t var_130
            sub_140acc920(&var_130, rbx_4)
            zmm2 = *(r14_1 + rdi)
            int128_t zmm0_5
            zmm0_5.d = (*(r14_1 + rdi + 8)).d f- zmm8[0]
            zmm1 = *(r14_1 + rdi + 4)
            zmm2[0] = zmm2[0] - zmm10[0]
            int32_t rax_12 = *(r14_1 + rdi + 0x14)
            zmm1[0] = zmm1[0] - zmm9[0]
            var_1a8 = rax_12
            var_1cc_3.q = 0x3f800000
            zmm0_5.d = zmm0_5.d f- zmm11[0]
            var_1c8_1:4.d = 0
            zmm2[0] = zmm2[0] - zmm11[0]
            zmm1[0] = zmm1[0] - zmm11[0]
            int32_t var_1d0_5 = zmm0_5.d
            float var_1d8_5 = zmm2[0]
            int128_t var_1c0_5 = var_130
            float var_1d4_5 = zmm1[0]
            sub_14208ca90(&var_1a8, &var_1b0)
            *(r12_1 + 0x60) = var_1d8_5.o
            *(r12_1 + 0x70) = var_1c8_1.o
            *(r12_1 + 0x80) = var_1c0_5
            float var_120[0x4]
            sub_140acc920(&var_120, rbx_4)
            zmm0 = *(r14_1 + rdi + 8)
            zmm2 = *(r14_1 + rdi)
            zmm0[0] = zmm0[0] - zmm8[0]
            zmm1 = *(r14_1 + rdi + 4)
            zmm2[0] = zmm2[0] - zmm10[0]
            int32_t rax_13 = *(r14_1 + rdi + 0x14)
            zmm1[0] = zmm1[0] - zmm9[0]
            var_1a8 = rax_13
            var_1cc_3.q = 0x3f800000
            zmm0[0] = zmm0[0] + zmm11[0]
            var_1c8_1:4.d = 0x3f800000
            zmm2[0] = zmm2[0] + zmm11[0]
            zmm1[0] = zmm1[0] + zmm11[0]
            float var_1d0_6 = zmm0[0]
            float var_1d8_6 = zmm2[0]
            float var_1c0_6[0x4] = var_120
            float var_1d4_6 = zmm1[0]
            sub_14208ca90(&var_1a8, &var_1b0)
            r14_1 += 0x18
            *(r12_1 + 0x90) = var_1d8_6.o
            *(r12_1 + 0xa0) = var_1c8_1.o
            *(r12_1 + 0xb0) = var_1c0_6
            r12_1 += 0x120
            i = i_1
            i_1 -= 1
        while (i != 1)
        rsi = arg2
        r15_1 = zx.q(var_190_1)
    
    int64_t* rcx_15 = data_143f0f180
    (*(*rcx_15 + 0x138))(rcx_15, &data_143f02b98, var_198, arg5)
    int64_t rdi_1 = var_198
    void*** rcx_18 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_18[5]
    
    if (rax_15 u> *(rsi + 0x38))
        sub_140b0e3d0(rsi + 0x30, 0x30)
        rcx_18 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_18[5]
    
    *(rsi + 0x30) = rax_15
    int64_t* rax_16 = *(rsi + 8)
    *(rsi + 0x14) += 1
    *rax_16 = rcx_18
    *(rsi + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142d56618
    rcx_18[2].d = 0
    rcx_18[3] = rdi_1
    rcx_18[4].d = 0
    void*** rcx_24 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_18 = &rcx_24[4]
    
    if (rax_18 u> *(rsi + 0x38))
        sub_140b0e3d0(rsi + 0x30, 0x28)
        rcx_24 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_18 = &rcx_24[4]
    
    *(rsi + 0x30) = rax_18
    void**** rax_19 = *(rsi + 8)
    *(rsi + 0x14) += 1
    *rax_19 = rcx_24
    *(rsi + 8) = &rcx_24[1]
    rcx_24[1] = 0
    *rcx_24 = &data_142d54988
    rcx_24[2].d = 0
    *(rcx_24 + 0x14) = r15_1.d
    rcx_24[3].d = 1
    result = sub_1405d1550(&var_198)

__security_check_cookie(result_1 ^ &var_208)
return result

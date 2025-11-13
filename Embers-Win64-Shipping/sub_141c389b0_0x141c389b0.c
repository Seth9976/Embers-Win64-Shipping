// 函数: sub_141c389b0
// 地址: 0x141c389b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 4))
*(arg1 + 0x38) = 0
int64_t rsi = sx.q((temp1 + (temp0 & 0xf)) s>> 4)

if (*(arg1 + 0x3c) s<= 0xffffffff)
    sub_141c458f0(arg1 + 0x30, 0)

uint64_t result = zx.q(*(arg1 + 0x38) + rsi.d)
*(arg1 + 0x38) = result.d

if (result.d s> *(arg1 + 0x3c))
    result = sub_141c45860(arg1 + 0x30)

uint128_t zmm10
zmm10.q = 0x3ff0000000000000 f/ _mm_cvtepi32_pd(zx.q(*(arg1 + 4))).q
uint64_t arg_8 = zmm10.q

if (rsi.d s> 0)
    uint64_t zmm0 = zmm10.q f* 6.2831854820251465
    int64_t rbp_1 = 0
    uint128_t zmm1
    zmm1.q = zmm10.q f* 12.566370964050293
    int32_t* rsi_1 = 0x24
    uint128_t zmm2
    zmm2.q = zmm10.q f* 18.849556446075439
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm11 = 0x80000000
    double zmm12[0x2]
    double var_a8_1[0x2] = zmm12
    double zmm13[0x2]
    double var_b8_1[0x2] = zmm13
    double zmm14[0x2]
    double var_c8_1[0x2] = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    uint64_t arg_10 = zmm0
    uint64_t arg_18 = zmm1.q
    uint64_t arg_20 = zmm2.q
    
    do
        zmm12 = zx.o(0)
        int32_t rcx_3 = *(*(arg1 + 0x20) + (r14 << 3)) << 2
        uint64_t r8_1 = zx.q(rcx_3)
        uint32_t rdx_6 = (zx.d(*(zx.q((zx.q(rcx_3) u>> 8).b) + &data_143205280))
            | zx.d(*(zx.q(r8_1.b) + &data_143205280)) << 8) << 8
            | zx.d(*(zx.q((zx.q(r8_1.d) u>> 0x10).b) + &data_143205280))
        zmm12[0] = float.d(zx.q(*((r8_1 u>> 0x18) + &data_143205280)) | zx.q(rdx_6 << 8))
        zmm12[0] = zmm12[0] * 1.462918119976564e-09
        zmm6 = _mm_cvtpd_ps(zmm12)
        zmm13 = zmm12
        zmm15.q = zmm2.q f+ zmm12[0]
        zmm13[0] = zmm13[0] f+ zmm0
        zmm14 = zmm12
        zmm14[0] = zmm14[0] f+ zmm1.q
        uint128_t zmm0_1 = tanf(zmm6.q.d)
        int64_t rax_13 = *(arg1 + 0x30)
        zmm7 = _mm_cvtpd_ps(zmm13)
        *(rax_13 + rbp_1 + 0x30) = (zmm0_1 ^ zmm11).d
        *(*(arg1 + 0x30) + rbp_1 + 0x34) = zmm0_1.d
        uint128_t zmm0_2 = tanf(zmm7.d)
        int64_t rax_15 = *(arg1 + 0x30)
        zmm9 = _mm_cvtpd_ps(zmm14)
        *(rax_15 + rbp_1 + 0x38) = (zmm0_2 ^ zmm11).d
        *(*(arg1 + 0x30) + rbp_1 + 0x3c) = zmm0_2.d
        uint128_t zmm0_3 = tanf(zmm9.d)
        int64_t rax_17 = *(arg1 + 0x30)
        zmm8 = _mm_cvtpd_ps(zmm15)
        *(rax_17 + rbp_1 + 0x50) = (zmm0_3 ^ zmm11).d
        *(*(arg1 + 0x30) + rbp_1 + 0x54) = zmm0_3.d
        uint128_t zmm0_4 = tanf(zmm8.d)
        *(*(arg1 + 0x30) + rbp_1 + 0x58) = (zmm0_4 ^ zmm11).d
        *(*(arg1 + 0x30) + rbp_1 + 0x5c) = zmm0_4.d
        uint128_t zmm0_5 = cosf(zmm6.d)
        *(rsi_1 + *(arg1 + 0x30) - 4) = zmm0_5.d
        *(rsi_1 + *(arg1 + 0x30)) = zmm0_5.d
        uint128_t zmm0_6 = cosf(zmm7.d)
        *(rsi_1 + *(arg1 + 0x30) + 4) = zmm0_6.d
        *(rsi_1 + *(arg1 + 0x30) + 8) = zmm0_6.d
        zmm2 = zmm0_5 ^ zmm11
        zmm1 = zmm0_6 ^ zmm11
        *(*(arg1 + 0x30) + rbp_1 + 0xf0) = zmm2.d
        *(*(arg1 + 0x30) + rbp_1 + 0xf4) = zmm0_5.d
        *(*(arg1 + 0x30) + rbp_1 + 0xf8) = zmm1.d
        *(*(arg1 + 0x30) + rbp_1 + 0xfc) = zmm0_6.d
        *(*(arg1 + 0x30) + rbp_1 + 0x100) = zmm0_5.d
        *(*(arg1 + 0x30) + rbp_1 + 0x104) = zmm2.d
        *(*(arg1 + 0x30) + rbp_1 + 0x108) = zmm0_6.d
        *(*(arg1 + 0x30) + rbp_1 + 0x10c) = zmm1.d
        *(rsi_1 + *(arg1 + 0x30) + 0xbc) = zmm2.d
        *(rsi_1 + *(arg1 + 0x30) + 0xc0) = zmm2.d
        *(rsi_1 + *(arg1 + 0x30) + 0xc4) = zmm1.d
        *(rsi_1 + *(arg1 + 0x30) + 0xc8) = zmm1.d
        uint128_t zmm0_7 = cosf(zmm9.d)
        *(rsi_1 + *(arg1 + 0x30) + 0x1c) = zmm0_7.d
        *(rsi_1 + *(arg1 + 0x30) + 0x20) = zmm0_7.d
        uint128_t zmm0_8 = cosf(zmm8.d)
        zmm1 = zmm0_8 ^ zmm11
        zmm2 = zmm0_7 ^ zmm11
        *(rsi_1 + *(arg1 + 0x30) + 0x24) = zmm0_8.d
        *(rsi_1 + *(arg1 + 0x30) + 0x28) = zmm0_8.d
        *(*(arg1 + 0x30) + rbp_1 + 0x110) = zmm2.d
        *(*(arg1 + 0x30) + rbp_1 + 0x114) = zmm0_7.d
        *(*(arg1 + 0x30) + rbp_1 + 0x118) = zmm1.d
        *(*(arg1 + 0x30) + rbp_1 + 0x11c) = zmm0_8.d
        *(*(arg1 + 0x30) + rbp_1 + 0x120) = zmm0_7.d
        *(*(arg1 + 0x30) + rbp_1 + 0x124) = zmm2.d
        *(*(arg1 + 0x30) + rbp_1 + 0x128) = zmm0_8.d
        zmm0_8.q = zmm12.q f+ zmm12[0]
        *(*(arg1 + 0x30) + rbp_1 + 0x12c) = zmm1.d
        int64_t rax_49 = *(arg1 + 0x30)
        zmm8 = _mm_cvtpd_ps(zmm0_8)
        *(rsi_1 + rax_49 + 0x10c) = zmm2.d
        *(rsi_1 + *(arg1 + 0x30) + 0x110) = zmm2.d
        *(rsi_1 + *(arg1 + 0x30) + 0x114) = zmm1.d
        *(rsi_1 + *(arg1 + 0x30) + 0x118) = zmm1.d
        uint128_t zmm0_9 = tanf(zmm8.d)
        *(*(arg1 + 0x30) + rbp_1 + 0x70) = (zmm0_9 ^ zmm11).d
        *(*(arg1 + 0x30) + rbp_1 + 0x74) = zmm0_9.d
        zmm0_9.q = zmm13.q f+ zmm13[0]
        zmm9 = _mm_cvtpd_ps(zmm0_9)
        uint128_t zmm0_10 = tanf(zmm9.d)
        *(*(arg1 + 0x30) + rbp_1 + 0x78) = (zmm0_10 ^ zmm11).d
        zmm1.q = zmm10.q f* 25.132741928100586
        zmm1.q = zmm1.q f+ zmm12[0]
        *(*(arg1 + 0x30) + rbp_1 + 0x7c) = zmm0_10.d
        zmm1.q = zmm1.q f+ zmm12[0]
        zmm11 = _mm_cvtpd_ps(zmm1)
        uint128_t zmm0_11 = tanf(zmm11.d)
        *(*(arg1 + 0x30) + rbp_1 + 0x90) = (zmm0_11 ^ 0x80000000).d
        zmm1.q = zmm10.q f* 37.699112892150879
        zmm1.q = zmm1.q f+ zmm12[0]
        *(*(arg1 + 0x30) + rbp_1 + 0x94) = zmm0_11.d
        zmm1.q = zmm1.q f+ zmm12[0]
        zmm10 = _mm_cvtpd_ps(zmm1)
        uint128_t zmm0_12 = tanf(zmm10.d)
        *(*(arg1 + 0x30) + rbp_1 + 0x98) = (zmm0_12 ^ 0x80000000).d
        *(*(arg1 + 0x30) + rbp_1 + 0x9c) = zmm0_12.d
        uint128_t zmm0_13 = cosf(zmm8.d)
        *(rsi_1 + *(arg1 + 0x30) + 0x3c) = zmm0_13.d
        *(rsi_1 + *(arg1 + 0x30) + 0x40) = zmm0_13.d
        uint128_t zmm0_14 = cosf(zmm9.d)
        zmm1 = zmm0_13 ^ 0x80000000
        *(rsi_1 + *(arg1 + 0x30) + 0x44) = zmm0_14.d
        *(rsi_1 + *(arg1 + 0x30) + 0x48) = zmm0_14.d
        zmm0_14 ^= 0x80000000
        *(rsi_1 + *(arg1 + 0x30) + 0x11c) = zmm1.d
        *(rsi_1 + *(arg1 + 0x30) + 0x120) = zmm1.d
        *(rsi_1 + *(arg1 + 0x30) + 0x124) = zmm0_14.d
        *(rsi_1 + *(arg1 + 0x30) + 0x128) = zmm0_14.d
        uint128_t zmm0_15 = cosf(zmm11.d)
        *(rsi_1 + *(arg1 + 0x30) + 0x5c) = zmm0_15.d
        *(rsi_1 + *(arg1 + 0x30) + 0x60) = zmm0_15.d
        int128_t zmm0_16 = cosf(zmm10.d)
        zmm6 = zmm0_15 ^ data_142d3f780
        *(rsi_1 + *(arg1 + 0x30) + 0x64) = zmm0_16.d
        *(rsi_1 + *(arg1 + 0x30) + 0x68) = zmm0_16.d
        *(rsi_1 + *(arg1 + 0x30) + 0x12c) = zmm6.d
        *(rsi_1 + *(arg1 + 0x30) + 0x130) = zmm6.d
        int64_t rax_75 = *(arg1 + 0x30)
        zmm0_16 ^= 0x80000000
        zmm12[0] = zmm12[0] * 3.0
        *(rsi_1 + rax_75 + 0x134) = zmm0_16.d
        *(rsi_1 + *(arg1 + 0x30) + 0x138) = zmm0_16.d
        uint128_t zmm0_17 = tanf(_mm_cvtpd_ps(zmm12).d)
        int64_t rax_77 = *(arg1 + 0x30)
        zmm12 = 0x4008000000000000
        zmm13[0] = zmm13[0] * zmm12[0]
        *(rax_77 + rbp_1 + 0xb0) = (zmm0_17 ^ 0x80000000).d
        *(*(arg1 + 0x30) + rbp_1 + 0xb4) = zmm0_17.d
        uint128_t zmm0_18 = tanf(_mm_cvtpd_ps(zmm13).d)
        int64_t rax_79 = *(arg1 + 0x30)
        zmm14[0] = zmm14[0] * zmm12[0]
        *(rax_79 + rbp_1 + 0xb8) = (zmm0_18 ^ 0x80000000).d
        *(*(arg1 + 0x30) + rbp_1 + 0xbc) = zmm0_18.d
        uint128_t zmm0_19 = tanf(_mm_cvtpd_ps(zmm14).d)
        zmm15.q = zmm15.q f* zmm12[0]
        *(*(arg1 + 0x30) + rbp_1 + 0xd0) = (zmm0_19 ^ 0x80000000).d
        *(*(arg1 + 0x30) + rbp_1 + 0xd4) = zmm0_19.d
        uint128_t zmm0_20 = tanf(_mm_cvtpd_ps(zmm15).d)
        zmm7.d = zmm0_13.d f+ zmm0_13.d
        *(*(arg1 + 0x30) + rbp_1 + 0xd8) = (zmm0_20 ^ 0x80000000).d
        zmm7.d = zmm7.d f- 1f
        *(*(arg1 + 0x30) + rbp_1 + 0xdc) = zmm0_20.d
        *(rsi_1 + *(arg1 + 0x30) + 0x7c) = zmm7.d
        *(rsi_1 + *(arg1 + 0x30) + 0x80) = zmm7.d
        float zmm0_21 = cosf(zmm9.d)
        zmm0_21 = zmm0_21 + zmm0_21 - 1f
        *(rsi_1 + *(arg1 + 0x30) + 0x84) = zmm0_21
        *(rsi_1 + *(arg1 + 0x30) + 0x88) = zmm0_21
        float zmm0_22 = cosf(zmm8.d)
        zmm1.d = 1f - (zmm0_22 + zmm0_22)
        *(rsi_1 + *(arg1 + 0x30) + 0x13c) = zmm1.d
        *(rsi_1 + *(arg1 + 0x30) + 0x140) = zmm1.d
        float zmm0_23 = cosf(zmm9.d)
        zmm1.d = 1f - (zmm0_23 + zmm0_23)
        *(rsi_1 + *(arg1 + 0x30) + 0x144) = zmm1.d
        *(rsi_1 + *(arg1 + 0x30) + 0x148) = zmm1.d
        float zmm0_24 = cosf(zmm11.d)
        zmm0_24 = zmm0_24 + zmm0_24 - 1f
        *(rsi_1 + *(arg1 + 0x30) + 0x9c) = zmm0_24
        *(rsi_1 + *(arg1 + 0x30) + 0xa0) = zmm0_24
        float zmm0_25 = cosf(zmm10.d)
        zmm0_25 = zmm0_25 + zmm0_25 - 1f
        *(rsi_1 + *(arg1 + 0x30) + 0xa4) = zmm0_25
        *(rsi_1 + *(arg1 + 0x30) + 0xa8) = zmm0_25
        float zmm0_26 = cosf(zmm11.d)
        zmm1.d = 1f - (zmm0_26 + zmm0_26)
        *(rsi_1 + *(arg1 + 0x30) + 0x14c) = zmm1.d
        *(rsi_1 + *(arg1 + 0x30) + 0x150) = zmm1.d
        zmm0 = cosf(zmm10.d)
        zmm0.d = zmm0.d f+ zmm0.d
        zmm10 = zx.o(arg_8)
        zmm2 = zx.o(arg_20)
        r14 += 1
        zmm11 = 0x80000000
        rbp_1 += 0x180
        zmm1.d = 1f f- zmm0.d
        zmm0 = arg_10
        *(rsi_1 + *(arg1 + 0x30) + 0x154) = zmm1.d
        result = *(arg1 + 0x30)
        *(rsi_1 + result + 0x158) = zmm1.d
        rsi_1 = &rsi_1[0x60]
        zmm1 = zx.o(arg_18)
    while (r14 s< rsi)

return result

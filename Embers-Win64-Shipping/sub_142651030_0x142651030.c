// 函数: sub_142651030
// 地址: 0x142651030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t r13 = 0
int32_t* rsi = arg2
int128_t zmm14 = arg7
int128_t zmm7
zmm7.d = zmm14.d f* *arg3
int128_t zmm9
zmm9.d = zmm14.d f* arg3[1]
int128_t zmm8
zmm8.d = zmm14.d f* arg3[2]
zmm7.d = zmm7.d f+ *arg2
zmm9.d = zmm9.d f+ arg2[1]
zmm8.d = zmm8.d f+ arg2[2]
int128_t zmm15
zmm15.d = 6.28318548f f/ _mm_cvtepi32_ps(zx.o(arg9)).d

if (arg9 s> 0)
    do
        r13 += 1
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(r13)).d f* zmm15.d
        uint128_t zmm0
        uint128_t zmm7_1
        uint128_t zmm8_1
        uint128_t zmm9_1
        uint128_t zmm10_1
        int32_t zmm14_1
        zmm0, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm14_1, zmm15 = __libm_sse2_sincosf_(zmm1)
        uint128_t zmm2_1 = zmm0
        zmm1 = zmm0
        int32_t var_e8_1 = arg6
        int32_t var_e4_1 = 0
        uint128_t zmm12_1 = _mm_shuffle_ps(zmm0, zmm0, 1)
        zmm0.d = zmm0.d f* arg4[1]
        uint128_t zmm11_1 = zmm12_1
        zmm2_1.d = zmm2_1.d f* arg4[2]
        uint128_t zmm13_1 = zmm12_1
        zmm1.d = zmm1.d f* *arg4
        zmm12_1.d = zmm12_1.d f* arg3[2]
        zmm11_1.d = zmm11_1.d f* *arg3
        zmm13_1.d = zmm13_1.d f* arg3[1]
        zmm12_1.d = zmm12_1.d f+ zmm2_1.d
        uint128_t zmm4_1
        zmm4_1.d = zmm10_1.d f* arg5[2]
        zmm11_1.d = zmm11_1.d f+ zmm1.d
        uint128_t zmm3_1
        zmm3_1.d = zmm10_1.d f* arg5[1]
        zmm13_1.d = zmm13_1.d f+ zmm0.d
        zmm12_1.d = zmm12_1.d f* zmm14_1
        zmm2_1.d = zmm10_1.d f* *arg5
        zmm12_1.d = zmm12_1.d f+ rsi[2]
        zmm11_1.d = zmm11_1.d f* zmm14_1
        zmm1.d = zmm7_1.d f- zmm2_1.d
        zmm13_1.d = zmm13_1.d f* zmm14_1
        zmm11_1.d = zmm11_1.d f+ *rsi
        zmm13_1.d = zmm13_1.d f+ rsi[1]
        int64_t rsi_1 = sx.q(arg1[1].d)
        zmm0.d = zmm12_1.d f- zmm4_1.d
        uint128_t zmm6_1
        zmm6_1.d = zmm11_1.d f- zmm2_1.d
        zmm2_1.d = zmm9_1.d f- zmm3_1.d
        int32_t var_134_1 = zmm0.d
        uint128_t zmm5_1
        zmm5_1.d = zmm13_1.d f- zmm3_1.d
        zmm0.d = zmm8_1.d f- zmm4_1.d
        uint64_t var_100_1 = (_mm_unpacklo_ps(zmm1, zmm2_1.q)).q
        int32_t var_f8_1 = zmm0.d
        int32_t var_ec_1 = var_134_1
        int32_t rax_3 = (rsi_1 + 1).d
        uint64_t var_f4_1 = (_mm_unpacklo_ps(zmm6_1, zmm5_1.q)).q
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_1405c4e40(arg1)
        
        void** rax_4 = *arg1
        int64_t rcx_2 = rsi_1 << 5
        int32_t var_e8_2 = arg6
        int32_t var_e4_2 = 0
        *(rcx_2 + rax_4) = var_100_1.o
        *(rcx_2 + rax_4 + 0x10) = var_f4_1:4.o
        int64_t rsi_2 = sx.q(arg1[1].d)
        zmm5_1.d = zmm10_1.d f* *arg5
        zmm1.d = zmm10_1.d f* arg5[2]
        zmm4_1.d = zmm10_1.d f* arg5[1]
        zmm3_1 = zmm5_1
        zmm5_1.d = zmm5_1.d f+ zmm7_1.d
        zmm0.d = zmm1.d f+ zmm12_1.d
        zmm2_1 = zmm4_1
        zmm1.d = zmm1.d f+ zmm8_1.d
        zmm4_1.d = zmm4_1.d f+ zmm9_1.d
        zmm3_1.d = zmm3_1.d f+ zmm11_1.d
        zmm2_1.d = zmm2_1.d f+ zmm13_1.d
        int32_t var_f8_2 = zmm1.d
        uint64_t var_100_2 = (_mm_unpacklo_ps(zmm5_1, zmm4_1.q)).q
        int32_t var_ec_2 = zmm0.d
        int32_t rax_7 = (rsi_2 + 1).d
        uint64_t var_f4_2 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg1[1].d = rax_7
        
        if (rax_7 s> *(arg1 + 0xc))
            sub_1405c4e40(arg1)
        
        void** rax_8 = *arg1
        uint128_t* rcx_5 = rsi_2 << 5
        int32_t var_e8_3 = arg6
        int32_t var_e4_3 = 0
        *(rcx_5 + rax_8) = var_100_2.o
        *(rcx_5 + rax_8 + 0x10) = var_f4_2:4.o
        int64_t rsi_3 = sx.q(arg1[1].d)
        zmm2_1.d = zmm10_1.d f* *arg5
        zmm3_1.d = zmm10_1.d f* arg5[2]
        zmm1.d = zmm10_1.d f* arg5[1]
        zmm5_1.d = zmm2_1.d f+ zmm7_1.d
        zmm0.d = zmm3_1.d f+ zmm8_1.d
        zmm8_1.d = zmm8_1.d f- zmm3_1.d
        zmm4_1.d = zmm1.d f+ zmm9_1.d
        zmm9_1.d = zmm9_1.d f- zmm1.d
        zmm7_1.d = zmm7_1.d f- zmm2_1.d
        int32_t var_f8_3 = zmm8_1.d
        uint64_t var_100_3 = (_mm_unpacklo_ps(zmm7_1, zmm9_1.q)).q
        int32_t var_ec_3 = zmm0.d
        int32_t rax_11 = (rsi_3 + 1).d
        uint64_t var_f4_3 = (_mm_unpacklo_ps(zmm5_1, zmm4_1.q)).q
        arg1[1].d = rax_11
        
        if (rax_11 s> *(arg1 + 0xc))
            sub_1405c4e40(arg1)
        
        result = *arg1
        rsi = arg2
        int128_t* rcx_8 = rsi_3 << 5
        *(rcx_8 + result) = var_100_3.o
        *(rcx_8 + result + 0x10) = var_f4_3:4.o
    while (r13 s< arg9)

return result

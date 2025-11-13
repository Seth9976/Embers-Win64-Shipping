// 函数: sub_14166b9c0
// 地址: 0x14166b9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
float zmm3[0x4] = *arg3
float zmm9[0x4] = *(arg1 + 0x1c)
float zmm0[0x4] = arg3[1]
int64_t r12 = 0
float (* rsi)[0x4] = arg4
float zmm15[0x4] = zx.o(0)
float var_288 = zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_328[0x4] = zmm0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
float var_170[0x4] = data_142d3f7e0
void* var_210 = arg1
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
float var_2b8[0x4]
float (* var_1e0)[0x4] = &var_2b8
zmm9[0] = zmm9[0] * zmm9[0]
int32_t* var_1d8 = &var_288
float var_27c = temp0[0]
float var_26c = zmm9[0]
zmm0 = _mm_cvtps_pd(zmm9[0].q)
int64_t var_1e8 = arg2
zmm0[0].q = zmm0[0].q f+ 9.9999999999999995e-07
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_280 = temp0_2[0]
float temp0_3[0x4] = _mm_cvtpd_ps(zmm0)
float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float var_284 = temp0_4[0]
temp0_5[0] = (temp0_4 ^ 0x80000000)[0]
float var_300 = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_2b8 = temp0_8
var_2b8 = temp0_8
int32_t rax_3 = *(arg1 + 0x18)
uint128_t zmm6 = zx.o(*(arg1 + 0x10))
int32_t var_128 = rax_3
int64_t var_130 = zmm6.q
float zmm1[0x4] = (*arg10)[1]
float var_318 = (*arg10 ^ 0x80000000)[0]
float var_314 = (zmm1 ^ 0x80000000)[0]
float var_310 = ((*arg10)[2] ^ 0x80000000)[0]
void var_2fc
int32_t* rax_5
float zmm6_1[0x4]
float zmm9_1[0x4]
rax_5, zmm6_1, zmm9_1 = sub_14170d470(&var_1e8, &var_2fc, &var_318)
float zmm1_1[0x4] = var_328[0]
float zmm3_1[0x4] = var_328[1]
float zmm13[0x4] = zmm1_1
float zmm5[0x4] = var_328[2]
float zmm8[0x4] = zmm1_1
uint128_t zmm2_1 = zx.o(*rax_5)
float zmm12[0x4] = zmm5
int32_t rcx_1 = rax_5[2]
zmm6_1[0] = zmm6_1[0] f- zmm2_1.d
float var_2c0 = zmm1_1[0]
uint32_t result = zx.d(arg9)
float zmm7[0x4] = zx.o(0)
float var_2a8 = zmm1_1[0]
float zmm10[0x4] = zmm3_1
int64_t var_100 = zmm2_1.q
zmm13[0] = zmm13[0] - zmm6_1[0]
uint64_t var_2e0 = zmm2_1.q
float zmm0_1[0x4] = zmm2_1
float temp0_9[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
float temp0_10[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
zmm6_1 = zmm3_1
temp0_9[0] = temp0_9[0] - temp0_10[0]
zmm0_1 = rax_3
float zmm11[0x4] = zmm5
zmm0_1[0] = zmm0_1[0] f- rcx_1
float var_2e4 = 0f
float var_334 = zmm3_1[0]
zmm6_1[0] = zmm6_1[0] - temp0_9[0]
float var_2a4 = zmm3_1[0]
float var_330 = zmm5[0]
zmm12[0] = zmm12[0] - zmm0_1[0]
float result_2 = zmm5[0]
int32_t var_f8 = rcx_1
zmm13[0] = zmm13[0] * zmm13[0]
int64_t var_2d0 = 0
float var_2c8 = 1f
zmm2_1.d = zmm6_1.d f* zmm6_1[0]
zmm12[0] = zmm12[0] * zmm12[0]
zmm2_1.d = zmm2_1.d f+ zmm13[0]
zmm2_1.d = zmm2_1.d f+ zmm12[0]
int32_t rdi

if (zmm2_1.d f>= temp0_3[0] || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm1_1 = 0x7f7fffff
int32_t rcx_2 = 0
int32_t var_308 = 0x7f7fffff
float zmm14[0x4] = 0x7f7fffff
int32_t var_304 = 0
uint64_t r14 = zx.q(rdi.b)
char var_337 = 0
char var_338 = rdi.b
float var_298
int64_t var_250
float result_1
float zmm4_1[0x4]

if (rdi.b == 0)
    while (true)
        int32_t rax_6 = rcx_2
        rcx_2 += 1
        var_304 = rcx_2
        
        if (rax_6 s>= 0x20)
            zmm10 = var_334
            zmm11 = var_330
            result = zx.d(arg9)
        else
            zmm5 = 0x3f000000
            zmm10 = var_2b8[1]
            zmm3_1 = zx.o(0)
            zmm11 = var_2b8[2]
            zmm7 = var_2b8[0]
            void* rax_7 = var_210
            zmm13[0] = zmm13[0] * zmm13[0]
            zmm2_1.d = zmm6_1.d f* zmm6_1[0]
            zmm14 = zx.o(*(rax_7 + 0x10))
            int32_t rax_8 = *(rax_7 + 0x18)
            zmm2_1.d = zmm2_1.d f+ zmm13[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            int64_t var_240_1 = zmm14.q
            zmm2_1.d = zmm2_1.d f+ zmm12[0]
            zmm3_1[0] = zmm2_1.d
            float temp0_11[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            temp0_11[0] = temp0_11[0] * temp0_11[0]
            zmm3_1[0] = zmm3_1[0] * temp0_11[0]
            zmm2_1.d = 0.5f - zmm3_1[0]
            temp0_11[0] = temp0_11[0] f* zmm2_1.d
            zmm2_1 = var_2b8[3]
            temp0_11[0] = temp0_11[0] + temp0_11[0]
            temp0_11[0] = temp0_11[0] * temp0_11[0]
            zmm3_1[0] = zmm3_1[0] * temp0_11[0]
            zmm1_1 = zmm2_1
            zmm5[0] = 0.5f - zmm3_1[0]
            float var_228_1 = rax_8[0]
            temp0_11[0] = temp0_11[0] * zmm5[0]
            temp0_11[0] = temp0_11[0] + temp0_11[0]
            zmm6_1[0] = zmm6_1[0] * temp0_11[0]
            temp0_11[0] = temp0_11[0] * zmm13[0]
            zmm13 = var_240_1:4.d
            zmm12[0] = zmm12[0] * temp0_11[0]
            float var_274_1 = temp0_11[0]
            zmm8 = zmm6_1 ^ 0x80000000
            float var_278_1 = zmm6_1[0]
            zmm5 = temp0_11 ^ 0x80000000
            float var_2bc_1 = temp0_11[0]
            float var_270_1 = zmm12[0]
            zmm12 ^= 0x80000000
            zmm5[0] = zmm5[0] * zmm11[0]
            zmm8[0] = zmm8[0] * zmm11[0]
            zmm12[0] = zmm12[0] * zmm10[0]
            zmm8[0] = zmm8[0] * zmm7[0]
            zmm12[0] = zmm12[0] - zmm8[0]
            zmm12[0] = zmm12[0] * zmm7[0]
            zmm5[0] = zmm5[0] - zmm12[0]
            zmm5[0] = zmm5[0] * zmm10[0]
            zmm12[0] = zmm12[0] + zmm12[0]
            zmm8[0] = zmm8[0] - zmm5[0]
            zmm5[0] = zmm5[0] + zmm5[0]
            zmm1_1[0] = zmm1_1[0] * zmm12[0]
            zmm8[0] = zmm8[0] + zmm8[0]
            zmm11[0] = zmm11[0] * zmm5[0]
            zmm10[0] = zmm10[0] * zmm8[0]
            zmm10[0] = zmm10[0] - zmm11[0]
            zmm1_1[0] = zmm1_1[0] + zmm5[0]
            zmm11[0] = zmm11[0] * zmm12[0]
            zmm7[0] = zmm7[0] * zmm8[0]
            zmm10[0] = zmm10[0] + zmm1_1[0]
            zmm7[0] = zmm7[0] * zmm5[0]
            zmm1_1 = zmm2_1
            zmm10[0] = zmm10[0] * zmm12[0]
            zmm11[0] = zmm11[0] - zmm7[0]
            zmm1_1[0] = zmm1_1[0] * zmm5[0]
            zmm2_1.d = zmm2_1.d f* zmm8[0]
            zmm7[0] = zmm7[0] - zmm10[0]
            zmm1_1[0] = zmm1_1[0] + zmm8[0]
            zmm2_1.d = zmm2_1.d f+ zmm12[0]
            zmm11[0] = zmm11[0] + zmm1_1[0]
            zmm7[0] = zmm7[0] f+ zmm2_1.d
            float temp0_12[0x4] = _mm_unpacklo_ps(zmm10, zmm11[0].q)
            float var_1b0_1 = zmm7[0]
            int64_t var_1f8 = temp0_12.q
            float var_1f0_1 = var_1b0_1
            sub_141758e70(arg2, &var_298, &var_1f8, zmm15)
            zmm3_1 = var_284
            zmm2_1 = var_280
            zmm11 = zmm3_1
            zmm1_1 = var_288
            int32_t var_290
            zmm8 = var_290
            int32_t var_294
            zmm6_1 = var_294
            zmm4_1 = var_298
            zmm6_1[0] = zmm6_1[0] f* zmm2_1.d
            zmm4_1[0] = zmm4_1[0] f* zmm2_1.d
            zmm8[0] = zmm8[0] * zmm3_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm1_1[0]
            zmm8[0] = zmm8[0] - zmm6_1[0]
            zmm8[0] = zmm8[0] * zmm1_1[0]
            zmm4_1[0] = zmm4_1[0] - zmm8[0]
            zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
            zmm8[0] = zmm8[0] + zmm8[0]
            zmm6_1[0] = zmm6_1[0] - zmm4_1[0]
            zmm0_1 = zmm2_1
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm10 = zmm8
            zmm10[0] = zmm10[0] f* zmm2_1.d
            zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
            zmm0_1[0] = zmm0_1[0] * zmm4_1[0]
            zmm2_1.d = zmm4_1.d f* zmm1_1[0]
            zmm11[0] = zmm11[0] * zmm6_1[0]
            zmm11[0] = zmm11[0] - zmm0_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm1_1[0]
            zmm10[0] = zmm10[0] - zmm6_1[0]
            zmm8[0] = zmm8[0] * zmm3_1[0]
            zmm2_1.d = zmm2_1.d f- zmm8[0]
            zmm0_1 = var_27c
            zmm8[0] = zmm8[0] * zmm0_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm0_1[0]
            zmm8[0] = zmm8[0] + zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm0_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm8[0]
            zmm4_1[0] = zmm4_1[0] + zmm6_1[0]
            zmm11[0] = zmm11[0] + zmm8[0]
            zmm2_1.d = zmm2_1.d f+ zmm6_1[0]
            zmm10[0] = zmm10[0] + zmm4_1[0]
            zmm14[0] = zmm14[0] - zmm11[0]
            uint32_t var_1c8_1 = zmm2_1.d
            float var_268_1 = zmm14[0]
            zmm0_1 = rax_8
            zmm13[0] = zmm13[0] - zmm10[0]
            zmm8 = var_2c0
            zmm0_1[0] = zmm0_1[0] f- zmm2_1.d
            zmm6_1 = var_278_1
            zmm8[0] = zmm8[0] - zmm14[0]
            zmm12 = var_274_1
            zmm9_1 = var_26c
            zmm2_1.d = var_334.d f- zmm13[0]
            float var_2bc_2 = zmm0_1[0]
            float var_264_1 = zmm13[0]
            zmm3_1 = var_330
            zmm3_1[0] = zmm3_1[0] - zmm0_1[0]
            zmm6_1[0] = zmm6_1[0] f* zmm2_1.d
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            float temp0_13[0x4] = _mm_unpacklo_ps(zmm14, zmm13[0].q)
            var_318 = zmm8[0]
            int32_t var_314_1 = zmm2_1.d
            uint64_t rcx_5 = r13 * 3
            var_310 = zmm3_1[0]
            *(&var_130 + (rcx_5 << 2)) = temp0_13.q
            *(&var_100 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm11, zmm10[0].q)).q
            zmm12[0] = zmm12[0] * zmm8[0]
            (&var_128)[rcx_5] = var_228_1
            zmm4_1 = var_270_1
            zmm6_1[0] = zmm6_1[0] + zmm12[0]
            zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
            (&var_f8)[rcx_5] = var_1c8_1
            zmm6_1[0] = zmm6_1[0] + zmm4_1[0]
            int128_t var_150_1
            float var_140_1
            
            if (zmm6_1[0] <= zmm9_1[0])
                r13 = zx.q(r13.d + 1)
                zmm7 = var_2e4
                *(&var_160 + (rcx_5 << 2)) = var_318.q
                *(&var_160:8 + (rcx_5 << 2)) = var_310
                var_188 = r13.d
            label_14166c31d:
                zmm14 = var_308
                zmm10 = var_334
                zmm11 = var_330
                
                if (r14.b != 0 && not(zmm6_1[0] < zmm15[0]))
                    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                    zmm6_1[0] = zmm6_1[0] + 9.99999997e-07f
                    rdi.b = zmm6_1[0] >= zmm14[0]
            else
                zmm10 = (*rsi)[1]
                zmm3_1 = *rsi
                zmm11 = (*rsi)[2]
                zmm2_1.d = zmm12.d f* zmm3_1[0]
                zmm6_1[0] = zmm6_1[0] * zmm10[0]
                zmm4_1[0] = zmm4_1[0] * zmm11[0]
                zmm2_1.d = zmm2_1.d f+ zmm6_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm4_1[0]
                
                if (zmm2_1.d f>= zmm15[0])
                    result.b = 0
                    goto label_14166cda0
                
                zmm7 = var_2e4
                zmm6_1[0] = zmm6_1[0] - zmm9_1[0]
                zmm6_1[0] = zmm6_1[0] f/ zmm2_1.d
                zmm7[0] = zmm7[0] - zmm6_1[0]
                var_2e4 = zmm7[0]
                
                if (zmm7[0] <= zmm7[0])
                    goto label_14166c31d
                
                if (zmm7[0] f> arg5)
                    result.b = 0
                    goto label_14166cda0
                
                zmm1_1 = zx.o(var_2a8.q)
                zmm8 = zmm3_1
                zmm14 = 0x7f7fffff
                r13 = zx.q(r13.d + 1)
                float temp0_15[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_250 = zmm1_1.q
                zmm8[0] = zmm8[0] * zmm7[0]
                result_1 = result_2
                zmm10[0] = zmm10[0] * zmm7[0]
                var_188 = r13.d
                zmm8[0] = zmm8[0] + var_328[0]
                zmm11[0] = zmm11[0] * zmm7[0]
                var_338 = 0
                zmm10[0] = zmm10[0] + var_328[1]
                var_2c8 = zmm4_1[0]
                zmm11[0] = zmm11[0] + var_328[2]
                var_2c0 = zmm8[0]
                zmm8[0] = zmm8[0] - zmm1_1[0]
                var_2a8 = zmm8[0]
                zmm1_1 = var_160:4.d
                zmm10[0] = zmm10[0] - temp0_15[0]
                var_334 = zmm10[0]
                zmm0_1 = var_160.d
                zmm2_1.d = zmm11.d f- result_1
                zmm0_1[0] = zmm0_1[0] + zmm8[0]
                var_330 = zmm11[0]
                float var_2a4_1 = zmm10[0]
                zmm1_1[0] = zmm1_1[0] + zmm10[0]
                result_2 = zmm11[0]
                var_2d0.d = zmm12[0]
                var_2d0:4.d = zmm6_1[0]
                var_160.d = zmm0_1[0]
                zmm0_1 = var_160:8.d
                zmm0_1[0] = zmm0_1[0] f+ zmm2_1.d
                var_160:4.d = zmm1_1[0]
                zmm1_1 = var_160:0xc.d
                zmm1_1[0] = zmm1_1[0] + zmm8[0]
                var_308 = 0x7f7fffff
                var_160:8.d = zmm0_1[0]
                zmm0_1 = var_150_1.d
                var_160:0xc.d = zmm1_1[0]
                zmm0_1[0] = zmm0_1[0] + zmm10[0]
                zmm1_1 = var_150_1:4.d
                zmm1_1[0] = zmm1_1[0] f+ zmm2_1.d
                var_150_1.d = zmm0_1[0]
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1[0]
                zmm0_1[0] = zmm0_1[0] + zmm8[0]
                zmm1_1 = var_150_1:0xc.d
                zmm1_1[0] = zmm1_1[0] + zmm10[0]
                var_150_1:8.d = zmm0_1[0]
                zmm0_1 = var_140_1
                zmm0_1[0] = zmm0_1[0] f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1[0]
                zmm8[0] = zmm8[0] - var_268_1
                zmm2_1.d = zmm10.d f- var_264_1
                var_140_1 = zmm0_1[0]
                zmm11[0] = zmm11[0] - var_2bc_2
                *(&var_160 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm8, zmm2_1.q)).q
                *(&var_160:8 + (rcx_5 << 2)) = zmm11[0]
            
            uint32_t rdx_7
            
            if (rdi.b != 0)
                int64_t* rax_23
                rax_23, zmm7, zmm8, zmm9_1, zmm10, zmm11, zmm14, zmm15 =
                    sub_1416f4530(&var_1e8, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rdx_7 = zx.d(var_337)
                zmm1_1 = zx.o(*rax_23)
                zmm12 = rax_23[1].d
                result = zx.d(arg9)
                int32_t var_2e0_1 = zmm1_1.d
                zmm6_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm13 = var_2e0_1
            else
                int32_t rcx_6 = r13.d
                int32_t rax_15
                
                if (rcx_6 == 1)
                    int64_t rax_19 = sx.q(var_184)
                    int64_t rcx_13 = rax_19 * 3
                    var_170[rax_19] = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_13 << 2)))
                    rax_15 = *(&var_160:8 + (rcx_13 << 2))
                else if (rcx_6 == 2)
                    uint64_t var_1a0
                    uint64_t* rax_18
                    rax_18, zmm7, zmm8, zmm9_1 =
                        sub_1416e69d0(&var_1a0, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_18)
                    rax_15 = rax_18[1].d
                else if (rcx_6 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_17
                    rax_17, zmm7, zmm8, zmm9_1, zmm10, zmm11, zmm14, zmm15 =
                        sub_1416fa750(&var_1ac, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_17)
                    rax_15 = rax_17[1].d
                else if (rcx_6 == 4)
                    uint64_t var_194
                    uint64_t* rax_16
                    rax_16, zmm7, zmm8, zmm9_1, zmm10, zmm11, zmm14, zmm15 =
                        sub_1416f9c90(&var_194, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_16)
                    rax_15 = rax_16[1].d
                else
                    int32_t var_2f4_1 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm15, zmm15[0].q)
                    rax_15 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int64_t var_180
                int64_t r10_1 = sx.q(var_180.d)
                int64_t r9_4 = sx.q(var_180:4.d)
                int64_t var_2f0_1 = zmm0_1.q
                int64_t rbx_1 = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                r14 = r10_1 * 3
                int64_t rsi_1 = r9_4 * 3
                int32_t rdx_5 = *(&var_160:8 + (r14 << 2))
                float rcx_14 = *(&var_160:8 + (rsi_1 << 2))
                int32_t r8_5 = *(&var_160:8 + (r15_1 << 2))
                zmm13 = var_2f0_1.d
                zmm6_1 = var_2f0_1:4.d
                int32_t rax_20 = *(&var_160:8 + (rbx_1 << 2))
                zmm12 = rax_15
                var_160:0xc.q = *(&var_160 + (r14 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                zmm0_1 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                zmm1_1 = var_170[r10_1]
                var_160.q = *(&var_160 + (r15_1 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[2] = var_170[r9_4].d
                zmm2_1 = zx.o(*(&var_130 + (r14 << 2)))
                var_170[0] = zmm0_1[0]
                zmm0_1 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_1[0]
                zmm1_1 = zx.o(*(&var_130 + (rsi_1 << 2)))
                var_170[3] = zmm3_1[0]
                var_150_1:4.d = rdx_5
                int32_t rdx_6 = (&var_128)[r14]
                var_140_1 = rcx_14
                int32_t rcx_15 = (&var_128)[rsi_1]
                var_140_1 = rax_20
                int32_t rax_21 = (&var_128)[rbx_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_1.q
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = zmm1_1.q
                zmm1_1 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_130 = *(&var_130 + (r15_1 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_6
                rdx_7 = (&var_f8)[r14]
                var_114_1:4.d = rcx_15
                int32_t rcx_16 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_21
                int32_t rax_22 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm6_1.d f* zmm6_1[0]
                var_f8 = (&var_f8)[r15_1]
                var_f4_1:0xc.q = zmm1_1.q
                zmm13[0] = zmm13[0] * zmm13[0]
                var_f4_1:8.d = rdx_7
                zmm12[0] = zmm12[0] * zmm12[0]
                var_e4_1:4.d = rcx_16
                zmm2_1.d = zmm2_1.d f+ zmm13[0]
                var_100 = zmm3_1.q
                zmm3_1 = var_300
                int32_t var_d4_1 = rax_22
                zmm2_1.d = zmm2_1.d f+ zmm12[0]
                result = zx.d(arg9)
                rdi.b = zmm3_1[0] f> zmm2_1.d
                bool cond:4_1 = zmm2_1.d f>= zmm14[0]
                var_308 = zmm2_1.d
                zmm14 = zmm2_1
                rdx_7.b = cond:4_1
                var_337 = rdx_7.b
                
                if (result.b == 0)
                    goto label_14166c771
                
                if (rdi.b == 0)
                    goto label_14166c776
                
                if (not(zmm7[0] != zmm15[0]))
                    zmm1_1 = 0x3eb0c6f7a0b5ed8d
                    zmm0_1 = _mm_cvtps_pd(zmm2_1.q)
                    
                    if (not(zmm0_1[0].q f<= zmm1_1[0].q))
                        zmm0_1 = _mm_cvtps_pd(zmm3_1[0].q)
                        
                        if (not(zmm0_1[0].q f<= zmm1_1[0].q) && r13.d s< 4)
                            r14.b = 1
                            rdi.b = 0
                            var_338 = 1
                            goto label_14166c77c
            
        label_14166c771:
            
            if (rdi.b != 0)
                rcx_2 = var_304
            else
            label_14166c776:
                r14 = zx.q(var_338)
            label_14166c77c:
                rcx_2 = var_304
                
                if (rdx_7.b == 0)
                    rsi = arg4
                    continue
        
        zmm5 = var_328[2]
        zmm1_1 = 0x7f7fffff
        break

bool cond:0_1 = zmm7[0] <= zmm15[0]
float* rdi_3 = arg6
*rdi_3 = zmm7[0]

if (not(cond:0_1))
    *arg8 = var_2d0
    arg8[1].d = var_2c8
    
    if (r13.d s> 0)
        int128_t* rcx_18 = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_26 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_18
            rcx_18 += 4
            zmm0_1 = zmm2_1
            zmm1_1 = zmm2_1
            zmm0_1[0] = zmm0_1[0] f* rax_26[-2]
            zmm1_1[0] = zmm1_1[0] f* rax_26[-1]
            zmm2_1.d = zmm2_1.d f* *rax_26
            rax_26 = &rax_26[3]
            zmm15[0] = zmm15[0] + zmm0_1[0]
            zmm15[0] = zmm15[0] + zmm1_1[0]
            zmm15[0] = zmm15[0] f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm7[0] = zmm7[0] * *arg4
    zmm7[0] = zmm7[0] * (*arg4)[1]
    zmm7[0] = zmm7[0] * (*arg4)[2]
    zmm7[0] = zmm7[0] + var_328[0]
    zmm7[0] = zmm7[0] + var_328[1]
    zmm7[0] = zmm7[0] + zmm5[0]
    zmm7[0] = zmm7[0] + zmm15[0]
    zmm7[0] = zmm7[0] + zmm15[0]
    zmm7[0] = zmm7[0] + zmm15[0]
    float temp0_21[0x4] = _mm_unpacklo_ps(zmm7, zmm7[0].q)
    result = zmm7[0]
    *arg7 = temp0_21.q
    arg7[1].d = result
else if (result.b != 0)
    if (not(zmm9_1[0] <= zmm15[0]))
        zmm0_1 = _mm_cvtps_pd(zmm14[0].q)
    
    if (zmm9_1[0] <= zmm15[0] || zmm0_1[0].q f<= 9.9999999999999995e-07 || zmm14[0] >= zmm1_1[0])
        var_328[0].q = 0
        var_328[2].q = 0
        var_170[0].q = 0
        var_170[2].q = 0
        sub_14083ad30(&var_328, 8)
        
        if (var_170[3] s< 8)
            sub_14083ad30(&var_170, 8)
        
        uint128_t zmm0_2
        float rax_40
        
        if (var_304 == 0)
            int32_t var_2f4_5 = 0x3f800000
            rax_40 = 1f
            *rdi_3 = (zmm9_1 ^ data_142d3f780).d
            zmm0_2 = _mm_unpacklo_ps(zmm15, zmm15[0].q)
        label_14166cd28:
            *arg8 = zmm0_2.q
            arg8[1].d = rax_40
            zmm0_2.d = zmm9_1.d f* *arg8
            zmm9_1[0] = zmm9_1[0] f* arg8[1].d
            zmm9_1[0] = zmm9_1[0] f* *(arg8 + 4)
            zmm9_1[0] = zmm9_1[0] f+ var_128
            zmm0_2.d = zmm0_2.d f+ var_130.d
            zmm9_1[0] = zmm9_1[0] f+ var_130:4.d
            result = zmm9_1[0]
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm9_1[0].q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_328[2])
                    int32_t rax_33 = (rdi_4 + 1).d
                    var_328[2] = rax_33
                    
                    if (rax_33 s> var_328[3])
                        sub_14083a7e0(&var_328)
                    
                    int64_t rcx_22 = var_328[0].q
                    int64_t rdx_10 = rdi_4 * 3
                    zmm0_2 = zx.o(*(&var_130 + r12))
                    int32_t rax_34 = *(&var_128 + r12)
                    zmm10[0] = zmm10[0] f+ *(&var_100:4 + r12)
                    *(rcx_22 + (rdx_10 << 2)) = zmm0_2.q
                    zmm0_2.d = zmm8.d f+ *(&var_100 + r12)
                    *(rcx_22 + (rdx_10 << 2) + 8) = rax_34
                    int64_t rdi_5 = sx.q(var_170[2])
                    float var_314_2 = zmm10[0]
                    var_318 = zmm0_2.d
                    zmm0_2.d = zmm11.d f+ *(&var_f8 + r12)
                    int32_t rax_35 = (rdi_5 + 1).d
                    var_170[2] = rax_35
                    var_310 = zmm0_2.d
                    
                    if (rax_35 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_24 = var_170[0].q
                    int64_t rdx_12 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_24 + (rdx_12 << 2)) = var_318.q
                    *(rcx_24 + (rdx_12 << 2) + 8) = var_310
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_188.q = &var_2b8
            int64_t var_180_1 = arg2
            int128_t* var_178_1 = arg3
            int32_t rax_39
            rax_39, zmm9_1 = sub_141596fe0(&var_328, &var_170, &var_210, &var_188, zmm15, &var_300, 
                &var_318, &var_250, &var_1e8)
            rax_40 = var_310
            
            if (rax_39 == 2)
                *rdi_3 = (zmm9_1 ^ data_142d3f780).d
                zmm0_2 = zx.o(var_318.q)
                goto label_14166cd28
            
            *arg8 = var_318.q
            zmm0_2.d = (var_300 ^ data_142d3f780).d f- zmm9_1[0]
            arg8[1].d = rax_40
            result = result_1
            *rdi_3 = zmm0_2.d
            zmm0_2 = zx.o(var_250)
        int64_t rcx_26 = var_170[0].q
        *arg7 = zmm0_2.q
        arg7[1].d = result
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = var_328[0].q
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    else
        zmm3_1 = zmm15
        zmm4_1 = zmm15
        *arg8 = var_2d0
        zmm5 = zmm15
        arg8[1].d = var_2c8
        zmm10 = zmm15
        zmm11 = zmm15
        zmm12 = zmm15
        
        if (rcx_2 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            int32_t rax_30 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_31 = var_f8
            zmm0_1 = zmm2_1
            zmm5 = rax_30
            zmm11 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            zmm12 = rax_31
            zmm3_1 = zmm1_1.d
            var_298.q = zmm2_1.q
            zmm10 = var_298
        else if (r13.d s> 0)
            int128_t* rax_29 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_29
                rax_29 += 4
                zmm0_1 = zmm2_1
                zmm1_1 = zmm2_1
                zmm0_1[0] = zmm0_1[0] f* *(&var_130 + r12)
                zmm1_1[0] = zmm1_1[0] f* *(&var_130:4 + r12)
                zmm3_1[0] = zmm3_1[0] + zmm0_1[0]
                zmm0_1 = zmm2_1
                zmm0_1[0] = zmm0_1[0] f* *(&var_128 + r12)
                zmm4_1[0] = zmm4_1[0] + zmm1_1[0]
                zmm1_1 = zmm2_1
                zmm1_1[0] = zmm1_1[0] f* *(&var_100 + r12)
                zmm5[0] = zmm5[0] + zmm0_1[0]
                zmm0_1 = zmm2_1
                zmm0_1[0] = zmm0_1[0] f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm10[0] = zmm10[0] + zmm1_1[0]
                r12 += 0xc
                zmm11[0] = zmm11[0] + zmm0_1[0]
                zmm12[0] = zmm12[0] f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm8 = var_328[0]
        zmm7 = var_328[1]
        zmm8[0] = zmm8[0] + zmm10[0]
        zmm13 = var_328[2]
        zmm7[0] = zmm7[0] + zmm11[0]
        zmm13[0] = zmm13[0] + zmm12[0]
        zmm8[0] = zmm8[0] - zmm3_1[0]
        zmm7[0] = zmm7[0] - zmm4_1[0]
        zmm13[0] = zmm13[0] - zmm5[0]
        zmm5 = 0x3f000000
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm2_1.d = zmm7.d f* zmm7[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm2_1.d = zmm2_1.d f+ zmm8[0]
        zmm2_1.d = zmm2_1.d f+ zmm13[0]
        zmm3_1 = zmm2_1
        float temp0_25[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        temp0_25[0] = temp0_25[0] * temp0_25[0]
        zmm3_1[0] = zmm3_1[0] * temp0_25[0]
        zmm2_1.d = 0.5f - zmm3_1[0]
        temp0_25[0] = temp0_25[0] f* zmm2_1.d
        temp0_25[0] = temp0_25[0] + temp0_25[0]
        temp0_25[0] = temp0_25[0] * temp0_25[0]
        zmm3_1[0] = zmm3_1[0] * temp0_25[0]
        zmm5[0] = 0.5f - zmm3_1[0]
        temp0_25[0] = temp0_25[0] * zmm5[0]
        temp0_25[0] = temp0_25[0] + temp0_25[0]
        zmm8[0] = zmm8[0] * temp0_25[0]
        zmm7[0] = zmm7[0] * temp0_25[0]
        zmm13[0] = zmm13[0] * temp0_25[0]
        *arg8 = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).q
        float temp0_27[0x4] = _mm_sqrt_ss(0, zmm14[0])
        float var_2f4_3 = zmm13[0]
        zmm9_1[0] = zmm9_1[0] - temp0_27[0]
        arg8[1].d = var_2f4_3
        
        if (not(zmm9_1[0] < zmm15[0]))
            zmm15 = __minss_xmmss_memss(zmm9_1[0], 0x7f7fffff)
        
        zmm1_1 = var_328[0]
        zmm13[0] = zmm13[0] + zmm12[0]
        zmm2_1 = var_328[1]
        zmm1_1[0] = zmm1_1[0] + zmm10[0]
        zmm2_1.d = zmm2_1.d f+ zmm11[0]
        zmm15[0] = zmm15[0] f* *arg8
        zmm1_1[0] = zmm1_1[0] + zmm15[0]
        zmm15[0] = zmm15[0] f* *(arg8 + 4)
        zmm2_1.d = zmm2_1.d f+ zmm15[0]
        zmm0_1 = zmm15
        zmm0_1[0] = zmm0_1[0] f* arg8[1].d
        zmm15 ^= data_142d3f780
        zmm13[0] = zmm13[0] + zmm0_1[0]
        *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
        arg7[1].d = zmm13[0]
        *rdi_3 = zmm15[0]

result.b = 1
label_14166cda0:
__security_check_cookie(rax_1 ^ &var_378)
return result

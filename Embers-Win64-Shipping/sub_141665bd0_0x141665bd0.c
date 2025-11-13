// 函数: sub_141665bd0
// 地址: 0x141665bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
float zmm3[0x4] = *arg3
float zmm2[0x4] = (*arg2)[0xb]
int64_t r12 = 0
float zmm0[0x4] = arg3[1]
zmm2[0] = zmm2[0] f+ (*(arg1 + 0x1c)).d
uint128_t* r10 = arg4
float var_1f8 = zmm3[0]
float var_328[0x4] = zmm0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
float var_170[0x4] = data_142d3f7e0
void* var_218 = arg1
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float var_2d0 = zmm2[0]
zmm2[0] = zmm2[0] * zmm2[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
double temp0_1[0x2] = _mm_cvtps_pd(zmm2[0].q)
float var_1d8[0x4]
int128_t* var_208 = &var_1d8
int32_t* var_200 = &var_1f8
float (* var_210)[0x4] = arg2
float var_1ec = temp0[0]
temp0_1[0] = temp0_1[0] - -0x3eb0c6f7a0b5ed8d
float temp0_2[0x4] = _mm_cvtpd_ps(temp0_1)
double zmm1[0x2] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_2d4 = temp0_2[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float var_1f4 = temp0_4[0]
temp0_5[0] = (temp0_4 ^ 0x80000000)[0]
int32_t var_1f0 = zmm1[0].d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = (zmm1 ^ 0x80000000)[0].d
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_1d8 = temp0_8
int32_t rax_3 = *(arg1 + 0x18)
uint128_t zmm6 = zx.o(*(arg1 + 0x10))
float var_228[0x4] = temp0_8
int32_t var_128 = rax_3
int64_t var_130 = zmm6.q
zmm1 = (*arg10)[1]
float var_318 = (*arg10 ^ 0x80000000)[0]
int32_t var_314 = (zmm1 ^ 0x80000000)[0].d
float var_310 = ((*arg10)[2] ^ 0x80000000)[0]
void var_300
int32_t* rax_5
uint128_t zmm6_1
uint128_t zmm9_1
uint128_t zmm10_1
uint128_t zmm13_1
uint128_t zmm15_1
rax_5, zmm6_1, zmm9_1, zmm10_1, zmm13_1, zmm15_1 = sub_1417105f0(&var_210, &var_300, &var_318)
uint128_t zmm1_1 = var_328[0]
double zmm0_1[0x2] = zmm6_1
uint128_t zmm3_1 = var_328[1]
uint128_t zmm5 = zmm1_1
uint128_t zmm4 = var_328[2]
uint128_t zmm11 = zmm1_1
uint128_t zmm2_1 = zx.o(*rax_5)
int32_t rcx_1 = rax_5[2]
zmm0_1[0].d = zmm0_1[0].d f- zmm2_1.d
int32_t var_2a8 = zmm1_1.d
uint32_t result = zx.d(arg9)
int64_t var_100 = zmm2_1.q
zmm1_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
uint128_t zmm8 = zx.o(0)
zmm5.d = zmm5.d f- zmm0_1[0].d
zmm0_1 = zmm2_1
int32_t var_2a4 = zmm3_1.d
uint128_t zmm12 = zmm3_1
zmm1_1.d = zmm1_1.d f- _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0].d
uint32_t result_2 = zmm4.d
zmm0_1 = rax_3
uint128_t zmm14 = zmm4
zmm0_1[0].d = zmm0_1[0].d f- rcx_1
int32_t var_f8 = rcx_1
int64_t var_2e8 = 0
zmm6_1.d = zmm3_1.d f- zmm1_1.d
int32_t var_2e0 = 0x3f800000
uint128_t zmm7
zmm7.d = zmm4.d f- zmm0_1[0].d
zmm0_1 = zmm5
zmm0_1[0].d = zmm0_1[0].d f* zmm5.d
zmm2_1.d = zmm6_1.d f* zmm6_1.d
zmm1_1.d = zmm7.d f* zmm7.d
zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= var_2d4 || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm2_1 = 0x7f7fffff
int64_t r15
r15.b = 0
int32_t var_334 = 0x7f7fffff
int32_t rcx_2 = 0
char var_338 = rdi.b
uint64_t rsi = zx.q(rdi.b)
int32_t var_308 = 0
zmm1_1 = 0x7f7fffff
int32_t var_304
int32_t var_2b8
int64_t var_270
uint32_t result_1

if (rdi.b == 0)
    while (true)
        int32_t rax_6 = rcx_2
        rcx_2 += 1
        var_308 = rcx_2
        
        if (rax_6 s>= 0x20)
            zmm1_1 = var_334
            result = zx.d(arg9)
        else
            void* rax_7 = var_218
            zmm1_1.d = zmm7.d f* zmm7.d
            zmm0_1 = zmm5
            zmm0_1[0].d = zmm0_1[0].d f* zmm5.d
            zmm2_1.d = zmm6_1.d f* zmm6_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm3_1.d = zmm2_1.d
            zmm10_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0_1 = zmm10_1
            zmm0_1[0].d = zmm0_1[0].d f* zmm10_1.d
            zmm1_1.d = zmm3_1.d f* zmm0_1[0].d
            zmm0_1 = zmm10_1
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1[0].d = zmm0_1[0].d f* zmm2_1.d
            zmm10_1.d = zmm10_1.d f+ zmm0_1[0].d
            zmm0_1 = zmm10_1
            zmm1_1.d = zmm10_1.d f* zmm10_1.d
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm4.d = 0.5f f- zmm3_1.d
            zmm0_1[0].d = zmm0_1[0].d f* zmm4.d
            zmm10_1.d = zmm10_1.d f+ zmm0_1[0].d
            zmm0_1 = zmm10_1
            var_304 = zmm10_1.d
            zmm0_1[0].d = zmm0_1[0].d f* zmm5.d
            zmm1_1.d = zmm10_1.d f* zmm6_1.d
            int32_t var_298_1 = zmm0_1[0].d
            var_2b8 = (zmm0_1 ^ 0x80000000)[0].d
            zmm10_1.d = zmm10_1.d f* zmm7.d
            int32_t rax_8 = *(rax_7 + 0x18)
            int32_t var_2d8_1 = zmm1_1.d
            uint64_t var_250_1 = *(rax_7 + 0x10)
            int32_t var_2b0_1 = (zmm10_1 ^ 0x80000000)[0].d
            int32_t var_238_1 = rax_8.d
            int32_t var_2b4_1 = (zmm1_1 ^ 0x80000000).d
            void var_1bc
            int32_t* rax_9
            rax_9, zmm6_1, zmm7, zmm8, zmm9_1, zmm10_1, zmm11, zmm12, zmm13_1, zmm14, zmm15_1 =
                sub_1417105f0(&var_210, &var_1bc, &var_2b8)
            zmm1_1 = zx.o(*rax_9)
            int32_t rcx_4 = rax_9[2]
            zmm2_1.d = zmm7.d f- zmm1_1.d
            zmm0_1 = zmm1_1
            zmm5.d = zmm6_1.d f- _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0].d
            zmm0_1 = rax_8
            zmm0_1[0].d = zmm0_1[0].d f- rcx_4
            zmm3_1.d = zmm11.d f- zmm2_1.d
            int32_t var_294_1 = zmm2_1.d
            zmm4.d = zmm12.d f- zmm5.d
            int32_t var_290_1 = zmm5.d
            var_304 = zmm0_1[0].d
            zmm2_1.d = zmm14.d f- zmm0_1[0].d
            var_318 = zmm3_1.d
            int32_t var_314_1 = zmm4.d
            zmm0_1 = zmm7
            zmm7 = var_298_1
            zmm3_1.d = zmm3_1.d f* zmm7.d
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            var_310 = zmm2_1.d
            zmm2_1.d = zmm2_1.d f* zmm10_1.d
            uint64_t rcx_6 = r13 * 3
            zmm0_1 = _mm_unpacklo_ps(zmm0_1, zmm6_1.q)
            *(&var_100 + (rcx_6 << 2)) = zmm1_1.q
            zmm1_1 = var_2d8_1
            zmm4.d = zmm4.d f* zmm1_1.d
            *(&var_130 + (rcx_6 << 2)) = zmm0_1.q
            (&var_128)[rcx_6] = var_238_1
            zmm4.d = zmm4.d f+ zmm3_1.d
            (&var_f8)[rcx_6] = rax_9[2]
            zmm4.d = zmm4.d f+ zmm2_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4.d f<= zmm13_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_6 << 2)) = var_318.q
                *(&var_160:8 + (rcx_6 << 2)) = var_310
                var_188 = r13.d
            label_14166633d:
                zmm10_1 = var_334
                
                if (rsi.b != 0 && not(zmm4.d f< zmm9_1.d))
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm4.d = zmm4.d f+ 9.99999997e-07f
                    rdi.b = zmm4.d f>= zmm10_1.d
            else
                zmm3_1 = *(r10 + 4)
                zmm5 = *r10
                zmm0_1 = zmm3_1
                zmm6_1 = *(r10 + 8)
                zmm0_1[0].d = zmm0_1[0].d f* zmm1_1.d
                zmm2_1.d = zmm5.d f* zmm7.d
                zmm1_1.d = zmm6_1.d f* zmm10_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm9_1.d)
                    result.b = 0
                    goto label_141666e11
                
                zmm0_1 = zmm4
                zmm1_1 = zmm8
                zmm0_1[0].d = zmm0_1[0].d f- zmm13_1.d
                zmm0_1[0].d = zmm0_1[0].d f/ zmm2_1.d
                zmm8.d = zmm8.d f- zmm0_1[0].d
                
                if (zmm8.d f<= zmm1_1.d)
                    goto label_14166633d
                
                if (zmm8.d f> arg5)
                    result.b = 0
                    goto label_141666e11
                
                zmm1_1 = zx.o(var_2a8.q)
                var_2e8:4.d = var_2d8_1[0].d
                r13 = zx.q(r13.d + 1)
                zmm0_1 = zmm1_1
                var_270 = zmm1_1.q
                zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                zmm11.d = zmm5.d f* zmm8.d
                result_1 = result_2
                zmm12.d = zmm3_1.d f* zmm8.d
                var_188 = r13.d
                zmm11.d = zmm11.d f+ var_328[0]
                zmm14.d = zmm6_1.d f* zmm8.d
                var_338 = 0
                zmm12.d = zmm12.d f+ var_328[1]
                var_2e0 = zmm10_1.d
                zmm14.d = zmm14.d f+ var_328[2]
                zmm10_1 = 0x7f7fffff
                zmm3_1.d = zmm11.d f- zmm1_1.d
                var_2a8 = zmm11.d
                zmm4.d = zmm12.d f- zmm0_1[0].d
                int32_t var_2a4_1 = zmm12.d
                zmm0_1 = var_160.d
                zmm2_1.d = zmm14.d f- result_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm3_1.d
                result_2 = zmm14.d
                var_2e8.d = zmm7.d
                zmm1_1.d = var_160:4.d.d f+ zmm4.d
                var_334 = 0x7f7fffff
                var_160.d = zmm0_1[0].d
                zmm0_1 = var_160:8.d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1.d
                var_160:4.d = zmm1_1.d
                zmm1_1.d = var_160:0xc.d.d f+ zmm3_1.d
                var_160:8.d = zmm0_1[0].d
                zmm0_1 = var_150_1.d
                var_160:0xc.d = zmm1_1.d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm4.d
                zmm1_1.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_1[0].d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1.d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm3_1.d
                zmm1_1.d = var_150_1:0xc.d.d f+ zmm4.d
                var_150_1:8.d = zmm0_1[0].d
                zmm0_1 = var_140_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1.d
                zmm1_1.d = zmm11.d f- var_294_1
                zmm2_1.d = zmm12.d f- var_290_1
                var_140_1 = zmm0_1[0].d
                zmm0_1 = zmm14
                zmm0_1[0].d = zmm0_1[0].d f- var_304
                *(&var_160 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_6 << 2)) = zmm0_1[0].d
            
            if (rdi.b != 0)
                int64_t* rax_23
                rax_23, zmm8, zmm9_1, zmm11, zmm12, zmm13_1, zmm14, zmm15_1 =
                    sub_1416f4530(&var_228, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                zmm10_1 = 0x3eb0c6f7a0b5ed8d
                zmm1_1 = zx.o(*rax_23)
                zmm0_1 = zmm1_1
                zmm7 = rax_23[1].d
                result = zx.d(arg9)
                zmm5 = zmm1_1.d
                zmm1_1 = var_334
                zmm6_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            label_14166679a:
                
                if (rdi.b == 0)
                    goto label_1416668b3
                
                rcx_2 = var_308
                r10 = arg4
            else
                int32_t rcx_7 = r13.d
                int32_t rax_15
                
                if (rcx_7 == 1)
                    int64_t rax_19 = sx.q(var_184)
                    int64_t rcx_14 = rax_19 * 3
                    var_170[rax_19] = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_14 << 2)))
                    rax_15 = *(&var_160:8 + (rcx_14 << 2))
                else if (rcx_7 == 2)
                    void var_198
                    uint64_t* rax_18
                    rax_18, zmm8, zmm9_1 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_18)
                    rax_15 = rax_18[1].d
                else if (rcx_7 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_17
                    rax_17, zmm8, zmm9_1, zmm10_1, zmm11, zmm12, zmm13_1, zmm14, zmm15_1 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_17)
                    rax_15 = rax_17[1].d
                else if (rcx_7 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_16
                    rax_16, zmm8, zmm9_1, zmm10_1, zmm11, zmm12, zmm13_1, zmm14, zmm15_1 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_16)
                    rax_15 = rax_16[1].d
                else
                    int32_t var_2f8_1 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm9_1, zmm9_1.q)
                    rax_15 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                int64_t var_2f4_1 = zmm0_1.q
                int64_t rbx_1 = rdi_1 * 3
                r15 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_4 * 3
                int32_t rdx_6 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_15 = *(&var_160:8 + (rsi << 2))
                int32_t r8_5 = *(&var_160:8 + (r15 << 2))
                zmm5 = var_2f4_1.d
                zmm6_1 = var_2f4_1:4.d
                int32_t rax_20 = *(&var_160:8 + (rbx_1 << 2))
                zmm7 = rax_15
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                zmm0_1 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi << 2))
                zmm1_1 = var_170[r10_1]
                var_160.q = *(&var_160 + (r15 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15]
                var_170[2] = var_170[r9_4].d
                zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[0] = zmm0_1[0].d
                zmm0_1 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_1.d
                zmm1_1 = zx.o(*(&var_130 + (rsi << 2)))
                var_170[3] = zmm3_1.d
                var_150_1:4.d = rdx_6
                int32_t rdx_7 = (&var_128)[r14_1]
                var_140_1 = rcx_15
                int32_t rcx_16 = (&var_128)[rsi]
                var_140_1 = rax_20
                int32_t rax_21 = (&var_128)[rbx_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_1.q
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = zmm1_1.q
                zmm1_1 = zx.o(*(&var_100 + (rsi << 2)))
                var_130 = *(&var_130 + (r15 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_7
                int32_t rdx_8 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_16
                int32_t rcx_17 = (&var_f8)[rsi]
                int32_t var_104_1 = rax_21
                int32_t rax_22 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm6_1.d f* zmm6_1.d
                zmm0_1 = zmm5
                var_f8 = (&var_f8)[r15]
                var_f4_1:0xc.q = zmm1_1.q
                zmm0_1[0].d = zmm0_1[0].d f* zmm5.d
                var_f4_1:8.d = rdx_8
                zmm1_1.d = zmm7.d f* zmm7.d
                var_e4_1:4.d = rcx_17
                zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
                var_100 = zmm3_1.q
                zmm3_1 = var_2d4
                int32_t var_d4_1 = rax_22
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                result = zx.d(arg9)
                rdi.b = zmm3_1.d f> zmm2_1.d
                var_334 = zmm2_1.d
                zmm1_1 = zmm2_1
                r15.b = zmm2_1.d f>= zmm10_1.d
                
                if (result.b == 0)
                    zmm10_1 = 0x3eb0c6f7a0b5ed8d
                    goto label_14166679a
                
                if (rdi.b != 0)
                    zmm10_1 = 0x3eb0c6f7a0b5ed8d
                    
                    if (zmm8.d f!= zmm9_1.d)
                    label_141666797:
                        zmm1_1 = zmm2_1
                        goto label_14166679a
                    
                    if (_mm_cvtps_pd(zmm2_1.q)[0] f<= zmm10_1.q)
                        goto label_141666797
                    
                    if (_mm_cvtps_pd(zmm3_1.q)[0] f<= zmm10_1.q)
                        goto label_141666797
                    
                    zmm1_1 = zmm2_1
                    
                    if (r13.d s>= 4)
                        goto label_14166679a
                    
                    rsi.b = 1
                    rdi.b = 0
                    var_338 = 1
                    goto label_1416668b8
                
                zmm1_1 = zmm2_1
            label_1416668b3:
                rsi = zx.q(var_338)
            label_1416668b8:
                zmm10_1 = 0x3eb0c6f7a0b5ed8d
                rcx_2 = var_308
                r10 = arg4
                
                if (r15.b == 0)
                    continue
        
        zmm2_1 = 0x7f7fffff
        break

int32_t* rdi_3 = arg6
*rdi_3 = zmm8.d

if (not(zmm8.d f<= zmm9_1.d))
    zmm4 = zmm9_1
    zmm3_1 = zmm9_1
    *arg8 = var_2e8
    arg8[1].d = var_2e0
    
    if (r13.d s> 0)
        int128_t* rcx_19 = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_26 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_19
            rcx_19 += 4
            zmm0_1 = zmm2_1
            zmm0_1[0].d = zmm0_1[0].d f* rax_26[-2]
            zmm1_1.d = zmm2_1.d f* rax_26[-1]
            zmm2_1.d = zmm2_1.d f* *rax_26
            rax_26 = &rax_26[3]
            zmm9_1.d = zmm9_1.d f+ zmm0_1[0].d
            zmm4.d = zmm4.d f+ zmm1_1.d
            zmm3_1.d = zmm3_1.d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm2_1 = var_2d0
    zmm1_1.d = zmm8.d f* *r10
    zmm0_1 = zmm2_1
    zmm0_1[0].d = zmm0_1[0].d f* *arg8
    zmm1_1.d = zmm1_1.d f+ var_328[0]
    zmm9_1.d = zmm9_1.d f- zmm0_1[0].d
    zmm0_1 = zmm2_1
    zmm0_1[0].d = zmm0_1[0].d f* *(arg8 + 4)
    zmm2_1.d = zmm2_1.d f* arg8[1].d
    zmm9_1.d = zmm9_1.d f+ zmm1_1.d
    zmm1_1.d = zmm8.d f* *(r10 + 4)
    zmm4.d = zmm4.d f- zmm0_1[0].d
    zmm8.d = zmm8.d f* *(r10 + 8)
    zmm3_1.d = zmm3_1.d f- zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ var_328[1]
    zmm8.d = zmm8.d f+ var_328[2]
    zmm4.d = zmm4.d f+ zmm1_1.d
    zmm3_1.d = zmm3_1.d f+ zmm8.d
    *arg7 = (_mm_unpacklo_ps(zmm9_1, zmm4.q)).q
    arg7[1].d = zmm3_1.d
else if (result.b != 0)
    double temp0_21[0x2]
    
    if (not(zmm13_1.d f<= zmm9_1.d))
        temp0_21 = _mm_cvtps_pd(zmm1_1.q)
    
    if (zmm13_1.d f<= zmm9_1.d || temp0_21[0] f<= zmm10_1.q || zmm1_1.d f>= zmm2_1.d)
        var_170[0].q = 0
        var_170[2].q = 0
        var_328[0].q = 0
        var_328[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_328[3] s< 8)
            sub_14083ad30(&var_328, 8)
        
        uint128_t zmm0_2
        float rax_39
        
        if (var_308 == 0)
            int32_t var_2f8_5 = 0x3f800000
            rax_39 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm9_1, zmm9_1.q)
        label_141666d94:
            zmm1_1 = zmm15_1
            *rdi_3 = (zmm13_1 ^ data_142d3f780).d
            *arg8 = zmm0_2.q
            arg8[1].d = rax_39
            zmm0_2.d = zmm15_1.d f* *arg8
            zmm15_1.d = zmm15_1.d f* arg8[1].d
            zmm1_1.d = zmm1_1.d f* *(arg8 + 4)
            zmm15_1.d = zmm15_1.d f+ var_128
            zmm0_2.d = zmm0_2.d f+ var_130.d
            zmm1_1.d = zmm1_1.d f+ var_130:4.d
            result = zmm15_1.d
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1_1.q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_170[2])
                    int32_t rax_32 = (rdi_4 + 1).d
                    var_170[2] = rax_32
                    
                    if (rax_32 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_23 = var_170[0].q
                    int64_t rdx_11 = rdi_4 * 3
                    int32_t rax_33 = *(&var_128 + r12)
                    zmm1_1.d = zmm12.d f+ *(&var_100:4 + r12)
                    *(rcx_23 + (rdx_11 << 2)) = *(&var_130 + r12)
                    zmm0_2.d = zmm11.d f+ *(&var_100 + r12)
                    *(rcx_23 + (rdx_11 << 2) + 8) = rax_33
                    int64_t rdi_5 = sx.q(var_328[2])
                    int32_t var_314_2 = zmm1_1.d
                    var_318 = zmm0_2.d
                    zmm0_2.d = zmm14.d f+ *(&var_f8 + r12)
                    int32_t rax_34 = (rdi_5 + 1).d
                    var_328[2] = rax_34
                    var_310 = zmm0_2.d
                    
                    if (rax_34 s> var_328[3])
                        sub_14083a7e0(&var_328)
                    
                    int64_t rcx_25 = var_328[0].q
                    int64_t rdx_13 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_25 + (rdx_13 << 2)) = var_318.q
                    *(rcx_25 + (rdx_13 << 2) + 8) = var_310
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_210 = &var_1d8
            float (* var_208_1)[0x4] = arg2
            int128_t* var_200_1 = arg3
            int32_t rax_38
            rax_38, zmm13_1, zmm15_1 = sub_1415a5970(&var_170, &var_328, &var_218, &var_210, 
                &var_304, &var_318, &var_270, &var_228)
            zmm0_2 = zx.o(var_318.q)
            rax_39 = var_310
            
            if (rax_38 == 2)
                goto label_141666d94
            
            *arg8 = zmm0_2.q
            zmm0_2.d = (var_304 ^ data_142d3f780).d f- zmm13_1.d
            arg8[1].d = rax_39
            result = result_1
            *rdi_3 = zmm0_2.d
            zmm0_2 = zx.o(var_270)
        int64_t rcx_27 = var_328[0].q
        *arg7 = zmm0_2.q
        arg7[1].d = result
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        int64_t rcx_28 = var_170[0].q
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    else
        zmm3_1 = zmm9_1
        zmm4 = zmm9_1
        *arg8 = var_2e8
        zmm5 = zmm9_1
        arg8[1].d = var_2e0
        zmm11 = zmm9_1
        zmm12 = zmm9_1
        zmm10_1 = zmm9_1
        
        if (rcx_2 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            zmm0_1 = zmm1_1
            int32_t rax_29 = var_128
            zmm4 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            int32_t rax_30 = var_f8
            zmm0_1 = zmm2_1
            zmm5 = rax_29
            zmm12 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            zmm10_1 = rax_30
            zmm3_1 = zmm1_1.d
            var_2b8.q = zmm2_1.q
            zmm11 = var_2b8
        else if (r13.d s> 0)
            int128_t* rax_28 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_28
                rax_28 += 4
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_130 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_130:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_128 + r12)
                zmm4.d = zmm4.d f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_100 + r12)
                zmm5.d = zmm5.d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm11.d = zmm11.d f+ zmm1_1.d
                r12 += 0xc
                zmm12.d = zmm12.d f+ zmm0_1[0].d
                zmm10_1.d = zmm10_1.d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm14 = var_328[0]
        zmm6_1.d = var_328[2].d f+ zmm10_1.d
        zmm15_1 = var_328[1]
        zmm8.d = zmm14.d f+ zmm11.d
        zmm7.d = zmm15_1.d f+ zmm12.d
        zmm6_1.d = zmm6_1.d f- zmm5.d
        zmm8.d = zmm8.d f- zmm3_1.d
        zmm7.d = zmm7.d f- zmm4.d
        zmm1_1.d = zmm6_1.d f* zmm6_1.d
        zmm0_1 = zmm8
        zmm0_1[0].d = zmm0_1[0].d f* zmm8.d
        zmm2_1.d = zmm7.d f* zmm7.d
        zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        zmm4 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
        zmm3_1.d = zmm2_1.d f* 0.5f
        zmm0_1 = zmm4
        zmm0_1[0].d = zmm0_1[0].d f* zmm4.d
        zmm1_1.d = zmm3_1.d f* zmm0_1[0].d
        zmm0_1 = zmm4
        zmm2_1.d = 0.5f f- zmm1_1.d
        zmm0_1[0].d = zmm0_1[0].d f* zmm2_1.d
        zmm4.d = zmm4.d f+ zmm0_1[0].d
        zmm0_1 = zmm4
        zmm1_1.d = zmm4.d f* zmm4.d
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm5.d = 0.5f f- zmm3_1.d
        zmm0_1[0].d = zmm0_1[0].d f* zmm5.d
        zmm4.d = zmm4.d f+ zmm0_1[0].d
        zmm8.d = zmm8.d f* zmm4.d
        zmm7.d = zmm7.d f* zmm4.d
        zmm6_1.d = zmm6_1.d f* zmm4.d
        zmm0_1 = _mm_unpacklo_ps(zmm8, zmm7.q)
        *arg8 = zmm0_1.q
        int32_t var_2f8_3 = zmm6_1.d
        zmm13_1.d = zmm13_1.d f- __sqrtss_xmmss_memss(zmm0_1[0].d, var_334)[0].d
        arg8[1].d = var_2f8_3
        
        if (not(zmm13_1.d f< zmm9_1.d))
            zmm9_1 = __minss_xmmss_memss(zmm13_1.d, 0x7f7fffff)
        
        zmm1_1 = *arg8
        zmm2_1 = *(arg8 + 4)
        zmm0_1 = zmm1_1
        zmm3_1 = arg8[1].d
        zmm4 = var_2d0
        zmm0_1[0].d = zmm0_1[0].d f* zmm4.d
        zmm1_1.d = zmm1_1.d f* zmm9_1.d
        zmm11.d = zmm11.d f- zmm0_1[0].d
        zmm0_1 = zmm2_1
        zmm0_1[0].d = zmm0_1[0].d f* zmm4.d
        zmm2_1.d = zmm2_1.d f* zmm9_1.d
        zmm12.d = zmm12.d f- zmm0_1[0].d
        zmm0_1 = zmm3_1
        zmm0_1[0].d = zmm0_1[0].d f* zmm4.d
        zmm11.d = zmm11.d f+ zmm14.d
        zmm3_1.d = zmm3_1.d f* zmm9_1.d
        zmm9_1 ^= data_142d3f780
        zmm10_1.d = zmm10_1.d f- zmm0_1[0].d
        zmm12.d = zmm12.d f+ zmm15_1.d
        zmm11.d = zmm11.d f+ zmm1_1.d
        zmm10_1.d = zmm10_1.d f+ var_328[2]
        zmm12.d = zmm12.d f+ zmm2_1.d
        zmm10_1.d = zmm10_1.d f+ zmm3_1.d
        *arg7 = (_mm_unpacklo_ps(zmm11, zmm12.q)).q
        arg7[1].d = zmm10_1.d
        *rdi_3 = zmm9_1.d

result.b = 1
label_141666e11:
__security_check_cookie(rax_1 ^ &var_378)
return result

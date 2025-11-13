// 函数: sub_141678670
// 地址: 0x141678670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
float zmm3[0x4] = *arg3
float zmm10[0x4] = (*arg2)[0xb]
double zmm0[0x2] = arg3[1]
int64_t r12 = 0
uint128_t* rsi = arg4
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_1f8 = zmm3[0]
double var_318[0x2] = zmm0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float (* var_210)[0x4] = arg2
double var_170[0x2] = data_142d3f7e0
float var_1ec = temp0[0]
zmm10[0] = zmm10[0] * zmm10[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
double temp0_1[0x2] = _mm_cvtps_pd(zmm10[0].q)
float var_1d8[0x4]
int128_t* var_208 = &var_1d8
void* var_238 = arg1
float* var_200 = &var_1f8
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
temp0_1[0] = temp0_1[0] - -0x3eb0c6f7a0b5ed8d
float var_1f0 = temp0_2[0]
float temp0_3[0x4] = _mm_cvtpd_ps(temp0_1)
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t var_1f4 = zmm0[0].d
temp0_5[0] = (zmm0 ^ 0x80000000)[0].d
float var_300 = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
float var_228[0x4] = temp0_8
var_1d8 = temp0_8
int64_t var_2c8
int128_t zmm6 = sub_141758e70(arg1, &var_2c8, arg10, zx.o(0))
int128_t zmm1_1 = *(arg10 + 4)
int64_t var_130 = var_2c8
int32_t var_32c = (zmm1_1 ^ zmm6).d
float var_330 = (*arg10 ^ zmm6).d
uint128_t zmm0_1 = *(arg10 + 8) ^ zmm6
int32_t var_2c0
int32_t var_128 = var_2c0
int32_t var_328 = zmm0_1.d
void var_2fc
int32_t* rax_4
uint128_t zmm9_1
double zmm10_1[0x2]
uint128_t zmm11_1
uint128_t zmm15_1
rax_4, zmm9_1, zmm10_1, zmm11_1, zmm15_1 = sub_1417105f0(&var_210, &var_2fc, &var_330)
uint128_t zmm1_2 = var_318[0].d
uint128_t zmm8 = zx.o(0)
double zmm0_2[0x2] = var_2c8.d
double zmm5[0x2] = zmm1_2
float zmm3_1[0x4] = var_318[0]:4.d
float zmm12[0x4] = zmm1_2
uint128_t zmm2_1 = zx.o(*rax_4)
int32_t rcx_2 = rax_4[2]
zmm0_2[0].d = zmm0_2[0].d f- zmm2_1.d
double zmm4[0x2] = var_318[1].d
uint32_t result = zx.d(arg9)
float var_2b8 = zmm1_2.d
float zmm13[0x4] = zmm3_1
zmm1_2 = var_2c8:4.d
uint128_t zmm14 = zmm4
zmm5[0].d = zmm5[0].d f- zmm0_2[0].d
int64_t var_100 = zmm2_1.q
zmm0_2 = zmm2_1
zmm1_2.d = zmm1_2.d f- _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)[0].d
float var_2b4 = zmm3_1[0]
zmm0_2 = var_2c0
zmm0_2[0].d = zmm0_2[0].d f- rcx_2
uint32_t result_2 = zmm4[0].d
int32_t var_f8 = rcx_2
uint128_t zmm6_1
zmm6_1.d = zmm3_1.d f- zmm1_2.d
int64_t var_2e0 = 0
int32_t var_2d8 = 0x3f800000
uint128_t zmm7
zmm7.d = zmm4.d f- zmm0_2[0].d
zmm5[0].d = zmm5[0].d f* zmm5[0].d
zmm2_1.d = zmm6_1.d f* zmm6_1.d
zmm1_2.d = zmm7.d f* zmm7.d
zmm2_1.d = zmm2_1.d f+ zmm5[0].d
zmm2_1.d = zmm2_1.d f+ zmm1_2.d
int32_t rdi

if (zmm2_1.d f>= zmm15_1.d || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm1_2 = 0x7f7fffff
int32_t rcx_3 = 0
int32_t var_308 = 0x7f7fffff
zmm15_1 = 0x7f7fffff
int32_t var_304 = 0
uint64_t r14_1 = zx.q(rdi.b)
char var_337 = 0
char var_338 = rdi.b
int32_t var_298
int64_t var_270
uint32_t result_1

if (rdi.b == 0)
    while (true)
        int32_t rax_5 = rcx_3
        rcx_3 += 1
        var_304 = rcx_3
        
        if (rax_5 s>= 0x20)
            result = zx.d(arg9)
        else
            zmm4 = 0x3f000000
            void* rcx_4 = var_238
            zmm3_1 = zx.o(0)
            zmm2_1.d = zmm6_1.d f* zmm6_1.d
            zmm5[0].d = zmm5[0].d f* zmm5[0].d
            zmm1_2.d = zmm7.d f* zmm7.d
            zmm2_1.d = zmm2_1.d f+ zmm5[0].d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            zmm3_1[0] = zmm2_1.d
            zmm11_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0_2 = zmm11_1
            zmm0_2[0].d = zmm0_2[0].d f* zmm11_1.d
            zmm1_2.d = zmm3_1.d f* zmm0_2[0].d
            zmm0_2 = zmm11_1
            zmm2_1.d = 0.5f f- zmm1_2.d
            zmm0_2[0].d = zmm0_2[0].d f* zmm2_1.d
            zmm11_1.d = zmm11_1.d f+ zmm0_2[0].d
            zmm0_2 = zmm11_1
            zmm1_2.d = zmm11_1.d f* zmm11_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm1_2.d
            zmm4[0].d = 0.5f - zmm3_1[0]
            zmm0_2[0].d = zmm0_2[0].d f* zmm4[0].d
            zmm11_1.d = zmm11_1.d f+ zmm0_2[0].d
            zmm0_2 = zmm11_1
            int32_t var_2cc_1 = zmm11_1.d
            zmm0_2[0].d = zmm0_2[0].d f* zmm6_1.d
            zmm15_1.d = zmm11_1.d f* zmm5[0].d
            zmm11_1.d = zmm11_1.d f* zmm7.d
            int32_t var_2d0_1 = zmm0_2[0].d
            int32_t var_2a8 = zmm15_1.d
            int32_t var_2a4_1 = zmm0_2[0].d
            int32_t var_2a0_1 = zmm11_1.d
            float var_250
            int512_t zmm6_2
            int512_t zmm7_1
            uint128_t zmm11_2
            zmm6_2, zmm7_1, zmm11_2 = sub_141758e70(rcx_4, &var_250, &var_2a8, zmm9_1)
            zmm7_1.o = var_250
            int32_t var_24c
            zmm6_2.o = var_24c
            var_298 = (zmm15_1 ^ 0x80000000).d
            int32_t var_294_1 = (var_2d0_1 ^ 0x80000000).d
            int32_t var_290_1 = (zmm11_2 ^ 0x80000000).d
            void var_1bc
            int32_t* rax_6
            rax_6, zmm6_1, zmm7, zmm8, zmm9_1, zmm10_1, zmm11_1, zmm12, zmm13, zmm14, zmm15_1 =
                sub_1417105f0(&var_210, &var_1bc, &var_298)
            zmm5 = zmm6_1
            zmm1_2 = zx.o(*rax_6)
            int32_t rcx_6 = rax_6[2]
            zmm2_1.d = zmm7.d f- zmm1_2.d
            zmm0_2 = zmm1_2
            zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
            zmm5[0].d = zmm5[0].d f- zmm0_2[0].d
            int32_t var_248
            zmm0_2 = var_248
            zmm0_2[0].d = zmm0_2[0].d f- rcx_6
            zmm12[0] = zmm12[0] f- zmm2_1.d
            int32_t var_288_1 = zmm2_1.d
            int32_t var_284_1 = zmm5[0].d
            int32_t var_2cc_2 = zmm0_2[0].d
            var_330 = zmm12[0]
            zmm4 = zmm13
            zmm4[0].d = zmm4[0].d f- zmm5[0].d
            zmm12[0] = zmm12[0] f* zmm15_1.d
            zmm5 = var_2d0_1
            zmm2_1.d = zmm14.d f- zmm0_2[0].d
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            int32_t var_32c_1 = zmm4[0].d
            zmm4[0].d = zmm4[0].d f* zmm5[0].d
            uint64_t rcx_8 = r13 * 3
            var_328 = zmm2_1.d
            zmm2_1.d = zmm2_1.d f* zmm11_1.d
            zmm4[0].d = zmm4[0].d f+ zmm12[0]
            *(&var_130 + (rcx_8 << 2)) = (_mm_unpacklo_ps(zmm7, zmm6_1.q)).q
            (&var_128)[rcx_8] = var_248
            result = rax_6[2]
            *(&var_100 + (rcx_8 << 2)) = zmm1_2.q
            zmm4[0].d = zmm4[0].d f+ zmm2_1.d
            (&var_f8)[rcx_8] = result
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4[0].d f<= zmm10_1[0].d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_8 << 2)) = var_330.q
                *(&var_160:8 + (rcx_8 << 2)) = var_328
                var_188 = r13.d
            label_141678def:
                zmm15_1 = var_308
                
                if (r14_1.b != 0 && not(zmm4[0].d f< zmm9_1.d))
                    zmm4[0].d = zmm4[0].d f* zmm4[0].d
                    zmm4[0].d = zmm4[0].d f+ 9.99999997e-07f
                    rdi.b = zmm4[0].d f>= zmm15_1.d
            else
                zmm3_1 = *(rsi + 4)
                zmm6_1 = *rsi
                zmm0_2 = zmm3_1
                zmm7 = *(rsi + 8)
                zmm2_1.d = zmm6_1.d f* zmm15_1.d
                zmm0_2[0].d = zmm0_2[0].d f* zmm5[0].d
                zmm1_2.d = zmm7.d f* zmm11_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                
                if (zmm2_1.d f>= zmm9_1.d)
                    result.b = 0
                    goto label_14167988d
                
                zmm1_2 = zmm8
                zmm4[0].d = zmm4[0].d f- zmm10_1[0].d
                zmm4[0].d = zmm4[0].d f/ zmm2_1.d
                zmm8.d = zmm8.d f- zmm4[0].d
                
                if (zmm8.d f<= zmm1_2.d)
                    goto label_141678def
                
                if (zmm8.d f> arg5)
                    result.b = 0
                    goto label_14167988d
                
                zmm1_2 = zx.o(var_2b8.q)
                zmm13 = zmm3_1
                zmm0_2 = zmm1_2
                zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                zmm12 = zmm6_1
                var_270 = zmm1_2.q
                zmm12[0] = zmm12[0] f* zmm8.d
                r13 = zx.q(r13.d + 1)
                result_1 = result_2
                zmm13[0] = zmm13[0] f* zmm8.d
                var_188 = r13.d
                zmm12[0] = zmm12[0] f+ var_318[0].d
                zmm14.d = zmm7.d f* zmm8.d
                var_338 = 0
                zmm13[0] = zmm13[0] f+ var_318[0]:4.d
                var_2e0.d = zmm15_1.d
                zmm14.d = zmm14.d f+ var_318[1].d
                zmm15_1 = 0x7f7fffff
                zmm12[0] = zmm12[0] f- zmm1_2.d
                var_2b8 = zmm12[0]
                zmm4 = zmm13
                zmm4[0].d = zmm4[0].d f- zmm0_2[0].d
                float var_2b4_1 = zmm13[0]
                zmm0_2 = var_160.d
                zmm2_1.d = zmm14.d f- result_1
                zmm0_2[0].d = zmm0_2[0].d f+ zmm12[0]
                result_2 = zmm14.d
                var_2e0:4.d = zmm5[0].d
                zmm1_2.d = var_160:4.d.d f+ zmm4[0].d
                var_2d8 = zmm11_1.d
                var_308 = 0x7f7fffff
                var_160.d = zmm0_2[0].d
                zmm0_2 = var_160:8.d
                zmm0_2[0].d = zmm0_2[0].d f+ zmm2_1.d
                var_160:4.d = zmm1_2.d
                zmm1_2.d = var_160:0xc.d.d f+ zmm12[0]
                var_160:8.d = zmm0_2[0].d
                zmm0_2 = var_150_1.d
                var_160:0xc.d = zmm1_2.d
                zmm0_2[0].d = zmm0_2[0].d f+ zmm4[0].d
                zmm1_2.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_2[0].d
                zmm0_2 = var_150_1:8.d
                var_150_1:4.d = zmm1_2.d
                zmm0_2[0].d = zmm0_2[0].d f+ zmm12[0]
                zmm1_2.d = var_150_1:0xc.d.d f+ zmm4[0].d
                var_150_1:8.d = zmm0_2[0].d
                zmm0_2 = var_140_1
                zmm0_2[0].d = zmm0_2[0].d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_2.d
                zmm1_2.d = zmm12.d f- var_288_1
                zmm2_1.d = zmm13.d f- var_284_1
                var_140_1 = zmm0_2[0].d
                zmm0_2 = zmm14
                zmm0_2[0].d = zmm0_2[0].d f- var_2cc_2
                *(&var_160 + (rcx_8 << 2)) = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
                *(&var_160:8 + (rcx_8 << 2)) = zmm0_2[0].d
            
            uint32_t rdx_10
            
            if (rdi.b != 0)
                int64_t* rax_20
                rax_20, zmm8, zmm9_1, zmm10_1, zmm12, zmm13, zmm14, zmm15_1 =
                    sub_1416f4530(&var_228, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rdx_10 = zx.d(var_337)
                zmm1_2 = zx.o(*rax_20)
                zmm0_2 = zmm1_2
                zmm7 = rax_20[1].d
                result = zx.d(arg9)
                zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                var_2a8.q = zmm1_2.q
                zmm6_1 = zmm0_2
                zmm5 = var_2a8
            label_141679234:
                zmm11_1 = 0x3eb0c6f7a0b5ed8d
            else
                int32_t rcx_9 = r13.d
                int32_t rax_12
                
                if (rcx_9 == 1)
                    int64_t rax_16 = sx.q(var_184)
                    int64_t rcx_16 = rax_16 * 3
                    *(&var_170 + (rax_16 << 2)) = 0x3f800000
                    zmm0_2 = zx.o(*(&var_160 + (rcx_16 << 2)))
                    rax_12 = *(&var_160:8 + (rcx_16 << 2))
                else if (rcx_9 == 2)
                    void var_198
                    uint64_t* rax_15
                    rax_15, zmm8, zmm9_1 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_15)
                    rax_12 = rax_15[1].d
                else if (rcx_9 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_14
                    rax_14, zmm8, zmm9_1, zmm10_1, zmm12, zmm13, zmm14, zmm15_1 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_14)
                    rax_12 = rax_14[1].d
                else if (rcx_9 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_13
                    rax_13, zmm8, zmm9_1, zmm10_1, zmm12, zmm13, zmm14, zmm15_1 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_13)
                    rax_12 = rax_13[1].d
                else
                    int32_t var_2f4_1 = 0
                    zmm0_2 = _mm_unpacklo_ps(zmm9_1, zmm9_1.q)
                    rax_12 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                int64_t var_2f0_1 = zmm0_2.q
                int64_t rbx_1 = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_4 * 3
                int32_t r8_7 = *(&var_160:8 + (r15_1 << 2))
                zmm5 = var_2f0_1.d
                zmm6_1 = var_2f0_1:4.d
                zmm7 = rax_12
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                var_160.q = *(&var_160 + (r15_1 << 2))
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[1].d = (*(&var_170 + (r9_4 << 2))).d
                var_170[0].d = (*(&var_170 + (r11_1 << 2)))[0].d
                var_170[0]:4.d = (*(&var_170 + (r10_1 << 2))).d
                var_170[1]:4.d = (*(&var_170 + (rdi_1 << 2)))[0]
                var_150_1:4.d = *(&var_160:8 + (r14_1 << 2))
                int32_t rdx_9 = (&var_128)[r14_1]
                var_140_1 = *(&var_160:8 + (rsi_1 << 2))
                int32_t rcx_18 = (&var_128)[rsi_1]
                var_140_1 = *(&var_160:8 + (rbx_1 << 2))
                int32_t rax_18 = (&var_128)[rbx_1]
                var_124_1.q = *(&var_130 + (r14_1 << 2))
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = *(&var_130 + (rbx_1 << 2))
                zmm0_2 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = *(&var_130 + (rsi_1 << 2))
                zmm1_2 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_130 = *(&var_130 + (r15_1 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_9
                rdx_10 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_18
                int32_t rcx_19 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_18
                int32_t rax_19 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_2.q
                var_f4_1:0xc.q = zmm1_2.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_7
                zmm2_1.d = zmm6_1.d f* zmm6_1.d
                var_f8 = (&var_f8)[r15_1]
                zmm1_2.d = zmm7.d f* zmm7.d
                var_f4_1:8.d = rdx_10
                zmm5[0].d = zmm5[0].d f* zmm5[0].d
                var_e4_1:4.d = rcx_19
                var_100 = zmm3_1.q
                int32_t var_d4_1 = rax_19
                zmm2_1.d = zmm2_1.d f+ zmm5[0].d
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                zmm1_2 = var_300
                result = zx.d(arg9)
                rdi.b = zmm1_2.d f> zmm2_1.d
                bool cond:4_1 = zmm2_1.d f>= zmm15_1.d
                var_308 = zmm2_1.d
                zmm15_1 = zmm2_1
                rdx_10.b = cond:4_1
                var_337 = rdx_10.b
                
                if (result.b == 0)
                    goto label_141679234
                
                if (rdi.b == 0)
                    goto label_141679242
                
                zmm11_1 = 0x3eb0c6f7a0b5ed8d
                
                if (zmm8.d f!= zmm9_1.d)
                    goto label_14167923d
                
                if (not(_mm_cvtps_pd(zmm2_1.q)[0] f<= zmm11_1.q)
                        && not(_mm_cvtps_pd(zmm1_2.q)[0] f<= zmm11_1.q) && r13.d s< 4)
                    r14_1.b = 1
                    rdi.b = 0
                    var_338 = 1
                    goto label_141679248
            
        label_14167923d:
            
            if (rdi.b != 0)
                rcx_3 = var_304
            else
            label_141679242:
                r14_1 = zx.q(var_338)
            label_141679248:
                zmm11_1 = 0x3eb0c6f7a0b5ed8d
                rcx_3 = var_304
                
                if (rdx_10.b == 0)
                    rsi = arg4
                    continue
        
        zmm1_2 = 0x7f7fffff
        break

int32_t* rdi_3 = arg6
*rdi_3 = zmm8.d

if (not(zmm8.d f<= zmm9_1.d))
    zmm4 = zmm9_1
    zmm3_1 = zmm9_1
    *arg8 = var_2e0
    arg8[1].d = var_2d8
    
    if (r13.d s> 0)
        int128_t* rcx_21 = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_23 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_21
            rcx_21 += 4
            zmm0_2 = zmm2_1
            zmm0_2[0].d = zmm0_2[0].d f* rax_23[-2]
            zmm1_2.d = zmm2_1.d f* rax_23[-1]
            zmm2_1.d = zmm2_1.d f* *rax_23
            rax_23 = &rax_23[3]
            zmm9_1.d = zmm9_1.d f+ zmm0_2[0].d
            zmm4[0].d = zmm4[0].d f+ zmm1_2.d
            zmm3_1[0] = zmm3_1[0] f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm10_1[0].d = zmm10_1[0].d f* *arg8
    zmm1_2.d = zmm8.d f* *arg4
    zmm9_1.d = zmm9_1.d f- zmm10_1[0].d
    zmm10_1[0].d = zmm10_1[0].d f* *(arg8 + 4)
    zmm1_2.d = zmm1_2.d f+ var_318[0].d
    zmm10_1[0].d = zmm10_1[0].d f* arg8[1].d
    zmm4[0].d = zmm4[0].d f- zmm10_1[0].d
    zmm9_1.d = zmm9_1.d f+ zmm1_2.d
    zmm1_2.d = zmm8.d f* arg4[1]
    zmm3_1[0] = zmm3_1[0] f- zmm10_1[0].d
    zmm8.d = zmm8.d f* arg4[2]
    zmm1_2.d = zmm1_2.d f+ var_318[0]:4.d
    zmm8.d = zmm8.d f+ var_318[1].d
    zmm4[0].d = zmm4[0].d f+ zmm1_2.d
    zmm3_1[0] = zmm3_1[0] f+ zmm8.d
    *arg7 = (_mm_unpacklo_ps(zmm9_1, zmm4[0])).q
    arg7[1].d = zmm3_1[0]
else if (result.b != 0)
    double temp0_20[0x2]
    
    if (not(zmm10_1[0].d f<= zmm9_1.d))
        temp0_20 = _mm_cvtps_pd(zmm15_1.q)
    
    if (zmm10_1[0].d f<= zmm9_1.d || temp0_20[0] f<= zmm11_1.q || zmm15_1.d f>= zmm1_2.d)
        var_170[0] = 0
        var_170[1] = 0
        var_318[0] = 0
        var_318[1] = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_318[1]:4.d s< 8)
            sub_14083ad30(&var_318, 8)
        
        int32_t rax_37
        uint128_t zmm0_4
        
        if (var_304 == 0)
            int32_t var_2f4_5 = 0x3f800000
            rax_37 = 0x3f800000
            zmm0_4 = _mm_unpacklo_ps(zmm9_1, zmm9_1.q)
        label_141679829:
            zmm2_1 = var_130:4.d
            zmm1_2 = var_130.d
            *rdi_3 = (zmm10_1 ^ data_142d3f780)[0].d
            *arg8 = zmm0_4.q
            arg8[1].d = rax_37
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_170[1].d)
                    int32_t rax_30 = (rdi_4 + 1).d
                    var_170[1].d = rax_30
                    
                    if (rax_30 s> var_170[1]:4.d)
                        sub_14083a7e0(&var_170)
                    
                    double rcx_25 = var_170[0]
                    int64_t rdx_13 = rdi_4 * 3
                    int32_t rax_31 = *(&var_128 + r12)
                    zmm1_2.d = zmm13.d f+ *(&var_100:4 + r12)
                    *(rcx_25 i+ (rdx_13 << 2)) = *(&var_130 + r12)
                    zmm0_4.d = zmm12.d f+ *(&var_100 + r12)
                    *(rcx_25 i+ (rdx_13 << 2) + 8) = rax_31
                    int64_t rdi_5 = sx.q(var_318[1].d)
                    int32_t var_32c_2 = zmm1_2.d
                    var_330 = zmm0_4.d
                    zmm0_4.d = zmm14.d f+ *(&var_f8 + r12)
                    int32_t rax_32 = (rdi_5 + 1).d
                    var_318[1].d = rax_32
                    var_328 = zmm0_4.d
                    
                    if (rax_32 s> var_318[1]:4.d)
                        sub_14083a7e0(&var_318)
                    
                    double rcx_27 = var_318[0]
                    int64_t rdx_15 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_27 i+ (rdx_15 << 2)) = var_330.q
                    *(rcx_27 i+ (rdx_15 << 2) + 8) = var_328
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_210 = &var_1d8
            float (* var_208_1)[0x4] = arg2
            int128_t* var_200_1 = arg3
            int32_t rax_36
            rax_36, zmm10_1 = sub_1415800c0(&var_170, &var_318, &var_238, &var_210, &var_300, 
                &var_330, &var_270, &var_228)
            zmm0_4 = zx.o(var_330.q)
            rax_37 = var_328
            
            if (rax_36 == 2)
                goto label_141679829
            
            *arg8 = zmm0_4.q
            arg8[1].d = rax_37
            zmm0_4.d = (var_300 ^ data_142d3f780).d f- zmm10_1[0].d
            result = result_1
            *rdi_3 = zmm0_4.d
            *arg7 = var_270
        double rcx_29 = var_318[0]
        arg7[1].d = result
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        double rcx_30 = var_170[0]
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
    else
        zmm3_1 = zmm9_1
        zmm4 = zmm9_1
        *arg8 = var_2e0
        zmm5 = zmm9_1
        arg8[1].d = var_2d8
        zmm12 = zmm9_1
        zmm13 = zmm9_1
        zmm11_1 = zmm9_1
        
        if (rcx_3 == 0)
            zmm1_2 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            zmm0_2 = zmm1_2
            int32_t rax_27 = var_128
            zmm4 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
            int32_t rax_28 = var_f8
            zmm0_2 = zmm2_1
            zmm5 = rax_27
            zmm13 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
            zmm11_1 = rax_28
            var_298.q = zmm1_2.q
            zmm3_1 = var_298
            var_330.q = zmm2_1.q
            zmm12 = var_330
        else if (r13.d s> 0)
            int128_t* rax_26 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_26
                rax_26 += 4
                zmm0_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* *(&var_130 + r12)
                zmm1_2.d = zmm2_1.d f* *(&var_130:4 + r12)
                zmm3_1[0] = zmm3_1[0] f+ zmm0_2[0].d
                zmm0_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* *(&var_128 + r12)
                zmm4[0].d = zmm4[0].d f+ zmm1_2.d
                zmm1_2.d = zmm2_1.d f* *(&var_100 + r12)
                zmm5[0].d = zmm5[0].d f+ zmm0_2[0].d
                zmm0_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm12[0] = zmm12[0] f+ zmm1_2.d
                r12 += 0xc
                zmm13[0] = zmm13[0] f+ zmm0_2[0].d
                zmm11_1.d = zmm11_1.d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm7.d = var_318[0]:4.d.d f+ zmm13[0]
        zmm14 = var_318[0].d
        zmm6_1.d = var_318[1].d.d f+ zmm11_1.d
        zmm8.d = zmm14.d f+ zmm12[0]
        zmm7.d = zmm7.d f- zmm4[0].d
        zmm6_1.d = zmm6_1.d f- zmm5[0].d
        zmm5 = 0x3f000000
        zmm8.d = zmm8.d f- zmm3_1[0]
        zmm2_1.d = zmm7.d f* zmm7.d
        zmm1_2.d = zmm6_1.d f* zmm6_1.d
        zmm0_2 = zmm8
        zmm0_2[0].d = zmm0_2[0].d f* zmm8.d
        zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
        zmm2_1.d = zmm2_1.d f+ zmm1_2.d
        zmm3_1 = zmm2_1
        zmm4 = _mm_rsqrt_ss(zmm2_1[0].d, zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        zmm4[0].d = zmm4[0].d f* zmm4[0].d
        zmm1_2.d = zmm3_1.d f* zmm4[0].d
        zmm2_1.d = 0.5f f- zmm1_2.d
        zmm4[0].d = zmm4[0].d f* zmm2_1.d
        zmm4[0].d = zmm4[0].d f+ zmm4[0].d
        zmm1_2.d = zmm4.d f* zmm4[0].d
        zmm3_1[0] = zmm3_1[0] f* zmm1_2.d
        zmm5[0].d = 0.5f - zmm3_1[0]
        zmm4[0].d = zmm4[0].d f* zmm5[0].d
        zmm4[0].d = zmm4[0].d f+ zmm4[0].d
        zmm8.d = zmm8.d f* zmm4[0].d
        zmm7.d = zmm7.d f* zmm4[0].d
        zmm6_1.d = zmm6_1.d f* zmm4[0].d
        *arg8 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
        int32_t var_2f4_3 = zmm6_1.d
        zmm1_2.d = zmm10_1.d f- _mm_sqrt_ss(0, zmm15_1.d)[0].d
        arg8[1].d = var_2f4_3
        
        if (not(zmm1_2.d f< zmm9_1.d))
            zmm9_1 = __minss_xmmss_memss(zmm1_2.d, 0x7f7fffff)
        
        zmm1_2 = *arg8
        zmm2_1 = *(arg8 + 4)
        zmm0_2 = zmm1_2
        zmm3_1 = arg8[1].d
        zmm0_2[0].d = zmm0_2[0].d f* zmm10_1[0].d
        zmm1_2.d = zmm1_2.d f* zmm9_1.d
        zmm12[0] = zmm12[0] f- zmm0_2[0].d
        zmm0_2 = zmm2_1
        zmm0_2[0].d = zmm0_2[0].d f* zmm10_1[0].d
        zmm2_1.d = zmm2_1.d f* zmm9_1.d
        zmm13[0] = zmm13[0] f- zmm0_2[0].d
        zmm0_2 = zmm3_1
        zmm0_2[0].d = zmm0_2[0].d f* zmm10_1[0].d
        zmm12[0] = zmm12[0] f+ zmm14.d
        zmm3_1[0] = zmm3_1[0] f* zmm9_1.d
        zmm13[0] = zmm13[0] f+ var_318[0]:4.d
        zmm9_1 ^= data_142d3f780
        zmm11_1.d = zmm11_1.d f- zmm0_2[0].d
        zmm12[0] = zmm12[0] f+ zmm1_2.d
        zmm13[0] = zmm13[0] f+ zmm2_1.d
        zmm11_1.d = zmm11_1.d f+ var_318[1].d
        *arg7 = (_mm_unpacklo_ps(zmm12, zmm13[0].q)).q
        zmm11_1.d = zmm11_1.d f+ zmm3_1[0]
        arg7[1].d = zmm11_1.d
        *rdi_3 = zmm9_1.d

result.b = 1
label_14167988d:
__security_check_cookie(rax_1 ^ &var_378)
return result

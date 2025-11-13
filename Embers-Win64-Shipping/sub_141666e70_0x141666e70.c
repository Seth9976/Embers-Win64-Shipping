// 函数: sub_141666e70
// 地址: 0x141666e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
float zmm3[0x4] = *arg3
float zmm10[0x4] = *(arg1 + 0x1c)
double zmm0[0x2] = arg3[1]
int64_t r12 = 0
uint128_t* rsi = arg4
float var_1f8 = zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
double var_338[0x2] = zmm0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
double var_170[0x2] = data_142d3f7e0
void* var_248 = arg1
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
float var_1d8[0x4]
int128_t* var_210 = &var_1d8
zmm10[0] = zmm10[0] * zmm10[0]
int32_t* var_208 = &var_1f8
float var_1ec = temp0[0]
double temp0_1[0x2] = _mm_cvtps_pd(zmm10[0].q)
float (* var_218)[0x4] = arg2
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
temp0_1[0] = temp0_1[0] - -0x3eb0c6f7a0b5ed8d
float var_1f0 = temp0_2[0]
float temp0_3[0x4] = _mm_cvtpd_ps(temp0_1)
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t var_1f4 = zmm0[0].d
temp0_5[0] = (zmm0 ^ 0x80000000)[0].d
float var_310 = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_1d8 = temp0_8
int32_t rax_3 = *(arg1 + 0x18)
uint128_t zmm6 = zx.o(*(arg1 + 0x10))
int32_t var_128 = rax_3
float var_228[0x4] = temp0_8
int64_t var_130 = zmm6.q
float zmm1[0x4] = *(arg10 + 4)
int32_t var_328 = (*arg10 ^ 0x80000000)[0].d
float var_324 = (zmm1 ^ 0x80000000)[0]
int32_t var_320 = ((*arg10)[1].d ^ 0x80000000)[0].d
int32_t var_30c
int32_t* rax_5
double zmm6_1[0x2]
double zmm9_1[0x2]
double zmm10_1[0x2]
float zmm11_1[0x4]
float zmm15_1[0x4]
rax_5, zmm6_1, zmm9_1, zmm10_1, zmm11_1, zmm15_1 = sub_14170c1c0(&var_218, &var_30c, &var_328)
uint128_t zmm1_1 = var_338[0].d
double zmm0_1[0x2] = zmm6_1
double zmm4[0x2] = var_338[0]:4.d
uint128_t zmm5 = zmm1_1
uint128_t zmm3_1 = var_338[1].d
uint128_t zmm12 = zmm1_1
uint128_t zmm2_1 = zx.o(*rax_5)
int32_t rcx_1 = rax_5[2]
zmm0_1[0].d = zmm0_1[0].d f- zmm2_1.d
int32_t var_2b8 = zmm1_1.d
uint32_t result = zx.d(arg9)
zmm1_1 = zmm6_1
int64_t var_100 = zmm2_1.q
zmm6_1 = zmm4
zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
uint128_t zmm8 = zx.o(0)
zmm5.d = zmm5.d f- zmm0_1[0].d
zmm0_1 = zmm2_1
int32_t var_2b4 = zmm4[0].d
double zmm13[0x2] = zmm4
zmm1_1.d = zmm1_1.d f- _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0].d
uint32_t result_2 = zmm3_1.d
zmm0_1 = rax_3
uint128_t zmm14 = zmm3_1
zmm0_1[0].d = zmm0_1[0].d f- rcx_1
int32_t var_f8 = rcx_1
int64_t var_2f0 = 0
zmm6_1[0].d = zmm6_1[0].d f- zmm1_1.d
float var_2e8 = 1f
uint128_t zmm7
zmm7.d = zmm3_1.d f- zmm0_1[0].d
zmm0_1 = zmm5
zmm0_1[0].d = zmm0_1[0].d f* zmm5.d
zmm2_1.d = zmm6_1.d f* zmm6_1[0].d
zmm1_1.d = zmm7.d f* zmm7.d
zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= zmm15_1[0] || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm1_1 = 0x7f7fffff
int32_t rcx_2 = 0
int32_t var_318 = 0x7f7fffff
zmm15_1 = 0x7f7fffff
int32_t var_314 = 0
uint64_t r14 = zx.q(rdi.b)
char var_347 = 0
char var_348 = rdi.b
int32_t var_2c8
int64_t var_288
uint32_t result_1

if (rdi.b == 0)
    while (true)
        int32_t rax_6 = rcx_2
        rcx_2 += 1
        var_314 = rcx_2
        
        if (rax_6 s>= 0x20)
            result = zx.d(arg9)
        else
            zmm4 = 0x3f000000
            void* rax_7 = var_248
            zmm1_1.d = zmm7.d f* zmm7.d
            zmm0_1 = zmm5
            zmm0_1[0].d = zmm0_1[0].d f* zmm5.d
            zmm2_1.d = zmm6_1.d f* zmm6_1[0].d
            zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm3_1.d = zmm2_1.d
            float temp0_11[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0_1 = temp0_11
            zmm0_1[0].d = zmm0_1[0].d f* temp0_11[0]
            zmm1_1.d = zmm3_1.d f* zmm0_1[0].d
            zmm0_1 = temp0_11
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1[0].d = zmm0_1[0].d f* zmm2_1.d
            temp0_11[0] = temp0_11[0] f+ zmm0_1[0].d
            zmm0_1 = temp0_11
            zmm1_1.d = temp0_11.d f* temp0_11[0]
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm4[0].d = 0.5f f- zmm3_1.d
            zmm0_1[0].d = zmm0_1[0].d f* zmm4[0].d
            temp0_11[0] = temp0_11[0] f+ zmm0_1[0].d
            float var_2e0_1 = temp0_11[0]
            temp0_11[0] = temp0_11[0] f* zmm5.d
            zmm1_1.d = temp0_11.d f* zmm6_1[0].d
            temp0_11[0] = temp0_11[0] f* zmm7.d
            zmm7 = zx.o(*(rax_7 + 0x10))
            int32_t rax_8 = *(rax_7 + 0x18)
            var_2c8 = (temp0_11 ^ 0x80000000)[0].d
            int32_t var_2a8_1 = zmm1_1.d
            uint64_t var_258_1 = zmm7.q
            int32_t var_2c0_1 = (temp0_11 ^ 0x80000000)[0].d
            int32_t var_260_1 = rax_8.d
            int32_t var_2c4_1 = (zmm1_1 ^ 0x80000000).d
            int32_t var_1bc
            int32_t* rax_9
            rax_9, zmm6_1, zmm7, zmm8, zmm9_1, zmm10_1, zmm11_1, zmm12, zmm13, zmm14, zmm15_1 =
                sub_14170c1c0(&var_218, &var_1bc, &var_2c8)
            zmm4 = zmm12
            zmm1_1 = zx.o(*rax_9)
            int32_t rcx_4 = rax_9[2]
            zmm2_1.d = zmm7.d f- zmm1_1.d
            zmm0_1 = zmm1_1
            zmm3_1.d = zmm6_1.d f- _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0].d
            zmm0_1 = rax_8
            zmm0_1[0].d = zmm0_1[0].d f- rcx_4
            zmm4[0].d = zmm4[0].d f- zmm2_1.d
            int32_t var_2a4_1 = zmm2_1.d
            zmm2_1.d = zmm13.d f- zmm3_1.d
            int32_t var_2a0_1 = zmm3_1.d
            int32_t var_2e0_2 = zmm0_1[0].d
            var_328 = zmm4[0].d
            zmm3_1.d = zmm14.d f- zmm0_1[0].d
            int32_t var_324_1 = zmm2_1.d
            zmm0_1 = zmm7
            zmm7 = var_2a8_1
            zmm4[0].d = zmm4[0].d f* zmm15_1[0]
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            zmm2_1.d = zmm2_1.d f* zmm7.d
            var_320 = zmm3_1.d
            uint64_t rcx_6 = r13 * 3
            zmm3_1.d = zmm3_1.d f* zmm11_1[0]
            zmm4[0].d = zmm4[0].d f+ zmm2_1.d
            *(&var_130 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm0_1, zmm6_1[0])).q
            (&var_128)[rcx_6] = var_260_1
            result = rax_9[2]
            zmm4[0].d = zmm4[0].d f+ zmm3_1.d
            *(&var_100 + (rcx_6 << 2)) = zmm1_1.q
            (&var_f8)[rcx_6] = result
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4[0].d f<= zmm10_1[0].d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_6 << 2)) = var_328.q
                *(&var_160:8 + (rcx_6 << 2)) = var_320
                var_188 = r13.d
            label_1416675ce:
                zmm15_1 = var_318
                
                if (r14.b != 0 && not(zmm4[0].d f< zmm9_1[0].d))
                    zmm4[0].d = zmm4[0].d f* zmm4[0].d
                    zmm4[0].d = zmm4[0].d f+ 9.99999997e-07f
                    rdi.b = zmm4[0].d f>= zmm15_1[0]
            else
                zmm3_1 = *(rsi + 4)
                zmm5 = *rsi
                zmm0_1 = zmm3_1
                zmm6_1 = *(rsi + 8)
                zmm2_1.d = zmm5.d f* zmm15_1[0]
                zmm0_1[0].d = zmm0_1[0].d f* zmm7.d
                zmm1_1.d = zmm6_1.d f* zmm11_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm9_1[0].d)
                    result.b = 0
                    goto label_14166804d
                
                zmm1_1 = zmm8
                zmm4[0].d = zmm4[0].d f- zmm10_1[0].d
                zmm4[0].d = zmm4[0].d f/ zmm2_1.d
                zmm8.d = zmm8.d f- zmm4[0].d
                
                if (zmm8.d f<= zmm1_1.d)
                    goto label_1416675ce
                
                if (zmm8.d f> arg5)
                    result.b = 0
                    goto label_14166804d
                
                zmm1_1 = zx.o(var_2b8.q)
                zmm13 = zmm3_1
                zmm0_1 = zmm1_1
                zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                var_288 = zmm1_1.q
                zmm12.d = zmm5.d f* zmm8.d
                r13 = zx.q(r13.d + 1)
                result_1 = result_2
                zmm13[0].d = zmm13[0].d f* zmm8.d
                var_188 = r13.d
                zmm12.d = zmm12.d f+ var_338[0].d
                zmm14.d = zmm6_1.d f* zmm8.d
                var_348 = 0
                zmm13[0].d = zmm13[0].d f+ var_338[0]:4.d
                var_2f0.d = zmm15_1[0]
                zmm14.d = zmm14.d f+ var_338[1].d
                zmm15_1 = 0x7f7fffff
                zmm3_1.d = zmm12.d f- zmm1_1.d
                var_2b8 = zmm12.d
                zmm13[0].d = zmm13[0].d f- zmm0_1[0].d
                int32_t var_2b4_1 = zmm13[0].d
                zmm0_1 = var_160.d
                zmm2_1.d = zmm14.d f- result_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm3_1.d
                result_2 = zmm14.d
                var_2f0:4.d = zmm7.d
                zmm1_1.d = var_160:4.d.d f+ zmm13[0].d
                var_2e8 = zmm11_1[0]
                var_318 = 0x7f7fffff
                var_160.d = zmm0_1[0].d
                zmm0_1 = var_160:8.d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1.d
                var_160:4.d = zmm1_1.d
                zmm1_1.d = var_160:0xc.d.d f+ zmm3_1.d
                var_160:8.d = zmm0_1[0].d
                zmm0_1 = var_150_1.d
                var_160:0xc.d = zmm1_1.d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm13[0].d
                zmm1_1.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_1[0].d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1.d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm3_1.d
                zmm1_1.d = var_150_1:0xc.d.d f+ zmm13[0].d
                var_150_1:8.d = zmm0_1[0].d
                zmm0_1 = var_140_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1.d
                zmm1_1.d = zmm12.d f- var_2a4_1
                zmm2_1.d = zmm13.d f- var_2a0_1
                var_140_1 = zmm0_1[0].d
                zmm0_1 = zmm14
                zmm0_1[0].d = zmm0_1[0].d f- var_2e0_2
                *(&var_160 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_6 << 2)) = zmm0_1[0].d
            
            uint32_t rdx_8
            
            if (rdi.b != 0)
                int64_t* rax_23
                rax_23, zmm8, zmm9_1, zmm10_1, zmm12, zmm13, zmm14, zmm15_1 =
                    sub_1416f4530(&var_228, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rdx_8 = zx.d(var_347)
                zmm1_1 = zx.o(*rax_23)
                zmm0_1 = zmm1_1
                zmm7 = rax_23[1].d
                result = zx.d(arg9)
                uint32_t var_2d8_1 = zmm1_1.d
                zmm6_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                zmm5 = var_2d8_1
            label_141667a13:
                zmm11_1 = 0x3eb0c6f7a0b5ed8d
            else
                int32_t rcx_7 = r13.d
                int32_t rax_15
                
                if (rcx_7 == 1)
                    int64_t rax_19 = sx.q(var_184)
                    int64_t rcx_14 = rax_19 * 3
                    *(&var_170 + (rax_19 << 2)) = 0x3f800000
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
                    rax_17, zmm8, zmm9_1, zmm10_1, zmm12, zmm13, zmm14, zmm15_1 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_17)
                    rax_15 = rax_17[1].d
                else if (rcx_7 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_16
                    rax_16, zmm8, zmm9_1, zmm10_1, zmm12, zmm13, zmm14, zmm15_1 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_16)
                    rax_15 = rax_16[1].d
                else
                    int32_t var_304_1 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm9_1, zmm9_1[0])
                    rax_15 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                int64_t var_300_1 = zmm0_1.q
                int64_t rbx_1 = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                r14 = r10_1 * 3
                int64_t rsi_1 = r9_4 * 3
                int32_t r8_5 = *(&var_160:8 + (r15_1 << 2))
                zmm5 = var_300_1.d
                zmm6_1 = var_300_1:4.d
                zmm7 = rax_15
                var_160:0xc.q = *(&var_160 + (r14 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                var_160.q = *(&var_160 + (r15_1 << 2))
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[1].d = (*(&var_170 + (r9_4 << 2))).d
                var_170[0].d = (*(&var_170 + (r11_1 << 2)))[0].d
                var_170[0]:4.d = (*(&var_170 + (r10_1 << 2))).d
                var_170[1]:4.d = (*(&var_170 + (rdi_1 << 2))).d
                var_150_1:4.d = *(&var_160:8 + (r14 << 2))
                int32_t rdx_7 = (&var_128)[r14]
                var_140_1 = *(&var_160:8 + (rsi_1 << 2))
                int32_t rcx_16 = (&var_128)[rsi_1]
                var_140_1 = *(&var_160:8 + (rbx_1 << 2))
                int32_t rax_21 = (&var_128)[rbx_1]
                var_124_1.q = *(&var_130 + (r14 << 2))
                zmm2_1 = zx.o(*(&var_100 + (r14 << 2)))
                int128_t var_114_1
                var_114_1:8.q = *(&var_130 + (rbx_1 << 2))
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = *(&var_130 + (rsi_1 << 2))
                zmm1_1 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_130 = *(&var_130 + (r15_1 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_7
                rdx_8 = (&var_f8)[r14]
                var_114_1:4.d = rcx_16
                int32_t rcx_17 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_21
                int32_t rax_22 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_f4_1:0xc.q = zmm1_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm6_1.d f* zmm6_1[0].d
                zmm0_1 = zmm5
                var_f8 = (&var_f8)[r15_1]
                zmm1_1.d = zmm7.d f* zmm7.d
                var_f4_1:8.d = rdx_8
                zmm0_1[0].d = zmm0_1[0].d f* zmm5.d
                var_e4_1:4.d = rcx_17
                var_100 = zmm3_1.q
                int32_t var_d4_1 = rax_22
                zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                zmm1_1 = var_310
                result = zx.d(arg9)
                rdi.b = zmm1_1.d f> zmm2_1.d
                bool cond:4_1 = zmm2_1.d f>= zmm15_1[0]
                var_318 = zmm2_1.d
                zmm15_1 = zmm2_1
                rdx_8.b = cond:4_1
                var_347 = rdx_8.b
                
                if (result.b == 0)
                    goto label_141667a13
                
                if (rdi.b == 0)
                    goto label_141667a21
                
                zmm11_1 = 0x3eb0c6f7a0b5ed8d
                
                if (zmm8.d f!= zmm9_1[0].d)
                    goto label_141667a1c
                
                if (not(_mm_cvtps_pd(zmm2_1.q)[0] f<= zmm11_1[0].q)
                        && not(_mm_cvtps_pd(zmm1_1.q)[0] f<= zmm11_1[0].q) && r13.d s< 4)
                    r14.b = 1
                    rdi.b = 0
                    var_348 = 1
                    goto label_141667a27
            
        label_141667a1c:
            
            if (rdi.b != 0)
                rcx_2 = var_314
            else
            label_141667a21:
                r14 = zx.q(var_348)
            label_141667a27:
                zmm11_1 = 0x3eb0c6f7a0b5ed8d
                rcx_2 = var_314
                
                if (rdx_8.b == 0)
                    rsi = arg4
                    continue
        
        zmm1_1 = 0x7f7fffff
        break

bool cond:0_1 = zmm8.d f<= zmm9_1[0].d
int32_t* rdi_3 = arg6
*rdi_3 = zmm8.d

if (not(cond:0_1))
    zmm3_1 = zmm9_1
    *arg8 = var_2f0
    arg8[2] = var_2e8
    
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
            zmm9_1[0].d = zmm9_1[0].d f+ zmm0_1[0].d
            zmm3_1.d = zmm3_1.d f+ zmm1_1.d
            zmm9_1[0].d = zmm9_1[0].d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm0_1 = zmm8
    zmm0_1[0].d = zmm0_1[0].d f* *arg4
    zmm1_1.d = zmm8.d f* arg4[1]
    zmm8.d = zmm8.d f* arg4[2]
    zmm0_1[0].d = zmm0_1[0].d f+ var_338[0].d
    zmm1_1.d = zmm1_1.d f+ var_338[0]:4.d
    zmm8.d = zmm8.d f+ var_338[1].d
    zmm0_1[0].d = zmm0_1[0].d f+ zmm9_1[0].d
    zmm1_1.d = zmm1_1.d f+ zmm3_1.d
    zmm8.d = zmm8.d f+ zmm9_1[0].d
    uint32_t var_304_2 = zmm8.d
    *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
    arg7[1].d = var_304_2
else if (result.b != 0)
    double temp0_21[0x2]
    
    if (not(zmm10_1[0].d f<= zmm9_1[0].d))
        temp0_21 = _mm_cvtps_pd(zmm15_1[0].q)
    
    if (zmm10_1[0].d f<= zmm9_1[0].d || temp0_21[0] f<= zmm11_1[0].q || zmm15_1[0] f>= zmm1_1.d)
        var_170[0] = 0
        var_170[1] = 0
        var_338[0] = 0
        var_338[1] = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_338[1]:4.d s< 8)
            sub_14083ad30(&var_338, 8)
        
        uint128_t zmm0_2
        int32_t rax_40
        
        if (var_314 == 0)
            int32_t var_304_5 = 0x3f800000
            rax_40 = 0x3f800000
            *rdi_3 = (zmm10_1 ^ data_142d3f780).d
            zmm0_2 = _mm_unpacklo_ps(zmm9_1, zmm9_1[0])
        label_141667fd5:
            *arg8 = zmm0_2.q
            arg8[2] = rax_40
            zmm0_2.d = zmm10_1.d f* *arg8
            zmm10_1[0].d = zmm10_1[0].d f* arg8[2]
            zmm1_1.d = zmm10_1.d f* arg8[1]
            zmm10_1[0].d = zmm10_1[0].d f+ var_128
            zmm0_2.d = zmm0_2.d f+ var_130.d
            zmm1_1.d = zmm1_1.d f+ var_130:4.d
            result = zmm10_1[0].d
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1_1.q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_170[1].d)
                    int32_t rax_33 = (rdi_4 + 1).d
                    var_170[1].d = rax_33
                    
                    if (rax_33 s> var_170[1]:4.d)
                        sub_14083a7e0(&var_170)
                    
                    double rcx_23 = var_170[0]
                    int64_t rdx_11 = rdi_4 * 3
                    int32_t rax_34 = *(&var_128 + r12)
                    zmm1_1.d = zmm13.d f+ *(&var_100:4 + r12)
                    *(rcx_23 i+ (rdx_11 << 2)) = *(&var_130 + r12)
                    zmm0_2.d = zmm12.d f+ *(&var_100 + r12)
                    *(rcx_23 i+ (rdx_11 << 2) + 8) = rax_34
                    int64_t rdi_5 = sx.q(var_338[1].d)
                    int32_t var_324_2 = zmm1_1.d
                    var_328 = zmm0_2.d
                    zmm0_2.d = zmm14.d f+ *(&var_f8 + r12)
                    int32_t rax_35 = (rdi_5 + 1).d
                    var_338[1].d = rax_35
                    var_320 = zmm0_2.d
                    
                    if (rax_35 s> var_338[1]:4.d)
                        sub_14083a7e0(&var_338)
                    
                    double rcx_25 = var_338[0]
                    int64_t rdx_13 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_25 i+ (rdx_13 << 2)) = var_328.q
                    *(rcx_25 i+ (rdx_13 << 2) + 8) = var_320
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_218 = &var_1d8
            float (* var_210_1)[0x4] = arg2
            int128_t* var_208_1 = arg3
            int32_t rax_39
            rax_39, zmm10_1 = sub_1415581e0(&var_170, &var_338, &var_248, &var_218, &var_310, 
                &var_328, &var_288, &var_228)
            rax_40 = var_320
            
            if (rax_39 == 2)
                *rdi_3 = (zmm10_1 ^ data_142d3f780).d
                zmm0_2 = zx.o(var_328.q)
                goto label_141667fd5
            
            *arg8 = var_328.q
            zmm0_2.d = (var_310 ^ data_142d3f780).d f- zmm10_1[0].d
            arg8[2] = rax_40
            result = result_1
            *rdi_3 = zmm0_2.d
            zmm0_2 = zx.o(var_288)
        double rcx_27 = var_338[0]
        *arg7 = zmm0_2.q
        arg7[1].d = result
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        double rcx_28 = var_170[0]
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    else
        zmm3_1 = zmm9_1
        zmm4 = zmm9_1
        *arg8 = var_2f0
        zmm5 = zmm9_1
        arg8[2] = var_2e8
        zmm11_1 = zmm9_1
        zmm12 = zmm9_1
        zmm13 = zmm9_1
        
        if (rcx_2 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            zmm0_1 = zmm1_1
            int32_t rax_30 = var_128
            zmm4 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            int32_t rax_31 = var_f8
            zmm0_1 = zmm2_1
            zmm5 = rax_30
            zmm12 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            zmm13 = rax_31
            zmm3_1 = zmm1_1.d
            var_2c8.q = zmm2_1.q
            zmm11_1 = var_2c8
        else if (r13.d s> 0)
            int128_t* rax_29 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_29
                rax_29 += 4
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_130 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_130:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_128 + r12)
                zmm4[0].d = zmm4[0].d f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_100 + r12)
                zmm5.d = zmm5.d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm11_1[0] = zmm11_1[0] f+ zmm1_1.d
                r12 += 0xc
                zmm12.d = zmm12.d f+ zmm0_1[0].d
                zmm13[0].d = zmm13[0].d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm8.d = var_338[0].d.d f+ zmm11_1[0]
        zmm14 = var_338[1].d
        zmm7.d = var_338[0]:4.d.d f+ zmm12.d
        zmm6_1 = zmm14
        zmm6_1[0].d = zmm6_1[0].d f+ zmm13[0].d
        zmm8.d = zmm8.d f- zmm3_1.d
        zmm7.d = zmm7.d f- zmm4[0].d
        zmm6_1[0].d = zmm6_1[0].d f- zmm5.d
        zmm0_1 = zmm8
        zmm0_1[0].d = zmm0_1[0].d f* zmm8.d
        zmm2_1.d = zmm7.d f* zmm7.d
        zmm1_1.d = zmm6_1.d f* zmm6_1[0].d
        zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        zmm4 = _mm_rsqrt_ss(zmm2_1[0].d, zmm2_1.d)
        zmm3_1.d = zmm2_1.d f* 0.5f
        zmm4[0].d = zmm4[0].d f* zmm4[0].d
        zmm1_1.d = zmm3_1.d f* zmm4[0].d
        zmm2_1.d = 0.5f f- zmm1_1.d
        zmm4[0].d = zmm4[0].d f* zmm2_1.d
        zmm4[0].d = zmm4[0].d f+ zmm4[0].d
        zmm1_1.d = zmm4.d f* zmm4[0].d
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm5.d = 0.5f f- zmm3_1.d
        zmm4[0].d = zmm4[0].d f* zmm5.d
        zmm4[0].d = zmm4[0].d f+ zmm4[0].d
        zmm8.d = zmm8.d f* zmm4[0].d
        zmm7.d = zmm7.d f* zmm4[0].d
        zmm6_1[0].d = zmm6_1[0].d f* zmm4[0].d
        *arg8 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
        zmm0_1 = _mm_sqrt_ss(0, zmm15_1[0])
        zmm10_1[0].d = zmm10_1[0].d f- zmm0_1[0].d
        arg8[2] = zmm6_1[0].d
        
        if (not(zmm10_1[0].d f< zmm9_1[0].d))
            zmm9_1 = __minss_xmmss_memss(zmm10_1[0].d, 0x7f7fffff)
        
        zmm14.d = zmm14.d f+ zmm13[0].d
        zmm1_1.d = var_338[0].d.d f+ zmm11_1[0]
        zmm2_1.d = var_338[0]:4.d.d f+ zmm12.d
        zmm9_1[0].d = zmm9_1[0].d f* *arg8
        zmm1_1.d = zmm1_1.d f+ zmm9_1[0].d
        zmm9_1[0].d = zmm9_1[0].d f* arg8[1]
        zmm2_1.d = zmm2_1.d f+ zmm9_1[0].d
        zmm0_1 = zmm9_1
        zmm0_1[0].d = zmm0_1[0].d f* arg8[2]
        zmm9_1 ^= data_142d3f780
        zmm14.d = zmm14.d f+ zmm0_1[0].d
        *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
        arg7[1].d = zmm14.d
        *rdi_3 = zmm9_1[0].d

result.b = 1
label_14166804d:
__security_check_cookie(rax_1 ^ &var_388)
return result

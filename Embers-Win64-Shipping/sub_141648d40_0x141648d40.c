// 函数: sub_141648d40
// 地址: 0x141648d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t r12 = 0
uint128_t* rsi = arg4
int32_t r10 = 0
float zmm0[0x4] = *(*(arg1 + 0x10) + 0x2c)
int32_t var_2f4 = 0
uint32_t zmm11[0x4]

if (zmm0[0] == 0f)
    zmm11 = zx.o(0)
else
    zmm11 = __andps_xmmxud_memxud(*(arg1 + 0x28), data_142d3f770)
    zmm11[0] = zmm11[0] f* zmm0[0]

float zmm3[0x4] = *arg3
float zmm2[0x4] = (*arg2)[0xb]
zmm0 = arg3[1]
zmm2[0] = zmm2[0] f+ zmm11[0]
float var_358[0x4] = zmm0
float var_218 = zmm3[0]
int32_t var_188 = 0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
float (* var_248)[0x4] = arg2
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
float var_170[0x4] = data_142d3f7e0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
void* var_298 = arg1
float var_2f0 = zmm2[0]
zmm2[0] = zmm2[0] * zmm2[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
double temp0_3[0x2] = _mm_cvtps_pd(zmm2[0].q)
float var_1d8[0x4]
float (* var_240)[0x4] = &var_1d8
int32_t* var_238 = &var_218
float var_20c = temp0_2[0]
temp0_3[0] = temp0_3[0] + 9.9999999999999995e-07
float temp0_4[0x4] = _mm_cvtpd_ps(temp0_3)
double zmm1[0x2] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_2f8 = temp0_4[0]
float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float var_214 = temp0_6[0]
temp0_7[0] = (temp0_6 ^ 0x80000000)[0]
int32_t var_210 = zmm1[0].d
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
temp0_8[0] = (zmm1 ^ 0x80000000)[0].d
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_9[0] = temp0_2[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
float var_258[0x4] = temp0_10
var_1d8 = temp0_10
int64_t var_2c8
int128_t zmm6 = sub_14170aa90(&var_298, &var_2c8, arg10)
int128_t zmm1_1 = arg10[1] ^ zmm6
int64_t var_130 = var_2c8
int32_t var_344 = zmm1_1.d
int32_t var_348 = (*arg10 ^ zmm6).d
uint128_t zmm0_1 = arg10[2] ^ zmm6
int32_t var_2c0
int32_t var_128 = var_2c0
int32_t var_340 = zmm0_1.d
void var_328
int32_t* rax_5
uint128_t zmm9
uint128_t zmm11_1
uint128_t zmm13_1
rax_5, zmm9, zmm11_1, zmm13_1 = sub_1417105f0(&var_248, &var_328, &var_348)
uint128_t zmm6_1 = zx.o(0)
uint128_t zmm5 = var_358[0]
uint128_t zmm3_1 = var_358[1]
uint128_t zmm2_1 = zx.o(*rax_5)
int32_t rcx_2 = rax_5[2]
uint128_t zmm0_2
zmm0_2.d = var_2c8.d.d f- zmm2_1.d
uint128_t zmm4 = var_358[2]
uint128_t zmm1_2 = var_2c8:4.d
uint32_t result = zx.d(arg9)
uint128_t zmm12 = zmm5
int64_t var_100 = zmm2_1.q
uint128_t zmm14 = zmm3_1
uint128_t zmm7
zmm7.d = zmm5.d f- zmm0_2.d
int32_t var_2b8 = zmm5.d
uint128_t zmm15 = zmm4
zmm1_2.d = zmm1_2.d f- _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
int32_t var_2b4 = zmm3_1.d
zmm0_2.d = var_2c0.d f- rcx_2
uint32_t result_2 = zmm4.d
int32_t var_f8 = rcx_2
uint128_t zmm8
zmm8.d = zmm3_1.d f- zmm1_2.d
int64_t var_308 = 0
int32_t var_300 = 0x3f800000
uint128_t zmm10
zmm10.d = zmm4.d f- zmm0_2.d
zmm0_2.d = zmm7.d f* zmm7.d
zmm2_1.d = zmm8.d f* zmm8.d
zmm1_2.d = zmm10.d f* zmm10.d
zmm2_1.d = zmm2_1.d f+ zmm0_2.d
zmm2_1.d = zmm2_1.d f+ zmm1_2.d
int32_t rdi

if (zmm2_1.d f>= var_2f8 || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm2_1 = 0x7f7fffff
int32_t rcx_3 = 0
float var_364 = 3.40282347e+38f
zmm1_2 = 0x7f7fffff
int32_t var_334 = 0
uint64_t r14 = zx.q(rdi.b)
char var_360 = 0
char var_368 = rdi.b
int32_t var_330
int32_t var_2e8
int64_t var_290
uint32_t result_1

if (rdi.b == 0)
    while (true)
        int32_t rax_6 = rcx_3
        rcx_3 += 1
        var_334 = rcx_3
        
        if (rax_6 s>= 0x20)
            zmm1_2 = var_364
            result = zx.d(arg9)
        else
            void* rax_7 = var_298
            zmm2_1.d = zmm7.d f* zmm7.d
            zmm0_2.d = zmm8.d f* zmm8.d
            void* rcx_4 = *(rax_7 + 0x10)
            zmm1_2.d = zmm10.d f* zmm10.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            zmm4 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
            zmm3_1.d = zmm2_1.d f* 0.5f
            zmm0_2.d = zmm4.d f* zmm4.d
            zmm1_2.d = zmm3_1.d f* zmm0_2.d
            zmm2_1.d = 0.5f f- zmm1_2.d
            zmm0_2.d = zmm4.d f* zmm2_1.d
            zmm4.d = zmm4.d f+ zmm0_2.d
            zmm1_2.d = zmm4.d f* zmm4.d
            zmm3_1.d = zmm3_1.d f* zmm1_2.d
            int32_t var_31c_1 = (*(rax_7 + 0x2c)).d
            zmm1_2 = *(rax_7 + 0x30)
            zmm5.d = 0.5f f- zmm3_1.d
            zmm3_1 = *(rcx_4 + 0x1c)
            int32_t var_338_1 = zmm1_2.d
            zmm0_2.d = zmm4.d f* zmm5.d
            zmm5 = *(rcx_4 + 0x24)
            zmm4.d = zmm4.d f+ zmm0_2.d
            zmm0_2 = *(rax_7 + 0x28)
            int32_t var_32c_1 = zmm0_2.d
            zmm7.d = zmm7.d f* zmm4.d
            zmm8.d = zmm8.d f* zmm4.d
            zmm2_1.d = zmm0_2.d f* zmm7.d
            zmm10.d = zmm10.d f* zmm4.d
            zmm2_1.d = zmm2_1.d f* zmm3_1.d
            zmm0_2.d = (*(rax_7 + 0x2c)).d f* zmm8.d
            var_330 = zmm4.d
            zmm4 = *(rcx_4 + 0x20)
            zmm0_2.d = zmm0_2.d f* zmm4.d
            zmm1_2.d = zmm1_2.d f* zmm10.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm1_2.d = zmm1_2.d f* zmm5.d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            int32_t* rax_8
            int32_t r10_1
            
            if (zmm2_1.d f< zmm9.d)
                r10_1 = r10 | 2
                int32_t var_1f0_1 = *(rcx_4 + 0x18)
                uint64_t var_1f8
                rax_8 = &var_1f8
                var_1f8 = *(rcx_4 + 0x10)
            else
                zmm0_2 = *(rcx_4 + 0x28)
                int32_t var_230
                rax_8 = &var_230
                zmm3_1.d = zmm3_1.d f* zmm0_2.d
                r10_1 = r10 | 1
                zmm4.d = zmm4.d f* zmm0_2.d
                zmm3_1.d = zmm3_1.d f+ *(rcx_4 + 0x10)
                zmm5.d = zmm5.d f* zmm0_2.d
                zmm4.d = zmm4.d f+ *(rcx_4 + 0x14)
                zmm5.d = zmm5.d f+ *(rcx_4 + 0x18)
                var_230 = zmm3_1.d
                int32_t var_22c_1 = zmm4.d
                int32_t var_228_1 = zmm5.d
            
            zmm1_2 = zx.o(*rax_8)
            int32_t rax_10 = rax_8[2]
            int32_t rcx_6 = r10_1 & 0xfffffffd
            zmm0_2.d = var_32c_1.d f* zmm1_2.d
            int32_t var_32c_2 = zmm0_2.d
            
            if ((r10_1.b & 2) == 0)
                rcx_6 = r10_1
            
            int32_t rdx_3 = rcx_6 & 0xfffffffe
            zmm1_2.d = var_31c_1.d f* _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
            
            if ((rcx_6.b & 1) == 0)
                rdx_3 = rcx_6
            
            zmm0_2.d = var_338_1.d f* rax_10
            int32_t var_31c_2 = zmm1_2.d
            int32_t var_338_2 = zmm0_2.d
            int32_t var_2c0_1 = zmm0_2.d
            int32_t var_2e4_1 = (zmm8 ^ 0x80000000).d
            var_2e8 = (zmm7 ^ 0x80000000).d
            int32_t var_2e0_1 = (zmm10 ^ 0x80000000).d
            void var_1bc
            int32_t* rax_13
            rax_13, zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                sub_1417105f0(&var_248, &var_1bc, &var_2e8)
            zmm5 = var_32c_2
            zmm1_2 = zx.o(*rax_13)
            int32_t rcx_8 = rax_13[2]
            zmm2_1.d = zmm5.d f- zmm1_2.d
            zmm3_1.d = var_31c_2.d f- _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
            zmm4.d = zmm12.d f- zmm2_1.d
            zmm0_2.d = var_338_2.d f- rcx_8
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            int32_t var_32c_3 = zmm2_1.d
            zmm2_1.d = zmm14.d f- zmm3_1.d
            int32_t var_338_3 = zmm0_2.d
            var_330 = zmm3_1.d
            uint64_t rcx_10 = r13 * 3
            var_348 = zmm4.d
            zmm3_1.d = zmm15.d f- zmm0_2.d
            *(&var_130 + (rcx_10 << 2)) = (_mm_unpacklo_ps(zmm5, var_31c_2.q)).q
            zmm0_2 = zx.o(*rax_13)
            (&var_128)[rcx_10] = var_2c0_1
            result = rax_13[2]
            *(&var_100 + (rcx_10 << 2)) = zmm0_2.q
            (&var_f8)[rcx_10] = result
            int32_t var_344_1 = zmm2_1.d
            var_340 = zmm3_1.d
            zmm5.d = zmm7.d f* zmm4.d
            zmm0_2.d = zmm8.d f* zmm2_1.d
            zmm1_2.d = zmm10.d f* zmm3_1.d
            zmm5.d = zmm5.d f+ zmm0_2.d
            zmm5.d = zmm5.d f+ zmm1_2.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm5.d f<= zmm13_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_10 << 2)) = var_348.q
                *(&var_160:8 + (rcx_10 << 2)) = var_340
                var_188 = r13.d
            label_1416495db:
                
                if (r14.b != 0 && not(zmm5.d f< zmm9.d))
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm5.d = zmm5.d f+ 9.99999997e-07f
                    rdi.b = zmm5.d f>= var_364
            else
                zmm3_1 = *(rsi + 4)
                zmm4 = *rsi
                zmm2_1.d = zmm4.d f* zmm7.d
                zmm0_2.d = zmm3_1.d f* zmm8.d
                zmm1_2.d = (*(rsi + 8)).d f* zmm10.d
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                
                if (zmm2_1.d f>= zmm9.d)
                    result.b = 0
                    goto label_14164a091
                
                zmm1_2 = zmm6_1
                zmm0_2.d = zmm5.d f- zmm13_1.d
                zmm0_2.d = zmm0_2.d f/ zmm2_1.d
                zmm6_1.d = zmm6_1.d f- zmm0_2.d
                
                if (zmm6_1.d f<= zmm1_2.d)
                    goto label_1416495db
                
                if (zmm6_1.d f> arg5)
                    result.b = 0
                    goto label_14164a091
                
                zmm1_2 = zx.o(var_2b8.q)
                zmm15 = *(rsi + 8)
                zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                r13 = zx.q(r13.d + 1)
                var_290 = zmm1_2.q
                zmm12.d = zmm4.d f* zmm6_1.d
                result_1 = result_2
                zmm14.d = zmm3_1.d f* zmm6_1.d
                var_188 = r13.d
                zmm12.d = zmm12.d f+ var_358[0]
                zmm15.d = zmm15.d f* zmm6_1.d
                var_368 = 0
                zmm14.d = zmm14.d f+ var_358[1]
                var_308.d = zmm7.d
                zmm15.d = zmm15.d f+ var_358[2]
                var_2b8 = zmm12.d
                zmm3_1.d = zmm12.d f- zmm1_2.d
                var_308:4.d = zmm8.d
                zmm4.d = zmm14.d f- zmm0_2.d
                int32_t var_2b4_1 = zmm14.d
                zmm2_1.d = zmm15.d f- result_1
                zmm0_2.d = var_160.d.d f+ zmm3_1.d
                result_2 = zmm15.d
                var_300 = zmm10.d
                zmm1_2.d = var_160:4.d.d f+ zmm4.d
                var_160.d = zmm0_2.d
                zmm0_2.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_2.d
                zmm1_2.d = var_160:0xc.d.d f+ zmm3_1.d
                var_160:8.d = zmm0_2.d
                var_160:0xc.d = zmm1_2.d
                zmm0_2.d = var_150_1.d.d f+ zmm4.d
                zmm1_2.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_2.d
                zmm0_2 = var_150_1:8.d
                var_150_1:4.d = zmm1_2.d
                zmm0_2.d = zmm0_2.d f+ zmm3_1.d
                zmm1_2.d = var_150_1:0xc.d.d f+ zmm4.d
                var_150_1:8.d = zmm0_2.d
                zmm0_2.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_2.d
                zmm1_2.d = zmm12.d f- var_32c_3
                zmm2_1.d = zmm14.d f- var_330
                var_140_1 = zmm0_2.d
                zmm0_2.d = zmm15.d f- var_338_3
                *(&var_160 + (rcx_10 << 2)) = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
                var_364 = 3.40282347e+38f
                *(&var_160:8 + (rcx_10 << 2)) = zmm0_2.d
            
            uint32_t rdx_11
            
            if (rdi.b != 0)
                int64_t* rax_27
                rax_27, zmm6_1, zmm9, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                    sub_1416f4530(&var_258, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rdx_11 = zx.d(var_360)
                zmm1_2 = zx.o(*rax_27)
                zmm0_2 = zmm1_2
                zmm10 = rax_27[1].d
                result = zx.d(arg9)
                zmm7 = zmm1_2.d
                zmm1_2 = var_364
                zmm8 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
            else
                int32_t rcx_11 = r13.d
                int32_t rax_19
                
                if (rcx_11 == 1)
                    int64_t rax_23 = sx.q(var_184)
                    int64_t rcx_18 = rax_23 * 3
                    var_170[rax_23] = 0x3f800000
                    zmm0_2 = zx.o(*(&var_160 + (rcx_18 << 2)))
                    rax_19 = *(&var_160:8 + (rcx_18 << 2))
                else if (rcx_11 == 2)
                    void var_198
                    uint64_t* rax_22
                    rax_22, zmm6_1, zmm9 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_22)
                    rax_19 = rax_22[1].d
                else if (rcx_11 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_21
                    rax_21, zmm6_1, zmm9, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_21)
                    rax_19 = rax_21[1].d
                else if (rcx_11 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_20
                    rax_20, zmm6_1, zmm9, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_20)
                    rax_19 = rax_20[1].d
                else
                    int32_t var_320_1 = 0
                    zmm0_2 = _mm_unpacklo_ps(zmm9, zmm9.q)
                    rax_19 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_2 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                uint64_t var_318_1 = zmm0_2.q
                int64_t rbx_1 = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                r14 = r10_2 * 3
                int64_t rsi_1 = r9_4 * 3
                int32_t rdx_9 = *(&var_160:8 + (r14 << 2))
                int32_t rcx_19 = *(&var_160:8 + (rsi_1 << 2))
                int32_t r8_6 = *(&var_160:8 + (r15_1 << 2))
                zmm7 = var_318_1.d
                zmm8 = var_318_1:4.d
                int32_t rax_24 = *(&var_160:8 + (rbx_1 << 2))
                zmm10 = rax_19
                var_160:0xc.q = *(&var_160 + (r14 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                zmm0_2 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                zmm1_2 = var_170[r10_2]
                var_160.q = *(&var_160 + (r15_1 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[2] = var_170[r9_4].d
                zmm2_1 = zx.o(*(&var_130 + (r14 << 2)))
                var_170[0] = zmm0_2.d
                zmm0_2 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_2.d
                zmm1_2 = zx.o(*(&var_130 + (rsi_1 << 2)))
                var_170[3] = zmm3_1.d
                var_150_1:4.d = rdx_9
                int32_t rdx_10 = (&var_128)[r14]
                var_140_1 = rcx_19
                int32_t rcx_20 = (&var_128)[rsi_1]
                var_140_1 = rax_24
                int32_t rax_25 = (&var_128)[rbx_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_2.q
                zmm0_2 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = zmm1_2.q
                zmm1_2 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_130 = *(&var_130 + (r15_1 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_10
                rdx_11 = (&var_f8)[r14]
                var_114_1:4.d = rcx_20
                int32_t rcx_21 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_25
                int32_t rax_26 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_2.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_6
                zmm2_1.d = zmm8.d f* zmm8.d
                var_f8 = (&var_f8)[r15_1]
                var_f4_1:0xc.q = zmm1_2.q
                zmm0_2.d = zmm7.d f* zmm7.d
                var_f4_1:8.d = rdx_11
                zmm1_2.d = zmm10.d f* zmm10.d
                var_e4_1:4.d = rcx_21
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                var_100 = zmm3_1.q
                zmm3_1 = var_2f8
                int32_t var_d4_1 = rax_26
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                result = zx.d(arg9)
                rdi.b = zmm3_1.d f> zmm2_1.d
                bool cond:6_1 = zmm2_1.d f>= var_364
                var_364 = zmm2_1.d
                zmm1_2 = zmm2_1
                rdx_11.b = cond:6_1
                var_360 = rdx_11.b
                
                if (result.b != 0)
                    if (rdi.b == 0)
                        goto label_141649a2e
                    
                    if (zmm6_1.d f!= zmm9.d)
                    label_141649a26:
                        zmm1_2 = zmm2_1
                        goto label_141649a29
                    
                    zmm1_2 = 0x3eb0c6f7a0b5ed8d
                    zmm0_2 = _mm_cvtps_pd(zmm2_1.q)
                    
                    if (zmm0_2.q f<= zmm1_2.q)
                        goto label_141649a26
                    
                    zmm0_2 = _mm_cvtps_pd(zmm3_1.q)
                    
                    if (zmm0_2.q f<= zmm1_2.q || r13.d s>= 4)
                        goto label_141649a26
                    
                    r14.b = 1
                    rdi.b = 0
                    var_368 = 1
                    goto label_141649a34
            
        label_141649a29:
            
            if (rdi.b != 0)
                rcx_3 = var_334
            else
            label_141649a2e:
                r14 = zx.q(var_368)
            label_141649a34:
                rcx_3 = var_334
                
                if (rdx_11.b != 0)
                    zmm1_2 = var_364
                else
                    r10 = rdx_3
                    rsi = arg4
                    continue
        
        zmm2_1 = 0x7f7fffff
        zmm5 = var_358[0]
        break

int32_t* rdi_3 = arg6
*rdi_3 = zmm6_1.d

if (not(zmm6_1.d f<= zmm9.d))
    zmm4 = zmm9
    zmm3_1 = zmm9
    *arg8 = var_308
    arg8[1].d = var_300
    
    if (r13.d s> 0)
        float (* rcx_23)[0x4] = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_30 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_23
            rcx_23 = &(*rcx_23)[1]
            zmm0_2.d = zmm2_1.d f* rax_30[-2]
            zmm1_2.d = zmm2_1.d f* rax_30[-1]
            zmm2_1.d = zmm2_1.d f* *rax_30
            rax_30 = &rax_30[3]
            zmm9.d = zmm9.d f+ zmm0_2.d
            zmm4.d = zmm4.d f+ zmm1_2.d
            zmm3_1.d = zmm3_1.d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm2_1 = var_2f0
    zmm0_2.d = zmm2_1.d f* *arg8
    zmm1_2.d = zmm6_1.d f* *arg4
    zmm9.d = zmm9.d f- zmm0_2.d
    zmm0_2.d = zmm2_1.d f* *(arg8 + 4)
    zmm2_1.d = zmm2_1.d f* arg8[1].d
    zmm1_2.d = zmm1_2.d f+ zmm5.d
    zmm4.d = zmm4.d f- zmm0_2.d
    zmm3_1.d = zmm3_1.d f- zmm2_1.d
    zmm9.d = zmm9.d f+ zmm1_2.d
    zmm1_2.d = zmm6_1.d f* arg4[1]
    zmm6_1.d = zmm6_1.d f* arg4[2]
    zmm1_2.d = zmm1_2.d f+ var_358[1]
    zmm6_1.d = zmm6_1.d f+ var_358[2]
    zmm4.d = zmm4.d f+ zmm1_2.d
    zmm3_1.d = zmm3_1.d f+ zmm6_1.d
    *arg7 = (_mm_unpacklo_ps(zmm9, zmm4.q)).q
    arg7[1].d = zmm3_1.d
else if (result.b != 0)
    if (not(zmm13_1.d f<= zmm9.d))
        zmm0_2 = _mm_cvtps_pd(zmm1_2.q)
    
    if (zmm13_1.d f<= zmm9.d || zmm0_2.q f<= 9.9999999999999995e-07 || zmm1_2.d f>= zmm2_1.d)
        var_170[0].q = 0
        var_170[2].q = 0
        var_358[0].q = 0
        var_358[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_358[3] s< 8)
            sub_14083ad30(&var_358, 8)
        
        uint128_t zmm0_3
        int32_t rax_44
        
        if (var_334 == 0)
            int32_t var_320_5 = 0x3f800000
            rax_44 = 0x3f800000
            zmm0_3 = _mm_unpacklo_ps(zmm9, zmm9.q)
        label_14164a014:
            zmm1_2 = zmm11_1
            *rdi_3 = (zmm13_1 ^ data_142d3f780).d
            *arg8 = zmm0_3.q
            arg8[1].d = rax_44
            zmm0_3.d = zmm11_1.d f* *arg8
            zmm11_1.d = zmm11_1.d f* arg8[1].d
            zmm1_2.d = zmm1_2.d f* *(arg8 + 4)
            zmm11_1.d = zmm11_1.d f+ var_128
            zmm0_3.d = zmm0_3.d f+ var_130.d
            zmm1_2.d = zmm1_2.d f+ var_130:4.d
            result = zmm11_1.d
            zmm0_3 = _mm_unpacklo_ps(zmm0_3, zmm1_2.q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_170[2])
                    int32_t rax_37 = (rdi_4 + 1).d
                    var_170[2] = rax_37
                    
                    if (rax_37 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_27 = var_170[0].q
                    int64_t rdx_14 = rdi_4 * 3
                    int32_t rax_38 = *(&var_128 + r12)
                    zmm1_2.d = zmm14.d f+ *(&var_100:4 + r12)
                    *(rcx_27 + (rdx_14 << 2)) = *(&var_130 + r12)
                    zmm0_3.d = zmm12.d f+ *(&var_100 + r12)
                    *(rcx_27 + (rdx_14 << 2) + 8) = rax_38
                    int64_t rdi_5 = sx.q(var_358[2])
                    int32_t var_344_2 = zmm1_2.d
                    var_348 = zmm0_3.d
                    zmm0_3.d = zmm15.d f+ *(&var_f8 + r12)
                    int32_t rax_39 = (rdi_5 + 1).d
                    var_358[2] = rax_39
                    var_340 = zmm0_3.d
                    
                    if (rax_39 s> var_358[3])
                        sub_14083a7e0(&var_358)
                    
                    int64_t rcx_29 = var_358[0].q
                    int64_t rdx_16 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_29 + (rdx_16 << 2)) = var_348.q
                    *(rcx_29 + (rdx_16 << 2) + 8) = var_340
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_248 = &var_1d8
            float (* var_240_1)[0x4] = arg2
            int128_t* var_238_1 = arg3
            int32_t rax_43
            rax_43, zmm11_1, zmm13_1 = sub_14159a1b0(&var_170, &var_358, &var_298, &var_248, 
                &var_330, &var_348, &var_290, &var_258)
            zmm0_3 = zx.o(var_348.q)
            rax_44 = var_340
            
            if (rax_43 == 2)
                goto label_14164a014
            
            *arg8 = zmm0_3.q
            zmm0_3.d = (var_330 ^ data_142d3f780).d f- zmm13_1.d
            arg8[1].d = rax_44
            result = result_1
            *rdi_3 = zmm0_3.d
            zmm0_3 = zx.o(var_290)
        int64_t rcx_31 = var_358[0].q
        *arg7 = zmm0_3.q
        arg7[1].d = result
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        int64_t rcx_32 = var_170[0].q
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
    else
        zmm3_1 = zmm9
        zmm4 = zmm9
        *arg8 = var_308
        zmm5 = zmm9
        arg8[1].d = var_300
        zmm11_1 = zmm9
        zmm12 = zmm9
        zmm10 = zmm9
        
        if (rcx_3 == 0)
            zmm1_2 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            int32_t rax_34 = var_128
            zmm4 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
            int32_t rax_35 = var_f8
            zmm5 = rax_34
            zmm12 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm10 = rax_35
            zmm3_1 = zmm1_2.d
            var_2e8.q = zmm2_1.q
            zmm11_1 = var_2e8
        else if (r13.d s> 0)
            float (* rax_33)[0x4] = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_33
                rax_33 = &(*rax_33)[1]
                zmm0_2.d = zmm2_1.d f* *(&var_130 + r12)
                zmm1_2.d = zmm2_1.d f* *(&var_130:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_128 + r12)
                zmm4.d = zmm4.d f+ zmm1_2.d
                zmm1_2.d = zmm2_1.d f* *(&var_100 + r12)
                zmm5.d = zmm5.d f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm11_1.d = zmm11_1.d f+ zmm1_2.d
                r12 += 0xc
                zmm12.d = zmm12.d f+ zmm0_2.d
                zmm10.d = zmm10.d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm14 = var_358[0]
        zmm6_1.d = var_358[2].d f+ zmm10.d
        zmm15 = var_358[1]
        zmm8.d = zmm14.d f+ zmm11_1.d
        zmm7.d = zmm15.d f+ zmm12.d
        zmm6_1.d = zmm6_1.d f- zmm5.d
        zmm8.d = zmm8.d f- zmm3_1.d
        zmm7.d = zmm7.d f- zmm4.d
        zmm1_2.d = zmm6_1.d f* zmm6_1.d
        zmm0_2.d = zmm8.d f* zmm8.d
        zmm2_1.d = zmm7.d f* zmm7.d
        zmm2_1.d = zmm2_1.d f+ zmm0_2.d
        zmm2_1.d = zmm2_1.d f+ zmm1_2.d
        zmm4 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
        zmm3_1.d = zmm2_1.d f* 0.5f
        zmm0_2.d = zmm4.d f* zmm4.d
        zmm1_2.d = zmm3_1.d f* zmm0_2.d
        zmm2_1.d = 0.5f f- zmm1_2.d
        zmm0_2.d = zmm4.d f* zmm2_1.d
        zmm4.d = zmm4.d f+ zmm0_2.d
        zmm1_2.d = zmm4.d f* zmm4.d
        zmm3_1.d = zmm3_1.d f* zmm1_2.d
        zmm5.d = 0.5f f- zmm3_1.d
        zmm0_2.d = zmm4.d f* zmm5.d
        zmm4.d = zmm4.d f+ zmm0_2.d
        zmm0_2.d = zmm4.d f* zmm8.d
        zmm1_2.d = zmm4.d f* zmm7.d
        zmm4.d = zmm4.d f* zmm6_1.d
        zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1_2.q)
        *arg8 = zmm0_2.q
        int32_t var_320_3 = zmm4.d
        zmm13_1.d = zmm13_1.d f- __sqrtss_xmmss_memss(zmm0_2.d, var_364).d
        arg8[1].d = var_320_3
        
        if (not(zmm13_1.d f< zmm9.d))
            zmm9 = __minss_xmmss_memss(zmm13_1.d, 0x7f7fffff)
        
        zmm1_2 = *arg8
        zmm2_1 = *(arg8 + 4)
        zmm3_1 = arg8[1].d
        zmm4 = var_2f0
        zmm0_2.d = zmm1_2.d f* zmm4.d
        zmm11_1.d = zmm11_1.d f- zmm0_2.d
        zmm0_2.d = zmm9.d f* zmm1_2.d
        zmm1_2.d = zmm2_1.d f* zmm4.d
        zmm11_1.d = zmm11_1.d f+ zmm14.d
        zmm12.d = zmm12.d f- zmm1_2.d
        zmm1_2.d = zmm3_1.d f* zmm4.d
        zmm11_1.d = zmm11_1.d f+ zmm0_2.d
        zmm0_2.d = zmm9.d f* zmm2_1.d
        zmm10.d = zmm10.d f- zmm1_2.d
        zmm12.d = zmm12.d f+ zmm15.d
        zmm10.d = zmm10.d f+ var_358[2]
        zmm12.d = zmm12.d f+ zmm0_2.d
        zmm0_2 = zmm9
        zmm9 ^= data_142d3f780
        zmm0_2.d = zmm0_2.d f* zmm3_1.d
        zmm10.d = zmm10.d f+ zmm0_2.d
        *arg7 = (_mm_unpacklo_ps(zmm11_1, zmm12.q)).q
        arg7[1].d = zmm10.d
        *rdi_3 = zmm9.d

result.b = 1
label_14164a091:
__security_check_cookie(rax_1 ^ &var_3a8)
return result

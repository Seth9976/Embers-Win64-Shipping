// 函数: sub_1416555d0
// 地址: 0x1416555d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* r10 = *(arg1 + 0x10)
uint128_t* rsi = arg4
uint32_t zmm0[0x4] = *(r10 + 0x1c)
uint32_t zmm11[0x4]

if (zmm0[0] f== 0f)
    zmm11 = zx.o(0)
else
    zmm11 = _mm_and_ps(*(arg1 + 0x28), 0x7fffffff)
    zmm11[0] = zmm11[0] f* zmm0[0]

zmm0 = *(arg2[1][0].q i+ 0x2c)
uint32_t zmm2[0x4]

if (zmm0[0] f== 0f)
    zmm2 = zx.o(0)
else
    zmm2 = _mm_and_ps((*arg2)[0xa], 0x7fffffff)
    zmm2[0] = zmm2[0] f* zmm0[0]

float zmm3[0x4] = *arg3
zmm0 = arg3[1]
float var_1f8 = zmm3[0]
zmm2[0] = zmm2[0] f+ zmm11[0]
uint32_t var_328[0x4] = zmm0
int64_t r12 = 0
void* var_258 = arg1
int32_t var_188 = 0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
uint32_t var_170[0x4] = data_142d3f7e0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float (* var_228)[0x4] = arg2
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
zmm0 = zmm2
float var_1d8[0x4]
int128_t* var_220 = &var_1d8
zmm0[0] = zmm0[0] f* zmm2[0]
float* var_218 = &var_1f8
uint32_t var_2e4 = zmm2[0]
zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
double temp0_4[0x2] = _mm_cvtps_pd(zmm0[0].q)
uint32_t var_1ec = zmm2[0]
temp0_4[0] = temp0_4[0] + 9.9999999999999995e-07
zmm0 = _mm_cvtpd_ps(temp0_4)
double zmm1[0x2] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
int32_t var_1f0 = zmm1[0].d
uint32_t var_2cc = zmm0[0]
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
uint32_t var_1f4 = zmm0[0]
float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_8[0] = (zmm0 ^ 0x80000000)[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
temp0_9[0] = (zmm1 ^ 0x80000000)[0].d
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x27)
temp0_10[0] = zmm2[0]
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
var_1d8 = temp0_11
uint32_t zmm6[0x4] = *(r10 + 0x10)
int128_t zmm8
zmm8.d = (*(r10 + 0x18)).d f* *(arg1 + 0x30)
zmm6[0] = zmm6[0] f* *(arg1 + 0x28)
int128_t zmm7
zmm7.d = (*(r10 + 0x14)).d f* *(arg1 + 0x2c)
int32_t var_2a0 = zmm8.d
int64_t var_130 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
int32_t var_128 = var_2a0
float var_238[0x4] = temp0_11
zmm1 = (*arg10)[1]
uint32_t var_318 = (*arg10 ^ 0x80000000)[0]
int32_t var_314 = (zmm1 ^ 0x80000000)[0].d
uint32_t var_310 = ((*arg10)[2] ^ 0x80000000)[0]
float var_300
float* rax_6
uint128_t zmm6_1
uint128_t zmm7_1
uint128_t zmm8_1
uint128_t zmm9
uint128_t zmm11_1
uint128_t zmm13_1
rax_6, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm11_1, zmm13_1 = sub_1417119b0(&var_228, &var_300, &var_318)
uint128_t zmm0_1 = var_328[0]
uint128_t zmm10 = zx.o(0)
uint128_t zmm2_1 = var_328[1]
uint128_t zmm3_1 = var_328[2]
uint128_t zmm12 = zmm0_1
uint128_t zmm1_1 = zx.o(*rax_6)
uint128_t zmm14 = zmm2_1
int32_t rcx_1 = rax_6[2]
zmm6_1.d = zmm6_1.d f- zmm1_1.d
int32_t var_2c8 = zmm0_1.d
uint32_t result = zx.d(arg9)
int32_t var_2c4 = zmm2_1.d
uint128_t zmm15 = zmm3_1
zmm7_1.d = zmm7_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
int64_t var_100 = zmm1_1.q
uint128_t zmm5
zmm5.d = zmm0_1.d f- zmm6_1.d
zmm8_1.d = zmm8_1.d f- rcx_1
uint32_t result_2 = zmm3_1.d
int32_t var_f8 = rcx_1
zmm6_1.d = zmm2_1.d f- zmm7_1.d
int64_t var_2e0 = 0
int32_t var_2d8 = 0x3f800000
zmm7_1.d = zmm3_1.d f- zmm8_1.d
zmm0_1.d = zmm5.d f* zmm5.d
zmm2_1.d = zmm6_1.d f* zmm6_1.d
zmm1_1.d = zmm7_1.d f* zmm7_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= var_2cc || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm1_1 = 0x7f7fffff
int32_t rcx_2 = 0
int32_t var_334 = 0x7f7fffff
zmm8_1 = 0x7f7fffff
int32_t var_308 = 0
uint64_t r14 = zx.q(rdi.b)
char var_337 = 0
char var_338 = rdi.b
int32_t var_304
int64_t var_270
uint32_t result_1
float zmm4_1[0x4]

if (rdi.b == 0)
    while (true)
        int32_t rax_7 = rcx_2
        rcx_2 += 1
        var_308 = rcx_2
        
        if (rax_7 s>= 0x20)
            result = zx.d(arg9)
        else
            zmm4_1 = 0x3f000000
            void* rax_8 = var_258
            zmm0_1.d = zmm6_1.d f* zmm6_1.d
            void* rcx_3 = *(rax_8 + 0x10)
            zmm1_1.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm5.d f* zmm5.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm8_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
            zmm3_1.d = zmm2_1.d f* 0.5f
            zmm0_1.d = zmm8_1.d f* zmm8_1.d
            zmm1_1.d = zmm3_1.d f* zmm0_1.d
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1.d = zmm8_1.d f* zmm2_1.d
            zmm8_1.d = zmm8_1.d f+ zmm0_1.d
            zmm1_1.d = zmm8_1.d f* zmm8_1.d
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm4_1[0] = 0.5f f- zmm3_1.d
            zmm0_1.d = zmm8_1.d f* zmm4_1[0]
            zmm8_1.d = zmm8_1.d f+ zmm0_1.d
            zmm0_1.d = (*(rcx_3 + 0x18)).d f* *(rax_8 + 0x30)
            int32_t var_2e8_1 = zmm0_1.d
            int32_t var_2a0_1 = zmm0_1.d
            zmm1_1.d = zmm8_1.d f* zmm6_1.d
            zmm6_1.d = (*(rcx_3 + 0x14)).d f* *(rax_8 + 0x2c)
            zmm5.d = zmm5.d f* zmm8_1.d
            int32_t var_2d0_1 = zmm1_1.d
            var_304 = zmm8_1.d
            zmm8_1.d = zmm8_1.d f* zmm7_1.d
            zmm7_1.d = (*(rcx_3 + 0x10)).d f* *(rax_8 + 0x28)
            int32_t var_210 = (zmm5 ^ 0x80000000).d
            int32_t var_260_1 = zmm5.d
            int32_t var_208_1 = (zmm8_1 ^ 0x80000000).d
            int32_t var_20c_1 = (zmm1_1 ^ 0x80000000).d
            float var_1bc
            float* rax_9
            rax_9, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                sub_1417119b0(&var_228, &var_1bc, &var_210)
            zmm4_1 = zmm12
            zmm1_1 = zx.o(*rax_9)
            int32_t rcx_5 = rax_9[2]
            zmm2_1.d = zmm7_1.d f- zmm1_1.d
            zmm3_1.d = zmm6_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
            zmm0_1.d = var_2e8_1.d f- rcx_5
            zmm4_1[0] = zmm4_1[0] f- zmm2_1.d
            int32_t var_298_1 = zmm2_1.d
            zmm2_1.d = zmm14.d f- zmm3_1.d
            var_304 = zmm3_1.d
            int32_t var_2e8_2 = zmm0_1.d
            var_318 = zmm4_1[0]
            int32_t var_314_1 = zmm2_1.d
            zmm5 = var_260_1
            zmm3_1.d = zmm15.d f- zmm0_1.d
            zmm4_1[0] = zmm4_1[0] f* zmm5.d
            zmm0_1 = _mm_unpacklo_ps(zmm7_1, zmm6_1.q)
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            var_310 = zmm3_1.d
            zmm3_1.d = zmm3_1.d f* zmm8_1.d
            uint64_t rcx_7 = r13 * 3
            *(&var_100 + (rcx_7 << 2)) = zmm1_1.q
            zmm1_1 = var_2d0_1
            zmm2_1.d = zmm2_1.d f* zmm1_1.d
            *(&var_130 + (rcx_7 << 2)) = zmm0_1.q
            (&var_128)[rcx_7] = var_2a0_1
            result = rax_9[2]
            zmm4_1[0] = zmm4_1[0] f+ zmm2_1.d
            (&var_f8)[rcx_7] = result
            zmm4_1[0] = zmm4_1[0] f+ zmm3_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4_1[0] f<= zmm13_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_7 << 2)) = var_318.q
                *(&var_160:8 + (rcx_7 << 2)) = var_310
                var_188 = r13.d
            label_141655da1:
                zmm8_1 = var_334
                
                if (r14.b != 0 && not(zmm4_1[0] f< zmm9.d))
                    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                    zmm4_1[0] = zmm4_1[0] + 9.99999997e-07f
                    rdi.b = zmm4_1[0] f>= zmm8_1.d
            else
                zmm3_1 = *(rsi + 4)
                zmm6_1 = *rsi
                zmm7_1 = *(rsi + 8)
                zmm0_1.d = zmm3_1.d f* zmm1_1.d
                zmm2_1.d = zmm6_1.d f* zmm5.d
                zmm1_1.d = zmm7_1.d f* zmm8_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm9.d)
                    result.b = 0
                    goto label_141656831
                
                zmm1_1 = zmm10
                zmm0_1.d = zmm4_1.d f- zmm13_1.d
                zmm0_1.d = zmm0_1.d f/ zmm2_1.d
                zmm10.d = zmm10.d f- zmm0_1.d
                
                if (zmm10.d f<= zmm1_1.d)
                    goto label_141655da1
                
                if (zmm10.d f> arg5)
                    result.b = 0
                    goto label_141656831
                
                zmm1_1 = zx.o(var_2c8.q)
                var_2e0:4.d = var_2d0_1.d
                r13 = zx.q(r13.d + 1)
                var_270 = zmm1_1.q
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm12.d = zmm6_1.d f* zmm10.d
                result_1 = result_2
                zmm14.d = zmm3_1.d f* zmm10.d
                var_188 = r13.d
                zmm12.d = zmm12.d f+ var_328[0]
                zmm15.d = zmm7_1.d f* zmm10.d
                var_338 = 0
                zmm14.d = zmm14.d f+ var_328[1]
                var_2d8 = zmm8_1.d
                zmm15.d = zmm15.d f+ var_328[2]
                zmm8_1 = 0x7f7fffff
                zmm3_1.d = zmm12.d f- zmm1_1.d
                var_2c8 = zmm12.d
                zmm1_1 = var_160:4.d
                zmm4_1 = zmm14
                zmm4_1[0] = zmm4_1[0] f- zmm0_1.d
                int32_t var_2c4_1 = zmm14.d
                zmm2_1.d = zmm15.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm3_1.d
                result_2 = zmm15.d
                var_2e0.d = zmm5.d
                zmm1_1.d = zmm1_1.d f+ zmm4_1[0]
                var_334 = 0x7f7fffff
                var_160.d = zmm0_1.d
                zmm0_1.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_1.d
                zmm1_1.d = var_160:0xc.d.d f+ zmm3_1.d
                var_160:8.d = zmm0_1.d
                var_160:0xc.d = zmm1_1.d
                zmm0_1.d = var_150_1.d.d f+ zmm4_1[0]
                zmm1_1.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_1.d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1.d
                zmm0_1.d = zmm0_1.d f+ zmm3_1.d
                zmm1_1.d = var_150_1:0xc.d.d f+ zmm4_1[0]
                var_150_1:8.d = zmm0_1.d
                zmm0_1.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1.d
                zmm1_1.d = zmm12.d f- var_298_1
                zmm2_1.d = zmm14.d f- var_304
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm15.d f- var_2e8_2
                *(&var_160 + (rcx_7 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_7 << 2)) = zmm0_1.d
            
            uint32_t rdx_8
            
            if (rdi.b != 0)
                int64_t* rax_23
                rax_23, zmm8_1, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                    sub_1416f4530(&var_238, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rdx_8 = zx.d(var_337)
                zmm1_1 = zx.o(*rax_23)
                zmm7_1 = rax_23[1].d
                result = zx.d(arg9)
                uint32_t var_2b8_1 = zmm1_1.d
                zmm6_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm5 = var_2b8_1
            else
                int32_t rcx_8 = r13.d
                int32_t rax_15
                
                if (rcx_8 == 1)
                    int64_t rax_19 = sx.q(var_184)
                    int64_t rcx_15 = rax_19 * 3
                    var_170[rax_19] = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_15 << 2)))
                    rax_15 = *(&var_160:8 + (rcx_15 << 2))
                else if (rcx_8 == 2)
                    void var_198
                    uint64_t* rax_18
                    rax_18, zmm8_1, zmm9 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_18)
                    rax_15 = rax_18[1].d
                else if (rcx_8 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_17
                    rax_17, zmm8_1, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_17)
                    rax_15 = rax_17[1].d
                else if (rcx_8 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_16
                    rax_16, zmm8_1, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_16)
                    rax_15 = rax_16[1].d
                else
                    int32_t var_2f8_1 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm9, zmm9.q)
                    rax_15 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                uint64_t var_2f4_1 = zmm0_1.q
                int64_t rbx_1 = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                r14 = r10_1 * 3
                int64_t rsi_1 = r9_4 * 3
                int32_t rdx_6 = *(&var_160:8 + (r14 << 2))
                int32_t rcx_16 = *(&var_160:8 + (rsi_1 << 2))
                int32_t r8_5 = *(&var_160:8 + (r15_1 << 2))
                zmm5 = var_2f4_1.d
                zmm6_1 = var_2f4_1:4.d
                int32_t rax_20 = *(&var_160:8 + (rbx_1 << 2))
                zmm7_1 = rax_15
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
                var_170[0] = zmm0_1.d
                zmm0_1 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_1.d
                zmm1_1 = zx.o(*(&var_130 + (rsi_1 << 2)))
                var_170[3] = zmm3_1.d
                var_150_1:4.d = rdx_6
                int32_t rdx_7 = (&var_128)[r14]
                var_140_1 = rcx_16
                int32_t rcx_17 = (&var_128)[rsi_1]
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
                var_124_1:8.d = rdx_7
                rdx_8 = (&var_f8)[r14]
                var_114_1:4.d = rcx_17
                int32_t rcx_18 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_21
                int32_t rax_22 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm6_1.d f* zmm6_1.d
                var_f8 = (&var_f8)[r15_1]
                var_f4_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm5.d f* zmm5.d
                var_f4_1:8.d = rdx_8
                zmm1_1.d = zmm7_1.d f* zmm7_1.d
                var_e4_1:4.d = rcx_18
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_100 = zmm3_1.q
                zmm3_1 = var_2cc
                int32_t var_d4_1 = rax_22
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                result = zx.d(arg9)
                rdi.b = zmm3_1.d f> zmm2_1.d
                bool cond:4_1 = zmm2_1.d f>= zmm8_1.d
                var_334 = zmm2_1.d
                zmm8_1 = zmm2_1
                rdx_8.b = cond:4_1
                var_337 = rdx_8.b
                
                if (result.b == 0)
                    goto label_1416561d7
                
                if (rdi.b == 0)
                    goto label_1416561dc
                
                if (not(zmm10.d f!= zmm9.d))
                    zmm1_1 = 0x3eb0c6f7a0b5ed8d
                    zmm0_1 = _mm_cvtps_pd(zmm2_1.q)
                    
                    if (not(zmm0_1.q f<= zmm1_1.q))
                        zmm0_1 = _mm_cvtps_pd(zmm3_1.q)
                        
                        if (not(zmm0_1.q f<= zmm1_1.q) && r13.d s< 4)
                            r14.b = 1
                            rdi.b = 0
                            var_338 = 1
                            goto label_1416561e2
            
        label_1416561d7:
            
            if (rdi.b != 0)
                rcx_2 = var_308
            else
            label_1416561dc:
                r14 = zx.q(var_338)
            label_1416561e2:
                rcx_2 = var_308
                
                if (rdx_8.b == 0)
                    rsi = arg4
                    continue
        
        zmm1_1 = 0x7f7fffff
        break

int32_t* rdi_3 = arg6
*rdi_3 = zmm10.d

if (not(zmm10.d f<= zmm9.d))
    zmm4_1 = zmm9
    zmm3_1 = zmm9
    *arg8 = var_2e0
    *(arg8 + 8) = var_2d8
    
    if (r13.d s> 0)
        uint32_t (* rcx_20)[0x4] = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_26 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_20
            rcx_20 = &(*rcx_20)[1]
            zmm0_1.d = zmm2_1.d f* rax_26[-2]
            zmm1_1.d = zmm2_1.d f* rax_26[-1]
            zmm2_1.d = zmm2_1.d f* *rax_26
            rax_26 = &rax_26[3]
            zmm9.d = zmm9.d f+ zmm0_1.d
            zmm4_1[0] = zmm4_1[0] f+ zmm1_1.d
            zmm3_1.d = zmm3_1.d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm5 = var_2e4
    zmm0_1.d = zmm5.d f* *arg8
    zmm1_1.d = zmm10.d f* *arg4
    zmm9.d = zmm9.d f- zmm0_1.d
    zmm0_1.d = zmm5.d f* *(arg8 + 4)
    zmm1_1.d = zmm1_1.d f+ var_328[0]
    zmm5.d = zmm5.d f* *(arg8 + 8)
    zmm4_1[0] = zmm4_1[0] f- zmm0_1.d
    zmm9.d = zmm9.d f+ zmm1_1.d
    zmm1_1.d = zmm10.d f* arg4[1]
    zmm3_1.d = zmm3_1.d f- zmm5.d
    zmm10.d = zmm10.d f* arg4[2]
    zmm1_1.d = zmm1_1.d f+ var_328[1]
    zmm10.d = zmm10.d f+ var_328[2]
    zmm4_1[0] = zmm4_1[0] f+ zmm1_1.d
    zmm3_1.d = zmm3_1.d f+ zmm10.d
    *arg7 = (_mm_unpacklo_ps(zmm9, zmm4_1[0].q)).q
    arg7[1].d = zmm3_1.d
else if (result.b != 0)
    if (not(zmm13_1.d f<= zmm9.d))
        zmm0_1 = _mm_cvtps_pd(zmm8_1.q)
    
    if (zmm13_1.d f<= zmm9.d || zmm0_1.q f<= 9.9999999999999995e-07 || zmm8_1.d f>= zmm1_1.d)
        var_170[0].q = 0
        var_170[2].q = 0
        var_328[0].q = 0
        var_328[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_328[3] s< 8)
            sub_14083ad30(&var_328, 8)
        
        uint128_t zmm0_2
        uint32_t rax_40
        
        if (var_308 == 0)
            int32_t var_2f8_5 = 0x3f800000
            rax_40 = 0x3f800000
            zmm0_2 = _mm_unpacklo_ps(zmm9, zmm9.q)
        label_1416567b4:
            zmm1_1 = zmm11_1
            *rdi_3 = (zmm13_1 ^ data_142d3f780).d
            *arg8 = zmm0_2.q
            *(arg8 + 8) = rax_40
            zmm0_2.d = zmm11_1.d f* *arg8
            zmm11_1.d = zmm11_1.d f* *(arg8 + 8)
            zmm1_1.d = zmm1_1.d f* *(arg8 + 4)
            zmm11_1.d = zmm11_1.d f+ var_128
            zmm0_2.d = zmm0_2.d f+ var_130.d
            zmm1_1.d = zmm1_1.d f+ var_130:4.d
            result = zmm11_1.d
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1_1.q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_170[2])
                    int32_t rax_33 = (rdi_4 + 1).d
                    var_170[2] = rax_33
                    
                    if (rax_33 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_24 = var_170[0].q
                    int64_t rdx_11 = rdi_4 * 3
                    int32_t rax_34 = *(&var_128 + r12)
                    zmm1_1.d = zmm14.d f+ *(&var_100:4 + r12)
                    *(rcx_24 + (rdx_11 << 2)) = *(&var_130 + r12)
                    zmm0_2.d = zmm12.d f+ *(&var_100 + r12)
                    *(rcx_24 + (rdx_11 << 2) + 8) = rax_34
                    int64_t rdi_5 = sx.q(var_328[2])
                    int32_t var_314_2 = zmm1_1.d
                    var_318 = zmm0_2.d
                    zmm0_2.d = zmm15.d f+ *(&var_f8 + r12)
                    int32_t rax_35 = (rdi_5 + 1).d
                    var_328[2] = rax_35
                    var_310 = zmm0_2.d
                    
                    if (rax_35 s> var_328[3])
                        sub_14083a7e0(&var_328)
                    
                    int64_t rcx_26 = var_328[0].q
                    int64_t rdx_13 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_26 + (rdx_13 << 2)) = var_318.q
                    *(rcx_26 + (rdx_13 << 2) + 8) = var_310
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_228 = &var_1d8
            float (* var_220_1)[0x4] = arg2
            float (* var_218_1)[0x4] = arg3
            int32_t rax_39
            rax_39, zmm11_1, zmm13_1 = sub_14157c3c0(&var_170, &var_328, &var_258, &var_228, 
                &var_304, &var_318, &var_270, &var_238)
            zmm0_2 = zx.o(var_318.q)
            rax_40 = var_310
            
            if (rax_39 == 2)
                goto label_1416567b4
            
            *arg8 = zmm0_2.q
            zmm0_2.d = (var_304 ^ data_142d3f780).d f- zmm13_1.d
            *(arg8 + 8) = rax_40
            result = result_1
            *rdi_3 = zmm0_2.d
            zmm0_2 = zx.o(var_270)
        int64_t rcx_28 = var_328[0].q
        *arg7 = zmm0_2.q
        arg7[1].d = result
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        int64_t rcx_29 = var_170[0].q
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
    else
        zmm3_1 = zmm9
        zmm4_1 = zmm9
        *arg8 = var_2e0
        zmm5 = zmm9
        *(arg8 + 8) = var_2d8
        zmm11_1 = zmm9
        zmm12 = zmm9
        zmm10 = zmm9
        
        if (rcx_2 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            int32_t rax_30 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_31 = var_f8
            zmm5 = rax_30
            zmm12 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm10 = rax_31
            zmm3_1 = zmm1_1.d
            zmm11_1 = zmm2_1.d
        else if (r13.d s> 0)
            uint32_t (* rax_29)[0x4] = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_29
                rax_29 = &(*rax_29)[1]
                zmm0_1.d = zmm2_1.d f* *(&var_130 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_130:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_128 + r12)
                zmm4_1[0] = zmm4_1[0] f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_100 + r12)
                zmm5.d = zmm5.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm11_1.d = zmm11_1.d f+ zmm1_1.d
                r12 += 0xc
                zmm12.d = zmm12.d f+ zmm0_1.d
                zmm10.d = zmm10.d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm14 = var_328[0]
        zmm6_1.d = var_328[2].d f+ zmm10.d
        zmm15 = var_328[1]
        zmm8_1.d = zmm14.d f+ zmm11_1.d
        zmm7_1.d = zmm15.d f+ zmm12.d
        zmm6_1.d = zmm6_1.d f- zmm5.d
        zmm8_1.d = zmm8_1.d f- zmm3_1.d
        zmm7_1.d = zmm7_1.d f- zmm4_1[0]
        zmm1_1.d = zmm6_1.d f* zmm6_1.d
        zmm0_1.d = zmm8_1.d f* zmm8_1.d
        zmm2_1.d = zmm7_1.d f* zmm7_1.d
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        float temp0_27[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm2_1.d)
        zmm3_1.d = zmm2_1.d f* 0.5f
        zmm0_1.d = temp0_27.d f* temp0_27[0]
        zmm1_1.d = zmm3_1.d f* zmm0_1.d
        zmm2_1.d = 0.5f f- zmm1_1.d
        zmm0_1.d = temp0_27.d f* zmm2_1.d
        temp0_27[0] = temp0_27[0] f+ zmm0_1.d
        zmm1_1.d = temp0_27.d f* temp0_27[0]
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm5.d = 0.5f f- zmm3_1.d
        zmm0_1.d = temp0_27.d f* zmm5.d
        temp0_27[0] = temp0_27[0] f+ zmm0_1.d
        zmm0_1.d = temp0_27.d f* zmm8_1.d
        zmm1_1.d = temp0_27.d f* zmm7_1.d
        temp0_27[0] = temp0_27[0] f* zmm6_1.d
        zmm0_1 = _mm_unpacklo_ps(zmm0_1, zmm1_1.q)
        *arg8 = zmm0_1.q
        zmm13_1.d = zmm13_1.d f- __sqrtss_xmmss_memss(zmm0_1.d, var_334).d
        *(arg8 + 8) = temp0_27[0]
        
        if (not(zmm13_1.d f< zmm9.d))
            zmm9 = __minss_xmmss_memss(zmm13_1.d, 0x7f7fffff)
        
        zmm1_1 = *arg8
        zmm2_1 = *(arg8 + 4)
        zmm3_1 = *(arg8 + 8)
        zmm5 = var_2e4
        zmm0_1.d = zmm1_1.d f* zmm5.d
        zmm11_1.d = zmm11_1.d f- zmm0_1.d
        zmm0_1.d = zmm9.d f* zmm1_1.d
        zmm1_1.d = zmm2_1.d f* zmm5.d
        zmm11_1.d = zmm11_1.d f+ zmm14.d
        zmm12.d = zmm12.d f- zmm1_1.d
        zmm1_1.d = zmm3_1.d f* zmm5.d
        zmm11_1.d = zmm11_1.d f+ zmm0_1.d
        zmm0_1.d = zmm9.d f* zmm2_1.d
        zmm10.d = zmm10.d f- zmm1_1.d
        zmm12.d = zmm12.d f+ zmm15.d
        zmm10.d = zmm10.d f+ var_328[2]
        zmm12.d = zmm12.d f+ zmm0_1.d
        zmm0_1 = zmm9
        zmm9 ^= data_142d3f780
        zmm0_1.d = zmm0_1.d f* zmm3_1.d
        zmm10.d = zmm10.d f+ zmm0_1.d
        *arg7 = (_mm_unpacklo_ps(zmm11_1, zmm12.q)).q
        arg7[1].d = zmm10.d
        *rdi_3 = zmm9.d

result.b = 1
label_141656831:
__security_check_cookie(rax_1 ^ &var_378)
return result

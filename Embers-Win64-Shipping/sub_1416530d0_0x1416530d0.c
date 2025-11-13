// 函数: sub_1416530d0
// 地址: 0x1416530d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* r11 = *(arg1 + 0x10)
uint128_t* r10 = arg4
float zmm0[0x4] = *(r11 + 0x1c)
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
float var_1f8 = zmm3[0]
int64_t r12 = 0
float var_328[0x4] = zmm0
void* var_248 = arg1
int32_t var_188 = 0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
float var_170[0x4] = data_142d3f7e0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float (* var_228)[0x4] = arg2
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
float var_1d8[0x4]
int128_t* var_220 = &var_1d8
zmm2[0] = zmm2[0] * zmm2[0]
int32_t* var_218 = &var_1f8
float var_2c8 = zmm2[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
double temp0_3[0x2] = _mm_cvtps_pd(zmm2[0].q)
float var_1ec = temp0_2[0]
temp0_3[0] = temp0_3[0] + 9.9999999999999995e-07
float temp0_4[0x4] = _mm_cvtpd_ps(temp0_3)
double zmm1[0x2] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
int32_t var_1f0 = zmm1[0].d
float var_2cc = temp0_4[0]
float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float var_1f4 = temp0_6[0]
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_7[0] = (temp0_6 ^ 0x80000000)[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
temp0_8[0] = (zmm1 ^ 0x80000000)[0].d
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_9[0] = temp0_2[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
var_1d8 = temp0_10
float zmm6[0x4] = *(r11 + 0x10)
int128_t zmm8
zmm8.d = (*(r11 + 0x18)).d f* *(arg1 + 0x30)
zmm6[0] = zmm6[0] f* *(arg1 + 0x28)
int128_t zmm7
zmm7.d = (*(r11 + 0x14)).d f* *(arg1 + 0x2c)
int32_t var_2a8 = zmm8.d
int64_t var_130 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
int32_t var_128 = var_2a8
float var_238[0x4] = temp0_10
zmm1 = (*arg10)[1]
float var_318 = (*arg10 ^ 0x80000000)[0]
float var_310 = ((*arg10)[2] ^ 0x80000000)[0]
int32_t var_314 = (zmm1 ^ 0x80000000)[0].d
void var_2fc
int32_t* rax_5
uint128_t zmm6_1
uint128_t zmm7_1
uint128_t zmm8_1
uint128_t zmm9
uint128_t zmm11_1
uint128_t zmm13_1
rax_5, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm11_1, zmm13_1 = sub_1417105f0(&var_228, &var_2fc, &var_318)
uint128_t zmm2_1 = var_328[1]
uint128_t zmm10 = zx.o(0)
uint128_t zmm5 = var_328[0]
uint128_t zmm14 = zmm2_1
uint128_t zmm3_1 = var_328[2]
uint128_t zmm1_1 = zx.o(*rax_5)
uint128_t zmm12 = zmm5
int32_t rcx_1 = rax_5[2]
zmm6_1.d = zmm6_1.d f- zmm1_1.d
int32_t var_2bc = zmm2_1.d
uint32_t result = zx.d(arg9)
uint128_t zmm15 = zmm3_1
int64_t var_100 = zmm1_1.q
zmm8_1.d = zmm8_1.d f- rcx_1
uint128_t zmm0_1
zmm0_1.d = zmm5.d f- zmm6_1.d
int32_t var_2c0 = zmm5.d
uint32_t result_2 = zmm3_1.d
int32_t var_f8 = rcx_1
int64_t var_2e0 = 0
int32_t var_2d8 = 0x3f800000
int32_t var_300 = zmm0_1.d
zmm7_1.d = zmm7_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
zmm6_1.d = zmm2_1.d f- zmm7_1.d
zmm7_1.d = zmm3_1.d f- zmm8_1.d
zmm8_1 = var_300
zmm0_1.d = zmm8_1.d f* zmm8_1.d
zmm2_1.d = zmm6_1.d f* zmm6_1.d
zmm1_1.d = zmm7_1.d f* zmm7_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= var_2cc || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm2_1 = 0x7f7fffff
int64_t r15
r15.b = 0
float var_334 = 3.40282347e+38f
int32_t rcx_2 = 0
char var_338 = rdi.b
uint64_t rsi = zx.q(rdi.b)
int32_t var_308 = 0
zmm1_1 = 0x7f7fffff
int32_t var_304
int64_t var_260
uint32_t result_1
uint128_t zmm4_1

if (rdi.b == 0)
    while (true)
        int32_t rax_6 = rcx_2
        rcx_2 += 1
        var_308 = rcx_2
        
        if (rax_6 s>= 0x20)
            zmm1_1 = var_334
            result = zx.d(arg9)
        else
            void* rax_7 = var_248
            zmm0_1.d = zmm6_1.d f* zmm6_1.d
            void* rcx_3 = *(rax_7 + 0x10)
            zmm1_1.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm8_1.d f* zmm8_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
            zmm3_1.d = zmm2_1.d f* 0.5f
            zmm0_1.d = zmm4_1.d f* zmm4_1.d
            zmm1_1.d = zmm3_1.d f* zmm0_1.d
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1.d = zmm4_1.d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm1_1.d = zmm4_1.d f* zmm4_1.d
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm5.d = 0.5f f- zmm3_1.d
            zmm0_1.d = zmm4_1.d f* zmm5.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm0_1.d = (*(rcx_3 + 0x18)).d f* *(rax_7 + 0x30)
            int32_t var_2e4_1 = zmm0_1.d
            int32_t var_2a8_1 = zmm0_1.d
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
            zmm7_1.d = zmm7_1.d f* zmm4_1.d
            int32_t var_2d0_1 = zmm6_1.d
            zmm6_1.d = (*(rcx_3 + 0x14)).d f* *(rax_7 + 0x2c)
            int32_t var_300_1 = zmm7_1.d
            zmm7_1.d = (*(rcx_3 + 0x10)).d f* *(rax_7 + 0x28)
            zmm8_1.d = zmm8_1.d f* zmm4_1.d
            int32_t var_20c_1 = (var_2d0_1 ^ 0x80000000).d
            var_304 = zmm4_1.d
            int32_t var_210 = (zmm8_1 ^ 0x80000000).d
            int32_t var_208_1 = (var_300_1 ^ 0x80000000).d
            void var_1bc
            int32_t* rax_8
            rax_8, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                sub_1417105f0(&var_228, &var_1bc, &var_210)
            zmm1_1 = zx.o(*rax_8)
            int32_t rcx_5 = rax_8[2]
            zmm2_1.d = zmm7_1.d f- zmm1_1.d
            zmm3_1.d = zmm6_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
            zmm0_1.d = var_2e4_1.d f- rcx_5
            zmm4_1.d = zmm12.d f- zmm2_1.d
            int32_t var_290_1 = zmm2_1.d
            zmm2_1.d = zmm14.d f- zmm3_1.d
            var_304 = zmm3_1.d
            int32_t var_2e4_2 = zmm0_1.d
            var_318 = zmm4_1.d
            int32_t var_314_1 = zmm2_1.d
            zmm5 = var_2d0_1
            zmm3_1.d = zmm15.d f- zmm0_1.d
            zmm4_1.d = zmm4_1.d f* zmm8_1.d
            zmm0_1 = _mm_unpacklo_ps(zmm7_1, zmm6_1.q)
            zmm6_1 = var_300_1
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            zmm2_1.d = zmm2_1.d f* zmm5.d
            var_310 = zmm3_1.d
            uint64_t rcx_7 = r13 * 3
            zmm3_1.d = zmm3_1.d f* zmm6_1.d
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            *(&var_130 + (rcx_7 << 2)) = zmm0_1.q
            (&var_128)[rcx_7] = var_2a8_1
            result = rax_8[2]
            zmm4_1.d = zmm4_1.d f+ zmm3_1.d
            *(&var_100 + (rcx_7 << 2)) = zmm1_1.q
            (&var_f8)[rcx_7] = result
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4_1.d f<= zmm13_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_7 << 2)) = var_318.q
                *(&var_160:8 + (rcx_7 << 2)) = var_310
                var_188 = r13.d
            label_141653888:
                
                if (rsi.b != 0 && not(zmm4_1.d f< zmm9.d))
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm4_1.d = zmm4_1.d f+ 9.99999997e-07f
                    rdi.b = zmm4_1.d f>= var_334
            else
                zmm3_1 = *(r10 + 4)
                zmm7_1 = *r10
                zmm2_1.d = zmm7_1.d f* zmm8_1.d
                zmm0_1.d = zmm3_1.d f* zmm5.d
                zmm1_1.d = (*(r10 + 8)).d f* zmm6_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm9.d)
                    result.b = 0
                    goto label_141654331
                
                zmm1_1 = zmm10
                zmm0_1.d = zmm4_1.d f- zmm13_1.d
                zmm0_1.d = zmm0_1.d f/ zmm2_1.d
                zmm10.d = zmm10.d f- zmm0_1.d
                
                if (zmm10.d f<= zmm1_1.d)
                    goto label_141653888
                
                if (zmm10.d f> arg5)
                    result.b = 0
                    goto label_141654331
                
                zmm1_1 = zx.o(var_2c0.q)
                zmm15 = *(r10 + 8)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                r13 = zx.q(r13.d + 1)
                var_260 = zmm1_1.q
                zmm12.d = zmm7_1.d f* zmm10.d
                result_1 = result_2
                zmm14.d = zmm3_1.d f* zmm10.d
                var_188 = r13.d
                zmm12.d = zmm12.d f+ var_328[0]
                zmm15.d = zmm15.d f* zmm10.d
                var_338 = 0
                zmm14.d = zmm14.d f+ var_328[1]
                var_2e0.d = zmm8_1.d
                zmm15.d = zmm15.d f+ var_328[2]
                var_2c0 = zmm12.d
                zmm3_1.d = zmm12.d f- zmm1_1.d
                var_2e0:4.d = zmm5.d
                zmm4_1.d = zmm14.d f- zmm0_1.d
                int32_t var_2bc_1 = zmm14.d
                zmm2_1.d = zmm15.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm3_1.d
                result_2 = zmm15.d
                var_2d8 = zmm6_1.d
                zmm1_1.d = var_160:4.d.d f+ zmm4_1.d
                var_160.d = zmm0_1.d
                zmm0_1.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_1.d
                zmm1_1.d = var_160:0xc.d.d f+ zmm3_1.d
                var_160:8.d = zmm0_1.d
                var_160:0xc.d = zmm1_1.d
                zmm0_1.d = var_150_1.d.d f+ zmm4_1.d
                zmm1_1.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_1.d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1.d
                zmm0_1.d = zmm0_1.d f+ zmm3_1.d
                zmm1_1.d = var_150_1:0xc.d.d f+ zmm4_1.d
                var_150_1:8.d = zmm0_1.d
                zmm0_1.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1.d
                zmm1_1.d = zmm12.d f- var_290_1
                zmm2_1.d = zmm14.d f- var_304
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm15.d f- var_2e4_2
                *(&var_160 + (rcx_7 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                var_334 = 3.40282347e+38f
                *(&var_160:8 + (rcx_7 << 2)) = zmm0_1.d
            
            if (rdi.b != 0)
                int64_t* rax_22
                rax_22, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                    sub_1416f4530(&var_238, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                zmm1_1 = zx.o(*rax_22)
                zmm0_1 = zmm1_1
                zmm7_1 = rax_22[1].d
                result = zx.d(arg9)
                zmm8_1 = zmm1_1.d
                zmm1_1 = var_334
                zmm6_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            else
                int32_t rcx_8 = r13.d
                int32_t rax_14
                
                if (rcx_8 == 1)
                    int64_t rax_18 = sx.q(var_184)
                    int64_t rcx_15 = rax_18 * 3
                    var_170[rax_18] = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_15 << 2)))
                    rax_14 = *(&var_160:8 + (rcx_15 << 2))
                else if (rcx_8 == 2)
                    uint64_t var_1a4
                    uint64_t* rax_17
                    rax_17, zmm9 = sub_1416e69d0(&var_1a4, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_17)
                    rax_14 = rax_17[1].d
                else if (rcx_8 == 3)
                    void var_198
                    uint64_t* rax_16
                    rax_16, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                        sub_1416fa750(&var_198, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_16)
                    rax_14 = rax_16[1].d
                else if (rcx_8 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_15
                    rax_15, zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_15)
                    rax_14 = rax_15[1].d
                else
                    int32_t var_2f4_1 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm9, zmm9.q)
                    rax_14 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                uint64_t var_2f0_1 = zmm0_1.q
                int64_t rbx_1 = rdi_1 * 3
                r15 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_4 * 3
                int32_t rdx_6 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_16 = *(&var_160:8 + (rsi << 2))
                int32_t r8_5 = *(&var_160:8 + (r15 << 2))
                zmm8_1 = var_2f0_1.d
                zmm6_1 = var_2f0_1:4.d
                int32_t rax_19 = *(&var_160:8 + (rbx_1 << 2))
                zmm7_1 = rax_14
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
                var_170[0] = zmm0_1.d
                zmm0_1 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_1.d
                zmm1_1 = zx.o(*(&var_130 + (rsi << 2)))
                var_170[3] = zmm3_1.d
                var_150_1:4.d = rdx_6
                int32_t rdx_7 = (&var_128)[r14_1]
                var_140_1 = rcx_16
                int32_t rcx_17 = (&var_128)[rsi]
                var_140_1 = rax_19
                int32_t rax_20 = (&var_128)[rbx_1]
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
                var_114_1:4.d = rcx_17
                int32_t rcx_18 = (&var_f8)[rsi]
                int32_t var_104_1 = rax_20
                int32_t rax_21 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm6_1.d f* zmm6_1.d
                var_f8 = (&var_f8)[r15]
                var_f4_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm8_1.d f* zmm8_1.d
                var_f4_1:8.d = rdx_8
                zmm1_1.d = zmm7_1.d f* zmm7_1.d
                var_e4_1:4.d = rcx_18
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_100 = zmm3_1.q
                zmm3_1 = var_2cc
                int32_t var_d4_1 = rax_21
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                result = zx.d(arg9)
                rdi.b = zmm3_1.d f> zmm2_1.d
                bool cond:4_1 = zmm2_1.d f>= var_334
                var_334 = zmm2_1.d
                zmm1_1 = zmm2_1
                r15.b = cond:4_1
                
                if (result.b != 0)
                    if (rdi.b == 0)
                        goto label_141653cc8
                    
                    if (zmm10.d f!= zmm9.d)
                    label_141653cc0:
                        zmm1_1 = zmm2_1
                        goto label_141653cc3
                    
                    zmm1_1 = 0x3eb0c6f7a0b5ed8d
                    zmm0_1 = _mm_cvtps_pd(zmm2_1.q)
                    
                    if (zmm0_1.q f<= zmm1_1.q)
                        goto label_141653cc0
                    
                    zmm0_1 = _mm_cvtps_pd(zmm3_1.q)
                    
                    if (zmm0_1.q f<= zmm1_1.q || r13.d s>= 4)
                        goto label_141653cc0
                    
                    rsi.b = 1
                    rdi.b = 0
                    var_338 = 1
                    goto label_141653ccd
            
        label_141653cc3:
            
            if (rdi.b != 0)
                rcx_2 = var_308
                r10 = arg4
            else
            label_141653cc8:
                rsi = zx.q(var_338)
            label_141653ccd:
                rcx_2 = var_308
                r10 = arg4
                
                if (r15.b == 0)
                    continue
                else
                    zmm1_1 = var_334
        
        zmm2_1 = 0x7f7fffff
        zmm5 = var_328[0]
        break

int32_t* rdi_3 = arg6
*rdi_3 = zmm10.d

if (not(zmm10.d f<= zmm9.d))
    zmm4_1 = zmm9
    zmm3_1 = zmm9
    *arg8 = var_2e0
    *(arg8 + 8) = var_2d8
    
    if (r13.d s> 0)
        int128_t* rcx_20 = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_25 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_20
            rcx_20 += 4
            zmm0_1.d = zmm2_1.d f* rax_25[-2]
            zmm1_1.d = zmm2_1.d f* rax_25[-1]
            zmm2_1.d = zmm2_1.d f* *rax_25
            rax_25 = &rax_25[3]
            zmm9.d = zmm9.d f+ zmm0_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            zmm3_1.d = zmm3_1.d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm2_1 = var_2c8
    zmm1_1.d = zmm10.d f* *r10
    zmm0_1.d = zmm2_1.d f* *arg8
    zmm1_1.d = zmm1_1.d f+ zmm5.d
    zmm9.d = zmm9.d f- zmm0_1.d
    zmm0_1.d = zmm2_1.d f* *(arg8 + 4)
    zmm2_1.d = zmm2_1.d f* *(arg8 + 8)
    zmm9.d = zmm9.d f+ zmm1_1.d
    zmm1_1.d = zmm10.d f* *(r10 + 4)
    zmm4_1.d = zmm4_1.d f- zmm0_1.d
    zmm10.d = zmm10.d f* *(r10 + 8)
    zmm3_1.d = zmm3_1.d f- zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ var_328[1]
    zmm10.d = zmm10.d f+ var_328[2]
    zmm4_1.d = zmm4_1.d f+ zmm1_1.d
    zmm3_1.d = zmm3_1.d f+ zmm10.d
    *arg7 = (_mm_unpacklo_ps(zmm9, zmm4_1.q)).q
    arg7[1].d = zmm3_1.d
else if (result.b != 0)
    if (not(zmm13_1.d f<= zmm9.d))
        zmm0_1 = _mm_cvtps_pd(zmm1_1.q)
    
    if (zmm13_1.d f<= zmm9.d || zmm0_1.q f<= 9.9999999999999995e-07 || zmm1_1.d f>= zmm2_1.d)
        var_170[0].q = 0
        var_170[2].q = 0
        var_328[0].q = 0
        var_328[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_328[3] s< 8)
            sub_14083ad30(&var_328, 8)
        
        uint128_t zmm0_2
        float rax_38
        
        if (var_308 == 0)
            int32_t var_2f4_5 = 0x3f800000
            rax_38 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm9, zmm9.q)
        label_1416542b4:
            zmm1_1 = zmm11_1
            *rdi_3 = (zmm13_1 ^ data_142d3f780).d
            *arg8 = zmm0_2.q
            *(arg8 + 8) = rax_38
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
                    int32_t rax_31 = (rdi_4 + 1).d
                    var_170[2] = rax_31
                    
                    if (rax_31 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_24 = var_170[0].q
                    int64_t rdx_11 = rdi_4 * 3
                    int32_t rax_32 = *(&var_128 + r12)
                    zmm1_1.d = zmm14.d f+ *(&var_100:4 + r12)
                    *(rcx_24 + (rdx_11 << 2)) = *(&var_130 + r12)
                    zmm0_2.d = zmm12.d f+ *(&var_100 + r12)
                    *(rcx_24 + (rdx_11 << 2) + 8) = rax_32
                    int64_t rdi_5 = sx.q(var_328[2])
                    int32_t var_314_2 = zmm1_1.d
                    var_318 = zmm0_2.d
                    zmm0_2.d = zmm15.d f+ *(&var_f8 + r12)
                    int32_t rax_33 = (rdi_5 + 1).d
                    var_328[2] = rax_33
                    var_310 = zmm0_2.d
                    
                    if (rax_33 s> var_328[3])
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
            int128_t* var_218_1 = arg3
            int32_t rax_37
            rax_37, zmm11_1, zmm13_1 = sub_1415aeb60(&var_170, &var_328, &var_248, &var_228, 
                &var_304, &var_318, &var_260, &var_238)
            zmm0_2 = zx.o(var_318.q)
            rax_38 = var_310
            
            if (rax_37 == 2)
                goto label_1416542b4
            
            *arg8 = zmm0_2.q
            zmm0_2.d = (var_304 ^ data_142d3f780).d f- zmm13_1.d
            *(arg8 + 8) = rax_38
            result = result_1
            *rdi_3 = zmm0_2.d
            zmm0_2 = zx.o(var_260)
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
            int32_t rax_28 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_29 = var_f8
            zmm5 = rax_28
            zmm12 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm10 = rax_29
            zmm3_1 = zmm1_1.d
            zmm11_1 = zmm2_1.d
        else if (r13.d s> 0)
            int128_t* rax_27 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_27
                rax_27 += 4
                zmm0_1.d = zmm2_1.d f* *(&var_130 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_130:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_128 + r12)
                zmm4_1.d = zmm4_1.d f+ zmm1_1.d
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
        zmm7_1.d = zmm7_1.d f- zmm4_1.d
        zmm1_1.d = zmm6_1.d f* zmm6_1.d
        zmm0_1.d = zmm8_1.d f* zmm8_1.d
        zmm2_1.d = zmm7_1.d f* zmm7_1.d
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
        zmm3_1.d = zmm2_1.d f* 0.5f
        zmm0_1.d = zmm4_1.d f* zmm4_1.d
        zmm1_1.d = zmm3_1.d f* zmm0_1.d
        zmm2_1.d = 0.5f f- zmm1_1.d
        zmm0_1.d = zmm4_1.d f* zmm2_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        zmm1_1.d = zmm4_1.d f* zmm4_1.d
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm5.d = 0.5f f- zmm3_1.d
        zmm0_1.d = zmm4_1.d f* zmm5.d
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        zmm0_1.d = zmm4_1.d f* zmm8_1.d
        zmm1_1.d = zmm4_1.d f* zmm7_1.d
        zmm4_1.d = zmm4_1.d f* zmm6_1.d
        zmm0_1 = _mm_unpacklo_ps(zmm0_1, zmm1_1.q)
        *arg8 = zmm0_1.q
        int32_t var_2f4_3 = zmm4_1.d
        zmm13_1.d = zmm13_1.d f- __sqrtss_xmmss_memss(zmm0_1.d, var_334).d
        *(arg8 + 8) = var_2f4_3
        
        if (not(zmm13_1.d f< zmm9.d))
            zmm9 = __minss_xmmss_memss(zmm13_1.d, 0x7f7fffff)
        
        zmm1_1 = *arg8
        zmm2_1 = *(arg8 + 4)
        zmm3_1 = *(arg8 + 8)
        zmm4_1 = var_2c8
        zmm0_1.d = zmm1_1.d f* zmm4_1.d
        zmm1_1.d = zmm1_1.d f* zmm9.d
        zmm11_1.d = zmm11_1.d f- zmm0_1.d
        zmm0_1.d = zmm2_1.d f* zmm4_1.d
        zmm2_1.d = zmm2_1.d f* zmm9.d
        zmm12.d = zmm12.d f- zmm0_1.d
        zmm0_1.d = zmm3_1.d f* zmm4_1.d
        zmm11_1.d = zmm11_1.d f+ zmm14.d
        zmm3_1.d = zmm3_1.d f* zmm9.d
        zmm9 ^= data_142d3f780
        zmm10.d = zmm10.d f- zmm0_1.d
        zmm12.d = zmm12.d f+ zmm15.d
        zmm11_1.d = zmm11_1.d f+ zmm1_1.d
        zmm10.d = zmm10.d f+ var_328[2]
        zmm12.d = zmm12.d f+ zmm2_1.d
        zmm10.d = zmm10.d f+ zmm3_1.d
        *arg7 = (_mm_unpacklo_ps(zmm11_1, zmm12.q)).q
        arg7[1].d = zmm10.d
        *rdi_3 = zmm9.d

result.b = 1
label_141654331:
__security_check_cookie(rax_1 ^ &var_378)
return result

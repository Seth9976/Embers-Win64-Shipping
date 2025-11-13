// 函数: sub_14163f300
// 地址: 0x14163f300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
float zmm3[0x4] = *arg3
float zmm13[0x4] = (*arg2)[0xb]
double zmm0[0x2] = arg3[1]
int64_t r12 = 0
uint128_t* r10 = arg4
float var_1f8 = zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
double var_308[0x2] = zmm0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
zmm0 = data_142d3f7e0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
void* var_240 = arg1
double var_170[0x2] = zmm0
float var_1ec = temp0[0]
zmm13[0] = zmm13[0] * zmm13[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
double temp0_1[0x2] = _mm_cvtps_pd(zmm13[0].q)
float var_1d8[0x4]
int128_t* var_220 = &var_1d8
int32_t* var_218 = &var_1f8
float (* var_228)[0x4] = arg2
temp0_1[0] = temp0_1[0] + 9.9999999999999995e-07
float zmm5[0x4] = *(arg10 + 4)
double zmm4[0x2] = *arg10
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_1f0 = temp0_2[0]
int32_t var_2b8 = _mm_cvtpd_ps(temp0_1)[0].d
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t var_1f4 = zmm0[0].d
temp0_5[0] = (zmm0 ^ 0x80000000)[0].d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_1d8 = temp0_8
int128_t zmm12 = *(arg1 + 0x2c)
int128_t zmm7 = *(arg1 + 0x28)
float zmm1[0x4] = *(arg1 + 0x30)
zmm5[0] = zmm5[0] f* zmm12.d
float var_238[0x4] = temp0_8
float zmm6[0x4] = *(arg10 + 8)
void* rax_4 = *(arg1 + 0x10)
zmm4[0].d = zmm4[0].d f* zmm7.d
zmm6[0] = zmm6[0] * zmm1[0]
double zmm8[0x2]

if (zmm4[0].d f>= 0f)
    zmm8 = *(rax_4 + 0x1c)
else
    zmm8 = *(rax_4 + 0x10)

int128_t zmm10

if (zmm5[0] >= 0f)
    zmm10 = *(rax_4 + 0x20)
else
    zmm10 = *(rax_4 + 0x14)

if (zmm6[0] >= 0f)
    zmm0 = *(rax_4 + 0x24)
else
    zmm0 = *(rax_4 + 0x18)

zmm1[0] = zmm1[0] f* zmm0[0].d
zmm8[0].d = zmm8[0].d f* zmm7.d
zmm10.d = zmm10.d f* zmm12.d
float var_298 = zmm1[0]
int64_t var_130 = (_mm_unpacklo_ps(zmm8, zmm10.q)).q
float var_310 = zmm1[0]
int32_t var_2f8 = (zmm4 ^ 0x80000000)[0].d
float var_2f4 = (zmm5 ^ 0x80000000)[0]
float var_2f0 = (zmm6 ^ 0x80000000)[0]
float var_128 = var_298
void var_2e4
int32_t* rax_6
uint128_t zmm8_1
uint128_t zmm9
uint128_t zmm10_1
uint128_t zmm11
uint128_t zmm13_1
rax_6, zmm8_1, zmm9, zmm10_1, zmm11, zmm13_1 = sub_1417105f0(&var_228, &var_2e4, &var_2f8)
uint128_t zmm2_1 = var_308[0]:4.d
uint128_t zmm6_1 = zx.o(0)
uint128_t zmm3_1 = var_308[1].d
uint128_t zmm15 = zmm2_1
uint128_t zmm5_1 = var_308[0].d
uint128_t zmm12_1 = zmm3_1
uint128_t zmm1_1 = zx.o(*rax_6)
int32_t rcx_1 = rax_6[2]
zmm8_1.d = zmm8_1.d f- zmm1_1.d
int32_t var_28c = zmm2_1.d
uint32_t result = zx.d(arg9)
zmm10_1.d = zmm10_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
uint128_t zmm14 = zmm5_1
uint128_t zmm7_1
zmm7_1.d = zmm5_1.d f- zmm8_1.d
int64_t var_100 = zmm1_1.q
uint128_t zmm0_1
zmm0_1.d = var_310.d f- rcx_1
zmm8_1.d = zmm2_1.d f- zmm10_1.d
int32_t var_290 = zmm5_1.d
int32_t var_30c = zmm3_1.d
uint32_t result_2 = zmm3_1.d
int32_t var_f8 = rcx_1
zmm10_1.d = zmm3_1.d f- zmm0_1.d
int64_t var_2c8 = 0
int32_t var_2c0 = 0x3f800000
zmm2_1.d = zmm8_1.d f* zmm8_1.d
zmm0_1.d = zmm7_1.d f* zmm7_1.d
zmm1_1.d = zmm10_1.d f* zmm10_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= var_2b8 || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm2_1 = 0x7f7fffff
int64_t r15
r15.b = 0
int32_t var_314 = 0x7f7fffff
int32_t rcx_2 = 0
char var_318 = rdi.b
uint64_t rsi = zx.q(rdi.b)
int32_t var_310_1 = 0
zmm1_1 = 0x7f7fffff
int32_t var_2e8
int64_t var_258
uint32_t result_1
uint128_t zmm4_1

if (rdi.b == 0)
    while (true)
        int32_t rax_7 = rcx_2
        rcx_2 += 1
        var_310_1 = rcx_2
        
        if (rax_7 s>= 0x20)
            zmm12_1 = var_30c
            zmm1_1 = var_314
            result = zx.d(arg9)
        else
            void* rax_8 = var_240
            zmm0_1.d = zmm8_1.d f* zmm8_1.d
            zmm2_1.d = zmm7_1.d f* zmm7_1.d
            void* rcx_3 = *(rax_8 + 0x10)
            zmm11 = *(rax_8 + 0x30)
            zmm1_1.d = zmm10_1.d f* zmm10_1.d
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
            zmm5_1.d = 0.5f f- zmm3_1.d
            zmm3_1 = *(rax_8 + 0x28)
            zmm0_1.d = zmm4_1.d f* zmm5_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm7_1.d = zmm7_1.d f* zmm4_1.d
            zmm8_1.d = zmm8_1.d f* zmm4_1.d
            zmm10_1.d = zmm10_1.d f* zmm4_1.d
            zmm0_1.d = zmm7_1.d f* zmm3_1.d
            var_2e8 = zmm4_1.d
            zmm4_1 = *(rax_8 + 0x2c)
            zmm1_1.d = zmm8_1.d f* zmm4_1.d
            zmm2_1.d = zmm10_1.d f* zmm11.d
            
            if (zmm0_1.d f>= zmm9.d)
                zmm0_1 = *(rcx_3 + 0x1c)
            else
                zmm0_1 = *(rcx_3 + 0x10)
            
            if (zmm1_1.d f>= zmm9.d)
                zmm12_1 = *(rcx_3 + 0x20)
            else
                zmm12_1 = *(rcx_3 + 0x14)
            
            if (zmm2_1.d f>= zmm9.d)
                zmm1_1 = *(rcx_3 + 0x24)
            else
                zmm1_1 = *(rcx_3 + 0x18)
            
            zmm0_1.d = zmm0_1.d f* zmm3_1.d
            zmm11.d = zmm11.d f* zmm1_1.d
            zmm12_1.d = zmm12_1.d f* zmm4_1.d
            int32_t var_2cc_1 = zmm0_1.d
            int32_t var_298_1 = zmm11.d
            int32_t var_210 = (zmm7_1 ^ 0x80000000).d
            int32_t var_20c_1 = (zmm8_1 ^ 0x80000000).d
            int32_t var_208_1 = (zmm10_1 ^ 0x80000000).d
            void var_1bc
            int32_t* rax_9
            rax_9, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm10_1, zmm11, zmm12_1, zmm13_1, zmm14, zmm15 =
                sub_1417105f0(&var_228, &var_1bc, &var_210)
            zmm5_1 = var_2cc_1
            zmm1_1 = zx.o(*rax_9)
            int32_t rcx_5 = rax_9[2]
            zmm2_1.d = zmm5_1.d f- zmm1_1.d
            zmm3_1.d = zmm12_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
            zmm11.d = zmm11.d f- rcx_5
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            zmm4_1.d = zmm14.d f- zmm2_1.d
            zmm0_1 = _mm_unpacklo_ps(zmm5_1, zmm12_1.q)
            int32_t var_2cc_2 = zmm2_1.d
            zmm2_1.d = zmm15.d f- zmm3_1.d
            var_2e8 = zmm3_1.d
            uint64_t rcx_7 = r13 * 3
            var_2f8 = zmm4_1.d
            zmm3_1.d = var_30c.d f- zmm11.d
            zmm5_1.d = zmm8_1.d f* zmm2_1.d
            *(&var_130 + (rcx_7 << 2)) = zmm0_1.q
            *(&var_100 + (rcx_7 << 2)) = zmm1_1.q
            zmm0_1.d = zmm7_1.d f* zmm4_1.d
            (&var_128)[rcx_7] = var_298_1
            zmm1_1.d = zmm10_1.d f* zmm3_1.d
            (&var_f8)[rcx_7] = rax_9[2]
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            int32_t var_2f4_1 = zmm2_1.d
            var_2f0 = zmm3_1.d
            zmm5_1.d = zmm5_1.d f+ zmm1_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm5_1.d f<= zmm13_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_7 << 2)) = var_2f8.q
                *(&var_160:8 + (rcx_7 << 2)) = var_2f0
                var_188 = r13.d
            label_14163fb12:
                zmm11 = var_314
                zmm12_1 = var_30c
                
                if (rsi.b != 0 && not(zmm5_1.d f< zmm9.d))
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm5_1.d = zmm5_1.d f+ 9.99999997e-07f
                    rdi.b = zmm5_1.d f>= zmm11.d
            else
                zmm3_1 = *(r10 + 4)
                zmm4_1 = *r10
                zmm12_1 = *(r10 + 8)
                zmm2_1.d = zmm7_1.d f* zmm4_1.d
                zmm0_1.d = zmm8_1.d f* zmm3_1.d
                zmm1_1.d = zmm12_1.d f* zmm10_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm9.d)
                    result.b = 0
                    goto label_1416405c4
                
                zmm1_1 = zmm6_1
                zmm0_1.d = zmm5_1.d f- zmm13_1.d
                zmm0_1.d = zmm0_1.d f/ zmm2_1.d
                zmm6_1.d = zmm6_1.d f- zmm0_1.d
                
                if (zmm6_1.d f<= zmm1_1.d)
                    goto label_14163fb12
                
                if (zmm6_1.d f> arg5)
                    result.b = 0
                    goto label_1416405c4
                
                zmm1_1 = zx.o(var_290.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_258 = zmm1_1.q
                r13 = zx.q(r13.d + 1)
                zmm14.d = zmm4_1.d f* zmm6_1.d
                result_1 = result_2
                zmm15.d = zmm3_1.d f* zmm6_1.d
                var_188 = r13.d
                zmm14.d = zmm14.d f+ var_308[0].d
                zmm12_1.d = zmm12_1.d f* zmm6_1.d
                var_318 = 0
                zmm15.d = zmm15.d f+ var_308[0]:4.d
                var_2c8.d = zmm7_1.d
                zmm12_1.d = zmm12_1.d f+ var_308[1].d
                var_290 = zmm14.d
                zmm3_1.d = zmm14.d f- zmm1_1.d
                var_2c8:4.d = zmm8_1.d
                zmm4_1.d = zmm15.d f- zmm0_1.d
                int32_t var_28c_1 = zmm15.d
                zmm2_1.d = zmm12_1.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm3_1.d
                var_30c = zmm12_1.d
                result_2 = zmm12_1.d
                zmm1_1.d = var_160:4.d.d f+ zmm4_1.d
                var_2c0 = zmm10_1.d
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
                zmm1_1.d = zmm14.d f- var_2cc_2
                zmm2_1.d = zmm15.d f- var_2e8
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm12_1.d f- zmm11.d
                zmm11 = 0x7f7fffff
                var_314 = 0x7f7fffff
                *(&var_160 + (rcx_7 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_7 << 2)) = zmm0_1.d
            
            if (rdi.b != 0)
                int64_t* rax_23
                rax_23, zmm6_1, zmm9, zmm12_1, zmm13_1, zmm14, zmm15 =
                    sub_1416f4530(&var_238, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                zmm1_1 = zx.o(*rax_23)
                zmm0_1 = zmm1_1
                zmm10_1 = rax_23[1].d
                result = zx.d(arg9)
                zmm7_1 = zmm1_1.d
                zmm1_1 = var_314
                zmm8_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            else
                int32_t rcx_8 = r13.d
                int32_t rax_15
                
                if (rcx_8 == 1)
                    int64_t rax_19 = sx.q(var_184)
                    int64_t rcx_15 = rax_19 * 3
                    *(&var_170 + (rax_19 << 2)) = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_15 << 2)))
                    rax_15 = *(&var_160:8 + (rcx_15 << 2))
                else if (rcx_8 == 2)
                    void var_198
                    uint64_t* rax_18
                    rax_18, zmm6_1, zmm9 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_18)
                    rax_15 = rax_18[1].d
                else if (rcx_8 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_17
                    rax_17, zmm6_1, zmm9, zmm11, zmm12_1, zmm13_1, zmm14, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_17)
                    rax_15 = rax_17[1].d
                else if (rcx_8 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_16
                    rax_16, zmm6_1, zmm9, zmm11, zmm12_1, zmm13_1, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_16)
                    rax_15 = rax_16[1].d
                else
                    int32_t var_2dc_1 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm9, zmm9.q)
                    rax_15 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                uint64_t var_2d8_1 = zmm0_1.q
                int64_t rbx_1 = rdi_1 * 3
                r15 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_4 * 3
                int32_t r8_5 = *(&var_160:8 + (r15 << 2))
                zmm7_1 = var_2d8_1.d
                zmm8_1 = var_2d8_1:4.d
                zmm10_1 = rax_15
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                var_150_1:8.q = *(&var_160 + (rsi << 2))
                var_160.q = *(&var_160 + (r15 << 2))
                float rdi_2 = (&var_128)[r15]
                var_170[1].d = (*(&var_170 + (r9_4 << 2))).d
                var_170[0].d = (*(&var_170 + (r11_1 << 2))).d
                var_170[0]:4.d = (*(&var_170 + (r10_1 << 2))).d
                var_170[1]:4.d = (*(&var_170 + (rdi_1 << 2))).d
                var_150_1:4.d = *(&var_160:8 + (r14_1 << 2))
                int32_t rdx_7 = (&var_128)[r14_1]
                var_140_1 = *(&var_160:8 + (rsi << 2))
                int32_t rcx_17 = (&var_128)[rsi]
                var_140_1 = *(&var_160:8 + (rbx_1 << 2))
                int32_t rax_21 = (&var_128)[rbx_1]
                var_124_1.q = *(&var_130 + (r14_1 << 2))
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = *(&var_130 + (rbx_1 << 2))
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = *(&var_130 + (rsi << 2))
                zmm1_1 = zx.o(*(&var_100 + (rsi << 2)))
                var_130 = *(&var_130 + (r15 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_7
                int32_t rdx_8 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_17
                int32_t rcx_18 = (&var_f8)[rsi]
                int32_t var_104_1 = rax_21
                int32_t rax_22 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm8_1.d f* zmm8_1.d
                var_f8 = (&var_f8)[r15]
                var_f4_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm7_1.d f* zmm7_1.d
                var_f4_1:8.d = rdx_8
                zmm1_1.d = zmm10_1.d f* zmm10_1.d
                var_e4_1:4.d = rcx_18
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_100 = zmm3_1.q
                zmm3_1 = var_2b8
                int32_t var_d4_1 = rax_22
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                result = zx.d(arg9)
                rdi.b = zmm3_1.d f> zmm2_1.d
                var_314 = zmm2_1.d
                zmm1_1 = zmm2_1
                r15.b = zmm2_1.d f>= zmm11.d
                
                if (result.b != 0)
                    if (rdi.b == 0)
                        goto label_14163ff63
                    
                    if (zmm6_1.d f!= zmm9.d)
                    label_14163ff5b:
                        zmm1_1 = zmm2_1
                        goto label_14163ff5e
                    
                    zmm1_1 = 0x3eb0c6f7a0b5ed8d
                    zmm0_1 = _mm_cvtps_pd(zmm2_1.q)
                    
                    if (zmm0_1.q f<= zmm1_1.q)
                        goto label_14163ff5b
                    
                    zmm0_1 = _mm_cvtps_pd(zmm3_1.q)
                    
                    if (zmm0_1.q f<= zmm1_1.q || r13.d s>= 4)
                        goto label_14163ff5b
                    
                    rsi.b = 1
                    rdi.b = 0
                    var_318 = 1
                    goto label_14163ff68
            
        label_14163ff5e:
            
            if (rdi.b != 0)
                rcx_2 = var_310_1
                r10 = arg4
            else
            label_14163ff63:
                rsi = zx.q(var_318)
            label_14163ff68:
                rcx_2 = var_310_1
                r10 = arg4
                
                if (r15.b == 0)
                    continue
                else
                    zmm1_1 = var_314
        
        zmm11 = 0x80000000
        zmm2_1 = 0x7f7fffff
        zmm5_1 = var_308[0].d
        break

int32_t* rdi_3 = arg6
*rdi_3 = zmm6_1.d

if (not(zmm6_1.d f<= zmm9.d))
    zmm4_1 = zmm9
    zmm3_1 = zmm9
    *arg8 = var_2c8
    arg8[1].d = var_2c0
    
    if (r13.d s> 0)
        int128_t* rcx_20 = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_26 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_20
            rcx_20 += 4
            zmm0_1.d = zmm2_1.d f* rax_26[-2]
            zmm1_1.d = zmm2_1.d f* rax_26[-1]
            zmm2_1.d = zmm2_1.d f* *rax_26
            rax_26 = &rax_26[3]
            zmm9.d = zmm9.d f+ zmm0_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            zmm3_1.d = zmm3_1.d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm0_1.d = zmm13_1.d f* *arg8
    zmm1_1.d = zmm6_1.d f* *r10
    zmm9.d = zmm9.d f- zmm0_1.d
    zmm0_1.d = zmm13_1.d f* *(arg8 + 4)
    zmm13_1.d = zmm13_1.d f* arg8[1].d
    zmm1_1.d = zmm1_1.d f+ zmm5_1.d
    zmm4_1.d = zmm4_1.d f- zmm0_1.d
    zmm3_1.d = zmm3_1.d f- zmm13_1.d
    zmm9.d = zmm9.d f+ zmm1_1.d
    zmm1_1.d = zmm6_1.d f* *(r10 + 4)
    zmm6_1.d = zmm6_1.d f* *(r10 + 8)
    zmm1_1.d = zmm1_1.d f+ var_308[0]:4.d
    zmm6_1.d = zmm6_1.d f+ var_308[1].d
    zmm4_1.d = zmm4_1.d f+ zmm1_1.d
    zmm3_1.d = zmm3_1.d f+ zmm6_1.d
    *arg7 = (_mm_unpacklo_ps(zmm9, zmm4_1.q)).q
    arg7[1].d = zmm3_1.d
else if (result.b != 0)
    if (not(zmm13_1.d f<= zmm9.d))
        zmm0_1 = _mm_cvtps_pd(zmm1_1.q)
    
    if (zmm13_1.d f<= zmm9.d || zmm0_1.q f<= 9.9999999999999995e-07 || zmm1_1.d f>= zmm2_1.d)
        var_170[0] = 0
        var_170[1] = 0
        var_308[0] = 0
        var_308[1] = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_308[1]:4.d s< 8)
            sub_14083ad30(&var_308, 8)
        
        float rax_39
        uint128_t zmm0_2
        
        if (var_310_1 == 0)
            int32_t var_2dc_5 = 0x3f800000
            rax_39 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm9, zmm9.q)
        label_14164055a:
            zmm2_1 = var_130:4.d
            zmm1_1 = var_130.d
            *rdi_3 = (zmm13_1 ^ zmm11).d
            *arg8 = zmm0_2.q
            arg8[1].d = rax_39
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_170[1].d)
                    int32_t rax_32 = (rdi_4 + 1).d
                    var_170[1].d = rax_32
                    
                    if (rax_32 s> var_170[1]:4.d)
                        sub_14083a7e0(&var_170)
                    
                    double rcx_24 = var_170[0]
                    int64_t rdx_11 = rdi_4 * 3
                    int32_t rax_33 = *(&var_128 + r12)
                    zmm1_1.d = zmm15.d f+ *(&var_100:4 + r12)
                    *(rcx_24 i+ (rdx_11 << 2)) = *(&var_130 + r12)
                    zmm0_2.d = zmm14.d f+ *(&var_100 + r12)
                    *(rcx_24 i+ (rdx_11 << 2) + 8) = rax_33
                    int64_t rdi_5 = sx.q(var_308[1].d)
                    int32_t var_2f4_2 = zmm1_1.d
                    var_2f8 = zmm0_2.d
                    zmm0_2.d = zmm12_1.d f+ *(&var_f8 + r12)
                    int32_t rax_34 = (rdi_5 + 1).d
                    var_308[1].d = rax_34
                    var_2f0 = zmm0_2.d
                    
                    if (rax_34 s> var_308[1]:4.d)
                        sub_14083a7e0(&var_308)
                    
                    double rcx_26 = var_308[0]
                    int64_t rdx_13 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_26 i+ (rdx_13 << 2)) = var_2f8.q
                    *(rcx_26 i+ (rdx_13 << 2) + 8) = var_2f0
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_228 = &var_1d8
            float (* var_220_1)[0x4] = arg2
            int128_t* var_218_1 = arg3
            int32_t rax_38
            rax_38, zmm11, zmm13_1 = sub_1415c4240(&var_170, &var_308, &var_240, &var_228, 
                &var_2e8, &var_2f8, &var_258, &var_238)
            zmm0_2 = zx.o(var_2f8.q)
            rax_39 = var_2f0
            
            if (rax_38 == 2)
                goto label_14164055a
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_39
            result = result_1
            zmm0_2.d = (var_2e8 ^ zmm11).d f- zmm13_1.d
            *rdi_3 = zmm0_2.d
            *arg7 = var_258
        double rcx_28 = var_308[0]
        arg7[1].d = result
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        double rcx_29 = var_170[0]
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
    else
        zmm3_1 = zmm9
        zmm4_1 = zmm9
        *arg8 = var_2c8
        zmm5_1 = zmm9
        arg8[1].d = var_2c0
        zmm11 = zmm9
        zmm12_1 = zmm9
        zmm10_1 = zmm9
        
        if (rcx_2 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            float rax_29 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_30 = var_f8
            zmm5_1 = rax_29
            zmm12_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm10_1 = rax_30
            zmm3_1 = zmm1_1.d
            zmm11 = zmm2_1.d
        else if (r13.d s> 0)
            int128_t* rax_28 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_28
                rax_28 += 4
                zmm0_1.d = zmm2_1.d f* *(&var_130 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_130:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_128 + r12)
                zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_100 + r12)
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm11.d = zmm11.d f+ zmm1_1.d
                r12 += 0xc
                zmm12_1.d = zmm12_1.d f+ zmm0_1.d
                zmm10_1.d = zmm10_1.d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm14 = var_308[0].d
        zmm6_1.d = var_308[1].d.d f+ zmm10_1.d
        zmm15 = var_308[0]:4.d
        zmm8_1.d = zmm14.d f+ zmm11.d
        zmm7_1.d = zmm15.d f+ zmm12_1.d
        zmm6_1.d = zmm6_1.d f- zmm5_1.d
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
        zmm5_1.d = 0.5f f- zmm3_1.d
        zmm0_1.d = zmm4_1.d f* zmm5_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        zmm8_1.d = zmm8_1.d f* zmm4_1.d
        zmm7_1.d = zmm7_1.d f* zmm4_1.d
        zmm6_1.d = zmm6_1.d f* zmm4_1.d
        zmm0_1 = _mm_unpacklo_ps(zmm8_1, zmm7_1.q)
        *arg8 = zmm0_1.q
        int32_t var_2dc_3 = zmm6_1.d
        zmm1_1.d = zmm13_1.d f- __sqrtss_xmmss_memss(zmm0_1.d, var_314).d
        arg8[1].d = var_2dc_3
        
        if (not(zmm1_1.d f< zmm9.d))
            zmm9 = __minss_xmmss_memss(zmm1_1.d, 0x7f7fffff)
        
        zmm1_1 = *arg8
        zmm2_1 = *(arg8 + 4)
        zmm3_1 = arg8[1].d
        zmm0_1.d = zmm1_1.d f* zmm13_1.d
        zmm11.d = zmm11.d f- zmm0_1.d
        zmm0_1.d = zmm9.d f* zmm1_1.d
        zmm1_1.d = zmm2_1.d f* zmm13_1.d
        zmm11.d = zmm11.d f+ zmm14.d
        zmm12_1.d = zmm12_1.d f- zmm1_1.d
        zmm1_1.d = zmm3_1.d f* zmm13_1.d
        zmm11.d = zmm11.d f+ zmm0_1.d
        zmm0_1.d = zmm9.d f* zmm2_1.d
        zmm10_1.d = zmm10_1.d f- zmm1_1.d
        zmm12_1.d = zmm12_1.d f+ zmm15.d
        zmm10_1.d = zmm10_1.d f+ var_308[1].d
        zmm12_1.d = zmm12_1.d f+ zmm0_1.d
        zmm0_1 = zmm9
        zmm9 ^= data_142d3f780
        zmm0_1.d = zmm0_1.d f* zmm3_1.d
        zmm10_1.d = zmm10_1.d f+ zmm0_1.d
        *arg7 = (_mm_unpacklo_ps(zmm11, zmm12_1.q)).q
        arg7[1].d = zmm10_1.d
        *rdi_3 = zmm9.d

result.b = 1
label_1416405c4:
__security_check_cookie(rax_1 ^ &var_358)
return result

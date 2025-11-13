// 函数: sub_14164c9b0
// 地址: 0x14164c9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
int64_t r12 = 0
int32_t rbx = 0
uint128_t* r14 = arg4
double zmm0[0x2] = *(*(arg1 + 0x10) + 0x2c)
int32_t var_2dc = 0
uint32_t zmm10[0x4]

if (zmm0[0].d f== 0f)
    zmm10 = zx.o(0)
else
    zmm10 = __andps_xmmxud_memxud(*(arg1 + 0x28), data_142d3f770)
    zmm10[0] = zmm10[0] f* zmm0[0].d

float zmm3[0x4] = *arg3
float zmm15[0x4] = 0x80000000
double var_338[0x2] = arg3[1]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_218 = zmm3[0]
int32_t var_188 = 0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
float (* var_240)[0x4] = arg2
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
double var_170[0x2] = data_142d3f7e0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
void* var_288 = arg1
float var_20c = temp0_2[0]
zmm10[0] = zmm10[0] f* zmm10[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
double temp0_3[0x2] = _mm_cvtps_pd(zmm10[0].q)
float var_1d8[0x4]
float (* var_238)[0x4] = &var_1d8
float* var_230 = &var_218
temp0_3[0] = temp0_3[0] + 9.9999999999999995e-07
uint32_t zmm1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
uint32_t var_210 = zmm1[0]
int32_t var_2e0 = _mm_cvtpd_ps(temp0_3)[0].d
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t var_214 = zmm0[0].d
temp0_7[0] = (zmm0 ^ 0x80000000)[0].d
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
temp0_8[0] = (zmm1 ^ 0x80000000)[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_9[0] = temp0_2[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
float var_258[0x4] = temp0_10
var_1d8 = temp0_10
int64_t var_2a0
sub_14170aa90(&var_288, &var_2a0, arg10)
int128_t zmm1_1 = arg10[1] ^ 0x80000000
int64_t var_130 = var_2a0
int32_t var_324 = zmm1_1.d
int32_t var_328 = (*arg10 ^ 0x80000000).d
uint128_t zmm0_1 = arg10[2] ^ 0x80000000
int32_t var_298
int32_t var_128 = var_298
int32_t var_320 = zmm0_1.d
float var_308
float* rax_6
uint128_t zmm9
uint128_t zmm10_1
rax_6, zmm9, zmm10_1 = sub_14170eae0(&var_240, &var_308, &var_328)
uint128_t zmm2_1 = zx.o(*rax_6)
uint128_t zmm1_2 = var_338[0].d
uint128_t zmm6 = zx.o(0)
int32_t rcx_2 = rax_6[2]
double zmm7[0x2] = zmm1_2
double zmm0_2[0x2] = var_2a0.d
uint128_t zmm12 = zmm1_2
uint128_t zmm3_1 = var_338[0]:4.d
zmm0_2[0].d = zmm0_2[0].d f- zmm2_1.d
float zmm5[0x4] = var_338[1].d
int32_t var_2d0 = zmm1_2.d
zmm1_2 = var_2a0:4.d
uint32_t result = zx.d(arg9)
uint128_t zmm13 = zmm3_1
zmm7[0].d = zmm7[0].d f- zmm0_2[0].d
int64_t var_100 = zmm2_1.q
zmm0_2 = zmm2_1
float zmm14[0x4] = zmm5
zmm1_2.d = zmm1_2.d f- _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)[0].d
int32_t var_2cc = zmm3_1.d
zmm0_2 = var_298
zmm0_2[0].d = zmm0_2[0].d f- rcx_2
float result_2 = zmm5[0]
int32_t var_f8 = rcx_2
uint128_t zmm8
zmm8.d = zmm3_1.d f- zmm1_2.d
int64_t var_2f0 = 0
int32_t var_2e8 = 0x3f800000
uint128_t zmm11
zmm11.d = zmm5.d f- zmm0_2[0].d
zmm7[0].d = zmm7[0].d f* zmm7[0].d
zmm2_1.d = zmm8.d f* zmm8.d
zmm1_2.d = zmm11.d f* zmm11.d
zmm2_1.d = zmm2_1.d f+ zmm7[0].d
zmm2_1.d = zmm2_1.d f+ zmm1_2.d
int32_t rdi

if (zmm2_1.d f>= var_2e0 || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm2_1 = 0x7f7fffff
int32_t rcx_3 = 0
int32_t var_344 = 0x7f7fffff
zmm1_2 = 0x7f7fffff
int32_t var_318 = 0
uint64_t r15 = zx.q(rdi.b)
char var_340 = 0
char var_348 = rdi.b
int32_t var_310
int32_t var_2b0
int64_t var_270
float result_1
uint128_t zmm4_1

if (rdi.b == 0)
    while (true)
        int32_t rax_7 = rcx_3
        rcx_3 += 1
        var_318 = rcx_3
        
        if (rax_7 s>= 0x20)
            zmm1_2 = var_344
            result = zx.d(arg9)
        else
            zmm5 = 0x3f000000
            void* rax_8 = var_288
            zmm2_1.d = zmm8.d f* zmm8.d
            zmm7[0].d = zmm7[0].d f* zmm7[0].d
            void* rcx_4 = *(rax_8 + 0x10)
            zmm15 = *(rax_8 + 0x30)
            zmm1_2.d = zmm11.d f* zmm11.d
            zmm2_1.d = zmm2_1.d f+ zmm7[0].d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            zmm3_1.d = zmm2_1.d
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0_2 = zmm4_1
            zmm0_2[0].d = zmm0_2[0].d f* zmm4_1.d
            zmm1_2.d = zmm3_1.d f* zmm0_2[0].d
            zmm0_2 = zmm4_1
            zmm2_1.d = 0.5f f- zmm1_2.d
            zmm0_2[0].d = zmm0_2[0].d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_2[0].d
            zmm0_2 = zmm4_1
            zmm1_2.d = zmm4_1.d f* zmm4_1.d
            zmm3_1.d = zmm3_1.d f* zmm1_2.d
            zmm1_2 = *(rax_8 + 0x2c)
            int32_t var_30c_1 = zmm1_2.d
            zmm5[0] = 0.5f f- zmm3_1.d
            zmm3_1 = *(rcx_4 + 0x1c)
            zmm0_2[0].d = zmm0_2[0].d f* zmm5[0]
            zmm5 = *(rcx_4 + 0x24)
            zmm4_1.d = zmm4_1.d f+ zmm0_2[0].d
            zmm0_2 = *(rax_8 + 0x28)
            zmm2_1 = zmm0_2
            int32_t var_314_1 = zmm0_2[0].d
            zmm0_2 = zmm1_2
            zmm7[0].d = zmm7[0].d f* zmm4_1.d
            zmm8.d = zmm8.d f* zmm4_1.d
            zmm2_1.d = zmm2_1.d f* zmm7[0].d
            zmm11.d = zmm11.d f* zmm4_1.d
            zmm2_1.d = zmm2_1.d f* zmm3_1.d
            zmm0_2[0].d = zmm0_2[0].d f* zmm8.d
            var_310 = zmm4_1.d
            zmm4_1 = *(rcx_4 + 0x20)
            zmm0_2[0].d = zmm0_2[0].d f* zmm4_1.d
            zmm1_2.d = zmm15.d f* zmm11.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
            zmm1_2.d = zmm1_2.d f* zmm5[0]
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            int32_t* rax_9
            int32_t rbx_1
            
            if (zmm2_1.d f< zmm9.d)
                rbx_1 = rbx | 2
                int32_t var_1f0_1 = *(rcx_4 + 0x18)
                int64_t var_1f8
                rax_9 = &var_1f8
                var_1f8 = *(rcx_4 + 0x10)
            else
                zmm0_2 = *(rcx_4 + 0x28)
                int32_t var_228
                rax_9 = &var_228
                zmm3_1.d = zmm3_1.d f* zmm0_2[0].d
                rbx_1 = rbx | 1
                zmm4_1.d = zmm4_1.d f* zmm0_2[0].d
                zmm3_1.d = zmm3_1.d f+ *(rcx_4 + 0x10)
                zmm5[0] = zmm5[0] f* zmm0_2[0].d
                zmm4_1.d = zmm4_1.d f+ *(rcx_4 + 0x14)
                zmm5[0] = zmm5[0] f+ *(rcx_4 + 0x18)
                var_228 = zmm3_1.d
                int32_t var_224_1 = zmm4_1.d
                float var_220_1 = zmm5[0]
            
            zmm1_2 = zx.o(*rax_9)
            zmm0_2 = var_314_1
            int32_t rcx_6 = rbx_1 & 0xfffffffd
            zmm0_2[0].d = zmm0_2[0].d f* zmm1_2.d
            zmm15[0] = zmm15[0] f* rax_9[2]
            int32_t var_314_2 = zmm0_2[0].d
            
            if ((rbx_1.b & 2) == 0)
                rcx_6 = rbx_1
            
            zmm0_2 = zmm1_2
            int32_t rdx_3 = rcx_6 & 0xfffffffe
            zmm1_2.d = var_30c_1.d f* _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)[0].d
            float var_298_1 = zmm15[0]
            
            if ((rcx_6.b & 1) == 0)
                rdx_3 = rcx_6
            
            int32_t var_30c_2 = zmm1_2.d
            var_2b0 = (zmm7 ^ 0x80000000)[0].d
            int32_t var_2ac_1 = (zmm8 ^ 0x80000000).d
            int32_t var_2a8_1 = (zmm11 ^ 0x80000000)[0].d
            float var_1bc
            float* rax_14
            rax_14, zmm6, zmm7, zmm8, zmm9, zmm10_1, zmm11, zmm12, zmm13 =
                sub_14170eae0(&var_240, &var_1bc, &var_2b0)
            zmm5 = var_314_2
            zmm1_2 = zx.o(*rax_14)
            int32_t rcx_8 = rax_14[2]
            zmm2_1.d = zmm5.d f- zmm1_2.d
            zmm0_2 = zmm1_2
            zmm3_1.d = var_30c_2.d f- _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)[0].d
            zmm15[0] = zmm15[0] f- rcx_8
            zmm0_2 = zmm5
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            zmm4_1.d = zmm12.d f- zmm2_1.d
            zmm5 = zmm8
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, var_30c_2.q)
            int32_t var_314_3 = zmm2_1.d
            zmm2_1.d = zmm13.d f- zmm3_1.d
            var_310 = zmm3_1.d
            var_328 = zmm4_1.d
            uint64_t rcx_10 = r13 * 3
            zmm3_1.d = zmm14.d f- zmm15[0]
            zmm5[0] = zmm5[0] f* zmm2_1.d
            *(&var_130 + (rcx_10 << 2)) = zmm0_2.q
            *(&var_100 + (rcx_10 << 2)) = *rax_14
            zmm7[0].d = zmm7[0].d f* zmm4_1.d
            (&var_128)[rcx_10] = var_298_1
            result = rax_14[2]
            int32_t var_324_1 = zmm2_1.d
            zmm5[0] = zmm5[0] f+ zmm7[0].d
            var_320 = zmm3_1.d
            (&var_f8)[rcx_10] = result
            zmm1_2.d = zmm11.d f* zmm3_1.d
            zmm5[0] = zmm5[0] f+ zmm1_2.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm5[0] f<= zmm10_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_10 << 2)) = var_328.q
                *(&var_160:8 + (rcx_10 << 2)) = var_320
                var_188 = r13.d
            label_14164d21a:
                zmm15 = var_344
                
                if (r15.b != 0 && not(zmm5[0] f< zmm9.d))
                    zmm5[0] = zmm5[0] * zmm5[0]
                    zmm5[0] = zmm5[0] + 9.99999997e-07f
                    rdi.b = zmm5[0] >= zmm15[0]
            else
                zmm3_1 = *(r14 + 4)
                zmm4_1 = *r14
                zmm0_2 = zmm3_1
                zmm2_1.d = zmm4_1.d f* zmm7[0].d
                zmm0_2[0].d = zmm0_2[0].d f* zmm8.d
                zmm1_2.d = (*(r14 + 8)).d f* zmm11.d
                zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                
                if (zmm2_1.d f>= zmm9.d)
                    result.b = 0
                    goto label_14164dc97
                
                zmm0_2 = zmm5
                zmm1_2 = zmm6
                zmm0_2[0].d = zmm0_2[0].d f- zmm10_1.d
                zmm0_2[0].d = zmm0_2[0].d f/ zmm2_1.d
                zmm6.d = zmm6.d f- zmm0_2[0].d
                
                if (zmm6.d f<= zmm1_2.d)
                    goto label_14164d21a
                
                if (zmm6.d f> arg5)
                    result.b = 0
                    goto label_14164dc97
                
                zmm1_2 = zx.o(var_2d0.q)
                zmm14 = *(r14 + 8)
                zmm0_2 = zmm1_2
                zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                r13 = zx.q(r13.d + 1)
                var_270 = zmm1_2.q
                zmm12.d = zmm4_1.d f* zmm6.d
                result_1 = result_2
                zmm13.d = zmm3_1.d f* zmm6.d
                var_188 = r13.d
                zmm12.d = zmm12.d f+ var_338[0].d
                zmm14[0] = zmm14[0] f* zmm6.d
                var_348 = 0
                zmm13.d = zmm13.d f+ var_338[0]:4.d
                var_2f0.d = zmm7[0].d
                zmm14[0] = zmm14[0] f+ var_338[1].d
                var_2d0 = zmm12.d
                zmm3_1.d = zmm12.d f- zmm1_2.d
                var_2f0:4.d = zmm8.d
                zmm4_1.d = zmm13.d f- zmm0_2[0].d
                int32_t var_2cc_1 = zmm13.d
                zmm0_2 = var_160.d
                zmm2_1.d = zmm14.d f- result_1
                zmm0_2[0].d = zmm0_2[0].d f+ zmm3_1.d
                result_2 = zmm14[0]
                var_2e8 = zmm11.d
                zmm1_2.d = var_160:4.d.d f+ zmm4_1.d
                var_160.d = zmm0_2[0].d
                zmm0_2 = var_160:8.d
                zmm0_2[0].d = zmm0_2[0].d f+ zmm2_1.d
                var_160:4.d = zmm1_2.d
                zmm1_2.d = var_160:0xc.d.d f+ zmm3_1.d
                var_160:8.d = zmm0_2[0].d
                zmm0_2 = var_150_1.d
                var_160:0xc.d = zmm1_2.d
                zmm0_2[0].d = zmm0_2[0].d f+ zmm4_1.d
                zmm1_2.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_2[0].d
                zmm0_2 = var_150_1:8.d
                var_150_1:4.d = zmm1_2.d
                zmm0_2[0].d = zmm0_2[0].d f+ zmm3_1.d
                zmm1_2.d = var_150_1:0xc.d.d f+ zmm4_1.d
                var_150_1:8.d = zmm0_2[0].d
                zmm0_2 = var_140_1
                zmm0_2[0].d = zmm0_2[0].d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_2.d
                zmm1_2.d = zmm12.d f- var_314_3
                zmm2_1.d = zmm13.d f- var_310
                var_140_1 = zmm0_2[0].d
                zmm0_2 = zmm14
                zmm0_2[0].d = zmm0_2[0].d f- zmm15[0]
                zmm15 = 0x7f7fffff
                var_344 = 0x7f7fffff
                *(&var_160 + (rcx_10 << 2)) = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
                *(&var_160:8 + (rcx_10 << 2)) = zmm0_2[0].d
            
            uint32_t rdx_11
            
            if (rdi.b != 0)
                int64_t* rax_28
                rax_28, zmm6, zmm9, zmm10_1, zmm12, zmm13, zmm14 =
                    sub_1416f4530(&var_258, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rdx_11 = zx.d(var_340)
                zmm1_2 = zx.o(*rax_28)
                zmm0_2 = zmm1_2
                zmm11 = rax_28[1].d
                result = zx.d(arg9)
                zmm7 = zmm1_2.d
                zmm1_2 = var_344
                zmm8 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
            else
                int32_t rcx_11 = r13.d
                int32_t rax_20
                
                if (rcx_11 == 1)
                    int64_t rax_24 = sx.q(var_184)
                    int64_t rcx_18 = rax_24 * 3
                    *(&var_170 + (rax_24 << 2)) = 0x3f800000
                    zmm0_2 = zx.o(*(&var_160 + (rcx_18 << 2)))
                    rax_20 = *(&var_160:8 + (rcx_18 << 2))
                else if (rcx_11 == 2)
                    void var_198
                    uint64_t* rax_23
                    rax_23, zmm6, zmm9 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_23)
                    rax_20 = rax_23[1].d
                else if (rcx_11 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_22
                    rax_22, zmm6, zmm9, zmm10_1, zmm12, zmm13, zmm14, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_22)
                    rax_20 = rax_22[1].d
                else if (rcx_11 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_21
                    rax_21, zmm6, zmm9, zmm10_1, zmm12, zmm13, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_21)
                    rax_20 = rax_21[1].d
                else
                    int32_t var_300_1 = 0
                    zmm0_2 = _mm_unpacklo_ps(zmm9, zmm9.q)
                    rax_20 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                int64_t var_2fc_1 = zmm0_2.q
                int64_t rbx_2 = rdi_1 * 3
                r15 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_4 * 3
                int32_t r8_6 = *(&var_160:8 + (r15 << 2))
                zmm7 = var_2fc_1.d
                zmm8 = var_2fc_1:4.d
                zmm11 = rax_20
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_2 << 2))
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                var_160.q = *(&var_160 + (r15 << 2))
                int32_t rdi_2 = (&var_128)[r15]
                var_170[1].d = (*(&var_170 + (r9_4 << 2))).d
                var_170[0].d = (*(&var_170 + (r11_1 << 2)))[0].d
                var_170[0]:4.d = (*(&var_170 + (r10_1 << 2))).d
                var_170[1]:4.d = (*(&var_170 + (rdi_1 << 2))).d
                var_150_1:4.d = *(&var_160:8 + (r14_1 << 2))
                int32_t rdx_10 = (&var_128)[r14_1]
                var_140_1 = *(&var_160:8 + (rsi_1 << 2))
                int32_t rcx_20 = (&var_128)[rsi_1]
                var_140_1 = *(&var_160:8 + (rbx_2 << 2))
                int32_t rax_26 = (&var_128)[rbx_2]
                var_124_1.q = *(&var_130 + (r14_1 << 2))
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = *(&var_130 + (rbx_2 << 2))
                zmm0_2 = zx.o(*(&var_100 + (rbx_2 << 2)))
                var_124_1:0xc.q = *(&var_130 + (rsi_1 << 2))
                zmm1_2 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_130 = *(&var_130 + (r15 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_10
                rdx_11 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_20
                int32_t rcx_21 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_26
                int32_t rax_27 = (&var_f8)[rbx_2]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_2.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_6
                zmm2_1.d = zmm8.d f* zmm8.d
                var_f8 = (&var_f8)[r15]
                var_f4_1:0xc.q = zmm1_2.q
                zmm7[0].d = zmm7[0].d f* zmm7[0].d
                var_f4_1:8.d = rdx_11
                zmm1_2.d = zmm11.d f* zmm11.d
                var_e4_1:4.d = rcx_21
                zmm2_1.d = zmm2_1.d f+ zmm7[0].d
                var_100 = zmm3_1.q
                zmm3_1 = var_2e0
                int32_t var_d4_1 = rax_27
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                result = zx.d(arg9)
                rdi.b = zmm3_1.d f> zmm2_1.d
                var_344 = zmm2_1.d
                zmm1_2 = zmm2_1
                rdx_11.b = zmm2_1.d f>= zmm15[0]
                var_340 = rdx_11.b
                
                if (result.b != 0)
                    if (rdi.b == 0)
                        goto label_14164d672
                    
                    if (zmm6.d f!= zmm9.d)
                    label_14164d66a:
                        zmm1_2 = zmm2_1
                        goto label_14164d66d
                    
                    zmm1_2 = 0x3eb0c6f7a0b5ed8d
                    
                    if (_mm_cvtps_pd(zmm2_1.q)[0] f<= zmm1_2.q)
                        goto label_14164d66a
                    
                    if (_mm_cvtps_pd(zmm3_1.q)[0] f<= zmm1_2.q || r13.d s>= 4)
                        goto label_14164d66a
                    
                    r15.b = 1
                    rdi.b = 0
                    var_348 = 1
                    goto label_14164d678
            
        label_14164d66d:
            
            if (rdi.b != 0)
                rcx_3 = var_318
            else
            label_14164d672:
                r15 = zx.q(var_348)
            label_14164d678:
                rcx_3 = var_318
                
                if (rdx_11.b != 0)
                    zmm1_2 = var_344
                else
                    rbx = rdx_3
                    r14 = arg4
                    continue
        
        zmm15 = 0x80000000
        zmm5 = var_338[1].d
        zmm2_1 = 0x7f7fffff
        break

int32_t* rdi_3 = arg6
*rdi_3 = zmm6.d

if (not(zmm6.d f<= zmm9.d))
    zmm3_1 = zmm9
    zmm4_1 = zmm9
    *arg8 = var_2f0
    arg8[2] = var_2e8
    
    if (r13.d s> 0)
        double (* rcx_23)[0x2] = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_31 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_23
            rcx_23 += 4
            zmm0_2 = zmm2_1
            zmm0_2[0].d = zmm0_2[0].d f* rax_31[-2]
            zmm1_2.d = zmm2_1.d f* rax_31[-1]
            zmm2_1.d = zmm2_1.d f* *rax_31
            rax_31 = &rax_31[3]
            zmm9.d = zmm9.d f+ zmm0_2[0].d
            zmm3_1.d = zmm3_1.d f+ zmm1_2.d
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t* rax_32 = arg4
    zmm0_2 = zmm6
    zmm0_2[0].d = zmm0_2[0].d f* *rax_32
    zmm1_2.d = zmm6.d f* rax_32[1]
    zmm6.d = zmm6.d f* rax_32[2]
    zmm0_2[0].d = zmm0_2[0].d f+ var_338[0].d
    zmm1_2.d = zmm1_2.d f+ var_338[0]:4.d
    zmm6.d = zmm6.d f+ zmm5[0]
    zmm0_2[0].d = zmm0_2[0].d f+ zmm9.d
    zmm1_2.d = zmm1_2.d f+ zmm3_1.d
    zmm6.d = zmm6.d f+ zmm4_1.d
    uint32_t var_300_2 = zmm6.d
    *arg7 = (_mm_unpacklo_ps(zmm0_2, zmm1_2.q)).q
    arg7[1].d = var_300_2
else if (result.b != 0)
    double temp0_23[0x2]
    
    if (not(zmm10_1.d f<= zmm9.d))
        temp0_23 = _mm_cvtps_pd(zmm1_2.q)
    
    if (zmm10_1.d f<= zmm9.d || temp0_23[0] <= 9.9999999999999995e-07 || zmm1_2.d f>= zmm2_1.d)
        var_338[0] = 0
        var_338[1] = 0
        var_170[0] = 0
        var_170[1] = 0
        sub_14083ad30(&var_338, 8)
        
        if (var_170[1]:4.d s< 8)
            sub_14083ad30(&var_170, 8)
        
        uint64_t* rcx_33
        uint128_t zmm0_3
        int32_t rax_45
        
        if (var_318 == 0)
            rcx_33 = arg7
            int32_t var_300_5 = 0x3f800000
            rax_45 = 0x3f800000
            *rdi_3 = (zmm10_1 ^ zmm15).d
            zmm0_3 = _mm_unpacklo_ps(zmm9, zmm9.q)
        label_14164dc21:
            *arg8 = zmm0_3.q
            zmm1_2 = zmm10_1
            arg8[2] = rax_45
            zmm0_3.d = zmm10_1.d f* *arg8
            zmm10_1.d = zmm10_1.d f* arg8[2]
            zmm1_2.d = zmm1_2.d f* arg8[1]
            zmm10_1.d = zmm10_1.d f+ var_128
            zmm0_3.d = zmm0_3.d f+ var_130.d
            zmm1_2.d = zmm1_2.d f+ var_130:4.d
            result = zmm10_1.d
            zmm0_3 = _mm_unpacklo_ps(zmm0_3, zmm1_2.q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_338[1].d)
                    int32_t rax_38 = (rdi_4 + 1).d
                    var_338[1].d = rax_38
                    
                    if (rax_38 s> var_338[1]:4.d)
                        sub_14083a7e0(&var_338)
                    
                    double rcx_29 = var_338[0]
                    int64_t rdx_14 = rdi_4 * 3
                    int32_t rax_39 = *(&var_128 + r12)
                    zmm1_2.d = zmm13.d f+ *(&var_100:4 + r12)
                    *(rcx_29 i+ (rdx_14 << 2)) = *(&var_130 + r12)
                    zmm0_3.d = zmm12.d f+ *(&var_100 + r12)
                    *(rcx_29 i+ (rdx_14 << 2) + 8) = rax_39
                    int64_t rdi_5 = sx.q(var_170[1].d)
                    int32_t var_324_2 = zmm1_2.d
                    var_328 = zmm0_3.d
                    zmm0_3.d = zmm14.d f+ *(&var_f8 + r12)
                    int32_t rax_40 = (rdi_5 + 1).d
                    var_170[1].d = rax_40
                    var_320 = zmm0_3.d
                    
                    if (rax_40 s> var_170[1]:4.d)
                        sub_14083a7e0(&var_170)
                    
                    double rcx_31 = var_170[0]
                    int64_t rdx_16 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_31 i+ (rdx_16 << 2)) = var_328.q
                    *(rcx_31 i+ (rdx_16 << 2) + 8) = var_320
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_240 = &var_1d8
            float (* var_238_1)[0x4] = arg2
            int128_t* var_230_1 = arg3
            int32_t rax_44
            int128_t zmm15_1
            rax_44, zmm10_1, zmm15_1 = sub_1415783f0(&var_338, &var_170, &var_288, &var_240, zmm14, 
                zmm15, &var_310, &var_328, &var_270, &var_258)
            rcx_33 = arg7
            rax_45 = var_320
            
            if (rax_44 == 2)
                *rdi_3 = (zmm10_1 ^ zmm15_1).d
                zmm0_3 = zx.o(var_328.q)
                goto label_14164dc21
            
            *arg8 = var_328.q
            zmm0_3 = var_310 ^ zmm15_1
            arg8[2] = rax_45
            result = result_1
            zmm0_3.d = zmm0_3.d f- zmm10_1.d
            *rdi_3 = zmm0_3.d
            zmm0_3 = zx.o(var_270)
        *rcx_33 = zmm0_3.q
        rcx_33[1].d = result
        double rcx_34 = var_170[0]
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        double rcx_35 = var_338[0]
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
    else
        zmm3_1 = zmm9
        zmm4_1 = zmm9
        *arg8 = var_2f0
        zmm5 = zmm9
        arg8[2] = var_2e8
        zmm11 = zmm9
        zmm12 = zmm9
        zmm13 = zmm9
        
        if (rcx_3 == 0)
            zmm1_2 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            zmm0_2 = zmm1_2
            int32_t rax_35 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
            int32_t rax_36 = var_f8
            zmm0_2 = zmm2_1
            zmm5 = rax_35
            zmm12 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
            zmm13 = rax_36
            zmm3_1 = zmm1_2.d
            var_2b0.q = zmm2_1.q
            zmm11 = var_2b0
        else if (r13.d s> 0)
            double (* rax_34)[0x2] = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_34
                rax_34 += 4
                zmm0_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* *(&var_130 + r12)
                zmm1_2.d = zmm2_1.d f* *(&var_130:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_2[0].d
                zmm0_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* *(&var_128 + r12)
                zmm4_1.d = zmm4_1.d f+ zmm1_2.d
                zmm1_2.d = zmm2_1.d f* *(&var_100 + r12)
                zmm5[0] = zmm5[0] f+ zmm0_2[0].d
                zmm0_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm11.d = zmm11.d f+ zmm1_2.d
                r12 += 0xc
                zmm12.d = zmm12.d f+ zmm0_2[0].d
                zmm13.d = zmm13.d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm7 = var_338[0]:4.d
        zmm8.d = var_338[0].d.d f+ zmm11.d
        zmm14 = var_338[1].d
        zmm7[0].d = zmm7[0].d f+ zmm12.d
        zmm6.d = zmm14.d f+ zmm13.d
        zmm8.d = zmm8.d f- zmm3_1.d
        zmm7[0].d = zmm7[0].d f- zmm4_1.d
        zmm6.d = zmm6.d f- zmm5[0]
        zmm5 = 0x3f000000
        zmm0_2 = zmm8
        zmm0_2[0].d = zmm0_2[0].d f* zmm8.d
        zmm2_1.d = zmm7.d f* zmm7[0].d
        zmm1_2.d = zmm6.d f* zmm6.d
        zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
        zmm2_1.d = zmm2_1.d f+ zmm1_2.d
        zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
        zmm3_1.d = zmm2_1.d f* 0.5f
        zmm0_2 = zmm4_1
        zmm0_2[0].d = zmm0_2[0].d f* zmm4_1.d
        zmm1_2.d = zmm3_1.d f* zmm0_2[0].d
        zmm0_2 = zmm4_1
        zmm2_1.d = 0.5f f- zmm1_2.d
        zmm0_2[0].d = zmm0_2[0].d f* zmm2_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0_2[0].d
        zmm0_2 = zmm4_1
        zmm1_2.d = zmm4_1.d f* zmm4_1.d
        zmm3_1.d = zmm3_1.d f* zmm1_2.d
        zmm5[0] = 0.5f f- zmm3_1.d
        zmm0_2[0].d = zmm0_2[0].d f* zmm5[0]
        zmm4_1.d = zmm4_1.d f+ zmm0_2[0].d
        zmm0_2 = zmm4_1
        zmm0_2[0].d = zmm0_2[0].d f* zmm8.d
        zmm1_2.d = zmm4_1.d f* zmm7[0].d
        zmm4_1.d = zmm4_1.d f* zmm6.d
        zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1_2.q)
        *arg8 = zmm0_2.q
        int32_t var_300_3 = zmm4_1.d
        zmm10_1.d = zmm10_1.d f- __sqrtss_xmmss_memss(zmm0_2[0].d, var_344)[0].d
        arg8[2] = var_300_3
        
        if (not(zmm10_1.d f< zmm9.d))
            zmm9 = __minss_xmmss_memss(zmm10_1.d, 0x7f7fffff)
        
        zmm1_2 = var_338[0].d
        zmm14[0] = zmm14[0] f+ zmm13.d
        zmm1_2.d = zmm1_2.d f+ zmm11.d
        zmm0_2 = zmm9
        zmm0_2[0].d = zmm0_2[0].d f* *arg8
        zmm2_1.d = var_338[0]:4.d.d f+ zmm12.d
        zmm1_2.d = zmm1_2.d f+ zmm0_2[0].d
        zmm0_2 = zmm9
        zmm0_2[0].d = zmm0_2[0].d f* arg8[1]
        zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
        zmm0_2 = zmm9
        zmm0_2[0].d = zmm0_2[0].d f* arg8[2]
        zmm14[0] = zmm14[0] f+ zmm0_2[0].d
        *arg7 = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
        arg7[1].d = zmm14[0]
        *rdi_3 = (zmm9 ^ zmm15).d

result.b = 1
label_14164dc97:
__security_check_cookie(rax_1 ^ &var_388)
return result

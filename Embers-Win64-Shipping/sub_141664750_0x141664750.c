// 函数: sub_141664750
// 地址: 0x141664750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
float zmm14[0x4] = *arg3
float zmm13[0x4] = *(arg1 + 0x1c)
int64_t r12 = 0
float zmm3[0x4] = zmm14 ^ 0x80000000
int64_t r10 = arg2
double var_328[0x2] = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float (* rsi)[0x4] = arg4
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
double var_170[0x2] = data_142d3f7e0
void* var_210 = arg1
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float temp0_1[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
zmm13[0] = zmm13[0] * zmm13[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
double temp0_2[0x2] = _mm_cvtps_pd(zmm13[0].q)
float var_288[0x4]
float (* var_1d8)[0x4] = &var_288
float var_2e8
int32_t* var_1d0 = &var_2e8
int64_t var_1e0 = r10
float zmm15[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
temp0_2[0] = temp0_2[0] + 9.9999999999999995e-07
float temp0_4[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xff)
var_2e8 = zmm14[0]
float var_2e4 = zmm15[0]
float var_2e0 = temp0_1[0]
double zmm0[0x2] = _mm_cvtpd_ps(temp0_2)
float var_2dc = temp0_4[0]
int32_t var_294 = zmm0[0].d
float var_1f8[0x4] = temp0_1
temp0[0] = (zmm15 ^ 0x80000000)[0].d
float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_6[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0_4[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_288 = temp0_8
var_288 = temp0_8
int32_t rax_3 = *(arg1 + 0x18)
uint128_t zmm6 = zx.o(*(arg1 + 0x10))
int32_t var_128 = rax_3
int64_t var_130 = zmm6.q
float zmm1[0x4] = *(arg10 + 4)
float var_318 = (*arg10 ^ 0x80000000)[0].d
float var_314 = (zmm1 ^ 0x80000000)[0]
int32_t var_310 = ((*arg10)[1].d ^ 0x80000000)[0].d
float var_300
float* rax_5
double zmm6_1[0x2]
double zmm11_1[0x2]
double zmm13_1[0x2]
rax_5, zmm6_1, zmm11_1, zmm13_1 = sub_14170bcf0(&var_1e0, &var_300, &var_318)
double zmm1_1[0x2] = var_328[0].d
float zmm4_1[0x4] = var_328[0]:4.d
double zmm3_1[0x2] = zmm1_1
double zmm5[0x2] = var_328[1].d
float zmm8[0x4] = zmm1_1
float zmm2_1[0x4] = zx.o(*rax_5)
double zmm7[0x2] = zmm5
int32_t rcx_1 = rax_5[2]
zmm6_1[0].d = zmm6_1[0].d f- zmm2_1[0]
float var_32c = zmm1_1[0].d
uint32_t result = zx.d(arg9)
double zmm12[0x2] = zx.o(0)
float var_268 = zmm1_1[0].d
float zmm9[0x4] = zmm4_1
int64_t var_100 = zmm2_1.q
zmm3_1[0].d = zmm3_1[0].d f- zmm6_1[0].d
int64_t var_2c0 = zmm2_1.q
double zmm0_1[0x2] = zmm2_1
zmm1_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
double zmm10[0x2] = zmm5
zmm1_1[0].d = zmm1_1[0].d f- zmm0_1[0].d
int64_t var_278 = zmm6_1.q
zmm0_1 = rax_3
zmm6_1 = zmm4_1
zmm0_1[0].d = zmm0_1[0].d f- rcx_1
float var_2a0 = zmm4_1[0]
zmm6_1[0].d = zmm6_1[0].d f- zmm1_1[0].d
float var_264 = zmm4_1[0]
int32_t var_29c = zmm5[0].d
uint32_t result_2 = zmm5[0].d
zmm7[0].d = zmm7[0].d f- zmm0_1[0].d
int32_t var_330 = zmm3_1[0].d
int32_t var_f8 = rcx_1
zmm2_1 = zmm6_1
zmm3_1[0].d = zmm3_1[0].d f* zmm3_1[0].d
int64_t var_2b0 = 0
zmm2_1[0] = zmm2_1[0] f* zmm6_1[0].d
int32_t var_2a8 = 0x3f800000
zmm7[0].d = zmm7[0].d f* zmm7[0].d
zmm2_1[0] = zmm2_1[0] f+ zmm3_1[0].d
zmm2_1[0] = zmm2_1[0] f+ zmm7[0].d
int32_t rdi

if (zmm2_1[0] f>= var_294 || (result.b != 0 && zmm2_1[0] >= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm2_1 = 0x7f7fffff
int64_t r15
r15.b = 0
float var_334 = 3.40282347e+38f
uint32_t rdx_2 = zx.d(rdi.b)
char var_338 = rdx_2.b
int32_t rcx_2 = 0
int32_t var_308 = 0
zmm1_1 = 0x7f7fffff
float var_304
int64_t var_228
uint32_t result_1

if (rdi.b == 0)
    while (true)
        int32_t rax_6 = rcx_2
        rcx_2 += 1
        var_308 = rcx_2
        
        if (rax_6 s>= 0x20)
            zmm8 = var_32c
            zmm1_1 = var_334
            result = zx.d(arg9)
        else
            zmm5 = 0x3f000000
            zmm2_1 = zmm3_1
            void* rax_7 = var_210
            zmm9 = var_288[1]
            zmm6_1[0].d = zmm6_1[0].d f* zmm6_1[0].d
            zmm2_1[0] = zmm2_1[0] f* zmm3_1[0].d
            zmm7[0].d = zmm7[0].d f* zmm7[0].d
            zmm2_1[0] = zmm2_1[0] f+ zmm6_1[0].d
            zmm2_1[0] = zmm2_1[0] f+ zmm7[0].d
            zmm3_1 = zmm2_1
            float temp0_11[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm3_1[0].d)
            zmm2_1 = 0x3f000000
            zmm3_1[0].d = zmm3_1[0].d f* 0.5f
            zmm0_1 = temp0_11
            zmm0_1[0].d = zmm0_1[0].d f* temp0_11[0]
            zmm3_1[0].d = zmm3_1[0].d f* zmm0_1[0].d
            zmm0_1 = temp0_11
            zmm2_1[0] = 0.5f f- zmm3_1[0].d
            zmm0_1[0].d = zmm0_1[0].d f* zmm2_1[0]
            temp0_11[0] = temp0_11[0] f+ zmm0_1[0].d
            zmm1_1 = temp0_11
            zmm0_1 = temp0_11
            zmm1_1[0].d = zmm1_1[0].d f* temp0_11[0]
            zmm3_1[0].d = zmm3_1[0].d f* zmm1_1[0].d
            zmm1_1 = zx.o(*(rax_7 + 0x10))
            zmm5[0].d = 0.5f f- zmm3_1[0].d
            zmm3_1 = zmm1_1.q:4.d
            int32_t var_2c8_1 = zmm3_1[0].d
            var_278:4.d = zmm3_1[0].d
            var_278.d = zmm1_1[0].d
            zmm0_1[0].d = zmm0_1[0].d f* zmm5[0].d
            int64_t var_240_1 = zmm1_1.q
            zmm1_1 = *(rax_7 + 0x18)
            temp0_11[0] = temp0_11[0] f+ zmm0_1[0].d
            int32_t var_270_1 = zmm1_1[0].d
            zmm0_1 = temp0_11
            zmm6_1[0].d = zmm6_1[0].d f* temp0_11[0]
            zmm0_1[0].d = zmm0_1[0].d f* var_330
            zmm7[0].d = zmm7[0].d f* temp0_11[0]
            var_304 = temp0_11[0]
            int32_t var_298_1 = zmm0_1[0].d
            zmm10 = zmm0_1 ^ 0x80000000
            int32_t var_248_1 = zmm6_1[0].d
            zmm4_1 = zmm6_1 ^ 0x80000000
            var_304 = zmm7[0].d
            zmm6_1 = zmm7
            int32_t var_330_1 = zmm1_1[0].d
            zmm7 = var_288[2]
            zmm6_1 ^= 0x80000000
            zmm1_1 = var_288[0]
            zmm7[0].d = zmm7[0].d f* zmm4_1[0]
            zmm9[0] = zmm9[0] f* zmm6_1[0].d
            zmm3_1 = zmm1_1
            zmm7[0].d = zmm7[0].d f* zmm10[0].d
            zmm2_1 = zmm7
            zmm9[0] = zmm9[0] f- zmm7[0].d
            zmm3_1[0].d = zmm3_1[0].d f* zmm4_1[0]
            zmm1_1[0].d = zmm1_1[0].d f* zmm6_1[0].d
            zmm9[0] = zmm9[0] + zmm9[0]
            zmm7[0].d = zmm7[0].d f- zmm1_1[0].d
            zmm0_1 = zmm9
            zmm0_1[0].d = zmm0_1[0].d f* zmm10[0].d
            zmm2_1[0] = zmm2_1[0] * zmm9[0]
            zmm3_1[0].d = zmm3_1[0].d f- zmm0_1[0].d
            zmm7[0].d = zmm7[0].d f+ zmm7[0].d
            zmm3_1[0].d = zmm3_1[0].d f+ zmm3_1[0].d
            zmm1_1[0].d = zmm1_1[0].d f* zmm3_1[0].d
            zmm7[0].d = zmm7[0].d f* zmm7[0].d
            zmm2_1[0] = zmm2_1[0] f- zmm1_1[0].d
            float var_2cc_1 = zmm2_1[0]
            zmm2_1 = var_288[3]
            zmm0_1 = var_2cc_1
            zmm1_1 = zmm2_1
            zmm1_1[0].d = zmm1_1[0].d f* zmm7[0].d
            zmm1_1[0].d = zmm1_1[0].d f+ zmm4_1[0]
            zmm4_1 = var_288[0]
            zmm4_1[0] = zmm4_1[0] f* zmm7[0].d
            zmm0_1[0].d = zmm0_1[0].d f+ zmm1_1[0].d
            zmm1_1 = zmm2_1
            zmm2_1[0] = zmm2_1[0] * zmm9[0]
            zmm1_1[0].d = zmm1_1[0].d f* zmm3_1[0].d
            int32_t var_2cc_2 = zmm0_1[0].d
            zmm2_1[0] = zmm2_1[0] f+ zmm10[0].d
            zmm0_1 = zmm9
            zmm9[0] = zmm9[0] f* zmm3_1[0].d
            zmm0_1[0].d = zmm0_1[0].d f* zmm9[0]
            zmm1_1[0].d = zmm1_1[0].d f+ zmm6_1[0].d
            zmm9[0] = zmm9[0] f- zmm7[0].d
            zmm4_1[0] = zmm4_1[0] f- zmm0_1[0].d
            zmm9[0] = zmm9[0] + zmm2_1[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm1_1[0].d
            
            if (zmm9[0] f>= zmm11_1[0].d)
                zmm7 = *(r10 + 0x1c)
            else
                zmm7 = *(r10 + 0x10)
            
            if (var_2cc_2[0].d f>= zmm11_1[0].d)
                zmm2_1 = *(r10 + 0x20)
            else
                zmm2_1 = *(r10 + 0x14)
            
            if (zmm4_1[0] f>= zmm11_1[0].d)
                zmm10 = *(r10 + 0x24)
            else
                zmm10 = *(r10 + 0x18)
            
            zmm3_1 = var_2dc
            zmm0_1 = var_1f8
            zmm0_1[0].d = zmm0_1[0].d f* zmm2_1[0]
            zmm14[0] = zmm14[0] * zmm2_1[0]
            zmm5 = var_1f8
            zmm5[0].d = zmm5[0].d f* zmm7[0].d
            zmm6_1 = zmm15
            (&var_184)[sx.q(r13.d)] = r13.d
            zmm6_1[0].d = zmm6_1[0].d f* zmm10[0].d
            r13 = sx.q(var_188)
            zmm6_1[0].d = zmm6_1[0].d f- zmm0_1[0].d
            zmm0_1 = zmm14
            zmm0_1[0].d = zmm0_1[0].d f* zmm10[0].d
            uint64_t rcx_4 = r13 * 3
            zmm5[0].d = zmm5[0].d f- zmm0_1[0].d
            zmm0_1 = zmm15
            zmm0_1[0].d = zmm0_1[0].d f* zmm7[0].d
            zmm6_1[0].d = zmm6_1[0].d f+ zmm6_1[0].d
            zmm14[0] = zmm14[0] f- zmm0_1[0].d
            zmm0_1 = var_1f8
            zmm3_1[0].d = zmm3_1[0].d f* zmm6_1[0].d
            zmm5[0].d = zmm5[0].d f+ zmm5[0].d
            zmm3_1[0].d = zmm3_1[0].d f+ zmm7[0].d
            zmm7 = var_1f8
            zmm9 = var_2a0
            zmm14[0] = zmm14[0] + zmm14[0]
            zmm0_1[0].d = zmm0_1[0].d f* zmm5[0].d
            zmm7[0].d = zmm7[0].d f* zmm6_1[0].d
            zmm15[0] = zmm15[0] * zmm14[0]
            zmm15[0] = zmm15[0] f- zmm0_1[0].d
            zmm0_1 = zmm14
            zmm0_1[0].d = zmm0_1[0].d f* zmm14[0]
            zmm7[0].d = zmm7[0].d f- zmm0_1[0].d
            zmm0_1 = zmm15
            zmm15[0] = zmm15[0] f+ zmm3_1[0].d
            zmm0_1[0].d = zmm0_1[0].d f* zmm6_1[0].d
            zmm3_1[0].d = zmm3_1[0].d f* zmm14[0]
            zmm4_1 = var_32c
            zmm3_1[0].d = zmm3_1[0].d f* zmm5[0].d
            zmm3_1[0].d = zmm3_1[0].d f+ zmm10[0].d
            zmm10 = var_29c
            zmm3_1[0].d = zmm3_1[0].d f+ zmm2_1[0]
            zmm14[0] = zmm14[0] f* zmm5[0].d
            zmm5 = var_330_1
            zmm14[0] = zmm14[0] f- zmm0_1[0].d
            zmm0_1 = zx.o(var_240_1)
            zmm0_1[0].d = zmm0_1[0].d f- zmm15[0]
            zmm7[0].d = zmm7[0].d f+ zmm3_1[0].d
            zmm1_1 = var_2c8_1
            zmm14[0] = zmm14[0] f+ zmm3_1[0].d
            zmm4_1[0] = zmm4_1[0] f- zmm0_1[0].d
            int32_t var_240_2 = zmm0_1.d
            zmm1_1[0].d = zmm1_1[0].d f- zmm7[0].d
            *(&var_130 + (rcx_4 << 2)) = var_278
            zmm0_1 = _mm_unpacklo_ps(zmm15, zmm7[0])
            zmm5[0].d = zmm5[0].d f- zmm14[0]
            float var_1c0_1 = zmm14[0]
            (&var_128)[rcx_4] = var_270_1
            zmm9[0] = zmm9[0] f- zmm1_1[0].d
            *(&var_100 + (rcx_4 << 2)) = zmm0_1.q
            int32_t var_2c8_2 = zmm1_1[0].d
            zmm10[0].d = zmm10[0].d f- zmm5[0].d
            int32_t var_330_2 = zmm5[0].d
            var_318 = zmm4_1[0]
            float var_314_1 = zmm9[0]
            (&var_f8)[rcx_4] = var_1c0_1
            var_310 = zmm10[0].d
            zmm0_1 = var_298_1
            zmm5 = var_248_1
            zmm6_1 = var_304
            zmm4_1[0] = zmm4_1[0] f* zmm0_1[0].d
            zmm9[0] = zmm9[0] f* zmm5[0].d
            zmm10[0].d = zmm10[0].d f* zmm6_1[0].d
            zmm4_1[0] = zmm4_1[0] + zmm9[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm10[0].d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4_1[0] f<= zmm13_1[0].d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_4 << 2)) = var_318.q
                *(&var_160:8 + (rcx_4 << 2)) = var_310
                var_188 = r13.d
            label_1416650bc:
                zmm8 = var_32c
                
                if (rdx_2.b != 0 && not(zmm4_1[0] f< zmm11_1[0].d))
                    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                    zmm4_1[0] = zmm4_1[0] + 9.99999997e-07f
                    rdi.b = zmm4_1[0] >= var_334
            else
                zmm8 = *rsi
                zmm3_1 = (*rsi)[1]
                zmm7 = (*rsi)[2]
                zmm8[0] = zmm8[0] f* zmm0_1[0].d
                zmm7[0].d = zmm7[0].d f* zmm6_1[0].d
                zmm3_1[0].d = zmm3_1[0].d f* zmm5[0].d
                zmm8[0] = zmm8[0] f+ zmm3_1[0].d
                zmm8[0] = zmm8[0] f+ zmm7[0].d
                
                if (zmm8[0] f>= zmm11_1[0].d)
                    result.b = 0
                    goto label_141665b63
                
                zmm0_1 = zmm4_1
                zmm0_1[0].d = zmm0_1[0].d f- zmm13_1[0].d
                zmm0_1[0].d = zmm0_1[0].d f/ zmm8[0]
                zmm12[0].d = zmm12[0].d f- zmm0_1[0].d
                
                if (zmm12[0].d f<= zmm12[0].d)
                    goto label_1416650bc
                
                if (zmm12[0].d f> arg5)
                    result.b = 0
                    goto label_141665b63
                
                zmm1_1 = zx.o(var_268.q)
                zmm9 = zmm3_1
                zmm10 = zmm7
                r13 = zx.q(r13.d + 1)
                var_2b0.d = var_298_1[0].d
                var_228 = zmm1_1.q
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm8[0] = zmm8[0] f* zmm12[0].d
                result_1 = result_2
                zmm9[0] = zmm9[0] f* zmm12[0].d
                var_188 = r13.d
                zmm8[0] = zmm8[0] f+ var_328[0].d
                zmm10[0].d = zmm10[0].d f* zmm12[0].d
                var_338 = 0
                zmm9[0] = zmm9[0] f+ var_328[0]:4.d
                var_2b0:4.d = zmm5[0].d
                zmm10[0].d = zmm10[0].d f+ var_328[1].d
                zmm3_1 = zmm8
                var_32c = zmm8[0]
                zmm3_1[0].d = zmm3_1[0].d f- zmm1_1[0].d
                var_268 = zmm8[0]
                zmm1_1 = var_160:4.d
                zmm9[0] = zmm9[0] f- zmm0_1[0].d
                var_2a0 = zmm9[0]
                zmm0_1 = var_160.d
                zmm2_1 = zmm10
                zmm2_1[0] = zmm2_1[0] f- result_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm3_1[0].d
                var_29c = zmm10[0].d
                float var_264_1 = zmm9[0]
                zmm1_1[0].d = zmm1_1[0].d f+ zmm9[0]
                result_2 = zmm10[0].d
                var_2a8 = zmm6_1[0].d
                var_160.d = zmm0_1[0].d
                zmm0_1 = var_160:8.d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1[0]
                var_160:4.d = zmm1_1[0].d
                zmm1_1 = var_160:0xc.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm3_1[0].d
                var_160:8.d = zmm0_1[0].d
                zmm0_1 = var_150_1.d
                var_160:0xc.d = zmm1_1[0].d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm9[0]
                zmm1_1 = var_150_1:4.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm2_1[0]
                var_150_1.d = zmm0_1[0].d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1[0].d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm3_1[0].d
                zmm1_1 = var_150_1:0xc.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm9[0]
                var_150_1:8.d = zmm0_1[0].d
                zmm0_1 = var_140_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1[0]
                var_150_1:0xc.d = zmm1_1[0].d
                zmm1_1 = zmm8
                zmm1_1[0].d = zmm1_1[0].d f- var_240_2
                zmm9[0] = zmm9[0] f- var_2c8_2
                var_140_1 = zmm0_1[0].d
                zmm10[0].d = zmm10[0].d f- var_330_2
                *(&var_160 + (rcx_4 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm9[0].q)).q
                var_334 = 3.40282347e+38f
                *(&var_160:8 + (rcx_4 << 2)) = zmm10[0].d
            
            if (rdi.b != 0)
                int64_t* rax_20
                rax_20, zmm8, zmm9, zmm10, zmm11_1, zmm12, zmm13_1 =
                    sub_1416f4530(&var_1e0, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                zmm15 = var_2e4
                zmm1_1 = zx.o(*rax_20)
                zmm0_1 = zmm1_1
                zmm14 = var_2e8
                zmm3_1 = zmm1_1.d
                zmm1_1 = var_334
                zmm7 = rax_20[1].d
                result = zx.d(arg9)
                zmm6_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                var_330 = zmm3_1[0].d
                var_1f8 = var_2e0
            else
                int32_t rcx_5 = r13.d
                int32_t rax_14
                
                if (rcx_5 == 1)
                    int64_t rax_16 = sx.q(var_184)
                    int64_t rcx_12 = rax_16 * 3
                    *(&var_170 + (rax_16 << 2)) = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_12 << 2)))
                    rax_14 = *(&var_160:8 + (rcx_12 << 2))
                else
                    uint64_t* rax_15
                    
                    if (rcx_5 == 2)
                        void var_198
                        rax_15, zmm8, zmm9 =
                            sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    label_141665144:
                        zmm0_1 = zx.o(*rax_15)
                        rax_14 = rax_15[1].d
                        r13 = zx.q(var_188)
                        zmm15 = var_2e4
                        zmm14 = var_2e8
                        var_1f8 = var_2e0
                    else
                        if (rcx_5 == 3)
                            uint64_t var_1a4
                            rax_15, zmm8, zmm9, zmm10, zmm11_1, zmm12, zmm13_1 =
                                sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                            goto label_141665144
                        
                        if (rcx_5 == 4)
                            uint64_t var_1b0
                            rax_15, zmm8, zmm9, zmm10, zmm11_1, zmm12, zmm13_1 =
                                sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                            goto label_141665144
                        
                        int32_t var_2f8_1 = 0
                        zmm0_1 = _mm_unpacklo_ps(zmm11_1, zmm11_1[0])
                        rax_14 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int64_t var_180
                int64_t r10_1 = sx.q(var_180.d)
                int64_t r9_3 = sx.q(var_180:4.d)
                zmm4_1 = var_294
                int64_t rbx_1 = rdi_1 * 3
                int64_t var_2d8_1 = zmm0_1.q
                r15 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t r8_4 = *(&var_160:8 + (r15 << 2))
                zmm6_1 = var_2d8_1:4.d
                zmm7 = rax_14
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                var_160.q = *(&var_160 + (r15 << 2))
                int32_t rdi_2 = (&var_128)[r15]
                var_170[1].d = (*(&var_170 + (r9_3 << 2)))[0]
                var_170[0].d = (*(&var_170 + (r11_1 << 2)))[0].d
                var_170[0]:4.d = (*(&var_170 + (r10_1 << 2)))[0].d
                var_170[1]:4.d = (*(&var_170 + (rdi_1 << 2)))[0].d
                var_150_1:4.d = *(&var_160:8 + (r14_1 << 2))
                int32_t rdx_7 = (&var_128)[r14_1]
                var_140_1 = *(&var_160:8 + (rsi_1 << 2))
                int32_t rcx_14 = (&var_128)[rsi_1]
                var_140_1 = *(&var_160:8 + (rbx_1 << 2))
                int32_t rax_18 = (&var_128)[rbx_1]
                var_124_1.q = *(&var_130 + (r14_1 << 2))
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = *(&var_130 + (rbx_1 << 2))
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = *(&var_130 + (rsi_1 << 2))
                zmm1_1 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_130 = *(&var_130 + (r15 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15 << 2)))
                var_128 = rdi_2
                rdi = (&var_f8)[r15]
                var_124_1:8.d = rdx_7
                rdx_2 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_14
                int32_t rcx_15 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_18
                int32_t rax_19 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                zmm2_1 = zmm6_1
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_4
                zmm2_1[0] = zmm2_1[0] f* zmm6_1[0].d
                var_f8 = rdi
                var_f4_1:0xc.q = zmm1_1.q
                var_100 = zmm3_1.q
                zmm3_1 = var_2d8_1.d
                zmm7[0].d = zmm7[0].d f* zmm7[0].d
                var_f4_1:8.d = rdx_2
                zmm3_1[0].d = zmm3_1[0].d f* zmm3_1[0].d
                var_e4_1:4.d = rcx_15
                var_330 = zmm3_1[0].d
                int32_t var_d4_1 = rax_19
                zmm2_1[0] = zmm2_1[0] f+ zmm3_1[0].d
                zmm2_1[0] = zmm2_1[0] f+ zmm7[0].d
                result = zx.d(arg9)
                zmm1_1 = zmm2_1
                rdi.b = zmm4_1[0] > zmm2_1[0]
                bool cond:2_1 = zmm2_1[0] >= var_334
                var_334 = zmm2_1[0]
                r15.b = cond:2_1
                
                if (result.b != 0)
                    if (rdi.b == 0)
                        goto label_141665523
                    
                    if (zmm12[0].d f!= zmm11_1[0].d)
                    label_14166551b:
                        zmm1_1 = zmm2_1
                        goto label_14166551e
                    
                    zmm1_1 = 0x3eb0c6f7a0b5ed8d
                    
                    if (_mm_cvtps_pd(zmm2_1[0].q)[0] <= zmm1_1[0])
                        goto label_14166551b
                    
                    if (_mm_cvtps_pd(zmm4_1[0].q)[0] <= zmm1_1[0] || r13.d s>= 4)
                        goto label_14166551b
                    
                    rdx_2.b = 1
                    rdi.b = 0
                    var_338 = 1
                    goto label_141665528
            
        label_14166551e:
            
            if (rdi.b != 0)
                rcx_2 = var_308
            else
            label_141665523:
                rdx_2 = zx.d(var_338)
            label_141665528:
                rcx_2 = var_308
                
                if (r15.b != 0)
                    zmm1_1 = var_334
                else
                    r10 = arg2
                    rsi = arg4
                    continue
        
        zmm5 = var_328[1].d
        zmm2_1 = 0x7f7fffff
        break

bool cond:0_1 = zmm12[0].d f<= zmm11_1[0].d
int32_t* rdi_3 = arg6
*rdi_3 = zmm12[0].d

if (not(cond:0_1))
    zmm4_1 = zmm11_1
    *arg8 = var_2b0
    arg8[1].d = var_2a8
    
    if (r13.d s> 0)
        int128_t* rcx_17 = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_23 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_17
            rcx_17 += 4
            zmm0_1 = zmm2_1
            zmm1_1 = zmm2_1
            zmm0_1[0].d = zmm0_1[0].d f* rax_23[-2]
            zmm1_1[0].d = zmm1_1[0].d f* rax_23[-1]
            zmm2_1[0] = zmm2_1[0] f* *rax_23
            rax_23 = &rax_23[3]
            zmm11_1[0].d = zmm11_1[0].d f+ zmm0_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f+ zmm1_1[0].d
            zmm4_1[0] = zmm4_1[0] + zmm2_1[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t* rax_24 = arg4
    zmm12[0].d = zmm12[0].d f* *rax_24
    zmm12[0].d = zmm12[0].d f* rax_24[1]
    zmm12[0].d = zmm12[0].d f* rax_24[2]
    zmm12[0].d = zmm12[0].d f+ var_328[0].d
    zmm12[0].d = zmm12[0].d f+ var_328[0]:4.d
    zmm12[0].d = zmm12[0].d f+ zmm5[0].d
    zmm12[0].d = zmm12[0].d f+ zmm11_1[0].d
    zmm12[0].d = zmm12[0].d f+ zmm11_1[0].d
    zmm12[0].d = zmm12[0].d f+ zmm4_1[0]
    zmm0_1 = _mm_unpacklo_ps(zmm12, zmm12[0])
    uint32_t var_2f8_2 = zmm12[0].d
    *arg7 = zmm0_1.q
    arg7[1].d = var_2f8_2
else if (result.b != 0)
    double temp0_20[0x2]
    
    if (not(zmm13_1[0].d f<= zmm11_1[0].d))
        temp0_20 = _mm_cvtps_pd(zmm1_1[0])
    
    if (zmm13_1[0].d f<= zmm11_1[0].d || temp0_20[0] <= 9.9999999999999995e-07
            || zmm1_1[0].d f>= zmm2_1[0])
        var_170[0] = 0
        var_170[1] = 0
        var_328[0] = 0
        var_328[1] = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_328[1]:4.d s< 8)
            sub_14083ad30(&var_328, 8)
        
        double zmm0_2[0x2]
        int32_t rax_37
        
        if (var_308 == 0)
            int32_t var_2f8_5 = 0x3f800000
            rax_37 = 0x3f800000
            *rdi_3 = (zmm13_1 ^ data_142d3f780)[0].d
            zmm0_2 = _mm_unpacklo_ps(zmm11_1, zmm11_1[0])
        label_141665aeb:
            *arg8 = zmm0_2.q
            arg8[1].d = rax_37
            zmm13_1[0].d = zmm13_1[0].d f* *arg8
            zmm13_1[0].d = zmm13_1[0].d f* arg8[1].d
            zmm13_1[0].d = zmm13_1[0].d f* *(arg8 + 4)
            zmm13_1[0].d = zmm13_1[0].d f+ var_128
            zmm13_1[0].d = zmm13_1[0].d f+ var_130.d
            zmm13_1[0].d = zmm13_1[0].d f+ var_130:4.d
            result = zmm13_1[0].d
            zmm0_2 = _mm_unpacklo_ps(zmm13_1, zmm13_1[0])
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
                    
                    double rcx_21 = var_170[0]
                    int64_t rdx_10 = rdi_4 * 3
                    zmm1_1 = zmm9
                    int32_t rax_31 = *(&var_128 + r12)
                    zmm1_1[0].d = zmm1_1[0].d f+ *(&var_100:4 + r12)
                    *(rcx_21 i+ (rdx_10 << 2)) = *(&var_130 + r12)
                    zmm0_2 = zmm8
                    zmm0_2[0].d = zmm0_2[0].d f+ *(&var_100 + r12)
                    *(rcx_21 i+ (rdx_10 << 2) + 8) = rax_31
                    int64_t rdi_5 = sx.q(var_328[1].d)
                    int32_t var_314_2 = zmm1_1[0].d
                    var_318 = zmm0_2[0].d
                    zmm10[0].d = zmm10[0].d f+ *(&var_f8 + r12)
                    int32_t rax_32 = (rdi_5 + 1).d
                    var_328[1].d = rax_32
                    var_310 = zmm10[0].d
                    
                    if (rax_32 s> var_328[1]:4.d)
                        sub_14083a7e0(&var_328)
                    
                    double rcx_23 = var_328[0]
                    int64_t rdx_12 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_23 i+ (rdx_12 << 2)) = var_318.q
                    *(rcx_23 i+ (rdx_12 << 2) + 8) = var_310
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_188.q = &var_288
            int64_t var_180_1 = arg2
            int128_t* var_178_1 = arg3
            int32_t rax_36
            rax_36, zmm13_1 = sub_1415b6380(&var_170, &var_328, &var_210, &var_188, &var_304, 
                &var_318, &var_228, &var_1e0)
            rax_37 = var_310
            
            if (rax_36 == 2)
                *rdi_3 = (zmm13_1 ^ data_142d3f780)[0].d
                zmm0_2 = zx.o(var_318.q)
                goto label_141665aeb
            
            *arg8 = var_318.q
            zmm0_2 = var_304 ^ data_142d3f780
            zmm0_2[0].d = zmm0_2[0].d f- zmm13_1[0].d
            arg8[1].d = rax_37
            result = result_1
            *rdi_3 = zmm0_2[0].d
            zmm0_2 = zx.o(var_228)
        double rcx_25 = var_328[0]
        *arg7 = zmm0_2.q
        arg7[1].d = result
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        double rcx_26 = var_170[0]
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    else
        zmm3_1 = zmm11_1
        zmm4_1 = zmm11_1
        *arg8 = var_2b0
        zmm5 = zmm11_1
        arg8[1].d = var_2a8
        zmm9 = zmm11_1
        zmm10 = zmm11_1
        zmm12 = zmm11_1
        
        if (rcx_2 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            int32_t rax_27 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_28 = var_f8
            zmm0_1 = zmm2_1
            zmm5 = rax_27
            zmm10 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            zmm12 = rax_28
            zmm3_1 = zmm1_1.d
            zmm9 = zmm2_1.d
        else if (r13.d s> 0)
            int128_t* rax_26 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_26
                rax_26 += 4
                zmm0_1 = zmm2_1
                zmm1_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_130 + r12)
                zmm1_1[0].d = zmm1_1[0].d f* *(&var_130:4 + r12)
                zmm3_1[0].d = zmm3_1[0].d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_128 + r12)
                zmm4_1[0] = zmm4_1[0] f+ zmm1_1[0].d
                zmm1_1 = zmm2_1
                zmm1_1[0].d = zmm1_1[0].d f* *(&var_100 + r12)
                zmm5[0].d = zmm5[0].d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_100:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_f8 + r12)
                zmm9[0] = zmm9[0] f+ zmm1_1[0].d
                r12 += 0xc
                zmm10[0].d = zmm10[0].d f+ zmm0_1[0].d
                zmm12[0].d = zmm12[0].d f+ zmm2_1[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm7 = var_328[0]:4.d
        zmm15 = var_328[0].d
        zmm7[0].d = zmm7[0].d f+ zmm10[0].d
        zmm14 = var_328[1].d
        zmm15[0] = zmm15[0] + zmm9[0]
        zmm6_1 = zmm14
        zmm6_1[0].d = zmm6_1[0].d f+ zmm12[0].d
        zmm7[0].d = zmm7[0].d f- zmm4_1[0]
        zmm15[0] = zmm15[0] f- zmm3_1[0].d
        zmm6_1[0].d = zmm6_1[0].d f- zmm5[0].d
        zmm5 = 0x3f000000
        zmm2_1 = zmm7
        zmm2_1[0] = zmm2_1[0] f* zmm7[0].d
        zmm0_1 = zmm15
        zmm0_1[0].d = zmm0_1[0].d f* zmm15[0]
        zmm6_1[0].d = zmm6_1[0].d f* zmm6_1[0].d
        zmm2_1[0] = zmm2_1[0] f+ zmm0_1[0].d
        zmm2_1[0] = zmm2_1[0] f+ zmm6_1[0].d
        zmm3_1 = zmm2_1
        float temp0_23[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm3_1[0].d)
        zmm2_1 = 0x3f000000
        zmm3_1[0].d = zmm3_1[0].d f* 0.5f
        zmm0_1 = temp0_23
        zmm0_1[0].d = zmm0_1[0].d f* temp0_23[0]
        zmm3_1[0].d = zmm3_1[0].d f* zmm0_1[0].d
        zmm0_1 = temp0_23
        zmm2_1[0] = 0.5f f- zmm3_1[0].d
        zmm0_1[0].d = zmm0_1[0].d f* zmm2_1[0]
        temp0_23[0] = temp0_23[0] f+ zmm0_1[0].d
        zmm0_1 = temp0_23
        zmm1_1 = temp0_23
        zmm1_1[0].d = zmm1_1[0].d f* temp0_23[0]
        zmm3_1[0].d = zmm3_1[0].d f* zmm1_1[0].d
        zmm5[0].d = 0.5f f- zmm3_1[0].d
        zmm0_1[0].d = zmm0_1[0].d f* zmm5[0].d
        temp0_23[0] = temp0_23[0] f+ zmm0_1[0].d
        zmm15[0] = zmm15[0] * temp0_23[0]
        zmm7[0].d = zmm7[0].d f* temp0_23[0]
        zmm6_1[0].d = zmm6_1[0].d f* temp0_23[0]
        zmm0_1 = _mm_unpacklo_ps(zmm15, zmm7[0])
        *arg8 = zmm0_1.q
        zmm0_1 = __sqrtss_xmmss_memss(zmm0_1[0].d, var_334)
        zmm13_1[0].d = zmm13_1[0].d f- zmm0_1[0].d
        arg8[1].d = zmm6_1[0].d
        
        if (not(zmm13_1[0].d f< zmm11_1[0].d))
            zmm11_1 = __minss_xmmss_memss(zmm13_1[0].d, 0x7f7fffff)
        
        zmm1_1 = var_328[0]:4.d
        zmm15[0] = zmm15[0] + zmm9[0]
        zmm1_1[0].d = zmm1_1[0].d f+ zmm10[0].d
        zmm11_1[0].d = zmm11_1[0].d f* *arg8
        zmm14[0] = zmm14[0] f+ zmm12[0].d
        zmm15[0] = zmm15[0] f+ zmm11_1[0].d
        zmm11_1[0].d = zmm11_1[0].d f* *(arg8 + 4)
        zmm1_1[0].d = zmm1_1[0].d f+ zmm11_1[0].d
        zmm0_1 = zmm11_1
        zmm0_1[0].d = zmm0_1[0].d f* arg8[1].d
        zmm11_1 ^= data_142d3f780
        zmm14[0] = zmm14[0] f+ zmm0_1[0].d
        *arg7 = (_mm_unpacklo_ps(zmm15, zmm1_1[0])).q
        arg7[1].d = zmm14[0]
        *rdi_3 = zmm11_1[0].d

result.b = 1
label_141665b63:
__security_check_cookie(rax_1 ^ &var_378)
return result

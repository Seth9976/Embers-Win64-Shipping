// 函数: sub_141647780
// 地址: 0x141647780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int64_t r12 = 0
int64_t rbx = arg2
float (* r14)[0x4] = arg4
int32_t r10 = 0
float zmm0[0x4] = *(*(arg1 + 0x10) + 0x2c)
int32_t var_2c0 = 0
float zmm14[0x4]

if (zmm0[0] == 0f)
    zmm14 = zx.o(0)
else
    zmm14 = __andps_xmmxud_memxud(*(arg1 + 0x28), data_142d3f770)
    zmm14[0] = zmm14[0] * zmm0[0]

float zmm8[0x4] = *arg3
float var_368[0x4] = arg3[1]
float var_328 = zmm8[0]
int32_t var_188 = 0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
void* var_288 = arg1
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
float var_170[0x4] = data_142d3f7e0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
int64_t var_1f0 = rbx
float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
zmm14[0] = zmm14[0] * zmm14[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
zmm0 = _mm_cvtps_pd(zmm14[0].q)
float var_2b8[0x4]
int128_t* var_1e8 = &var_2b8
int32_t* var_1e0 = &var_328
float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
zmm0[0].q = zmm0[0].q f+ 9.9999999999999995e-07
float var_218[0x4] = zmm8
float var_320 = temp0_2[0]
float var_31c = temp0_4[0]
float var_248[0x4] = temp0_2
float var_2c4 = _mm_cvtpd_ps(zmm0)[0]
float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
float zmm3[0x4] = zmm8 ^ 0x80000000
float var_324 = temp0_6[0]
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float var_228[0x4] = temp0_6
temp0_7[0] = (temp0_6 ^ 0x80000000)[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
temp0_8[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_9[0] = temp0_4[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
var_2b8 = temp0_10
var_2b8 = temp0_10
int64_t var_300
int128_t zmm8_1 = sub_14170aa90(&var_288, &var_300, arg10)
int128_t zmm1_1 = arg10[1] ^ zmm8_1
int64_t var_130 = var_300
int32_t var_354 = zmm1_1.d
float var_358 = (*arg10 ^ zmm8_1).d
uint128_t zmm0_1 = arg10[2] ^ zmm8_1
int32_t var_2f8
int32_t var_128 = var_2f8
int32_t var_350 = zmm0_1.d
float var_340
float* rax_5
uint128_t zmm8_2
double zmm12[0x2]
rax_5, zmm8_2, zmm12 = sub_14170bcf0(&var_1f0, &var_340, &var_358)
float zmm1_2[0x4] = var_368[0]
float zmm13[0x4] = zx.o(0)
uint128_t zmm3_1 = var_368[1]
float zmm15[0x4] = zmm1_2
float zmm5[0x4] = var_368[2]
float zmm9[0x4] = zmm1_2
uint128_t zmm2_1 = zx.o(*rax_5)
int32_t rcx_2 = rax_5[2]
float zmm7[0x4] = zmm5
double zmm0_2[0x2] = var_300.d
uint32_t result = zx.d(arg9)
zmm0_2[0].d = zmm0_2[0].d f- zmm2_1.d
float var_2d0 = zmm1_2[0]
float zmm10[0x4] = zmm3_1
float var_2a8 = zmm1_2[0]
float zmm11[0x4] = zmm5
zmm1_2 = var_300:4.d
int64_t var_100 = zmm2_1.q
zmm15[0] = zmm15[0] f- zmm0_2[0].d
uint64_t var_2f0 = zmm2_1.q
zmm0_2 = zmm2_1
zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
zmm1_2[0] = zmm1_2[0] f- zmm0_2[0].d
float var_2cc = zmm3_1.d
zmm0_2 = var_2f8
zmm0_2[0].d = zmm0_2[0].d f- rcx_2
int32_t var_2a4 = zmm3_1.d
float var_2c8 = zmm5[0]
uint128_t zmm6
zmm6.d = zmm3_1.d f- zmm1_2[0]
float result_2 = zmm5[0]
int32_t var_f8 = rcx_2
zmm7[0] = zmm7[0] f- zmm0_2[0].d
int64_t var_2e0 = 0
zmm0_2 = zmm15
float var_2d8 = 1f
zmm0_2[0].d = zmm0_2[0].d f* zmm15[0]
zmm2_1.d = zmm6.d f* zmm6.d
zmm7[0] = zmm7[0] * zmm7[0]
zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
zmm2_1.d = zmm2_1.d f+ zmm7[0]
int32_t rdi

if (zmm2_1.d f>= var_2c4 || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm2_1 = 0x7f7fffff
int32_t rcx_3 = 0
int32_t var_374 = 0x7f7fffff
zmm1_2 = 0x7f7fffff
int32_t var_348 = 0
uint32_t r8_2 = zx.d(rdi.b)
char var_370 = 0
char var_378 = rdi.b
float var_344
int32_t var_298
int64_t var_280
float result_1
float zmm4_1[0x4]

if (rdi.b == 0)
    while (true)
        int32_t rax_6 = rcx_3
        rcx_3 += 1
        var_348 = rcx_3
        
        if (rax_6 s>= 0x20)
            zmm1_2 = var_374
            result = zx.d(arg9)
        else
            zmm5 = 0x3f000000
            void* rax_7 = var_288
            zmm0_2 = zmm6
            zmm2_1.d = zmm15.d f* zmm15[0]
            zmm0_2[0].d = zmm0_2[0].d f* zmm6.d
            void* rcx_4 = *(rax_7 + 0x10)
            zmm8_2 = *(rax_7 + 0x28)
            zmm9 = *(rax_7 + 0x2c)
            zmm10 = *(rax_7 + 0x30)
            zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm2_1.d = zmm2_1.d f+ zmm7[0]
            float temp0_12[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm2_1.d)
            zmm3_1.d = zmm2_1.d f* 0.5f
            zmm0_2 = temp0_12
            zmm0_2[0].d = zmm0_2[0].d f* temp0_12[0]
            zmm1_2 = zmm3_1
            zmm1_2[0] = zmm1_2[0] f* zmm0_2[0].d
            zmm0_2 = temp0_12
            zmm2_1.d = 0.5f - zmm1_2[0]
            zmm0_2[0].d = zmm0_2[0].d f* zmm2_1.d
            temp0_12[0] = temp0_12[0] f+ zmm0_2[0].d
            zmm0_2 = temp0_12
            temp0_12[0] = temp0_12[0] * temp0_12[0]
            zmm3_1.d = zmm3_1.d f* temp0_12[0]
            zmm5[0] = 0.5f f- zmm3_1.d
            zmm3_1 = *(rcx_4 + 0x20)
            zmm0_2[0].d = zmm0_2[0].d f* zmm5[0]
            zmm5 = *(rcx_4 + 0x24)
            temp0_12[0] = temp0_12[0] f+ zmm0_2[0].d
            zmm6.d = zmm6.d f* temp0_12[0]
            zmm7[0] = zmm7[0] * temp0_12[0]
            zmm15[0] = zmm15[0] * temp0_12[0]
            zmm0_2 = zmm6
            var_344 = temp0_12[0]
            zmm4_1 = *(rcx_4 + 0x1c)
            zmm0_2[0].d = zmm0_2[0].d f* zmm9[0]
            zmm2_1.d = zmm15.d f* zmm8_2.d
            zmm0_2[0].d = zmm0_2[0].d f* zmm3_1.d
            zmm2_1.d = zmm2_1.d f* zmm4_1[0]
            zmm7[0] = zmm7[0] * zmm10[0]
            zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
            int32_t var_270_1 = zmm6.d
            var_344 = zmm7[0]
            zmm7[0] = zmm7[0] * zmm5[0]
            zmm2_1.d = zmm2_1.d f+ zmm7[0]
            int32_t* rax_8
            int32_t r10_1
            
            if (zmm2_1.d f< zmm12[0].d)
                r10_1 = r10 | 2
                int32_t var_200_1 = *(rcx_4 + 0x18)
                int64_t var_208
                rax_8 = &var_208
                var_208 = *(rcx_4 + 0x10)
            else
                zmm2_1 = *(rcx_4 + 0x28)
                rax_8 = &var_298
                zmm0_2 = zmm2_1
                zmm1_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* zmm4_1[0]
                r10_1 = r10 | 1
                zmm1_2[0] = zmm1_2[0] f* zmm3_1.d
                zmm0_2[0].d = zmm0_2[0].d f+ *(rcx_4 + 0x10)
                zmm2_1.d = zmm2_1.d f* zmm5[0]
                zmm1_2[0] = zmm1_2[0] f+ *(rcx_4 + 0x14)
                zmm2_1.d = zmm2_1.d f+ *(rcx_4 + 0x18)
                var_298 = zmm0_2[0].d
                float var_294_1 = zmm1_2[0]
                int32_t var_290_1 = zmm2_1.d
            
            zmm0_2 = zx.o(*rax_8)
            int32_t rax_10 = rax_8[2]
            zmm2_1 = zmm0_2
            zmm3_1 = var_2b8[0]
            zmm1_2 = zmm0_2
            float temp0_13[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
            temp0_13[0] = temp0_13[0] * zmm9[0]
            int32_t rcx_6 = r10_1 & 0xfffffffd
            zmm9 = var_2b8[1]
            zmm0_2 = rax_10
            zmm0_2[0].d = zmm0_2[0].d f* zmm10[0]
            
            if ((r10_1.b & 2) == 0)
                rcx_6 = r10_1
            
            var_300:4.d = temp0_13[0]
            int64_t var_1d0_1 = temp0_13.q
            int32_t rdx_4 = rcx_6 & 0xfffffffe
            int32_t var_308_1 = zmm0_2[0].d
            int32_t var_2f8_1 = zmm0_2[0].d
            zmm4_1 = zmm6 ^ 0x80000000
            zmm2_1.d = zmm2_1.d f* zmm8_2.d
            
            if ((rcx_6.b & 1) == 0)
                rdx_4 = rcx_6
            
            zmm8_2 = var_2b8[2]
            zmm7 ^= 0x80000000
            zmm11 = zmm15 ^ 0x80000000
            int32_t var_30c_1 = zmm2_1.d
            zmm6.d = zmm4_1.d f* zmm3_1.d
            zmm0_2 = zmm4_1
            zmm0_2[0].d = zmm0_2[0].d f* zmm8_2.d
            zmm7[0] = zmm7[0] * zmm9[0]
            zmm11[0] = zmm11[0] f* zmm8_2.d
            zmm7[0] = zmm7[0] f- zmm0_2[0].d
            var_300.d = zmm2_1.d
            zmm2_1 = var_2b8[3]
            zmm0_2 = zmm7
            zmm0_2[0].d = zmm0_2[0].d f* zmm3_1.d
            zmm7[0] = zmm7[0] + zmm7[0]
            zmm11[0] = zmm11[0] f- zmm0_2[0].d
            zmm0_2 = zmm11
            zmm0_2[0].d = zmm0_2[0].d f* zmm9[0]
            zmm6.d = zmm6.d f- zmm0_2[0].d
            zmm7[0] = zmm7[0] f* zmm8_2.d
            zmm11[0] = zmm11[0] + zmm11[0]
            zmm6.d = zmm6.d f+ zmm6.d
            zmm0_2 = zmm6
            zmm0_2[0].d = zmm0_2[0].d f* zmm3_1.d
            zmm7[0] = zmm7[0] f- zmm0_2[0].d
            zmm0_2 = zmm7
            zmm0_2[0].d = zmm0_2[0].d f* zmm9[0]
            zmm7[0] = zmm7[0] f* zmm2_1.d
            float var_36c_1 = zmm7[0]
            zmm11[0] = zmm11[0] f* zmm2_1.d
            zmm11[0] = zmm11[0] + zmm4_1[0]
            zmm4_1 = var_36c_1
            zmm4_1[0] = zmm4_1[0] + zmm11[0]
            zmm11[0] = zmm11[0] f* zmm3_1.d
            zmm11[0] = zmm11[0] f* zmm8_2.d
            zmm11[0] = zmm11[0] f- zmm0_2[0].d
            zmm1_2 = zmm6
            zmm0_2 = zmm11[0]
            zmm1_2[0] = zmm1_2[0] f* zmm2_1.d
            zmm6.d = zmm6.d f* zmm9[0]
            zmm1_2[0] = zmm1_2[0] + zmm7[0]
            zmm6.d = zmm6.d f- zmm11[0]
            zmm0_2[0].d = zmm0_2[0].d f+ zmm1_2[0]
            zmm7[0] = zmm7[0] + zmm11[0]
            zmm6.d = zmm6.d f+ zmm7[0]
            
            if (zmm6.d f>= zmm12[0].d)
                zmm5 = *(rbx + 0x1c)
            else
                zmm5 = *(rbx + 0x10)
            
            if (zmm4_1[0] f>= zmm12[0].d)
                zmm1_2 = *(rbx + 0x20)
            else
                zmm1_2 = *(rbx + 0x14)
            
            float var_36c_3 = zmm1_2[0]
            
            if (zmm0_2[0].d f>= zmm12[0].d)
                zmm11 = *(rbx + 0x24)
            else
                zmm11 = *(rbx + 0x18)
            
            zmm8_2 = var_218
            zmm2_1 = var_31c
            zmm3_1.d = zmm8_2.d f* zmm1_2[0]
            zmm0_2 = var_248
            zmm0_2[0].d = zmm0_2[0].d f* zmm1_2[0]
            zmm6.d = var_248.d f* zmm5[0]
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            var_228[0] = var_228[0] * zmm11[0]
            uint64_t rcx_8 = r13 * 3
            var_228[0] = var_228[0] f- zmm0_2[0].d
            zmm0_2 = zmm8_2
            zmm0_2[0].d = zmm0_2[0].d f* zmm11[0]
            zmm6.d = zmm6.d f- zmm0_2[0].d
            zmm0_2 = var_228
            zmm0_2[0].d = zmm0_2[0].d f* zmm5[0]
            var_228[0] = var_228[0] + var_228[0]
            zmm3_1.d = zmm3_1.d f- zmm0_2[0].d
            zmm6.d = zmm6.d f+ zmm6.d
            var_228[0] = var_228[0] f* zmm2_1.d
            zmm3_1.d = zmm3_1.d f+ zmm3_1.d
            var_228[0] = var_228[0] + zmm5[0]
            zmm0_2 = zmm6
            zmm0_2[0].d = zmm0_2[0].d f* var_248[0]
            var_228[0] = var_228[0] * var_228[0]
            zmm7 = zmm3_1
            var_228[0] = var_228[0] * var_248[0]
            zmm10 = var_2cc
            zmm7[0] = zmm7[0] * var_228[0]
            zmm9 = var_2d0
            zmm7[0] = zmm7[0] f- zmm0_2[0].d
            zmm0_2 = zmm3_1
            zmm0_2[0].d = zmm0_2[0].d f* zmm8_2.d
            zmm3_1.d = zmm3_1.d f* zmm2_1.d
            zmm7[0] = zmm7[0] + var_228[0]
            zmm1_2 = zmm6
            var_228[0] = var_228[0] f- zmm0_2[0].d
            zmm1_2[0] = zmm1_2[0] f* zmm2_1.d
            zmm0_2 = var_30c_1
            zmm3_1.d = zmm3_1.d f+ zmm11[0]
            zmm11 = var_2c8
            zmm1_2[0] = zmm1_2[0] + var_36c_3
            zmm0_2[0].d = zmm0_2[0].d f- zmm7[0]
            zmm6.d = zmm6.d f* zmm8_2.d
            var_228[0] = var_228[0] + zmm1_2[0]
            zmm1_2 = var_308_1
            zmm6.d = zmm6.d f- var_228[0]
            int32_t var_30c_2 = zmm0_2[0].d
            zmm9[0] = zmm9[0] f- zmm0_2[0].d
            *(&var_130 + (rcx_8 << 2)) = var_300
            zmm8_2.d = var_1d0_1.d f- var_228[0]
            zmm0_2 = _mm_unpacklo_ps(zmm7, var_228[0].q)
            zmm6.d = zmm6.d f+ zmm3_1.d
            (&var_128)[rcx_8] = var_2f8_1
            *(&var_100 + (rcx_8 << 2)) = zmm0_2.q
            var_358 = zmm9[0]
            zmm2_1.d = zmm10.d f- zmm8_2.d
            zmm1_2[0] = zmm1_2[0] f- zmm6.d
            (&var_f8)[rcx_8] = zmm6.d
            int32_t var_354_1 = zmm2_1.d
            zmm3_1.d = zmm11.d f- zmm1_2[0]
            float var_308_2 = zmm1_2[0]
            var_350 = zmm3_1.d
            zmm6 = var_270_1
            zmm0_2 = zmm15
            zmm0_2[0].d = zmm0_2[0].d f* zmm9[0]
            zmm5 = zmm6
            zmm4_1 = var_344
            zmm5[0] = zmm5[0] f* zmm2_1.d
            zmm4_1[0] = zmm4_1[0] f* zmm3_1.d
            zmm5[0] = zmm5[0] f+ zmm0_2[0].d
            zmm5[0] = zmm5[0] + zmm4_1[0]
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm5[0] <= zmm14[0])
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_8 << 2)) = var_358.q
                *(&var_160:8 + (rcx_8 << 2)) = var_350
                var_188 = r13.d
            label_141648217:
                zmm8_2 = var_374
                
                if (r8_2.b != 0 && not(zmm5[0] f< zmm12[0].d))
                    zmm5[0] = zmm5[0] * zmm5[0]
                    zmm5[0] = zmm5[0] + 9.99999997e-07f
                    rdi.b = zmm5[0] f>= zmm8_2.d
            else
                zmm3_1 = (*r14)[1]
                zmm7 = *r14
                zmm0_2 = zmm6
                zmm2_1.d = zmm15.d f* zmm7[0]
                zmm4_1[0] = zmm4_1[0] * (*r14)[2]
                zmm0_2[0].d = zmm0_2[0].d f* zmm3_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
                zmm2_1.d = zmm2_1.d f+ zmm4_1[0]
                
                if (zmm2_1.d f>= zmm12[0].d)
                    result.b = 0
                    goto label_141648cdd
                
                zmm0_2 = zmm5
                zmm0_2[0].d = zmm0_2[0].d f- zmm14[0]
                zmm0_2[0].d = zmm0_2[0].d f/ zmm2_1.d
                zmm13[0] = zmm13[0] f- zmm0_2[0].d
                
                if (zmm13[0] <= zmm13[0])
                    goto label_141648217
                
                if (zmm13[0] f> arg5)
                    result.b = 0
                    goto label_141648cdd
                
                zmm1_2 = zx.o(var_2a8.q)
                zmm10 = zmm3_1
                zmm11 = (*r14)[2]
                zmm0_2 = zmm1_2
                zmm9 = zmm7
                zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                r13 = zx.q(r13.d + 1)
                var_280 = zmm1_2.q
                zmm9[0] = zmm9[0] * zmm13[0]
                result_1 = result_2
                zmm10[0] = zmm10[0] * zmm13[0]
                var_188 = r13.d
                zmm9[0] = zmm9[0] + var_368[0]
                zmm11[0] = zmm11[0] * zmm13[0]
                var_378 = 0
                zmm10[0] = zmm10[0] + var_368[1]
                var_2d8 = zmm4_1[0]
                zmm11[0] = zmm11[0] + var_368[2]
                var_2d0 = zmm9[0]
                zmm3_1.d = zmm9.d f- zmm1_2[0]
                var_2a8 = zmm9[0]
                zmm1_2 = var_160:4.d
                zmm10[0] = zmm10[0] f- zmm0_2[0].d
                var_2cc = zmm10[0]
                zmm0_2 = var_160.d
                zmm2_1.d = zmm11.d f- result_1
                zmm0_2[0].d = zmm0_2[0].d f+ zmm3_1.d
                var_2c8 = zmm11[0]
                float var_2a4_1 = zmm10[0]
                zmm1_2[0] = zmm1_2[0] + zmm10[0]
                result_2 = zmm11[0]
                var_2e0.d = zmm15[0]
                var_2e0:4.d = zmm6.d
                var_160.d = zmm0_2[0].d
                zmm0_2 = var_160:8.d
                zmm0_2[0].d = zmm0_2[0].d f+ zmm2_1.d
                var_160:4.d = zmm1_2[0]
                zmm1_2 = var_160:0xc.d
                zmm1_2[0] = zmm1_2[0] f+ zmm3_1.d
                var_160:8.d = zmm0_2[0].d
                zmm0_2 = var_150_1.d
                var_160:0xc.d = zmm1_2[0]
                zmm0_2[0].d = zmm0_2[0].d f+ zmm10[0]
                zmm1_2 = var_150_1:4.d
                zmm1_2[0] = zmm1_2[0] f+ zmm2_1.d
                var_150_1.d = zmm0_2[0].d
                zmm0_2 = var_150_1:8.d
                var_150_1:4.d = zmm1_2[0]
                zmm0_2[0].d = zmm0_2[0].d f+ zmm3_1.d
                zmm1_2 = var_150_1:0xc.d
                zmm1_2[0] = zmm1_2[0] + zmm10[0]
                var_150_1:8.d = zmm0_2[0].d
                zmm0_2 = var_140_1
                zmm0_2[0].d = zmm0_2[0].d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_2[0]
                zmm9[0] = zmm9[0] f- var_30c_2
                zmm2_1.d = zmm10.d f- zmm8_2.d
                zmm8_2 = 0x7f7fffff
                var_374 = 0x7f7fffff
                var_140_1 = zmm0_2[0].d
                zmm0_2 = zmm11
                zmm0_2[0].d = zmm0_2[0].d f- var_308_2
                *(&var_160 + (rcx_8 << 2)) = (_mm_unpacklo_ps(zmm9, zmm2_1.q)).q
                *(&var_160:8 + (rcx_8 << 2)) = zmm0_2[0].d
            
            uint32_t rdx_10
            
            if (rdi.b != 0)
                int64_t* rax_24
                rax_24, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                    sub_1416f4530(&var_1f0, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                zmm1_2 = zx.o(*rax_24)
                rdx_10 = zx.d(var_370)
                var_228 = var_324
                var_218 = var_328
                zmm0_2 = zmm1_2
                zmm7 = rax_24[1].d
                result = zx.d(arg9)
                zmm15 = zmm1_2.d
                zmm1_2 = var_374
                zmm6 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                var_248 = var_320
            else
                int32_t rcx_9 = r13.d
                int64_t var_318_1
                int32_t rax_18
                
                if (rcx_9 == 1)
                    int64_t rax_20 = sx.q(var_184)
                    int64_t rcx_16 = rax_20 * 3
                    var_170[rax_20] = 0x3f800000
                    rax_18 = *(&var_160:8 + (rcx_16 << 2))
                    var_318_1 = *(&var_160 + (rcx_16 << 2))
                else
                    uint64_t* rax_19
                    
                    if (rcx_9 == 2)
                        void var_198
                        rax_19, zmm8_2, zmm9 =
                            sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    label_1416482a3:
                        rax_18 = rax_19[1].d
                        r13 = zx.q(var_188)
                        var_318_1 = *rax_19
                        var_228 = var_324
                        var_218 = var_328
                        var_248 = var_320
                    else
                        if (rcx_9 == 3)
                            uint64_t var_1a4
                            rax_19, zmm8_2, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                                sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                            goto label_1416482a3
                        
                        if (rcx_9 == 4)
                            uint64_t var_1b0
                            rax_19, zmm8_2, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                                sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                            goto label_1416482a3
                        
                        int32_t var_338_1 = 0
                        rax_18 = 0
                        var_318_1 = (_mm_unpacklo_ps(zmm12, zmm12[0])).q
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int64_t var_180
                int64_t r10_2 = sx.q(var_180.d)
                int64_t r9_3 = sx.q(var_180:4.d)
                zmm15 = var_318_1.d
                int64_t rbx_1 = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_2 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t rdx_8 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_17 = *(&var_160:8 + (rsi_1 << 2))
                r8_2 = *(&var_160:8 + (r15_1 << 2))
                zmm6 = var_318_1:4.d
                int32_t rax_21 = *(&var_160:8 + (rbx_1 << 2))
                zmm7 = rax_18
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                zmm0_2 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                zmm1_2 = var_170[r10_2]
                var_160.q = *(&var_160 + (r15_1 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[2] = var_170[r9_3].d
                zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[0] = zmm0_2[0].d
                zmm0_2 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_2[0]
                zmm1_2 = zx.o(*(&var_130 + (rsi_1 << 2)))
                var_170[3] = zmm3_1.d
                var_150_1:4.d = rdx_8
                int32_t rdx_9 = (&var_128)[r14_1]
                var_140_1 = rcx_17
                int32_t rcx_18 = (&var_128)[rsi_1]
                var_140_1 = rax_21
                int32_t rax_22 = (&var_128)[rbx_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_2.q
                zmm0_2 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = zmm1_2.q
                zmm1_2 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_130 = *(&var_130 + (r15_1 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_9
                rdx_10 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_18
                int32_t rcx_19 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_22
                int32_t rax_23 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_2.q
                var_184.o = data_142e11d00
                var_f8 = (&var_f8)[r15_1]
                zmm2_1.d = zmm6.d f* zmm6.d
                zmm0_2 = zmm15
                var_160:8.d = r8_2
                var_f4_1:0xc.q = zmm1_2.q
                zmm0_2[0].d = zmm0_2[0].d f* zmm15[0]
                var_f4_1:8.d = rdx_10
                zmm7[0] = zmm7[0] * zmm7[0]
                var_e4_1:4.d = rcx_19
                zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
                var_100 = zmm3_1.q
                zmm3_1 = var_2c4
                int32_t var_d4_1 = rax_23
                zmm2_1.d = zmm2_1.d f+ zmm7[0]
                rdi.b = zmm3_1.d f> zmm2_1.d
                result = zx.d(arg9)
                zmm1_2 = zmm2_1
                var_374 = zmm2_1.d
                rdx_10.b = zmm2_1.d f>= zmm8_2.d
                var_370 = rdx_10.b
                
                if (result.b != 0)
                    if (rdi.b == 0)
                        goto label_14164869c
                    
                    if (zmm13[0] f!= zmm12[0].d)
                    label_141648694:
                        zmm1_2 = zmm2_1
                        goto label_141648697
                    
                    zmm1_2 = 0x3eb0c6f7a0b5ed8d
                    
                    if (_mm_cvtps_pd(zmm2_1.q)[0] f<= zmm1_2[0].q)
                        goto label_141648694
                    
                    if (_mm_cvtps_pd(zmm3_1.q)[0] f<= zmm1_2[0].q || r13.d s>= 4)
                        goto label_141648694
                    
                    r8_2.b = 1
                    rdi.b = 0
                    var_378 = 1
                    goto label_1416486a2
            
        label_141648697:
            
            if (rdi.b != 0)
                rcx_3 = var_348
            else
            label_14164869c:
                r8_2 = zx.d(var_378)
            label_1416486a2:
                rcx_3 = var_348
                
                if (rdx_10.b != 0)
                    zmm1_2 = var_374
                else
                    r10 = rdx_4
                    rbx = arg2
                    r14 = arg4
                    continue
        
        zmm8_2 = 0x80000000
        zmm5 = var_368[2]
        zmm2_1 = 0x7f7fffff
        break

bool cond:1_1 = zmm13[0] f<= zmm12[0].d
float* rdi_3 = arg6
*rdi_3 = zmm13[0]

if (not(cond:1_1))
    zmm3_1 = zmm12
    zmm4_1 = zmm12
    *arg8 = var_2e0
    arg8[2] = var_2d8
    
    if (r13.d s> 0)
        int128_t* rcx_21 = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_27 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_21
            rcx_21 += 4
            zmm0_2 = zmm2_1
            zmm1_2 = zmm2_1
            zmm0_2[0].d = zmm0_2[0].d f* rax_27[-2]
            zmm1_2[0] = zmm1_2[0] f* rax_27[-1]
            zmm2_1.d = zmm2_1.d f* *rax_27
            rax_27 = &rax_27[3]
            zmm12[0].d = zmm12[0].d f+ zmm0_2[0].d
            zmm3_1.d = zmm3_1.d f+ zmm1_2[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t* rax_28 = arg4
    zmm0_2 = zmm13
    zmm0_2[0].d = zmm0_2[0].d f* *rax_28
    zmm13[0] = zmm13[0] f* rax_28[1]
    zmm13[0] = zmm13[0] f* rax_28[2]
    zmm0_2[0].d = zmm0_2[0].d f+ var_368[0]
    zmm13[0] = zmm13[0] + var_368[1]
    zmm13[0] = zmm13[0] + zmm5[0]
    zmm0_2[0].d = zmm0_2[0].d f+ zmm12[0].d
    zmm13[0] = zmm13[0] f+ zmm3_1.d
    zmm13[0] = zmm13[0] + zmm4_1[0]
    zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm13[0].q)
    result = zmm13[0]
    *arg7 = zmm0_2.q
    arg7[1].d = result
else if (result.b != 0)
    double temp0_22[0x2]
    
    if (not(zmm14[0] f<= zmm12[0].d))
        temp0_22 = _mm_cvtps_pd(zmm1_2[0].q)
    
    if (zmm14[0] f<= zmm12[0].d || temp0_22[0] <= 9.9999999999999995e-07 || zmm1_2[0] f>= zmm2_1.d)
        var_170[0].q = 0
        var_170[2].q = 0
        var_368[0].q = 0
        var_368[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_368[3] s< 8)
            sub_14083ad30(&var_368, 8)
        
        uint128_t zmm0_3
        int32_t rax_41
        
        if (var_348 == 0)
            int32_t var_338_5 = 0x3f800000
            rax_41 = 0x3f800000
            *rdi_3 = (zmm14 ^ zmm8_2).d
            zmm0_3 = _mm_unpacklo_ps(zmm12, zmm12[0])
        label_141648c65:
            *arg8 = zmm0_3.q
            arg8[2] = rax_41
            zmm0_3.d = zmm14.d f* *arg8
            zmm14[0] = zmm14[0] f* arg8[2]
            zmm14[0] = zmm14[0] f* arg8[1]
            zmm14[0] = zmm14[0] f+ var_128
            zmm0_3.d = zmm0_3.d f+ var_130.d
            zmm14[0] = zmm14[0] f+ var_130:4.d
            result = zmm14[0]
            zmm0_3 = _mm_unpacklo_ps(zmm0_3, zmm14[0].q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_170[2])
                    int32_t rax_34 = (rdi_4 + 1).d
                    var_170[2] = rax_34
                    
                    if (rax_34 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_25 = var_170[0].q
                    int64_t rdx_13 = rdi_4 * 3
                    zmm0_3 = zx.o(*(&var_130 + r12))
                    int32_t rax_35 = *(&var_128 + r12)
                    zmm10[0] = zmm10[0] f+ *(&var_100:4 + r12)
                    *(rcx_25 + (rdx_13 << 2)) = zmm0_3.q
                    zmm0_3.d = zmm9.d f+ *(&var_100 + r12)
                    *(rcx_25 + (rdx_13 << 2) + 8) = rax_35
                    int64_t rdi_5 = sx.q(var_368[2])
                    float var_354_2 = zmm10[0]
                    var_358 = zmm0_3.d
                    zmm0_3.d = zmm11.d f+ *(&var_f8 + r12)
                    int32_t rax_36 = (rdi_5 + 1).d
                    var_368[2] = rax_36
                    var_350 = zmm0_3.d
                    
                    if (rax_36 s> var_368[3])
                        sub_14083a7e0(&var_368)
                    
                    int64_t rcx_27 = var_368[0].q
                    int64_t rdx_15 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_27 + (rdx_15 << 2)) = var_358.q
                    *(rcx_27 + (rdx_15 << 2) + 8) = var_350
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_188.q = &var_2b8
            int64_t var_180_1 = arg2
            int128_t* var_178_1 = arg3
            int32_t rax_40
            int128_t zmm8_3
            rax_40, zmm8_3, zmm14 = sub_14159adf0(&var_170, &var_368, &var_288, &var_188, zmm14, 
                zmm15, &var_344, &var_358, &var_280, &var_1f0)
            rax_41 = var_350
            
            if (rax_40 == 2)
                *rdi_3 = (zmm14 ^ zmm8_3).d
                zmm0_3 = zx.o(var_358.q)
                goto label_141648c65
            
            *arg8 = var_358.q
            zmm0_3 = var_344 ^ zmm8_3
            arg8[2] = rax_41
            result = result_1
            zmm0_3.d = zmm0_3.d f- zmm14[0]
            *rdi_3 = zmm0_3.d
            zmm0_3 = zx.o(var_280)
        int64_t rcx_29 = var_368[0].q
        *arg7 = zmm0_3.q
        arg7[1].d = result
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        int64_t rcx_30 = var_170[0].q
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
    else
        zmm3_1 = zmm12
        zmm4_1 = zmm12
        *arg8 = var_2e0
        zmm5 = zmm12
        arg8[2] = var_2d8
        zmm9 = zmm12
        zmm10 = zmm12
        zmm11 = zmm12
        
        if (rcx_3 == 0)
            zmm1_2 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            zmm0_2 = zmm1_2
            int32_t rax_31 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
            int32_t rax_32 = var_f8
            zmm0_2 = zmm2_1
            zmm5 = rax_31
            zmm10 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
            zmm11 = rax_32
            zmm3_1 = zmm1_2.d
            var_298.q = zmm2_1.q
            zmm9 = var_298
        else if (r13.d s> 0)
            int128_t* rax_30 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_30
                rax_30 += 4
                zmm0_2 = zmm2_1
                zmm1_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* *(&var_130 + r12)
                zmm1_2[0] = zmm1_2[0] f* *(&var_130:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_2[0].d
                zmm0_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* *(&var_128 + r12)
                zmm4_1[0] = zmm4_1[0] + zmm1_2[0]
                zmm1_2 = zmm2_1
                zmm1_2[0] = zmm1_2[0] f* *(&var_100 + r12)
                zmm5[0] = zmm5[0] f+ zmm0_2[0].d
                zmm0_2 = zmm2_1
                zmm0_2[0].d = zmm0_2[0].d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm9[0] = zmm9[0] + zmm1_2[0]
                r12 += 0xc
                zmm10[0] = zmm10[0] f+ zmm0_2[0].d
                zmm11[0] = zmm11[0] f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm7 = var_368[1]
        zmm15 = var_368[0]
        zmm7[0] = zmm7[0] + zmm10[0]
        zmm13 = var_368[2]
        zmm8_2.d = zmm15.d f+ zmm9[0]
        zmm6.d = zmm13.d f+ zmm11[0]
        zmm7[0] = zmm7[0] - zmm4_1[0]
        zmm8_2.d = zmm8_2.d f- zmm3_1.d
        zmm6.d = zmm6.d f- zmm5[0]
        zmm5 = 0x3f000000
        zmm2_1.d = zmm7.d f* zmm7[0]
        zmm0_2 = zmm8_2
        zmm1_2 = zmm6
        zmm0_2[0].d = zmm0_2[0].d f* zmm8_2.d
        zmm1_2[0] = zmm1_2[0] f* zmm6.d
        zmm2_1.d = zmm2_1.d f+ zmm0_2[0].d
        zmm2_1.d = zmm2_1.d f+ zmm1_2[0]
        float temp0_25[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm2_1.d)
        zmm3_1.d = zmm2_1.d f* 0.5f
        zmm0_2 = temp0_25
        zmm0_2[0].d = zmm0_2[0].d f* temp0_25[0]
        zmm1_2 = zmm3_1
        zmm1_2[0] = zmm1_2[0] f* zmm0_2[0].d
        zmm0_2 = temp0_25
        zmm2_1.d = 0.5f - zmm1_2[0]
        zmm0_2[0].d = zmm0_2[0].d f* zmm2_1.d
        temp0_25[0] = temp0_25[0] f+ zmm0_2[0].d
        zmm0_2 = temp0_25
        temp0_25[0] = temp0_25[0] * temp0_25[0]
        zmm3_1.d = zmm3_1.d f* temp0_25[0]
        zmm5[0] = 0.5f f- zmm3_1.d
        zmm0_2[0].d = zmm0_2[0].d f* zmm5[0]
        temp0_25[0] = temp0_25[0] f+ zmm0_2[0].d
        zmm0_2 = temp0_25
        zmm0_2[0].d = zmm0_2[0].d f* zmm8_2.d
        temp0_25[0] = temp0_25[0] * zmm7[0]
        temp0_25[0] = temp0_25[0] f* zmm6.d
        zmm0_2 = _mm_unpacklo_ps(zmm0_2, temp0_25[0].q)
        *arg8 = zmm0_2.q
        zmm0_2 = __sqrtss_xmmss_memss(zmm0_2[0].d, var_374)
        float var_338_3 = temp0_25[0]
        zmm14[0] = zmm14[0] f- zmm0_2[0].d
        arg8[2] = var_338_3
        
        if (not(zmm14[0] f< zmm12[0].d))
            zmm12 = __minss_xmmss_memss(zmm14[0].d, 0x7f7fffff)
        
        zmm1_2 = var_368[1]
        zmm15[0] = zmm15[0] + zmm9[0]
        zmm1_2[0] = zmm1_2[0] + zmm10[0]
        zmm12[0].d = zmm12[0].d f* *arg8
        zmm13[0] = zmm13[0] + zmm11[0]
        zmm15[0] = zmm15[0] f+ zmm12[0].d
        zmm12[0].d = zmm12[0].d f* arg8[1]
        zmm1_2[0] = zmm1_2[0] f+ zmm12[0].d
        zmm0_2 = zmm12
        zmm0_2[0].d = zmm0_2[0].d f* arg8[2]
        zmm12 ^= data_142d3f780
        zmm13[0] = zmm13[0] f+ zmm0_2[0].d
        *arg7 = (_mm_unpacklo_ps(zmm15, zmm1_2[0].q)).q
        arg7[1].d = zmm13[0]
        *rdi_3 = zmm12[0].d

result.b = 1
label_141648cdd:
__security_check_cookie(rax_1 ^ &var_3b8)
return result

// 函数: sub_14163bbd0
// 地址: 0x14163bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t r12 = 0
float var_330 = 0f
float zmm3[0x4] = *arg3
double (* rsi)[0x2] = arg4
float zmm10[0x4] = *(arg1 + 0x2c)
double zmm0[0x2] = arg3[1]
float var_2a8 = zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
double zmm15[0x2] = zx.o(0)
double var_348[0x2] = zmm0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
void* var_238 = arg1
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
double var_170[0x2] = data_142d3f7e0
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
float var_29c = temp0[0]
zmm10[0] = zmm10[0] * zmm10[0]
float var_2d8[0x4]
int128_t* var_1e0 = &var_2d8
int32_t* var_1d8 = &var_2a8
double temp0_1[0x2] = _mm_cvtps_pd(zmm10[0].q)
int64_t var_1e8 = arg2
float var_28c = zmm10[0]
temp0_1[0] = temp0_1[0] + 9.9999999999999995e-07
double zmm9[0x2] = *(arg10 + 4)
float zmm8[0x4] = *arg10
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_2a0 = temp0_2[0]
float temp0_3[0x4] = _mm_cvtpd_ps(temp0_1)
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t var_2a4 = zmm0[0].d
temp0_5[0] = (zmm0 ^ 0x80000000)[0].d
var_330 = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_2d8 = temp0_8
var_2d8 = temp0_8
float zmm4 = *(arg1 + 0x20)
zmm3 = *(arg1 + 0x1c)
float zmm5 = *(arg1 + 0x24)
float zmm11[0x4] = *(arg10 + 8)
zmm8[0] = zmm8[0] * zmm3[0]
zmm9[0].d = zmm9[0].d f* zmm4
zmm11[0] = zmm11[0] * zmm5
zmm8[0] = zmm8[0] f+ zmm9[0].d
zmm8[0] = zmm8[0] + zmm11[0]
float var_360
uint64_t var_320
float* rdx
int32_t rdi

if (zmm8[0] < 0f)
    rdx = &var_320
    int32_t rax_4 = *(arg1 + 0x18)
    rdi = 2
    var_320 = *(arg1 + 0x10)
    int32_t var_318_1 = rax_4
else
    zmm0 = *(arg1 + 0x28)
    rdx = &var_360
    zmm3[0] = zmm3[0] f* zmm0[0].d
    rdi = 1
    zmm4 = zmm4 f* zmm0[0].d
    zmm3[0] = zmm3[0] f+ *(arg1 + 0x10)
    zmm4 = zmm4 f+ *(arg1 + 0x14)
    zmm5 = zmm5 f* zmm0[0].d f+ *(arg1 + 0x18)
    var_360 = zmm3[0]
    float var_35c_1 = zmm4
    float var_358_1 = zmm5

int32_t rax_5 = rdx[2]
int32_t rcx_1 = rdi & 0xfffffffd
int64_t var_130 = *rdx

if ((rdi.b & 2) == 0)
    rcx_1 = rdi

int32_t rdi_2 = rcx_1 & 0xfffffffe
int32_t rax_8 = rdx[2]

if ((rcx_1.b & 1) == 0)
    rdi_2 = rcx_1

var_360 = (zmm8 ^ 0x80000000)[0]
int32_t var_2f0 = rdi_2
int32_t var_35c_2 = (zmm9 ^ 0x80000000)[0].d
float var_358_2 = (zmm11 ^ 0x80000000)[0]
int32_t var_128 = rax_8
void var_32c
int32_t* rax_9
double zmm6_1[0x2]
double zmm10_1[0x2]
rax_9, zmm6_1, zmm10_1 = sub_14170d470(&var_1e8, &var_32c, &var_360)
double zmm1_1[0x2] = var_348[0].d
double zmm3_1[0x2] = var_348[0]:4.d
double zmm13[0x2] = zmm1_1
double zmm5_1[0x2] = var_348[1].d
double zmm8_1[0x2] = zmm1_1
uint128_t zmm2_1 = zx.o(*rax_9)
double zmm9_1[0x2] = zmm5_1
int32_t rcx_3 = rax_9[2]
zmm6_1[0].d = zmm6_1[0].d f- zmm2_1.d
int32_t var_2ec = zmm1_1[0].d
uint32_t result = zx.d(arg9)
double zmm7[0x2] = zx.o(0)
int32_t var_2c8 = zmm1_1[0].d
double zmm11_1[0x2] = zmm3_1
int64_t var_100 = zmm2_1.q
zmm13[0].d = zmm13[0].d f- zmm6_1[0].d
var_320 = zmm2_1.q
double zmm0_1[0x2] = zmm2_1
zmm1_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
zmm6_1 = zmm3_1
zmm1_1[0].d = zmm1_1[0].d f- zmm0_1[0].d
zmm0_1 = rax_5
double zmm12[0x2] = zmm5_1
zmm0_1[0].d = zmm0_1[0].d f- rcx_3
int32_t var_304 = 0
int32_t var_350 = zmm3_1[0].d
zmm6_1[0].d = zmm6_1[0].d f- zmm1_1[0].d
int32_t var_2c4 = zmm3_1[0].d
int32_t var_34c = zmm5_1[0].d
zmm9_1[0].d = zmm9_1[0].d f- zmm0_1[0].d
uint32_t result_2 = zmm5_1[0].d
int32_t var_f8 = rcx_3
zmm13[0].d = zmm13[0].d f* zmm13[0].d
int64_t var_300 = 0
int32_t var_2f8 = 0x3f800000
zmm2_1.d = zmm6_1.d f* zmm6_1[0].d
zmm9_1[0].d = zmm9_1[0].d f* zmm9_1[0].d
zmm2_1.d = zmm2_1.d f+ zmm13[0].d
zmm2_1.d = zmm2_1.d f+ zmm9_1[0].d

if (zmm2_1.d f>= temp0_3[0] || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi_2.b = 0
else
    rdi_2.b = 1

zmm1_1 = 0x7f7fffff
int32_t rcx_4 = 0
int32_t var_338 = 0x7f7fffff
float zmm14[0x4] = 0x7f7fffff
int32_t var_334 = 0
uint64_t r14 = zx.q(rdi_2.b)
char var_367 = 0
char var_368 = rdi_2.b
uint64_t var_2b8
int64_t var_270
uint32_t result_1
double zmm4_1[0x2]

if (rdi_2.b == 0)
    while (true)
        int32_t rax_10 = rcx_4
        rcx_4 += 1
        var_334 = rcx_4
        
        if (rax_10 s>= 0x20)
            zmm11_1 = var_350
            zmm12 = var_34c
            result = zx.d(arg9)
        else
            zmm5_1 = 0x3f000000
            zmm3_1 = zx.o(0)
            void* rax_11 = var_238
            zmm2_1.d = zmm6_1.d f* zmm6_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f* zmm9_1[0].d
            zmm7 = *(rax_11 + 0x24)
            zmm13[0].d = zmm13[0].d f* zmm13[0].d
            zmm2_1.d = zmm2_1.d f+ zmm13[0].d
            zmm2_1.d = zmm2_1.d f+ zmm9_1[0].d
            zmm3_1[0].d = zmm2_1.d
            zmm4_1 = _mm_rsqrt_ss(zmm3_1[0].d, zmm3_1[0].d)
            zmm3_1[0].d = zmm3_1[0].d f* 0.5f
            zmm4_1[0].d = zmm4_1[0].d f* zmm4_1[0].d
            zmm3_1[0].d = zmm3_1[0].d f* zmm4_1[0].d
            zmm2_1.d = 0.5f f- zmm3_1[0].d
            zmm4_1[0].d = zmm4_1[0].d f* zmm2_1.d
            zmm4_1[0].d = zmm4_1[0].d f+ zmm4_1[0].d
            zmm4_1[0].d = zmm4_1[0].d f* zmm4_1[0].d
            zmm3_1[0].d = zmm3_1[0].d f* zmm4_1[0].d
            zmm5_1[0].d = 0.5f f- zmm3_1[0].d
            zmm4_1[0].d = zmm4_1[0].d f* zmm5_1[0].d
            zmm5_1 = *(rax_11 + 0x1c)
            zmm4_1[0].d = zmm4_1[0].d f+ zmm4_1[0].d
            zmm3_1 = zmm4_1
            zmm6_1[0].d = zmm6_1[0].d f* zmm4_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f* zmm4_1[0].d
            zmm3_1[0].d = zmm3_1[0].d f* zmm13[0].d
            int32_t var_2e8_1 = zmm4_1[0].d
            zmm4_1 = *(rax_11 + 0x20)
            zmm6_1[0].d = zmm6_1[0].d f* zmm4_1[0].d
            zmm2_1.d = zmm3_1.d f* zmm5_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f* zmm7[0].d
            zmm2_1.d = zmm2_1.d f+ zmm6_1[0].d
            int32_t var_298_1 = zmm3_1[0].d
            int32_t var_294_1 = zmm6_1[0].d
            int32_t var_290_1 = zmm9_1[0].d
            zmm2_1.d = zmm2_1.d f+ zmm9_1[0].d
            int32_t* rax_12
            int32_t rcx_5
            
            if (zmm2_1.d f< zmm15[0].d)
                rcx_5 = 8
                int32_t var_200_1 = *(rax_11 + 0x18)
                int64_t var_208
                rax_12 = &var_208
                var_208 = *(rax_11 + 0x10)
            else
                zmm2_1 = *(rax_11 + 0x28)
                rcx_5 = 4
                zmm0_1 = zmm2_1
                zmm1_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1[0].d
                zmm1_1[0].d = zmm1_1[0].d f* zmm4_1[0].d
                zmm0_1[0].d = zmm0_1[0].d f+ *(rax_11 + 0x10)
                zmm2_1.d = zmm2_1.d f* zmm7[0].d
                zmm1_1[0].d = zmm1_1[0].d f+ *(rax_11 + 0x14)
                zmm2_1.d = zmm2_1.d f+ *(rax_11 + 0x18)
                int32_t var_220 = zmm0_1[0].d
                rax_12 = &var_220
                int32_t var_21c_1 = zmm1_1[0].d
                int32_t var_218_1 = zmm2_1.d
            
            zmm14 = zx.o(*rax_12)
            int32_t rax_14 = rax_12[2]
            zmm10_1 = var_2d8[1]
            zmm5_1 = zmm3_1 ^ 0x80000000
            zmm11_1 = var_2d8[2]
            zmm8_1 = zmm6_1 ^ 0x80000000
            zmm7 = var_2d8[0]
            zmm2_1 = var_2d8[3]
            zmm12 = zmm9_1 ^ 0x80000000
            zmm11_1[0].d = zmm11_1[0].d f* zmm8_1[0].d
            int32_t rdx_3 = var_2f0 | rcx_5
            int32_t var_258_1 = rax_14[0].d
            zmm11_1[0].d = zmm11_1[0].d f* zmm5_1[0].d
            int32_t rcx_7 = rdx_3 & 0xfffffff7
            zmm7[0].d = zmm7[0].d f* zmm8_1[0].d
            zmm1_1 = zmm2_1
            zmm13 = zmm14.q:4.d
            
            if ((rdx_3.b & 8) == 0)
                rcx_7 = rdx_3
            
            zmm10_1[0].d = zmm10_1[0].d f* zmm12[0].d
            int32_t rdx_5 = rcx_7 & 0xfffffffb
            zmm10_1[0].d = zmm10_1[0].d f- zmm11_1[0].d
            
            if ((rcx_7.b & 4) == 0)
                rdx_5 = rcx_7
            
            var_2f0 = rdx_5
            zmm7[0].d = zmm7[0].d f* zmm12[0].d
            zmm10_1[0].d = zmm10_1[0].d f+ zmm10_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f- zmm7[0].d
            zmm10_1[0].d = zmm10_1[0].d f* zmm5_1[0].d
            zmm1_1[0].d = zmm1_1[0].d f* zmm10_1[0].d
            zmm7[0].d = zmm7[0].d f- zmm10_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f* zmm10_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f+ zmm11_1[0].d
            zmm1_1[0].d = zmm1_1[0].d f+ zmm5_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f* zmm10_1[0].d
            zmm7[0].d = zmm7[0].d f+ zmm7[0].d
            zmm11_1[0].d = zmm11_1[0].d f* zmm11_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f* zmm7[0].d
            zmm10_1[0].d = zmm10_1[0].d f- zmm11_1[0].d
            zmm7[0].d = zmm7[0].d f* zmm7[0].d
            zmm7[0].d = zmm7[0].d f* zmm11_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f+ zmm1_1[0].d
            zmm1_1 = zmm2_1
            zmm11_1[0].d = zmm11_1[0].d f- zmm7[0].d
            zmm1_1[0].d = zmm1_1[0].d f* zmm11_1[0].d
            zmm2_1.d = zmm2_1.d f* zmm7[0].d
            zmm7[0].d = zmm7[0].d f- zmm10_1[0].d
            zmm1_1[0].d = zmm1_1[0].d f+ zmm8_1[0].d
            zmm2_1.d = zmm2_1.d f+ zmm12[0].d
            zmm11_1[0].d = zmm11_1[0].d f+ zmm1_1[0].d
            zmm7[0].d = zmm7[0].d f+ zmm2_1.d
            int64_t var_1f8 = (_mm_unpacklo_ps(zmm10_1, zmm11_1[0])).q
            int32_t var_1f0_1 = zmm7[0].d
            sub_141758e70(arg2, &var_2b8, &var_1f8, zmm15)
            zmm8_1 = var_2a4
            zmm12 = var_2a0
            zmm11_1 = zmm8_1
            zmm3_1 = var_2b8.d
            zmm9_1 = var_2a8
            int32_t var_2b0
            zmm10_1 = var_2b0
            zmm6_1 = var_2b8:4.d
            zmm2_1 = var_29c
            zmm6_1[0].d = zmm6_1[0].d f* zmm12[0].d
            zmm1_1 = zmm2_1
            zmm3_1[0].d = zmm3_1[0].d f* zmm12[0].d
            zmm6_1[0].d = zmm6_1[0].d f* zmm9_1[0].d
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            zmm10_1[0].d = zmm10_1[0].d f* zmm8_1[0].d
            uint64_t rcx_10 = r13 * 3
            zmm10_1[0].d = zmm10_1[0].d f- zmm6_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f* zmm9_1[0].d
            zmm3_1[0].d = zmm3_1[0].d f- zmm10_1[0].d
            zmm3_1[0].d = zmm3_1[0].d f* zmm8_1[0].d
            zmm10_1[0].d = zmm10_1[0].d f+ zmm10_1[0].d
            zmm6_1[0].d = zmm6_1[0].d f- zmm3_1[0].d
            zmm1_1[0].d = zmm1_1[0].d f* zmm10_1[0].d
            zmm3_1[0].d = zmm3_1[0].d f+ zmm3_1[0].d
            zmm12[0].d = zmm12[0].d f* zmm10_1[0].d
            zmm1_1[0].d = zmm1_1[0].d f+ zmm3_1[0].d
            zmm8_1[0].d = zmm8_1[0].d f* zmm10_1[0].d
            zmm12[0].d = zmm12[0].d f* zmm3_1[0].d
            zmm6_1[0].d = zmm6_1[0].d f+ zmm6_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f* zmm6_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f- zmm12[0].d
            zmm9_1[0].d = zmm9_1[0].d f* zmm6_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f* zmm3_1[0].d
            zmm11_1[0].d = zmm11_1[0].d f+ zmm1_1[0].d
            zmm1_1 = zmm2_1
            zmm12[0].d = zmm12[0].d f- zmm9_1[0].d
            zmm2_1.d = zmm2_1.d f* zmm6_1[0].d
            zmm0_1 = rax_14
            zmm9_1[0].d = zmm9_1[0].d f- zmm8_1[0].d
            zmm8_1 = var_2ec
            zmm1_1[0].d = zmm1_1[0].d f* zmm3_1[0].d
            zmm2_1.d = zmm2_1.d f+ zmm10_1[0].d
            zmm1_1[0].d = zmm1_1[0].d f+ zmm6_1[0].d
            zmm9_1[0].d = zmm9_1[0].d f+ zmm2_1.d
            zmm12[0].d = zmm12[0].d f+ zmm1_1[0].d
            zmm1_1 = zmm14
            zmm0_1[0].d = zmm0_1[0].d f- zmm9_1[0].d
            uint32_t var_1bc_1 = zmm9_1[0].d
            zmm1_1[0].d = zmm1_1[0].d f- zmm11_1[0].d
            zmm13[0].d = zmm13[0].d f- zmm12[0].d
            int32_t var_2e8_2 = zmm0_1[0].d
            zmm8_1[0].d = zmm8_1[0].d f- zmm1_1[0].d
            int32_t var_288_1 = zmm1_1[0].d
            zmm2_1.d = var_350.d f- zmm13[0].d
            int32_t var_284_1 = zmm13[0].d
            zmm3_1 = var_34c
            zmm3_1[0].d = zmm3_1[0].d f- zmm0_1[0].d
            var_360 = zmm8_1[0].d
            *(&var_130 + (rcx_10 << 2)) = (_mm_unpacklo_ps(zmm14, zmm13[0])).q
            (&var_128)[rcx_10] = var_258_1
            var_358_2 = zmm3_1[0].d
            int32_t var_35c_3 = zmm2_1.d
            zmm9_1 = var_298_1
            zmm5_1 = var_294_1
            zmm6_1 = var_290_1
            zmm10_1 = var_28c
            zmm8_1[0].d = zmm8_1[0].d f* zmm9_1[0].d
            zmm2_1.d = zmm2_1.d f* zmm5_1[0].d
            zmm3_1[0].d = zmm3_1[0].d f* zmm6_1[0].d
            zmm8_1[0].d = zmm8_1[0].d f+ zmm2_1.d
            *(&var_100 + (rcx_10 << 2)) = (_mm_unpacklo_ps(zmm11_1, zmm12[0])).q
            (&var_f8)[rcx_10] = var_1bc_1
            zmm8_1[0].d = zmm8_1[0].d f+ zmm3_1[0].d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm8_1[0].d f<= zmm10_1[0].d)
                r13 = zx.q(r13.d + 1)
                zmm7 = var_304
                *(&var_160 + (rcx_10 << 2)) = var_360.q
                *(&var_160:8 + (rcx_10 << 2)) = var_358_2
                var_188 = r13.d
            label_14163c6af:
                zmm14 = var_338
                zmm11_1 = var_350
                zmm12 = var_34c
                
                if (r14.b != 0 && not(zmm8_1[0].d f< zmm15[0].d))
                    zmm8_1[0].d = zmm8_1[0].d f* zmm8_1[0].d
                    zmm8_1[0].d = zmm8_1[0].d f+ 9.99999997e-07f
                    rdi_2.b = zmm8_1[0].d f>= zmm14[0]
            else
                zmm11_1 = *(rsi + 4)
                zmm3_1 = *rsi
                zmm12 = (*rsi)[1].d
                zmm2_1.d = zmm9_1.d f* zmm3_1[0].d
                zmm5_1[0].d = zmm5_1[0].d f* zmm11_1[0].d
                zmm6_1[0].d = zmm6_1[0].d f* zmm12[0].d
                zmm2_1.d = zmm2_1.d f+ zmm5_1[0].d
                zmm2_1.d = zmm2_1.d f+ zmm6_1[0].d
                
                if (zmm2_1.d f>= zmm15[0].d)
                    result.b = 0
                    goto label_14163d143
                
                zmm7 = var_304
                zmm8_1[0].d = zmm8_1[0].d f- zmm10_1[0].d
                zmm8_1[0].d = zmm8_1[0].d f/ zmm2_1.d
                zmm7[0].d = zmm7[0].d f- zmm8_1[0].d
                var_304 = zmm7[0].d
                
                if (zmm7[0].d f<= zmm7[0].d)
                    goto label_14163c6af
                
                if (zmm7[0].d f> arg5)
                    result.b = 0
                    goto label_14163d143
                
                zmm1_1 = zx.o(var_2c8.q)
                zmm8_1 = zmm3_1
                zmm14 = 0x7f7fffff
                r13 = zx.q(r13.d + 1)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_270 = zmm1_1.q
                zmm8_1[0].d = zmm8_1[0].d f* zmm7[0].d
                result_1 = result_2
                zmm11_1[0].d = zmm11_1[0].d f* zmm7[0].d
                var_188 = r13.d
                zmm8_1[0].d = zmm8_1[0].d f+ var_348[0].d
                zmm12[0].d = zmm12[0].d f* zmm7[0].d
                var_368 = 0
                zmm11_1[0].d = zmm11_1[0].d f+ var_348[0]:4.d
                var_300.d = zmm9_1[0].d
                zmm12[0].d = zmm12[0].d f+ var_348[1].d
                var_2ec = zmm8_1[0].d
                zmm8_1[0].d = zmm8_1[0].d f- zmm1_1[0].d
                var_2c8 = zmm8_1[0].d
                zmm1_1 = var_160:4.d
                zmm11_1[0].d = zmm11_1[0].d f- zmm0_1[0].d
                var_350 = zmm11_1[0].d
                zmm0_1 = var_160.d
                zmm2_1.d = zmm12.d f- result_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm8_1[0].d
                var_34c = zmm12[0].d
                int32_t var_2c4_1 = zmm11_1[0].d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm11_1[0].d
                result_2 = zmm12[0].d
                var_300:4.d = zmm5_1[0].d
                var_2f8 = zmm6_1[0].d
                var_160.d = zmm0_1[0].d
                zmm0_1 = var_160:8.d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1.d
                var_160:4.d = zmm1_1[0].d
                zmm1_1 = var_160:0xc.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm8_1[0].d
                var_338 = 0x7f7fffff
                var_160:8.d = zmm0_1[0].d
                zmm0_1 = var_150_1.d
                var_160:0xc.d = zmm1_1[0].d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm11_1[0].d
                zmm1_1 = var_150_1:4.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm2_1.d
                var_150_1.d = zmm0_1[0].d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1[0].d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm8_1[0].d
                zmm1_1 = var_150_1:0xc.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm11_1[0].d
                var_150_1:8.d = zmm0_1[0].d
                zmm0_1 = var_140_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1[0].d
                zmm8_1[0].d = zmm8_1[0].d f- var_288_1
                zmm2_1.d = zmm11_1.d f- var_284_1
                var_140_1 = zmm0_1[0].d
                zmm12[0].d = zmm12[0].d f- var_2e8_2
                *(&var_160 + (rcx_10 << 2)) = (_mm_unpacklo_ps(zmm8_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_10 << 2)) = zmm12[0].d
            
            uint32_t rdx_12
            
            if (rdi_2.b != 0)
                int64_t* rax_31
                rax_31, zmm7, zmm8_1, zmm10_1, zmm11_1, zmm12, zmm14, zmm15 =
                    sub_1416f4530(&var_1e8, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rdx_12 = zx.d(var_367)
                zmm1_1 = zx.o(*rax_31)
                zmm9_1 = rax_31[1].d
                result = zx.d(arg9)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_320 = zmm1_1.q
                zmm6_1 = zmm0_1
                zmm13 = var_320.d
            else
                int32_t rcx_11 = r13.d
                int32_t rax_23
                
                if (rcx_11 == 1)
                    int64_t rax_27 = sx.q(var_184)
                    int64_t rcx_18 = rax_27 * 3
                    *(&var_170 + (rax_27 << 2)) = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_18 << 2)))
                    rax_23 = *(&var_160:8 + (rcx_18 << 2))
                else if (rcx_11 == 2)
                    uint64_t var_194
                    uint64_t* rax_26
                    rax_26, zmm7, zmm8_1 =
                        sub_1416e69d0(&var_194, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_26)
                    rax_23 = rax_26[1].d
                else if (rcx_11 == 3)
                    uint64_t var_1a0
                    uint64_t* rax_25
                    rax_25, zmm7, zmm8_1, zmm10_1, zmm11_1, zmm12, zmm14, zmm15 =
                        sub_1416fa750(&var_1a0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_25)
                    rax_23 = rax_25[1].d
                else if (rcx_11 == 4)
                    uint64_t var_1ac
                    uint64_t* rax_24
                    rax_24, zmm7, zmm8_1, zmm10_1, zmm11_1, zmm12, zmm14, zmm15 =
                        sub_1416f9c90(&var_1ac, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_24)
                    rax_23 = rax_24[1].d
                else
                    int32_t var_324_1 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm15, zmm15[0])
                    rax_23 = 0
                
                int32_t var_178
                int64_t rdi_3 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int64_t var_180
                int64_t r10_1 = sx.q(var_180.d)
                int64_t r9_3 = sx.q(var_180:4.d)
                int64_t var_310_1 = zmm0_1.q
                int64_t rbx_1 = rdi_3 * 3
                int64_t r15_1 = r11_1 * 3
                r14 = r10_1 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t r8_5 = *(&var_160:8 + (r15_1 << 2))
                zmm13 = var_310_1.d
                zmm6_1 = var_310_1:4.d
                zmm9_1 = rax_23
                var_160:0xc.q = *(&var_160 + (r14 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                var_160.q = *(&var_160 + (r15_1 << 2))
                int32_t rdi_4 = (&var_128)[r15_1]
                var_170[1].d = (*(&var_170 + (r9_3 << 2))).d
                var_170[0].d = (*(&var_170 + (r11_1 << 2)))[0].d
                var_170[0]:4.d = (*(&var_170 + (r10_1 << 2)))[0].d
                var_170[1]:4.d = (*(&var_170 + (rdi_3 << 2)))[0].d
                var_150_1:4.d = *(&var_160:8 + (r14 << 2))
                int32_t rdx_11 = (&var_128)[r14]
                var_140_1 = *(&var_160:8 + (rsi_1 << 2))
                int32_t rcx_20 = (&var_128)[rsi_1]
                var_140_1 = *(&var_160:8 + (rbx_1 << 2))
                int32_t rax_29 = (&var_128)[rbx_1]
                var_124_1.q = *(&var_130 + (r14 << 2))
                zmm2_1 = zx.o(*(&var_100 + (r14 << 2)))
                int128_t var_114_1
                var_114_1:8.q = *(&var_130 + (rbx_1 << 2))
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = *(&var_130 + (rsi_1 << 2))
                zmm1_1 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_130 = *(&var_130 + (r15_1 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_128 = rdi_4
                var_124_1:8.d = rdx_11
                rdx_12 = (&var_f8)[r14]
                var_114_1:4.d = rcx_20
                int32_t rcx_21 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_29
                int32_t rax_30 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm6_1.d f* zmm6_1[0].d
                var_f8 = (&var_f8)[r15_1]
                var_f4_1:0xc.q = zmm1_1.q
                zmm13[0].d = zmm13[0].d f* zmm13[0].d
                var_f4_1:8.d = rdx_12
                zmm9_1[0].d = zmm9_1[0].d f* zmm9_1[0].d
                var_e4_1:4.d = rcx_21
                zmm2_1.d = zmm2_1.d f+ zmm13[0].d
                var_100 = zmm3_1.q
                zmm3_1 = var_330
                int32_t var_d4_1 = rax_30
                zmm2_1.d = zmm2_1.d f+ zmm9_1[0].d
                result = zx.d(arg9)
                rdi_2.b = zmm3_1[0].d f> zmm2_1.d
                bool cond:8_1 = zmm2_1.d f>= zmm14[0]
                var_338 = zmm2_1.d
                zmm14 = zmm2_1
                rdx_12.b = cond:8_1
                var_367 = rdx_12.b
                
                if (result.b == 0)
                    goto label_14163cb03
                
                if (rdi_2.b == 0)
                    goto label_14163cb08
                
                if (not(zmm7[0].d f!= zmm15[0].d))
                    zmm1_1 = 0x3eb0c6f7a0b5ed8d
                    
                    if (not(_mm_cvtps_pd(zmm2_1.q)[0] <= zmm1_1[0])
                            && not(_mm_cvtps_pd(zmm3_1[0])[0] <= zmm1_1[0]) && r13.d s< 4)
                        r14.b = 1
                        rdi_2.b = 0
                        var_368 = 1
                        goto label_14163cb0e
            
        label_14163cb03:
            
            if (rdi_2.b != 0)
                rcx_4 = var_334
            else
            label_14163cb08:
                r14 = zx.q(var_368)
            label_14163cb0e:
                rcx_4 = var_334
                
                if (rdx_12.b == 0)
                    rsi = arg4
                    continue
        
        zmm5_1 = var_348[1].d
        zmm1_1 = 0x7f7fffff
        break

bool cond:2_1 = zmm7[0].d f<= zmm15[0].d
int32_t* rdi_5 = arg6
*rdi_5 = zmm7[0].d

if (not(cond:2_1))
    *arg8 = var_300
    arg8[2] = var_2f8
    
    if (r13.d s> 0)
        int128_t* rcx_23 = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_34 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_23
            rcx_23 += 4
            zmm0_1 = zmm2_1
            zmm1_1 = zmm2_1
            zmm0_1[0].d = zmm0_1[0].d f* rax_34[-2]
            zmm1_1[0].d = zmm1_1[0].d f* rax_34[-1]
            zmm2_1.d = zmm2_1.d f* *rax_34
            rax_34 = &rax_34[3]
            zmm15[0].d = zmm15[0].d f+ zmm0_1[0].d
            zmm15[0].d = zmm15[0].d f+ zmm1_1[0].d
            zmm15[0].d = zmm15[0].d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm7[0].d = zmm7[0].d f* *arg4
    zmm7[0].d = zmm7[0].d f* *(arg4 + 4)
    zmm7[0].d = zmm7[0].d f* (*arg4)[1].d
    zmm7[0].d = zmm7[0].d f+ var_348[0].d
    zmm7[0].d = zmm7[0].d f+ var_348[0]:4.d
    zmm7[0].d = zmm7[0].d f+ zmm5_1[0].d
    zmm7[0].d = zmm7[0].d f+ zmm15[0].d
    zmm7[0].d = zmm7[0].d f+ zmm15[0].d
    zmm7[0].d = zmm7[0].d f+ zmm15[0].d
    zmm0_1 = _mm_unpacklo_ps(zmm7, zmm7[0])
    uint32_t var_324_2 = zmm7[0].d
    *arg7 = zmm0_1.q
    arg7[1].d = var_324_2
else if (result.b != 0)
    double temp0_22[0x2]
    
    if (not(zmm10_1[0].d f<= zmm15[0].d))
        temp0_22 = _mm_cvtps_pd(zmm14[0].q)
    
    if (zmm10_1[0].d f<= zmm15[0].d || temp0_22[0] <= 9.9999999999999995e-07
            || zmm14[0] f>= zmm1_1[0].d)
        var_348[0] = 0
        var_348[1] = 0
        var_170[0] = 0
        var_170[1] = 0
        sub_14083ad30(&var_348, 8)
        
        if (var_170[1]:4.d s< 8)
            sub_14083ad30(&var_170, 8)
        
        uint128_t zmm0_2
        float rax_48
        
        if (var_334 == 0)
            int32_t var_324_5 = 0x3f800000
            rax_48 = 1f
            *rdi_5 = (zmm10_1 ^ data_142d3f780).d
            zmm0_2 = _mm_unpacklo_ps(zmm15, zmm15[0])
        label_14163d0cb:
            *arg8 = zmm0_2.q
            arg8[2] = rax_48
            zmm0_2.d = zmm10_1.d f* *arg8
            zmm10_1[0].d = zmm10_1[0].d f* arg8[2]
            zmm10_1[0].d = zmm10_1[0].d f* arg8[1]
            zmm10_1[0].d = zmm10_1[0].d f+ var_128
            zmm0_2.d = zmm0_2.d f+ var_130.d
            zmm10_1[0].d = zmm10_1[0].d f+ var_130:4.d
            result = zmm10_1[0].d
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm10_1[0])
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_6 = sx.q(var_348[1].d)
                    int32_t rax_41 = (rdi_6 + 1).d
                    var_348[1].d = rax_41
                    
                    if (rax_41 s> var_348[1]:4.d)
                        sub_14083a7e0(&var_348)
                    
                    double rcx_27 = var_348[0]
                    int64_t rdx_15 = rdi_6 * 3
                    int32_t rax_42 = *(&var_128 + r12)
                    zmm11_1[0].d = zmm11_1[0].d f+ *(&var_100:4 + r12)
                    *(rcx_27 i+ (rdx_15 << 2)) = *(&var_130 + r12)
                    zmm0_2.d = zmm8_1.d f+ *(&var_100 + r12)
                    *(rcx_27 i+ (rdx_15 << 2) + 8) = rax_42
                    int64_t rdi_7 = sx.q(var_170[1].d)
                    int32_t var_35c_4 = zmm11_1[0].d
                    var_360 = zmm0_2.d
                    zmm0_2.d = zmm12.d f+ *(&var_f8 + r12)
                    int32_t rax_43 = (rdi_7 + 1).d
                    var_170[1].d = rax_43
                    var_358_2 = zmm0_2.d
                    
                    if (rax_43 s> var_170[1]:4.d)
                        sub_14083a7e0(&var_170)
                    
                    double rcx_29 = var_170[0]
                    int64_t rdx_17 = rdi_7 * 3
                    r12 += 0xc
                    *(rcx_29 i+ (rdx_17 << 2)) = var_360.q
                    *(rcx_29 i+ (rdx_17 << 2) + 8) = var_358_2
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_5 = arg6
            
            var_188.q = &var_2d8
            int64_t var_180_1 = arg2
            int128_t* var_178_1 = arg3
            int32_t rax_47
            rax_47, zmm10_1 = sub_14158d1c0(&var_348, &var_170, &var_238, &var_188, zmm14, 
                &var_330, &var_360, &var_270, &var_1e8)
            rax_48 = var_358_2
            
            if (rax_47 == 2)
                *rdi_5 = (zmm10_1 ^ data_142d3f780).d
                zmm0_2 = zx.o(var_360.q)
                goto label_14163d0cb
            
            *arg8 = var_360.q
            zmm0_2.d = (var_330 ^ data_142d3f780).d f- zmm10_1[0].d
            arg8[2] = rax_48
            result = result_1
            *rdi_5 = zmm0_2.d
            zmm0_2 = zx.o(var_270)
        double rcx_31 = var_170[0]
        *arg7 = zmm0_2.q
        arg7[1].d = result
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        double rcx_32 = var_348[0]
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
    else
        zmm3_1 = zmm15
        zmm4_1 = zmm15
        *arg8 = var_300
        zmm5_1 = zmm15
        arg8[2] = var_2f8
        zmm9_1 = zmm15
        zmm11_1 = zmm15
        zmm12 = zmm15
        
        if (rcx_4 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            int32_t rax_38 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_39 = var_f8
            zmm0_1 = zmm2_1
            zmm5_1 = rax_38
            zmm11_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            zmm12 = rax_39
            var_320 = zmm1_1.q
            zmm3_1 = var_320.d
            var_2b8 = zmm2_1.q
            zmm9_1 = var_2b8.d
        else if (r13.d s> 0)
            int128_t* rax_37 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_37
                rax_37 += 4
                zmm0_1 = zmm2_1
                zmm1_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_130 + r12)
                zmm1_1[0].d = zmm1_1[0].d f* *(&var_130:4 + r12)
                zmm3_1[0].d = zmm3_1[0].d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_128 + r12)
                zmm4_1[0].d = zmm4_1[0].d f+ zmm1_1[0].d
                zmm1_1 = zmm2_1
                zmm1_1[0].d = zmm1_1[0].d f* *(&var_100 + r12)
                zmm5_1[0].d = zmm5_1[0].d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm9_1[0].d = zmm9_1[0].d f+ zmm1_1[0].d
                r12 += 0xc
                zmm11_1[0].d = zmm11_1[0].d f+ zmm0_1[0].d
                zmm12[0].d = zmm12[0].d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm8_1 = var_348[0].d
        zmm7 = var_348[0]:4.d
        zmm8_1[0].d = zmm8_1[0].d f+ zmm9_1[0].d
        zmm13 = var_348[1].d
        zmm7[0].d = zmm7[0].d f+ zmm11_1[0].d
        zmm13[0].d = zmm13[0].d f+ zmm12[0].d
        zmm8_1[0].d = zmm8_1[0].d f- zmm3_1[0].d
        zmm7[0].d = zmm7[0].d f- zmm4_1[0].d
        zmm13[0].d = zmm13[0].d f- zmm5_1[0].d
        zmm5_1 = 0x3f000000
        zmm8_1[0].d = zmm8_1[0].d f* zmm8_1[0].d
        zmm2_1.d = zmm7.d f* zmm7[0].d
        zmm13[0].d = zmm13[0].d f* zmm13[0].d
        zmm2_1.d = zmm2_1.d f+ zmm8_1[0].d
        zmm2_1.d = zmm2_1.d f+ zmm13[0].d
        zmm3_1 = zmm2_1
        zmm4_1 = _mm_rsqrt_ss(zmm2_1[0].d, zmm3_1[0].d)
        zmm3_1[0].d = zmm3_1[0].d f* 0.5f
        zmm4_1[0].d = zmm4_1[0].d f* zmm4_1[0].d
        zmm3_1[0].d = zmm3_1[0].d f* zmm4_1[0].d
        zmm2_1.d = 0.5f f- zmm3_1[0].d
        zmm4_1[0].d = zmm4_1[0].d f* zmm2_1.d
        zmm4_1[0].d = zmm4_1[0].d f+ zmm4_1[0].d
        zmm4_1[0].d = zmm4_1[0].d f* zmm4_1[0].d
        zmm3_1[0].d = zmm3_1[0].d f* zmm4_1[0].d
        zmm5_1[0].d = 0.5f f- zmm3_1[0].d
        zmm4_1[0].d = zmm4_1[0].d f* zmm5_1[0].d
        zmm4_1[0].d = zmm4_1[0].d f+ zmm4_1[0].d
        zmm4_1[0].d = zmm4_1[0].d f* zmm8_1[0].d
        zmm4_1[0].d = zmm4_1[0].d f* zmm7[0].d
        zmm4_1[0].d = zmm4_1[0].d f* zmm13[0].d
        *arg8 = (_mm_unpacklo_ps(zmm4_1, zmm4_1[0])).q
        zmm0_1 = _mm_sqrt_ss(0, zmm14[0])
        zmm10_1[0].d = zmm10_1[0].d f- zmm0_1[0].d
        arg8[2] = zmm4_1[0].d
        
        if (not(zmm10_1[0].d f< zmm15[0].d))
            zmm15 = __minss_xmmss_memss(zmm10_1[0].d, 0x7f7fffff)
        
        zmm1_1 = var_348[0].d
        zmm13[0].d = zmm13[0].d f+ zmm12[0].d
        zmm1_1[0].d = zmm1_1[0].d f+ zmm9_1[0].d
        zmm2_1.d = var_348[0]:4.d.d f+ zmm11_1[0].d
        zmm15[0].d = zmm15[0].d f* *arg8
        zmm1_1[0].d = zmm1_1[0].d f+ zmm15[0].d
        zmm15[0].d = zmm15[0].d f* arg8[1]
        zmm2_1.d = zmm2_1.d f+ zmm15[0].d
        zmm0_1 = zmm15
        zmm0_1[0].d = zmm0_1[0].d f* arg8[2]
        zmm15 ^= data_142d3f780
        zmm13[0].d = zmm13[0].d f+ zmm0_1[0].d
        *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
        arg7[1].d = zmm13[0].d
        *rdi_5 = zmm15[0].d

result.b = 1
label_14163d143:
__security_check_cookie(rax_1 ^ &var_3a8)
return result

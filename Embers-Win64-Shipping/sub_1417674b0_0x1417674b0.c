// 函数: sub_1417674b0
// 地址: 0x1417674b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
*arg1 = 0
int64_t* r15 = nullptr
arg1[1].d = 0
void** r14 = nullptr
int64_t* rdi = arg4

if (*(arg3 + 0xc) u>= 2)
    r15 = arg3

if (*(arg4 + 0xc) u>= 2)
    r14 = arg4

int64_t r13

if (r15 == 0 || *(sx.q(r15[1].d) + *(*r15 + 0x398)) != 4)
    r13.b = 0
else
    r13.b = 1

char arg_10

if (r14 == 0 || *(sx.q(r14[1].d) + *(*r14 + 0x398)) != 4)
    arg_10 = 0
else
    arg_10 = 1

int32_t var_2d0
sub_14175ddd0(&var_2d0, arg3)
float var_308
sub_14175ddd0(&var_308, rdi)
float var_330
sub_14175dbf0(&var_330, arg3)
float var_320
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
int128_t zmm11
zmm7, zmm8, zmm9, zmm10, zmm11 = sub_14175dbf0(&var_320, rdi)
int64_t* rax_1 = nullptr

if (*(arg3 + 0xc) u>= 1)
    rax_1 = arg3

float zmm4[0x4]

if (rax_1 == 0)
    zmm4 = data_142d3f660
else
    zmm4 = *(*(*rax_1 + 0x218) + sx.q(rax_1[1].d) * 0x10)

void* rax_3 = *arg3
int64_t rdx_8 = sx.q(arg3[1].d)
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
bool cond:1 = *(rdi + 0xc) u>= 1
int64_t rcx_7 = *(rax_3 + 0x68)
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x4e)

if (cond:1)
    rsi = rdi

float zmm2[0x4] = *(rcx_7 + rdx_8 * 0x10)
float temp0_3[0x4] = _mm_mul_ps(temp0, _mm_shuffle_ps(zmm2, zmm2, 0))
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm4)
float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xb1)
float temp0_8[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_3, data_143ef7c70), temp0_5)
float temp0_10[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(zmm2, zmm2, 0x55))
float temp0_12[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_10, data_143ef7c60)
float temp0_14[0x4] = __mulps_xmmps_memps(temp0_12, data_143ef7c50)
float var_188[0x4] = _mm_add_ps(_mm_add_ps(temp0_8, temp0_13), temp0_14)

if (rsi == 0)
    zmm4 = data_142d3f660
else
    zmm4 = *(*(*rsi + 0x218) + sx.q(rsi[1].d) * 0x10)

void* rax_5 = *rdi
int64_t rdx_12 = sx.q(rdi[1].d)
float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
zmm2 = *(*(rax_5 + 0x68) + rdx_12 * 0x10)
float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_17)
float temp0_20[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_21[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm4)
float temp0_23[0x4] = __mulps_xmmps_memps(temp0_19, data_143ef7c70)
float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_25[0x4] = _mm_add_ps(temp0_23, temp0_22)
float temp0_27[0x4] = _mm_mul_ps(temp0_21, _mm_shuffle_ps(zmm4, zmm4, 0x4e))
float temp0_29[0x4] = _mm_mul_ps(temp0_24, _mm_shuffle_ps(zmm4, zmm4, 0xb1))
float temp0_30[0x4] = __mulps_xmmps_memps(temp0_27, data_143ef7c60)
float temp0_31[0x4] = __mulps_xmmps_memps(temp0_29, data_143ef7c50)
float var_178[0x4] = _mm_add_ps(_mm_add_ps(temp0_25, temp0_30), temp0_31)
float var_2f8[0x4]
sub_14175df90(&var_2f8, arg3)
uint32_t var_2e8[0x4]
float zmm6[0x4] = sub_14175df90(&var_2e8, rdi)
zmm4 = *(arg2 + 0x10)
float zmm12[0x4] = zx.o(0)
bool cond:3 = 0f f<= *(arg2 + 0x1c)
float zmm3_1[0x4] = *(arg2 + 0x14)
zmm4[0] = zmm4[0] - var_330
float zmm2_1[0x4] = *(arg2 + 0x18)
int32_t var_32c
zmm3_1[0] = zmm3_1[0] f- var_32c
zmm4[0] = zmm4[0] - var_320
float var_31c
zmm3_1[0] = zmm3_1[0] - var_31c
float var_358 = zmm4[0]
int32_t var_328
zmm2_1[0] = zmm2_1[0] f- var_328
float var_318
zmm2_1[0] = zmm2_1[0] - var_318
float var_354 = zmm3_1[0]
float var_348 = zmm4[0]
float var_344 = zmm3_1[0]
float var_350 = zmm2_1[0]
float var_340 = zmm2_1[0]

if (cond:3)
    return arg1

float var_58_1[0x4] = zmm6
float var_68_1[0x4] = zmm7
float var_78_1[0x4] = zmm8
float var_88_1[0x4] = zmm9
float var_98_1[0x4] = zmm10
int128_t var_a8_1 = zmm11
float zmm13[0x4]
float var_c8_1[0x4] = zmm13
float zmm14[0x4]
float var_d8_1[0x4] = zmm14
**(arg5 + 0x18) = 1
float zmm15[0x4]
float var_e8_1[0x4] = zmm15
float zmm0_1[0x4]

if (r13.b == 0)
    zmm0_1 = zx.o(0)
else
    zmm0_1 = *(*(*r15 + 0x2d8) + (sx.q(r15[1].d) << 2))

char rdi_1 = arg_10
float var_2d8 = zmm0_1[0]

if (rdi_1 == 0)
    zmm0_1 = zx.o(0)
else
    zmm0_1 = *(*(*r14 + 0x2d8) + (sx.q(r14[1].d) << 2))

float var_2d4 = zmm0_1[0]
int64_t var_2b8
int64_t var_248
float* rax_10

if (r13.b == 0)
    rax_10 = &var_2b8
    float var_288_1[0x4] = data_142d3f660
    __builtin_memset(&var_2b8, 0, 0x30)
else
    rax_10, zmm12 = sub_1417349b0(&var_248, &var_2f8, (sx.q(r15[1].d) << 6) + *(*r15 + 0x2a8))

float var_208[0x4] = *rax_10
int96_t var_1f8_1 = (*(rax_10 + 0x10))[0].12
int96_t var_1e8_1 = (*(rax_10 + 0x20))[0].12
float var_1d8_1[0x4] = *(rax_10 + 0x30)
float* rax_12

if (rdi_1 == 0)
    rax_12 = &var_2b8
    float var_288_2[0x4] = data_142d3f660
    __builtin_memset(&var_2b8, 0, 0x30)
else
    rax_12, zmm12 = sub_1417349b0(&var_248, &var_2e8, (sx.q(r14[1].d) << 6) + *(*r14 + 0x2a8))

float var_1c8[0x4] = *rax_12
int96_t var_1b8_1 = (*(rax_12 + 0x10))[0].12
int96_t var_1a8_1 = (*(rax_12 + 0x20))[0].12
float var_198_1[0x4] = *(rax_12 + 0x30)
float* rbx_1

if (rdi_1 == 0)
    rbx_1 = &var_2b8
    float var_288_3[0x4] = data_142d3f660
    __builtin_memset(&var_2b8, 0, 0x30)
else
    float var_168[0x10]
    float* rax_13
    rax_13, zmm12 = sub_14154a640(&var_168, &var_348, &var_1c8, &var_2d4)
    rbx_1 = rax_13

float* rax_14

if (r13.b == 0)
    rax_14 = &var_248
    float var_218_1[0x4] = data_142d3f660
    zmm3_1 = zx.o(0)
    __builtin_memset(&var_248, 0, 0x30)
else
    float var_128[0x10]
    rax_14, zmm12 = sub_14154a640(&var_128, &var_358, &var_208, &var_2d8)
    zmm3_1 = *rax_14

zmm3_1[0] = zmm3_1[0] + *rbx_1
zmm8 = *(arg2 + 8)
zmm7 = *(arg2 + 4)
zmm9 = *(arg2 + 0xc)
zmm0_1 = rbx_1[5]
zmm0_1[0] = zmm0_1[0] + rax_14[5]
float zmm1_1[0x4] = rbx_1[4]
zmm1_1[0] = zmm1_1[0] + rax_14[4]
zmm2_1 = rbx_1[6]
zmm2_1[0] = zmm2_1[0] + rax_14[6]
zmm10 = rbx_1[1]
zmm10[0] = zmm10[0] + rax_14[1]
zmm11.d = rbx_1[2].d f+ rax_14[2]
zmm6 = rbx_1[9]
zmm6[0] = zmm6[0] + rax_14[9]
zmm13 = rbx_1[8]
zmm13[0] = zmm13[0] + rax_14[8]
uint32_t zmm5_1[0x4] = *(arg2 + 0x1c)
zmm14 = rbx_1[0xa]
zmm14[0] = zmm14[0] + rax_14[0xa]
zmm8[0] = zmm8[0] * zmm0_1[0]
float var_26c_1 = zmm0_1[0]
zmm7[0] = zmm7[0] * zmm1_1[0]
float var_268_1 = zmm1_1[0]
zmm9[0] = zmm9[0] * zmm2_1[0]
zmm8[0] = zmm8[0] + zmm7[0]
float var_264_1 = zmm2_1[0]
zmm7[0] = zmm7[0] f* zmm5_1[0]
zmm7[0] = zmm7[0] * zmm3_1[0]
zmm8[0] = zmm8[0] + zmm9[0]
float var_278_1 = zmm3_1[0]
zmm8[0] = zmm8[0] * zmm10[0]
zmm8[0] = zmm8[0] * zmm6[0]
zmm8[0] = zmm8[0] + zmm7[0]
zmm9[0] = zmm9[0] f* zmm11.d
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] * zmm13[0]
zmm8[0] = zmm8[0] + zmm9[0]
float var_274_1 = zmm10[0]
zmm10 = 0x3f800000
zmm8[0] = zmm8[0] + zmm7[0]
zmm9[0] = zmm9[0] * zmm14[0]
zmm0_1 = 0x3f800000
float var_260_1 = zmm6[0]
zmm8[0] = zmm8[0] * zmm7[0]
zmm8[0] = zmm8[0] + zmm9[0]
int32_t var_270_1 = zmm11.d
zmm11 = 0x80000000
zmm8[0] = zmm8[0] + zmm8[0]
zmm9[0] = zmm9[0] f* zmm5_1[0]
float var_25c_1 = zmm13[0]
zmm8[0] = zmm8[0] * zmm9[0]
float var_258_1 = zmm14[0]
zmm8[0] = zmm8[0] + zmm8[0]
zmm0_1[0] = 1f / zmm8[0]
zmm7[0] = zmm7[0] * zmm0_1[0]
float arg_18 = (zmm7 ^ 0x80000000)[0]
zmm8[0] = zmm8[0] f* zmm5_1[0]
zmm8[0] = zmm8[0] * zmm0_1[0]
zmm0_1 = 0xbf800000
zmm0_1[0] = -1f / zmm8[0]
zmm4 = zx.o(0)
zmm9[0] = zmm9[0] * zmm0_1[0]
float arg_20 = (zmm8 ^ 0x80000000)[0]
zmm15 = zx.o(0)
float var_338_1 = zmm9[0]
zmm8 = var_340
zmm2_1 = var_350
zmm13 = var_354
zmm14 = var_358
zmm1_1 = var_344
zmm9 = var_348
int32_t var_334_1 = 0
arg_10.d = zmm8[0]

if ((*(arg2 + 0x20))[0] <= zmm12[0])
    zmm5_1 = arg_18
    zmm6 = arg_20
    zmm7 = var_338_1
else
    zmm14 = *arg5
    int32_t var_2cc
    zmm11.d = var_32c.d f- var_2cc
    zmm13 = var_328
    int32_t var_2c8
    zmm13[0] = zmm13[0] f- var_2c8
    zmm6 = 0x3f800000
    zmm10 = var_330
    zmm10[0] = zmm10[0] f- var_2d0
    zmm6[0] = 1f / zmm14[0]
    zmm10[0] = zmm10[0] * zmm6[0]
    zmm11.d = zmm11.d f* zmm6[0]
    zmm13[0] = zmm13[0] * zmm6[0]
    sub_141733ba0(&var_2d0, &var_188, &var_2f8, zmm14)
    zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_141733ba0(&var_308, &var_178, &var_2e8, zmm14)
    zmm1_1 = var_2cc
    zmm5_1 = var_2d0
    zmm14 = zmm1_1
    zmm1_1[0] = zmm1_1[0] * var_358
    zmm14[0] = zmm14[0] * var_350
    float var_304
    zmm2_1 = var_304
    float var_300
    zmm4 = var_300
    zmm3_1 = var_308
    zmm6 = var_2c8
    zmm6[0] = zmm6[0] * var_358
    zmm6[0] = zmm6[0] * var_354
    zmm14[0] = zmm14[0] - zmm6[0]
    zmm0_1 = zmm5_1
    zmm0_1[0] = zmm0_1[0] * var_350
    zmm5_1[0] = zmm5_1[0] f* var_354
    zmm6[0] = zmm6[0] - zmm0_1[0]
    zmm4[0] = zmm4[0] * var_344
    zmm14[0] = zmm14[0] + zmm10[0]
    zmm4[0] = zmm4[0] * var_348
    zmm5_1[0] = zmm5_1[0] f- zmm1_1[0]
    zmm1_1 = zmm2_1
    zmm2_1[0] = zmm2_1[0] * var_348
    zmm1_1[0] = zmm1_1[0] f* arg_10.d
    zmm6[0] = zmm6[0] f+ zmm11.d
    zmm13[0] = zmm13[0] f+ zmm5_1[0]
    zmm1_1[0] = zmm1_1[0] - zmm4[0]
    zmm3_1[0] = zmm3_1[0] f* arg_10.d
    zmm3_1[0] = zmm3_1[0] * var_344
    zmm4[0] = zmm4[0] - zmm3_1[0]
    zmm1_1[0] = zmm1_1[0] + zmm7[0]
    zmm3_1[0] = zmm3_1[0] - zmm2_1[0]
    zmm2_1 = *(arg2 + 4)
    zmm8[0] = zmm8[0] + zmm4[0]
    zmm4 = *(arg2 + 0xc)
    zmm14[0] = zmm14[0] - zmm1_1[0]
    zmm9[0] = zmm9[0] + zmm3_1[0]
    zmm3_1 = *(arg2 + 8)
    zmm5_1 = zmm3_1
    zmm6[0] = zmm6[0] - zmm8[0]
    zmm2_1[0] = zmm2_1[0] * zmm14[0]
    zmm13[0] = zmm13[0] - zmm9[0]
    zmm5_1[0] = zmm5_1[0] f* zmm6[0]
    zmm4[0] = zmm4[0] * zmm13[0]
    zmm5_1[0] = zmm5_1[0] f+ zmm2_1[0]
    zmm5_1[0] = zmm5_1[0] f+ zmm4[0]
    zmm10 = 0x3f800000
    float temp0_34[0x4]
    
    if (not(zmm5_1[0] f>= zmm12[0]))
        zmm2_1[0] = zmm2_1[0] f* zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] f* zmm5_1[0]
        zmm14[0] = zmm14[0] - zmm2_1[0]
        zmm4[0] = zmm4[0] f* zmm5_1[0]
        zmm6[0] = zmm6[0] - zmm3_1[0]
        zmm13[0] = zmm13[0] - zmm4[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm6[0] = zmm6[0] + zmm14[0]
        zmm6[0] = zmm6[0] + zmm13[0]
        temp0_34 = _mm_sqrt_ss(0, zmm6[0])
    
    if (zmm5_1[0] f>= zmm12[0] || temp0_34[0] <= 9.99999975e-05f)
        zmm4 = var_334_1
        zmm5_1 = arg_18
        zmm6 = arg_20
        zmm7 = var_338_1
        zmm9 = var_348
        zmm11 = 0x80000000
        zmm13 = var_354
        zmm14 = var_358
    else
        zmm4 = var_274_1
        zmm3_1 = 0x3f800000
        zmm5_1 = var_270_1
        zmm7 = var_338_1
        zmm9 = var_348
        zmm11 = 0x80000000
        zmm3_1[0] = 1f / temp0_34[0]
        zmm3_1[0] = zmm3_1[0] * zmm6[0]
        zmm3_1[0] = zmm3_1[0] * zmm14[0]
        zmm4[0] = zmm4[0] * zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm13[0]
        zmm2_1 = zmm3_1
        zmm2_1[0] = zmm2_1[0] * var_278_1
        zmm5_1[0] = zmm5_1[0] f* zmm3_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm4[0]
        zmm4 = var_26c_1
        zmm4[0] = zmm4[0] * zmm3_1[0]
        zmm2_1[0] = zmm2_1[0] f+ zmm5_1[0]
        zmm5_1 = var_268_1
        zmm5_1[0] = zmm5_1[0] f* zmm3_1[0]
        zmm4[0] = zmm4[0] f+ zmm5_1[0]
        zmm2_1[0] = zmm2_1[0] * zmm3_1[0]
        zmm5_1 = var_264_1
        zmm5_1[0] = zmm5_1[0] f* zmm3_1[0]
        zmm4[0] = zmm4[0] f+ zmm5_1[0]
        zmm5_1 = var_25c_1
        zmm5_1[0] = zmm5_1[0] f* zmm3_1[0]
        zmm4[0] = zmm4[0] * zmm3_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm4[0]
        zmm4 = var_260_1
        zmm4[0] = zmm4[0] * zmm3_1[0]
        zmm0_1 = var_258_1
        zmm0_1[0] = zmm0_1[0] * zmm3_1[0]
        zmm4[0] = zmm4[0] f+ zmm5_1[0]
        zmm5_1 = arg_18
        zmm4[0] = zmm4[0] + zmm0_1[0]
        zmm0_1 = 0xbf800000
        zmm4[0] = zmm4[0] * zmm3_1[0]
        zmm3_1 = zmm5_1
        zmm3_1[0] = zmm3_1[0] f* zmm5_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm4[0]
        zmm4 = *arg5
        zmm12 = zmm4
        zmm15 = zmm4
        zmm12[0] = zmm12[0] * zmm14[0]
        zmm14 = var_358
        zmm0_1[0] = -1f / zmm2_1[0]
        zmm15[0] = zmm15[0] * zmm6[0]
        zmm6 = arg_20
        zmm12[0] = zmm12[0] * zmm0_1[0]
        zmm15[0] = zmm15[0] * zmm0_1[0]
        zmm4[0] = zmm4[0] * zmm13[0]
        zmm13 = var_354
        zmm15[0] = zmm15[0] * zmm15[0]
        zmm4[0] = zmm4[0] * zmm0_1[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        zmm4[0] = zmm4[0] * zmm4[0]
        zmm15[0] = zmm15[0] + zmm12[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm15[0] = zmm15[0] + zmm4[0]
        zmm3_1[0] = zmm3_1[0] + zmm6[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        float temp0_35[0x4] = _mm_sqrt_ss(0, zmm15[0])
        zmm3_1[0] = zmm3_1[0] + zmm7[0]
        float temp0_36[0x4] = _mm_sqrt_ss(0, zmm3_1[0])
        temp0_36[0] = temp0_36[0] f* *(arg2 + 0x20)
        
        if (not(temp0_35[0] <= temp0_36[0]))
            temp0_36[0] = temp0_36[0] / temp0_35[0]
            temp0_36[0] = temp0_36[0] * zmm12[0]
            temp0_36[0] = temp0_36[0] * zmm15[0]
            temp0_36[0] = temp0_36[0] * zmm4[0]
            zmm12 = temp0_36
            zmm15 = temp0_36
            zmm4 = temp0_36
    
    zmm2_1 = var_350
    zmm1_1 = var_344
    zmm8 = arg_10.d

zmm4[0] = zmm4[0] + zmm7[0]
zmm12[0] = zmm12[0] f+ zmm5_1[0]
zmm15[0] = zmm15[0] + zmm6[0]
float var_334_2 = zmm4[0]

if (r13.b == 0)
    zmm13 = 0x3f000000
else
    zmm0_1 = var_2d8
    zmm5_1 = var_1f8_1.d
    zmm1_1 = var_1e8_1.d
    int64_t rax_15 = sx.q(r15[1].d)
    zmm15[0] = zmm15[0] * zmm0_1[0]
    zmm12[0] = zmm12[0] * zmm0_1[0]
    int64_t rdx_24 = rax_15 * 3
    void* rax_16 = *r15
    zmm4[0] = zmm4[0] * zmm0_1[0]
    zmm15[0] = zmm15[0] * zmm2_1[0]
    int64_t rcx_20 = *(rax_16 + 0x1b8)
    zmm12[0] = zmm12[0] * zmm2_1[0]
    zmm15[0] = zmm15[0] * zmm14[0]
    zmm4[0] = zmm4[0] * zmm13[0]
    zmm4[0] = zmm4[0] - zmm15[0]
    zmm4[0] = zmm4[0] * zmm14[0]
    zmm12[0] = zmm12[0] - zmm4[0]
    zmm12[0] = zmm12[0] * zmm13[0]
    zmm15[0] = zmm15[0] - zmm12[0]
    zmm5_1[0] = zmm5_1[0] f* zmm12[0]
    zmm0_1 = var_208[0]
    zmm12[0] = zmm12[0] f* var_1f8_1:8.d
    zmm12[0] = zmm12[0] f* var_1f8_1:4.d
    zmm1_1[0] = zmm1_1[0] * zmm15[0]
    zmm0_1[0] = zmm0_1[0] * zmm4[0]
    zmm5_1[0] = zmm5_1[0] f+ zmm0_1[0]
    zmm4[0] = zmm4[0] * var_208[1]
    zmm4[0] = zmm4[0] * var_208[2]
    zmm12[0] = zmm12[0] + zmm4[0]
    zmm5_1[0] = zmm5_1[0] f+ zmm1_1[0]
    zmm15[0] = zmm15[0] f* var_1e8_1:8.d
    zmm12[0] = zmm12[0] + zmm4[0]
    zmm15[0] = zmm15[0] f* var_1e8_1:4.d
    zmm12[0] = zmm12[0] + zmm15[0]
    zmm10[0] = zmm10[0] f/ *arg5
    zmm12[0] = zmm12[0] + zmm15[0]
    zmm12[0] = zmm12[0] * zmm10[0]
    zmm15[0] = zmm15[0] * zmm10[0]
    zmm12[0] = zmm12[0] f+ *(rcx_20 + (rdx_24 << 2))
    zmm15[0] = zmm15[0] f+ *(rcx_20 + (rdx_24 << 2) + 4)
    *(rcx_20 + (rdx_24 << 2)) = zmm12[0]
    zmm4[0] = zmm4[0] * zmm10[0]
    *(rcx_20 + (rdx_24 << 2) + 4) = zmm15[0]
    zmm4[0] = zmm4[0] f+ *(rcx_20 + (rdx_24 << 2) + 8)
    *(rcx_20 + (rdx_24 << 2) + 8) = zmm4[0]
    zmm0_1 = zmm5_1
    zmm10[0] = zmm10[0] f/ *arg5
    int64_t rdx_25 = sx.q(r15[1].d) * 3
    int64_t rcx_21 = *(*r15 + 0x1d0)
    zmm0_1[0] = zmm0_1[0] * zmm10[0]
    zmm10[0] = zmm10[0] * zmm12[0]
    zmm0_1[0] = zmm0_1[0] f+ *(rcx_21 + (rdx_25 << 2))
    zmm10[0] = zmm10[0] * zmm12[0]
    zmm10[0] = zmm10[0] f+ *(rcx_21 + (rdx_25 << 2) + 4)
    zmm10[0] = zmm10[0] f+ *(rcx_21 + (rdx_25 << 2) + 8)
    *(rcx_21 + (rdx_25 << 2)) = zmm0_1[0]
    zmm0_1 = var_330
    zmm0_1[0] = zmm0_1[0] + zmm12[0]
    *(rcx_21 + (rdx_25 << 2) + 4) = zmm10[0]
    *(rcx_21 + (rdx_25 << 2) + 8) = zmm10[0]
    var_330 = zmm0_1[0]
    zmm3_1 = var_2f8
    zmm0_1 = var_32c
    zmm0_1[0] = zmm0_1[0] + zmm15[0]
    int32_t var_2fc_1 = 0
    zmm2_1 = var_308.o
    zmm2_1[0] = zmm5_1[0]
    arg_10.d = 0x322bcc77
    zmm5_1 = data_143ef7c40
    float var_32c_1 = zmm0_1[0]
    zmm0_1 = var_328
    zmm0_1[0] = zmm0_1[0] + zmm4[0]
    float temp0_37[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
    temp0_37[0] = zmm12[0]
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc6)
    temp0_38[0] = zmm12[0]
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc9)
    float var_328_1 = zmm0_1[0]
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
    float temp0_43[0x4] = _mm_mul_ps(temp0_40, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b))
    float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xff), zmm3_1)
    float temp0_46[0x4] = __mulps_xmmps_memps(temp0_43, data_143ef7c70)
    var_308.o = temp0_39
    float temp0_47[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
    float temp0_48[0x4] = _mm_add_ps(temp0_46, temp0_45)
    float temp0_50[0x4] = _mm_mul_ps(temp0_41, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e))
    float temp0_52[0x4] = _mm_mul_ps(temp0_47, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1))
    float temp0_53[0x4] = __mulps_xmmps_memps(temp0_50, data_143ef7c60)
    zmm0_1 = var_2f8[1]
    float temp0_54[0x4] = __mulps_xmmps_memps(temp0_52, data_143ef7c50)
    float temp0_56[0x4] = _mm_add_ps(_mm_add_ps(temp0_48, temp0_53), temp0_54)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xaa)
    temp0_56[0] = temp0_56[0] * 0.5f
    temp0_57[0] = temp0_57[0] * 0.5f
    temp0_56[0] = temp0_56[0] + zmm3_1[0]
    temp0_58[0] = temp0_58[0] * 0.5f
    zmm0_1[0] = zmm0_1[0] + temp0_57[0]
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xff)
    zmm1_1 = var_2f8[2]
    zmm1_1[0] = zmm1_1[0] + temp0_58[0]
    temp0_59[0] = temp0_59[0] * 0.5f
    zmm2_1 = var_2f8[3]
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xe1)
    temp0_60[0] = zmm0_1[0]
    zmm2_1[0] = zmm2_1[0] + temp0_59[0]
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc6)
    temp0_61[0] = zmm1_1[0]
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x27)
    temp0_62[0] = zmm2_1[0]
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x39)
    float temp0_64[0x4] = _mm_mul_ps(temp0_63, temp0_63)
    float temp0_66[0x4] = _mm_add_ps(temp0_64, _mm_shuffle_ps(temp0_64, temp0_64, 0x4e))
    float temp0_68[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0x39), temp0_66)
    float temp0_69[0x4] = _mm_rsqrt_ps(temp0_68)
    float temp0_70[0x4] = _mm_mul_ps(temp0_68, zmm5_1)
    float temp0_75[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_69, temp0_69), temp0_70)), 
            temp0_69), 
        temp0_69)
    zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_75, temp0_75), temp0_70))
    float temp0_80[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_68, 2)
    var_2f8 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_75), temp0_75), temp0_63) ^ data_143ef7c30, 
        temp0_80) ^ data_143ef7c30
    zmm10, zmm11, zmm12, zmm13 = sub_14175f160(r15, &var_330, &var_2f8)
    zmm1_1 = var_344
    zmm4 = var_334_2
    zmm8 = var_340
    zmm9 = var_348

if (rdi_1 != 0)
    zmm0_1 = var_2d4
    int64_t rax_19 = sx.q(r14[1].d)
    zmm4 ^= zmm11
    zmm1_1[0] = zmm1_1[0] * zmm4[0]
    zmm5_1 = zmm4
    zmm5_1[0] = zmm5_1[0] f* zmm0_1[0]
    zmm12 ^= zmm11
    int64_t rdx_27 = rax_19 * 3
    void* rax_20 = *r14
    zmm1_1[0] = zmm1_1[0] * zmm12[0]
    zmm15 ^= zmm11
    int64_t rcx_23 = *(rax_20 + 0x1b8)
    zmm15[0] = zmm15[0] * zmm0_1[0]
    zmm12[0] = zmm12[0] * zmm0_1[0]
    zmm8[0] = zmm8[0] * zmm15[0]
    zmm8[0] = zmm8[0] * zmm12[0]
    zmm1_1[0] = zmm1_1[0] - zmm8[0]
    zmm9[0] = zmm9[0] * zmm4[0]
    zmm9[0] = zmm9[0] * zmm15[0]
    zmm8[0] = zmm8[0] - zmm9[0]
    zmm1_1[0] = zmm1_1[0] * var_1c8[0]
    zmm9[0] = zmm9[0] - zmm1_1[0]
    zmm8[0] = zmm8[0] f* var_1b8_1.d
    zmm8[0] = zmm8[0] f* var_1b8_1:8.d
    zmm9[0] = zmm9[0] f* var_1a8_1.d
    zmm8[0] = zmm8[0] + zmm1_1[0]
    zmm8[0] = zmm8[0] f* var_1b8_1:4.d
    zmm1_1[0] = zmm1_1[0] * var_1c8[1]
    zmm1_1[0] = zmm1_1[0] * var_1c8[2]
    zmm8[0] = zmm8[0] + zmm9[0]
    zmm8[0] = zmm8[0] + zmm1_1[0]
    zmm9[0] = zmm9[0] f* var_1a8_1:8.d
    zmm9[0] = zmm9[0] f* var_1a8_1:4.d
    zmm8[0] = zmm8[0] + zmm1_1[0]
    zmm10[0] = zmm10[0] f/ *arg5
    zmm8[0] = zmm8[0] + zmm9[0]
    zmm12[0] = zmm12[0] * zmm10[0]
    zmm8[0] = zmm8[0] + zmm9[0]
    zmm15[0] = zmm15[0] * zmm10[0]
    zmm12[0] = zmm12[0] f+ *(rcx_23 + (rdx_27 << 2))
    zmm15[0] = zmm15[0] f+ *(rcx_23 + (rdx_27 << 2) + 4)
    *(rcx_23 + (rdx_27 << 2)) = zmm12[0]
    zmm0_1 = zmm5_1
    zmm0_1[0] = zmm0_1[0] * zmm10[0]
    *(rcx_23 + (rdx_27 << 2) + 4) = zmm15[0]
    zmm0_1[0] = zmm0_1[0] f+ *(rcx_23 + (rdx_27 << 2) + 8)
    *(rcx_23 + (rdx_27 << 2) + 8) = zmm0_1[0]
    zmm10[0] = zmm10[0] f/ *arg5
    int64_t rdx_28 = sx.q(r14[1].d) * 3
    int64_t rcx_24 = *(*r14 + 0x1d0)
    zmm8[0] = zmm8[0] * zmm10[0]
    zmm10[0] = zmm10[0] * zmm8[0]
    zmm8[0] = zmm8[0] f+ *(rcx_24 + (rdx_28 << 2))
    zmm10[0] = zmm10[0] * zmm8[0]
    zmm10[0] = zmm10[0] f+ *(rcx_24 + (rdx_28 << 2) + 4)
    zmm10[0] = zmm10[0] f+ *(rcx_24 + (rdx_28 << 2) + 8)
    *(rcx_24 + (rdx_28 << 2)) = zmm8[0]
    zmm0_1 = var_320
    zmm0_1[0] = zmm0_1[0] + zmm12[0]
    *(rcx_24 + (rdx_28 << 2) + 4) = zmm10[0]
    *(rcx_24 + (rdx_28 << 2) + 8) = zmm10[0]
    var_320 = zmm0_1[0]
    zmm0_1 = var_31c
    zmm0_1[0] = zmm0_1[0] + zmm15[0]
    int32_t var_2fc_2 = 0
    zmm6 = var_2e8
    zmm2_1 = var_308.o
    float temp0_85[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
    zmm2_1[0] = zmm8[0]
    float temp0_86[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
    float var_31c_1 = zmm0_1[0]
    temp0_86[0] = zmm8[0]
    zmm0_1 = var_318
    zmm0_1[0] = zmm0_1[0] f+ zmm5_1[0]
    float temp0_87[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xc6)
    temp0_87[0] = zmm8[0]
    arg_10.d = 0x322bcc77
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0xc9)
    zmm5_1 = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
    float var_318_1 = zmm0_1[0]
    zmm5_1 = _mm_mul_ps(zmm5_1, _mm_shuffle_ps(temp0_88, temp0_88, 0))
    float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xff), zmm6)
    zmm5_1 = _mm_add_ps(__mulps_xmmps_memps(zmm5_1, data_143ef7c70), temp0_93)
    float temp0_97[0x4] = _mm_mul_ps(temp0_85, _mm_shuffle_ps(temp0_88, temp0_88, 0x55))
    float temp0_100[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xb1), _mm_shuffle_ps(temp0_88, temp0_88, 0xaa))
    float temp0_101[0x4] = __mulps_xmmps_memps(temp0_97, data_143ef7c60)
    float temp0_102[0x4] = __mulps_xmmps_memps(temp0_100, data_143ef7c50)
    zmm5_1 = _mm_add_ps(_mm_add_ps(zmm5_1, temp0_101), temp0_102)
    zmm0_1 = zmm5_1
    float temp0_105[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
    float temp0_106[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
    zmm0_1[0] = zmm0_1[0] * zmm13[0]
    temp0_105[0] = temp0_105[0] * zmm13[0]
    zmm6[0] = zmm6[0] + zmm0_1[0]
    temp0_106[0] = temp0_106[0] * zmm13[0]
    zmm0_1 = var_2e8[1]
    zmm0_1[0] = zmm0_1[0] + temp0_105[0]
    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    zmm1_1 = var_2e8[2]
    zmm1_1[0] = zmm1_1[0] + temp0_106[0]
    float temp0_108[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    zmm2_1 = var_2e8[3]
    zmm5_1[0] = zmm5_1[0] f* zmm13[0]
    temp0_108[0] = zmm0_1[0]
    float temp0_109[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xc6)
    temp0_109[0] = zmm1_1[0]
    zmm2_1[0] = zmm2_1[0] f+ zmm5_1[0]
    zmm5_1 = data_143ef7c40
    float temp0_110[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0x27)
    temp0_110[0] = zmm2_1[0]
    float temp0_111[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0x39)
    float temp0_112[0x4] = _mm_mul_ps(temp0_111, temp0_111)
    float temp0_114[0x4] = _mm_add_ps(temp0_112, _mm_shuffle_ps(temp0_112, temp0_112, 0x4e))
    float temp0_116[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0x39), temp0_114)
    float temp0_117[0x4] = _mm_rsqrt_ps(temp0_116)
    float temp0_118[0x4] = _mm_mul_ps(temp0_116, zmm5_1)
    float temp0_123[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_117, temp0_117), temp0_118)), 
            temp0_117), 
        temp0_117)
    zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_123, temp0_123), temp0_118))
    float temp0_128[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_116, 2)
    var_2e8 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_123), temp0_123), temp0_111)
            ^ data_143ef7c30, 
        temp0_128) ^ data_143ef7c30
    sub_14175f160(r14, &var_320, &var_2e8)

return arg1

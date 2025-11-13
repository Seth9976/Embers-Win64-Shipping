// 函数: sub_141769a60
// 地址: 0x141769a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t* arg_18 = arg3
int64_t* rsi = nullptr
int64_t* r14 = nullptr

if (*(arg3 + 0xc) u>= 2)
    r14 = arg3

if (*(arg4 + 0xc) u>= 2)
    rsi = arg4

int64_t r12

if (r14 == 0 || *(sx.q(r14[1].d) + *(*r14 + 0x398)) != 4)
    r12.b = 0
else
    r12.b = 1

int64_t r13

if (rsi == 0 || *(sx.q(rsi[1].d) + *(*rsi + 0x398)) != 4)
    r13.b = 0
else
    r13.b = 1

float var_318
sub_14175dbf0(&var_318, arg3)
float var_308
sub_14175dbf0(&var_308, arg4)
float var_2d8[0x4]
sub_14175df90(&var_2d8, arg3)
float var_2c8[0x4]
sub_14175df90(&var_2c8, arg4)
float zmm4 = *(arg2 + 0x10)
int128_t zmm3 = *(arg2 + 0x14)
float zmm2 = *(arg2 + 0x18)
float zmm0 = zmm4 - var_318
zmm4 = zmm4 - var_308
int32_t var_314
int128_t zmm1
zmm1.d = zmm3.d f- var_314
int32_t var_304
zmm3.d = zmm3.d f- var_304
float var_2b8 = zmm0
float var_310
zmm0 = zmm2 - var_310
float var_300
zmm2 = zmm2 - var_300
int32_t var_2b4 = zmm1.d
float var_2a8 = zmm4
int32_t var_2a4 = zmm3.d
float var_2f8
sub_14175e050(&var_2f8, arg3, &var_2b8)
float var_328
sub_14175e050(&var_328, arg4, &var_2a8)
int128_t zmm14 = zx.o(0)
float zmm6[0x4] = var_2f8
int32_t var_2f4
float zmm10[0x4] = var_2f4
char* rax_3 = *(arg5 + 0x18)
zmm6[0] = zmm6[0] - var_328
int32_t var_324
zmm10[0] = zmm10[0] f- var_324
int32_t var_320
int32_t var_2f0
int128_t zmm11
zmm11.d = var_2f0.d f- var_320
*rax_3 = 1
int64_t var_298
float var_258
float* rax_5

if (r12.b == 0)
    rax_5 = &var_298
    float var_268_1[0x4] = data_142d3f660
    __builtin_memset(&var_298, 0, 0x30)
else
    rax_5, zmm6, zmm10, zmm11, zmm14 =
        sub_1417349b0(&var_258, &var_2d8, (sx.q(r14[1].d) << 6) + *(*r14 + 0x2a8))

float var_218[0x4] = *rax_5
int96_t var_208 = (*(rax_5 + 0x10)).12
int96_t var_1f8 = (*(rax_5 + 0x20))[0].12
int128_t var_1e8 = *(rax_5 + 0x30)
float* rax_7

if (r13.b == 0)
    rax_7 = &var_298
    float var_268_2[0x4] = data_142d3f660
    __builtin_memset(&var_298, 0, 0x30)
else
    rax_7, zmm6, zmm10, zmm11, zmm14 =
        sub_1417349b0(&var_258, &var_2c8, (sx.q(rsi[1].d) << 6) + *(*rsi + 0x2a8))

float var_1d8[0x4] = *rax_7
int96_t var_1c8 = (*(rax_7 + 0x10)).12
int96_t var_1b8 = (*(rax_7 + 0x20))[0].12
int128_t var_1a8 = *(rax_7 + 0x30)
float* rbx_1

if (r13.b == 0)
    rbx_1 = &var_298
    float var_268_3[0x4] = data_142d3f660
    __builtin_memset(&var_298, 0, 0x30)
else
    float var_118[0x10]
    float* rax_9
    rax_9, zmm6, zmm10, zmm11, zmm14 =
        sub_14154a640(&var_118, &var_2a8, &var_1d8, *(*rsi + 0x2d8) + (sx.q(rsi[1].d) << 2))
    rbx_1 = rax_9

void var_158
float* rax_11
float zmm0_1[0x4]

if (r12.b == 0)
    int64_t var_198
    rax_11 = &var_198
    float var_168_1[0x4] = data_142d3f660
    zmm0_1 = zx.o(0)
    __builtin_memset(&var_198, 0, 0x30)
else
    rax_11, zmm6, zmm10, zmm11, zmm14 =
        sub_14154a640(&var_158, &var_2b8, &var_218, *(*r14 + 0x2d8) + (sx.q(r14[1].d) << 2))
    zmm0_1 = *rax_11

zmm0_1[0] = zmm0_1[0] + *rbx_1
zmm1.d = rbx_1[8].d f+ rax_11[8]
zmm10[0] = zmm10[0] * zmm10[0]
int32_t var_24c = 0
var_258 = zmm0_1[0]
zmm0_1 = rbx_1[4]
zmm0_1[0] = zmm0_1[0] + rax_11[4]
int32_t var_238 = zmm1.d
zmm1.d = rbx_1[5].d f+ rax_11[5]
var_328 = zmm14.d
float var_248 = zmm0_1[0]
zmm0_1 = rbx_1[1]
zmm0_1[0] = zmm0_1[0] + rax_11[1]
int32_t var_244 = zmm1.d
zmm1.d = rbx_1[2].d f+ rax_11[2]
int32_t var_324_1 = zmm14.d
float var_254 = zmm0_1[0]
zmm0_1 = rbx_1[9]
zmm0_1[0] = zmm0_1[0] + rax_11[9]
int32_t var_250 = zmm1.d
zmm1.d = rbx_1[0xa].d f+ rax_11[0xa]
int32_t var_320_1 = zmm14.d
float var_234 = zmm0_1[0]
zmm0_1 = rbx_1[6]
zmm0_1[0] = zmm0_1[0] + rax_11[6]
int32_t var_230 = zmm1.d
zmm1.d = zmm11.d f* zmm11.d
int32_t var_23c = 0
int32_t var_22c = 0
float var_240 = zmm0_1[0]
float var_228[0x4] = data_142d3f660
zmm6[0] = zmm6[0] * zmm6[0]
zmm10[0] = zmm10[0] + zmm6[0]
zmm0_1 = *arg5
zmm0_1[0] = zmm0_1[0] * 1960f
zmm10[0] = zmm10[0] f+ zmm1.d
int32_t zmm4_1

if (_mm_sqrt_ss(zmm10[0], zmm10[0])[0] <= zmm0_1[0])
    zmm4_1 = (zx.o(0)).d
else
    zmm4_1 = *(arg2 + 0x28)

float zmm2_1[0x4] = *(arg2 + 4)
int128_t zmm3_1 = *(arg2 + 0xc)
float zmm9[0x4] = *(arg2 + 8)
zmm2_1[0] = zmm2_1[0] * zmm6[0]
zmm9[0] = zmm9[0] * zmm10[0]
zmm1.d = zmm3_1.d f* zmm11.d
zmm9[0] = zmm9[0] + zmm2_1[0]
zmm9[0] = zmm9[0] f+ zmm1.d
zmm9[0] = zmm9[0] f* zmm4_1
zmm9[0] = zmm9[0] * zmm2_1[0]
float zmm7[0x4] = zmm9 ^ 0x80000000
zmm7[0] = zmm7[0] - zmm6[0]
zmm9[0] = zmm9[0] f* zmm3_1.d
zmm9[0] = zmm9[0] * zmm9[0]
float zmm8[0x4] = zmm9 ^ 0x80000000
float var_2e8 = zmm7[0]
zmm8[0] = zmm8[0] f- zmm11.d
zmm6 = zmm9 ^ 0x80000000
zmm6[0] = zmm6[0] - zmm10[0]
float var_2e0 = zmm8[0]
float var_2e4 = zmm6[0]
uint32_t (* rax_12)[0x4]
float zmm6_1[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
float zmm14_1
rax_12, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm14_1 = sub_140631b10(&var_258, &var_158)
int64_t* rdi_2 = arg6
float zmm11_1[0x4] = zmm6_1
float zmm12[0x4] = zmm6_1
float zmm2_2[0x4] = *rax_12
float zmm3_2[0x4] = rax_12[1]
float zmm4_2[0x4] = rax_12[2]
float zmm5[0x4] = *(rdi_2 + 4)
int32_t rax_13 = rdi_2[1].d
uint128_t zmm0_2
zmm0_2.d = zmm7_1.d f* zmm2_2[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
zmm11_1[0] = zmm11_1[0] * temp0_1[0]
float zmm13[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
zmm13[0] = zmm13[0] * zmm6_1[0]
zmm6_1 = rdi_2[1].d
zmm11_1[0] = zmm11_1[0] f+ zmm0_2.d
float temp0_3[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
zmm0_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
zmm12[0] = zmm12[0] f* zmm0_2.d
zmm8_1[0] = zmm8_1[0] * temp0_3[0]
zmm11_1[0] = zmm11_1[0] + zmm8_1[0]
zmm7_1[0] = zmm7_1[0] * zmm3_2[0]
zmm0_2.d = zmm8_1.d f* _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa)[0]
zmm12[0] = zmm12[0] + zmm7_1[0]
var_2f8 = zmm11_1[0]
zmm12[0] = zmm12[0] f+ zmm0_2.d
zmm0_2.d = zmm4_2.d f* zmm7_1[0]
float temp0_6[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
temp0_6[0] = temp0_6[0] * zmm8_1[0]
zmm13[0] = zmm13[0] f+ zmm0_2.d
float var_2f4_1 = zmm12[0]
uint128_t zmm10_1
zmm10_1.d = zmm5.d f+ zmm12[0]
uint64_t var_338 = *rdi_2
zmm13[0] = zmm13[0] + temp0_6[0]
zmm4_2 = *rdi_2
zmm11_1[0] = zmm11_1[0] + zmm4_2[0]
float var_2f0_1 = zmm13[0]
zmm6_1[0] = zmm6_1[0] + zmm13[0]
zmm2_2 = *(arg2 + 4)
zmm3_2 = zmm11_1
zmm3_2[0] = zmm3_2[0] * zmm2_2[0]
zmm0_2.d = zmm10_1.d f* zmm9_1[0]
zmm6_1[0] = zmm6_1[0] f* *(arg2 + 0xc)
zmm3_2[0] = zmm3_2[0] f+ zmm0_2.d
zmm3_2[0] = zmm3_2[0] + zmm6_1[0]
float zmm1_1[0x4]
float zmm15[0x4]

if (zmm3_2[0] <= zmm14_1)
    zmm15 = 0x80000000
    zmm13 = rax_13 ^ 0x80000000
    zmm11_1 = var_338.d ^ 0x80000000
    zmm12 = var_338:4.d ^ 0x80000000
else
    bool cond:2_1 = (*(arg2 + 0x20))[0] > zmm14_1
    zmm0_2.d = zmm3_2.d f* zmm2_2[0]
    zmm3_2[0] = zmm3_2[0] f* *(arg2 + 0xc)
    arg6.d = zmm0_2.d
    zmm9_1[0] = zmm9_1[0] * zmm3_2[0]
    
    if (cond:2_1)
        zmm3_2[0] = zmm3_2[0] f* *(arg2 + 0x20)
        zmm11_1[0] = zmm11_1[0] f- zmm0_2.d
        zmm10_1.d = zmm10_1.d f- zmm9_1[0]
        zmm6_1[0] = zmm6_1[0] - zmm3_2[0]
        zmm0_2.d = zmm11_1.d f* zmm11_1[0]
        zmm2_2 = zmm10_1
        zmm2_2[0] = zmm2_2[0] f* zmm10_1.d
        zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
        zmm2_2[0] = zmm2_2[0] f+ zmm0_2.d
        zmm2_2[0] = zmm2_2[0] + zmm6_1[0]
        zmm0_2 = _mm_sqrt_ss(0, zmm2_2[0])
        
        if (zmm0_2.d f> zmm3_2[0])
            zmm3_2[0] = zmm3_2[0] f/ zmm0_2.d
            zmm12 = zmm10_1
            zmm11_1[0] = zmm11_1[0] * zmm3_2[0]
            zmm12[0] = zmm12[0] * zmm3_2[0]
            zmm11_1[0] = zmm11_1[0] f+ arg6.d
            zmm3_2[0] = zmm3_2[0] * zmm6_1[0]
            zmm12[0] = zmm12[0] + zmm9_1[0]
            zmm3_2[0] = zmm3_2[0] + zmm3_2[0]
            zmm3_2[0] = zmm3_2[0] f- rax_13
            zmm13 = zmm3_2
            goto label_14176a288
        
        zmm7_1 = *(arg2 + 0x24)
        
        if (zmm7_1[0] == zmm14_1)
            zmm15 = 0x80000000
        else
            int32_t* rax_14 = sub_1417822f0(&arg_20)
            uint128_t* rax_15 = sub_1417822f0(&arg_18)
            zmm1_1 = *(rax_15 + 4)
            zmm0_2.d = (*rax_15).d f- *rax_14
            zmm1_1[0] = zmm1_1[0] f- rax_14[1]
            var_338.d = zmm0_2.d
            zmm0_2.d = (*(rax_15 + 8)).d f- rax_14[2]
            var_338:4.d = zmm1_1[0]
            int32_t var_330_1 = zmm0_2.d
            sub_1417652f0(&var_2f8, &var_328, zmm7_1, &var_338, &var_2e8, arg2 + 4, &var_2b8, 
                &var_2a8, r14, rsi, r12.b, r13.b, &var_2d8, &var_2c8, &var_218, &var_1d8)
            zmm4_2 = *rdi_2
            zmm5 = *(rdi_2 + 4)
            zmm6_1 = rdi_2[1].d
            zmm13 = var_2f0_1
            zmm12 = var_2f4_1
            zmm11_1 = var_2f8
            zmm14_1 = var_328
            zmm15 = 0x80000000
    else
        zmm3_2[0] = zmm3_2[0] f- rax_13
        zmm11_1 = zmm0_2
        zmm12 = zmm9_1
        zmm13 = zmm3_2
    label_14176a288:
        zmm12[0] = zmm12[0] f- var_338:4.d
        zmm11_1[0] = zmm11_1[0] f- var_338.d
        zmm15 = 0x80000000

zmm4_2[0] = zmm4_2[0] + zmm11_1[0]
zmm5[0] = zmm5[0] + zmm12[0]
zmm6_1[0] = zmm6_1[0] + zmm13[0]
*rdi_2 = zmm4_2[0]
*(rdi_2 + 4) = zmm5[0]
rdi_2[1].d = zmm6_1[0]
int128_t* rbx_3

if (r12.b == 0)
    rbx_3 = arg5
else
    void* rdx_16 = *r14
    zmm10_1.d = zmm13.d f* var_2b4
    int64_t rcx_18 = sx.q(r14[1].d)
    zmm0_2.d = zmm12.d f* zmm0
    int64_t rax_17 = *(rdx_16 + 0x2d8)
    zmm9_1 = var_218[1]
    zmm11_1[0] = zmm11_1[0] * zmm0
    rbx_3 = arg5
    zmm12[0] = zmm12[0] * var_2b8
    zmm10_1.d = zmm10_1.d f- zmm0_2.d
    zmm8_1 = *(rax_17 + (rcx_18 << 2))
    zmm0_2.d = zmm13.d f* var_2b8
    int64_t rcx_19 = rcx_18 * 3
    int64_t rax_18 = *(rdx_16 + 0x1b8)
    zmm7_1 = var_208:4.d
    zmm1_1 = var_218[2]
    zmm10_1.d = zmm10_1.d f+ zmm14_1
    zmm11_1[0] = zmm11_1[0] f- zmm0_2.d
    zmm11_1[0] = zmm11_1[0] * zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm12[0]
    zmm0_2.d = zmm11_1.d f* var_2b4
    zmm11_1[0] = zmm11_1[0] f+ var_324_1
    zmm8_1[0] = zmm8_1[0] * zmm13[0]
    zmm12[0] = zmm12[0] f- zmm0_2.d
    zmm0_2.d = var_218[0].d f* zmm10_1.d
    zmm9_1[0] = zmm9_1[0] * zmm11_1[0]
    zmm12[0] = zmm12[0] f+ var_320_1
    zmm7_1[0] = zmm7_1[0] * zmm11_1[0]
    zmm11_1[0] = zmm11_1[0] f* var_1f8:4.d
    zmm9_1[0] = zmm9_1[0] f+ zmm0_2.d
    zmm0_2.d = var_208.d.d f* zmm10_1.d
    zmm10_1.d = zmm10_1.d f* var_1f8.d
    zmm7_1[0] = zmm7_1[0] f+ zmm0_2.d
    zmm1_1[0] = zmm1_1[0] * zmm12[0]
    zmm10_1.d = zmm10_1.d f+ zmm11_1[0]
    zmm0_2.d = zmm11_1.d f+ *(rax_18 + (rcx_19 << 2))
    zmm9_1[0] = zmm9_1[0] + zmm1_1[0]
    zmm1_1 = var_208:8.d
    zmm1_1[0] = zmm1_1[0] * zmm12[0]
    zmm12[0] = zmm12[0] f* var_1f8:8.d
    *(rax_18 + (rcx_19 << 2)) = zmm0_2.d
    zmm7_1[0] = zmm7_1[0] + zmm1_1[0]
    zmm0_2.d = zmm8_1.d f+ *(rax_18 + (rcx_19 << 2) + 8)
    zmm8_1[0] = zmm8_1[0] f+ *(rax_18 + (rcx_19 << 2) + 4)
    zmm10_1.d = zmm10_1.d f+ zmm12[0]
    *(rax_18 + (rcx_19 << 2) + 8) = zmm0_2.d
    *(rax_18 + (rcx_19 << 2) + 4) = zmm8_1[0]
    int64_t rdx_17 = sx.q(r14[1].d) * 3
    int64_t rcx_20 = *(*r14 + 0x1d0)
    zmm0_2.d = zmm9_1.d f+ *(rcx_20 + (rdx_17 << 2))
    zmm7_1[0] = zmm7_1[0] f+ *(rcx_20 + (rdx_17 << 2) + 4)
    *(rcx_20 + (rdx_17 << 2)) = zmm0_2.d
    zmm0_2.d = zmm10_1.d f+ *(rcx_20 + (rdx_17 << 2) + 8)
    *(rcx_20 + (rdx_17 << 2) + 4) = zmm7_1[0]
    *(rcx_20 + (rdx_17 << 2) + 8) = zmm0_2.d
    zmm5 = *rbx_3
    zmm5[0] = zmm5[0] * zmm11_1[0]
    zmm3_2 = var_318
    zmm5[0] = zmm5[0] * zmm8_1[0]
    zmm0_2.d = zmm5.d f* zmm8_1[0]
    zmm6_1 = var_2d8
    zmm3_2[0] = zmm3_2[0] + zmm5[0]
    zmm2_2 = var_314
    zmm2_2[0] = zmm2_2[0] + zmm5[0]
    float temp0_8[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x1b)
    zmm1_1 = var_310
    zmm1_1[0] = zmm1_1[0] f+ zmm0_2.d
    int32_t var_2dc_1 = 0
    var_318 = zmm3_2[0]
    arg5.d = 0x322bcc77
    float var_314_1 = zmm2_2[0]
    zmm2_2 = var_2e8.o
    float var_310_1 = zmm1_1[0]
    zmm2_2[0] = zmm9_1[0]
    float temp0_9[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xe1)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x4e)
    temp0_9[0] = zmm7_1[0]
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
    temp0_11[0] = zmm10_1.d
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
    var_2e8.o = temp0_12
    float temp0_14[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(temp0_12, temp0_12, 0))
    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xff), zmm6_1)
    float temp0_18[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_14, data_143ef7c70), zmm0_2)
    float temp0_20[0x4] = _mm_mul_ps(temp0_10, _mm_shuffle_ps(temp0_12, temp0_12, 0x55))
    zmm0_2 =
        _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xb1), _mm_shuffle_ps(temp0_12, temp0_12, 0xaa))
    float temp0_24[0x4] = __mulps_xmmps_memps(temp0_20, data_143ef7c60)
    zmm0_2 = __mulps_xmmps_memps(zmm0_2, data_143ef7c50)
    float temp0_27[0x4] = _mm_add_ps(_mm_add_ps(temp0_18, temp0_24), zmm0_2)
    zmm5[0] = zmm5[0] * temp0_27[0]
    zmm0_2 = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
    zmm5[0] = zmm5[0] f* zmm0_2.d
    zmm0_2 = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
    zmm5[0] = zmm5[0] f* zmm0_2.d
    zmm0_2 = var_2d8[1]
    zmm5[0] = zmm5[0] * 0.5f
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xff)
    zmm5[0] = zmm5[0] * temp0_30[0]
    zmm0_2.d = zmm0_2.d f+ zmm5[0]
    zmm5[0] = zmm5[0] * 0.5f
    zmm1_1 = var_2d8[2]
    zmm5[0] = zmm5[0] * 0.5f
    zmm1_1[0] = zmm1_1[0] + zmm5[0]
    zmm5[0] = zmm5[0] * 0.5f
    zmm2_2 = var_2d8[3]
    zmm6_1[0] = zmm6_1[0] + zmm5[0]
    zmm2_2[0] = zmm2_2[0] + zmm5[0]
    float temp0_31[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
    temp0_31[0] = zmm0_2.d
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
    temp0_32[0] = zmm1_1[0]
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x27)
    temp0_33[0] = zmm2_2[0]
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x39)
    float temp0_35[0x4] = _mm_mul_ps(temp0_34, temp0_34)
    float temp0_37[0x4] = _mm_add_ps(temp0_35, _mm_shuffle_ps(temp0_35, temp0_35, 0x4e))
    float temp0_39[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x39), temp0_37)
    zmm5 = data_143ef7c40
    float temp0_40[0x4] = _mm_rsqrt_ps(temp0_39)
    float temp0_41[0x4] = _mm_mul_ps(temp0_39, zmm5)
    float temp0_46[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_40, temp0_40), temp0_41)), 
            temp0_40), 
        temp0_40)
    float temp0_49[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_46, temp0_46), temp0_41))
    zmm0_2 = arg5.d
    zmm0_2 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), temp0_39, 2)
    var_2d8 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_49, temp0_46), temp0_46), temp0_34)
            ^ data_143ef7c30, 
        zmm0_2) ^ data_143ef7c30
    zmm11_1, zmm12, zmm13 = sub_14175f160(r14, &var_318, &var_2d8)

if (r13.b != 0)
    void* rdx_19 = *rsi
    int64_t rcx_22 = sx.q(rsi[1].d)
    zmm8_1 = zmm12 ^ zmm15
    zmm0_2.d = zmm8_1.d f* zmm2
    zmm4_2 = zmm11_1 ^ zmm15
    int64_t rax_21 = *(rdx_19 + 0x2d8)
    zmm8_1[0] = zmm8_1[0] * var_2a8
    zmm4_2[0] = zmm4_2[0] * zmm2
    zmm9_1 = *(rax_21 + (rcx_22 << 2))
    zmm2_2 = zmm13 ^ zmm15
    int64_t rax_22 = *(rdx_19 + 0x1b8)
    int64_t rcx_23 = rcx_22 * 3
    zmm4_2[0] = zmm4_2[0] f* var_2a4
    zmm10_1.d = zmm2_2.d f* var_2a4
    zmm9_1 ^= zmm15
    zmm2_2[0] = zmm2_2[0] * var_2a8
    zmm8_1[0] = zmm8_1[0] - zmm4_2[0]
    zmm10_1.d = zmm10_1.d f- zmm0_2.d
    zmm9_1[0] = zmm9_1[0] * zmm11_1[0]
    zmm4_2[0] = zmm4_2[0] - zmm2_2[0]
    zmm9_1[0] = zmm9_1[0] * zmm12[0]
    zmm8_1[0] = zmm8_1[0] f- var_320_1
    zmm10_1.d = zmm10_1.d f- zmm14_1
    zmm9_1[0] = zmm9_1[0] * zmm13[0]
    zmm4_2[0] = zmm4_2[0] f- var_324_1
    zmm8_1[0] = zmm8_1[0] * var_1d8[2]
    zmm0_2.d = zmm10_1.d f* var_1d8[0]
    zmm3_2 = zmm10_1
    zmm3_2[0] = zmm3_2[0] f* var_1c8.d
    zmm7_1 = zmm4_2
    zmm7_1[0] = zmm7_1[0] * var_1d8[1]
    zmm10_1.d = zmm10_1.d f* var_1b8.d
    zmm7_1[0] = zmm7_1[0] f+ zmm0_2.d
    zmm0_2.d = zmm4_2.d f* var_1c8:4.d
    zmm4_2[0] = zmm4_2[0] f* var_1b8:4.d
    zmm3_2[0] = zmm3_2[0] f+ zmm0_2.d
    zmm0_2.d = zmm9_1.d f+ *(rax_22 + (rcx_23 << 2))
    zmm7_1[0] = zmm7_1[0] + zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] f* var_1c8:8.d
    zmm10_1.d = zmm10_1.d f+ zmm4_2[0]
    zmm8_1[0] = zmm8_1[0] f* var_1b8:8.d
    *(rax_22 + (rcx_23 << 2)) = zmm0_2.d
    zmm3_2[0] = zmm3_2[0] + zmm8_1[0]
    zmm0_2.d = zmm9_1.d f+ *(rax_22 + (rcx_23 << 2) + 8)
    zmm9_1[0] = zmm9_1[0] f+ *(rax_22 + (rcx_23 << 2) + 4)
    zmm10_1.d = zmm10_1.d f+ zmm8_1[0]
    *(rax_22 + (rcx_23 << 2) + 8) = zmm0_2.d
    *(rax_22 + (rcx_23 << 2) + 4) = zmm9_1[0]
    int64_t rdx_20 = sx.q(rsi[1].d) * 3
    int64_t rcx_24 = *(*rsi + 0x1d0)
    zmm0_2.d = zmm7_1.d f+ *(rcx_24 + (rdx_20 << 2))
    zmm3_2[0] = zmm3_2[0] f+ *(rcx_24 + (rdx_20 << 2) + 4)
    *(rcx_24 + (rdx_20 << 2)) = zmm0_2.d
    zmm0_2.d = zmm10_1.d f+ *(rcx_24 + (rdx_20 << 2) + 8)
    *(rcx_24 + (rdx_20 << 2) + 4) = zmm3_2[0]
    *(rcx_24 + (rdx_20 << 2) + 8) = zmm0_2.d
    zmm8_1 = *rbx_3
    zmm8_1[0] = zmm8_1[0] * zmm9_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm9_1[0]
    zmm5 = var_2c8
    zmm4_2 = var_308
    zmm4_2[0] = zmm4_2[0] + zmm8_1[0]
    zmm2_2 = var_304
    zmm2_2[0] = zmm2_2[0] + zmm8_1[0]
    zmm0_2.d = zmm8_1.d f* zmm9_1[0]
    int32_t var_2dc_2 = 0
    zmm1_1 = var_300
    var_308 = zmm4_2[0]
    zmm1_1[0] = zmm1_1[0] f+ zmm0_2.d
    arg5.d = 0x322bcc77
    float var_304_1 = zmm2_2[0]
    zmm2_2 = var_2e8.o
    zmm0_2 = _mm_shuffle_ps(zmm5, zmm5, 0x1b)
    zmm2_2[0] = zmm7_1[0]
    float temp0_57[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xe1)
    temp0_57[0] = zmm3_2[0]
    float var_300_1 = zmm1_1[0]
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc6)
    temp0_58[0] = zmm10_1.d
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xc9)
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
    float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), zmm0_2)
    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xff), zmm5)
    float temp0_65[0x4] = __mulps_xmmps_memps(temp0_62, data_143ef7c70)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)
    float temp0_67[0x4] = _mm_add_ps(temp0_65, zmm0_2)
    float temp0_69[0x4] = _mm_mul_ps(temp0_60, _mm_shuffle_ps(zmm5, zmm5, 0x4e))
    float temp0_71[0x4] = _mm_mul_ps(temp0_66, _mm_shuffle_ps(zmm5, zmm5, 0xb1))
    float temp0_72[0x4] = __mulps_xmmps_memps(temp0_69, data_143ef7c60)
    float temp0_73[0x4] = __mulps_xmmps_memps(temp0_71, data_143ef7c50)
    float temp0_75[0x4] = _mm_add_ps(_mm_add_ps(temp0_67, temp0_72), temp0_73)
    zmm8_1[0] = zmm8_1[0] * temp0_75[0]
    zmm0_2 = _mm_shuffle_ps(temp0_75, temp0_75, 0x55)
    zmm8_1[0] = zmm8_1[0] f* zmm0_2.d
    zmm8_1[0] = zmm8_1[0] * 0.5f
    zmm8_1[0] = zmm8_1[0] * 0.5f
    zmm0_2 = _mm_shuffle_ps(temp0_75, temp0_75, 0xaa)
    zmm5[0] = zmm5[0] + zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] f* zmm0_2.d
    zmm0_2.d = var_2c8[1].d f+ zmm8_1[0]
    float temp0_78[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xff)
    zmm1_1 = var_2c8[2]
    zmm8_1[0] = zmm8_1[0] * 0.5f
    zmm8_1[0] = zmm8_1[0] * temp0_78[0]
    zmm1_1[0] = zmm1_1[0] + zmm8_1[0]
    zmm2_2 = var_2c8[3]
    zmm8_1[0] = zmm8_1[0] * 0.5f
    float temp0_79[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
    temp0_79[0] = zmm0_2.d
    float temp0_80[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0xc6)
    zmm2_2[0] = zmm2_2[0] + zmm8_1[0]
    temp0_80[0] = zmm1_1[0]
    float temp0_81[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0x27)
    temp0_81[0] = zmm2_2[0]
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0x39)
    float temp0_83[0x4] = _mm_mul_ps(temp0_82, temp0_82)
    float temp0_85[0x4] = _mm_add_ps(temp0_83, _mm_shuffle_ps(temp0_83, temp0_83, 0x4e))
    zmm5 = data_143ef7c40
    float temp0_87[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0x39), temp0_85)
    float temp0_88[0x4] = _mm_rsqrt_ps(temp0_87)
    float temp0_89[0x4] = _mm_mul_ps(temp0_87, zmm5)
    float temp0_94[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_88, temp0_88), temp0_89)), 
            temp0_88), 
        temp0_88)
    float temp0_97[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_94, temp0_94), temp0_89))
    zmm0_2 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_87, 2)
    var_2c8 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_97, temp0_94), temp0_94), temp0_82)
            ^ data_143ef7c30, 
        zmm0_2) ^ data_143ef7c30
    sub_14175f160(rsi, &var_308, &var_2c8)

int32_t rax_25 = rdi_2[1].d
*arg1 = *rdi_2
arg1[1].d = rax_25
return arg1

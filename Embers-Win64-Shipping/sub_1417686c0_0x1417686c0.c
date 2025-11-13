// 函数: sub_1417686c0
// 地址: 0x1417686c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t* arg_18 = arg3
int64_t* r13 = nullptr
int64_t* r15 = nullptr
*arg1 = 0
int64_t* r12 = nullptr
arg1[1].d = 0

if (*(arg3 + 0xc) u>= 2)
    r15 = arg3

if (*(arg4 + 0xc) u>= 2)
    r12 = arg4

char arg_8

if (r15 != 0)
    arg_8 = 1

if (r15 == 0 || *(sx.q(r15[1].d) + *(*r15 + 0x398)) != 4)
    arg_8 = 0

char var_3c8_1

if (r12 != 0)
    var_3c8_1 = 1

if (r12 == 0 || *(sx.q(r12[1].d) + *(*r12 + 0x398)) != 4)
    var_3c8_1 = 0

float var_398
sub_14175dbf0(&var_398, arg3)
float var_388
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
zmm9, zmm10, zmm11 = sub_14175dbf0(&var_388, arg4)
uint32_t var_348[0x4]
sub_14175df90(&var_348, arg3)
uint32_t var_338[0x4]
sub_14175df90(&var_338, arg4)
float zmm4 = *(arg2 + 0x10)
float zmm3[0x4] = *(arg2 + 0x14)
float zmm2 = *(arg2 + 0x18)
float zmm0 = zmm4 - var_398
zmm4 = zmm4 - var_388
int32_t var_394
zmm3[0] = zmm3[0] f- var_394
int32_t var_384
zmm3[0] = zmm3[0] f- var_384
float var_378 = zmm0
float var_390
zmm0 = zmm2 - var_390
float var_380
zmm2 = zmm2 - var_380
float var_374 = zmm3[0]
float var_368 = zmm4
float var_364 = zmm3[0]
int32_t var_290
sub_14175e050(&var_290, arg3, &var_378)
int32_t var_2a0
float zmm8[0x4] = sub_14175e050(&var_2a0, arg4, &var_368)
float zmm12[0x4] = var_290
int32_t var_28c
float zmm13[0x4] = var_28c
float zmm6[0x4] = zx.o(0)
int32_t var_288
float zmm14[0x4] = var_288
zmm12[0] = zmm12[0] f- var_2a0
int32_t var_29c
zmm13[0] = zmm13[0] f- var_29c
int32_t var_298
zmm14[0] = zmm14[0] f- var_298
float var_314 = 0f
zmm12[0] = zmm12[0] f* *(arg2 + 4)
float zmm7[0x4] = zmm13
zmm7[0] = zmm7[0] f* *(arg2 + 8)
zmm14[0] = zmm14[0] f* *(arg2 + 0xc)
zmm7[0] = zmm7[0] + zmm12[0]
zmm7[0] = zmm7[0] + zmm14[0]
float var_2ac = zmm7[0]

if (zmm7[0] >= 0f)
    return arg1

float var_98_1[0x4] = zmm10
float zmm15[0x4]
float var_e8_1[0x4] = zmm15
**(arg5 + 0x18) = 1
int64_t var_2f8
float var_268
float* rax_7

if (arg_8 == 0)
    rax_7 = &var_2f8
    float var_2c8_1[0x4] = data_142d3f660
    __builtin_memset(&var_2f8, 0, 0x30)
else
    rax_7, zmm6, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13, zmm14 =
        sub_1417349b0(&var_268, &var_348, (sx.q(r15[1].d) << 6) + *(*r15 + 0x2a8))

float var_228[0x4] = *rax_7
int96_t var_218_1 = (*(rax_7 + 0x10))[0].12
int96_t var_208_1 = (*(rax_7 + 0x20))[0].12
float var_1f8_1[0x4] = *(rax_7 + 0x30)
float* rax_9

if (var_3c8_1 == 0)
    rax_9 = &var_2f8
    float var_2c8_2[0x4] = data_142d3f660
    __builtin_memset(&var_2f8, 0, 0x30)
else
    rax_9, zmm6, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13, zmm14 =
        sub_1417349b0(&var_268, &var_338, (sx.q(r12[1].d) << 6) + *(*r12 + 0x2a8))

float var_1e8[0x4] = *rax_9
int96_t var_1d8_1 = (*(rax_9 + 0x10))[0].12
int96_t var_1c8_1 = (*(rax_9 + 0x20))[0].12
float var_1b8_1[0x4] = *(rax_9 + 0x30)
float* rsi_2

if (var_3c8_1 == 0)
    rsi_2 = &var_2f8
    float var_2c8_3[0x4] = data_142d3f660
    __builtin_memset(&var_2f8, 0, 0x30)
else
    float var_128[0x10]
    float* rax_11
    rax_11, zmm6, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13, zmm14 =
        sub_14154a640(&var_128, &var_368, &var_1e8, *(*r12 + 0x2d8) + (sx.q(r12[1].d) << 2))
    rsi_2 = rax_11

void var_168
float* rax_13

if (arg_8 == 0)
    int64_t var_1a8
    rax_13 = &var_1a8
    float var_178_1[0x4] = data_142d3f660
    zmm10 = zx.o(0)
    __builtin_memset(&var_1a8, 0, 0x30)
else
    rax_13, zmm6, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13, zmm14 =
        sub_14154a640(&var_168, &var_378, &var_228, *(*r15 + 0x2d8) + (sx.q(r15[1].d) << 2))
    zmm10 = *rax_13

float zmm0_1[0x4] = rsi_2[4]
zmm0_1[0] = zmm0_1[0] + rax_13[4]
zmm15 = rsi_2[1]
zmm15[0] = zmm15[0] + rax_13[1]
float zmm3_1[0x4] = rsi_2[5]
zmm3_1[0] = zmm3_1[0] + rax_13[5]
uint32_t zmm5_1[0x4] = rsi_2[9]
zmm5_1[0] = zmm5_1[0] f+ rax_13[9]
zmm10[0] = zmm10[0] + *rsi_2
float var_328_1 = zmm0_1[0]
float var_258_1 = zmm0_1[0]
zmm0_1 = rsi_2[8]
zmm0_1[0] = zmm0_1[0] + rax_13[8]
zmm12[0] = zmm12[0] * zmm12[0]
int32_t var_25c_1 = 0
zmm14[0] = zmm14[0] * zmm14[0]
int32_t var_24c_1 = 0
float var_31c_1 = zmm0_1[0]
float var_248_1 = zmm0_1[0]
zmm0_1 = rsi_2[2]
zmm0_1[0] = zmm0_1[0] + rax_13[2]
var_268 = zmm10[0]
float var_2b8_1 = zmm15[0]
float var_264_1 = zmm15[0]
float var_2b4_1 = zmm3_1[0]
float var_320_1 = zmm0_1[0]
float var_260_1 = zmm0_1[0]
zmm0_1 = rsi_2[6]
zmm0_1[0] = zmm0_1[0] + rax_13[6]
float var_254_1 = zmm3_1[0]
uint32_t var_2b0_1 = zmm5_1[0]
uint32_t var_244_1 = zmm5_1[0]
float var_310 = zmm6[0]
float var_324_1 = zmm0_1[0]
float var_250_1 = zmm0_1[0]
zmm0_1 = rsi_2[0xa]
zmm0_1[0] = zmm0_1[0] + rax_13[0xa]
float var_30c_1 = zmm6[0]
float var_308_1 = zmm6[0]
float var_a8_1[0x4] = zmm11
float var_318_1 = zmm0_1[0]
float var_240_1 = zmm0_1[0]
float var_238_1[0x4] = data_142d3f660
zmm13[0] = zmm13[0] * zmm13[0]
int32_t var_23c_1 = 0
zmm12[0] = zmm12[0] + zmm13[0]
zmm0_1 = *arg5
zmm0_1[0] = zmm0_1[0] * 1960f
zmm12[0] = zmm12[0] + zmm14[0]

if (_mm_sqrt_ss(zmm12[0], zmm12[0])[0] <= zmm0_1[0])
    zmm11 = zx.o(0)
else
    zmm11 = *(arg2 + 0x28)

float var_78_1[0x4] = zmm8
float var_88_1[0x4] = zmm9
float var_3c0
float var_3bc_1
float var_3b8_1
float var_3a8_1[0x4]
float var_358[0x4]
void* arg_10
char rsi_5
float zmm1[0x4]
float zmm2_1[0x4]
float zmm4_1[0x4]

if ((*(arg2 + 0x20))[0] <= zmm6[0])
    zmm8 = *(arg2 + 8)
    zmm7 = *(arg2 + 4)
    zmm4_1 = zmm8
    zmm9 = *(arg2 + 0xc)
    zmm7[0] = zmm7[0] * var_328_1
    zmm9[0] = zmm9[0] * var_324_1
    zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
    zmm8[0] = zmm8[0] f* zmm5_1[0]
    zmm5_1 = 0x3f800000
    zmm4_1[0] = zmm4_1[0] + zmm7[0]
    zmm8[0] = zmm8[0] * zmm13[0]
    zmm11[0] = zmm11[0] + 1f
    zmm10[0] = zmm10[0] * zmm7[0]
    zmm9[0] = zmm9[0] * var_320_1
    zmm4_1[0] = zmm4_1[0] + zmm9[0]
    zmm8[0] = zmm8[0] * zmm15[0]
    zmm4_1[0] = zmm4_1[0] * zmm8[0]
    zmm8[0] = zmm8[0] + zmm10[0]
    zmm8[0] = zmm8[0] + zmm9[0]
    zmm7[0] = zmm7[0] * var_31c_1
    zmm8[0] = zmm8[0] * zmm7[0]
    zmm8[0] = zmm8[0] + zmm7[0]
    zmm7[0] = zmm7[0] * zmm12[0]
    zmm12 = 0x80000000
    zmm4_1[0] = zmm4_1[0] + zmm8[0]
    zmm9[0] = zmm9[0] * var_318_1
    zmm8[0] = zmm8[0] + zmm7[0]
    zmm8[0] = zmm8[0] + zmm9[0]
    zmm9[0] = zmm9[0] * zmm14[0]
    zmm8[0] = zmm8[0] * zmm9[0]
    zmm8[0] = zmm8[0] + zmm9[0]
    zmm4_1[0] = zmm4_1[0] + zmm8[0]
    zmm8[0] = zmm8[0] * zmm11[0]
    zmm3_1 = zmm8 ^ 0x80000000
    bool cond:3_1 = __andps_xmmxud_memxud(zmm4_1, data_142d3f770)[0] > 9.99999994e-09f
    zmm7[0] = zmm7[0] * zmm3_1[0]
    zmm8[0] = zmm8[0] * zmm3_1[0]
    zmm9[0] = zmm9[0] * zmm3_1[0]
    
    if (not(cond:3_1))
        zmm4_1 = 0x3f800000
    
    rsi_5 = arg_8
    zmm5_1[0] = 1f / zmm4_1[0]
    zmm0_1 = zmm5_1
    zmm1 = zmm5_1
    zmm0_1[0] = zmm0_1[0] * zmm8[0]
    zmm5_1[0] = zmm5_1[0] f* zmm9[0]
    zmm1[0] = zmm1[0] * zmm7[0]
    zmm2_1 = zmm0_1
    var_3bc_1 = zmm0_1[0]
    zmm3_1 = zmm5_1
    var_358 = zmm0_1
    var_3c0 = zmm1[0]
    zmm15 = zmm1
    var_3b8_1 = zmm5_1[0]
    var_3a8_1 = zmm5_1
else
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm1 = *(arg2 + 4)
    zmm2_1 = *(arg2 + 8)
    zmm3_1 = *(arg2 + 0xc)
    zmm2_1[0] = zmm2_1[0] * zmm11[0]
    zmm3_1[0] = zmm3_1[0] * zmm11[0]
    zmm1[0] = zmm1[0] * zmm11[0]
    zmm2_1[0] = zmm2_1[0] + zmm13[0]
    zmm3_1[0] = zmm3_1[0] + zmm14[0]
    zmm1[0] = zmm1[0] + zmm12[0]
    zmm8 = zmm2_1 ^ 0x80000000
    float var_27c_1 = zmm8[0]
    zmm8[0] = zmm8[0] * zmm2_1[0]
    zmm7 = zmm3_1 ^ 0x80000000
    zmm9 = zmm1 ^ 0x80000000
    float var_278_1 = zmm7[0]
    float var_280 = zmm9[0]
    zmm9[0] = zmm9[0] * zmm1[0]
    zmm7[0] = zmm7[0] * zmm3_1[0]
    zmm8[0] = zmm8[0] + zmm9[0]
    zmm8[0] = zmm8[0] + zmm7[0]
    uint32_t (* rax_16)[0x4]
    rax_16, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
        sub_140631b10(&var_268, &var_168)
    zmm2_1 = *rax_16
    zmm3_1 = rax_16[1]
    zmm0_1 = zmm2_1
    zmm4_1 = rax_16[2]
    zmm0_1[0] = zmm0_1[0] * zmm9[0]
    zmm15 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    zmm15[0] = zmm15[0] * zmm8[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    zmm7[0] = zmm7[0] * temp0_3[0]
    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    zmm15[0] = zmm15[0] + zmm0_1[0]
    zmm2_1[0] = zmm2_1[0] * zmm8[0]
    zmm3_1[0] = zmm3_1[0] * zmm9[0]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
    zmm15[0] = zmm15[0] + zmm7[0]
    zmm7[0] = zmm7[0] * temp0_5[0]
    zmm2_1[0] = zmm2_1[0] + zmm3_1[0]
    zmm4_1[0] = zmm4_1[0] * zmm9[0]
    zmm3_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    zmm2_1[0] = zmm2_1[0] + zmm7[0]
    zmm1 = *(arg2 + 8)
    zmm3_1[0] = zmm3_1[0] * zmm8[0]
    zmm1[0] = zmm1[0] * zmm6[0]
    zmm3_1[0] = zmm3_1[0] + zmm4_1[0]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    zmm0_1 = *(arg2 + 4)
    zmm0_1[0] = zmm0_1[0] * zmm6[0]
    zmm8[0] = zmm8[0] - zmm1[0]
    temp0_7[0] = temp0_7[0] * zmm7[0]
    zmm9[0] = zmm9[0] - zmm0_1[0]
    var_358 = zmm2_1
    zmm0_1 = *(arg2 + 0xc)
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm3_1[0] = zmm3_1[0] + temp0_7[0]
    zmm0_1[0] = zmm0_1[0] * zmm6[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm7[0] = zmm7[0] - zmm0_1[0]
    var_3a8_1 = zmm3_1
    zmm8[0] = zmm8[0] + zmm9[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm8[0] = zmm8[0] + zmm7[0]
    float temp0_8[0x4] = _mm_sqrt_ss(0, zmm8[0])
    zmm6[0] = zmm6[0] f* *(arg2 + 0x20)
    
    if (temp0_8[0] > zmm6[0])
        zmm8 = *(arg2 + 8)
        zmm7 = *(arg2 + 4)
        zmm9 = *(arg2 + 0xc)
        zmm7[0] = zmm7[0] * zmm12[0]
        zmm8[0] = zmm8[0] * zmm13[0]
        zmm9[0] = zmm9[0] * zmm14[0]
        zmm8[0] = zmm8[0] + zmm7[0]
        zmm8[0] = zmm8[0] + zmm9[0]
        zmm7[0] = zmm7[0] * zmm8[0]
        zmm12[0] = zmm12[0] - zmm7[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm13[0] = zmm13[0] - zmm8[0]
        zmm9[0] = zmm9[0] * zmm8[0]
        zmm14[0] = zmm14[0] - zmm9[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm13[0] = zmm13[0] + zmm12[0]
        zmm13[0] = zmm13[0] + zmm14[0]
        
        if (not(zmm13[0] == 1f))
            if (zmm13[0] >= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm5_1 = _mm_rsqrt_ss(zmm13[0], zmm13[0])
                zmm2_1 = 0x3f000000
                zmm13[0] = zmm13[0] * 0.5f
                zmm0_1 = zmm5_1
                zmm0_1[0] = zmm0_1[0] f* zmm5_1[0]
                zmm13[0] = zmm13[0] * zmm0_1[0]
                zmm0_1 = zmm5_1
                zmm2_1[0] = 0.5f - zmm13[0]
                zmm0_1[0] = zmm0_1[0] * zmm2_1[0]
                zmm5_1[0] = zmm5_1[0] f+ zmm0_1[0]
                zmm1 = zmm5_1
                zmm0_1 = zmm5_1
                zmm1[0] = zmm1[0] f* zmm5_1[0]
                zmm13[0] = zmm13[0] * zmm1[0]
                zmm4_1[0] = 0.5f - zmm13[0]
                zmm0_1[0] = zmm0_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] f+ zmm0_1[0]
                arg_10.d = zmm5_1[0]
                zmm12[0] = zmm12[0] f* zmm5_1[0]
                zmm13[0] = zmm13[0] f* zmm5_1[0]
                zmm14[0] = zmm14[0] f* zmm5_1[0]
            else
                zmm12 = data_143dbb1f8
                zmm13 = data_143dbb1fc
                zmm14 = data_143dbb200
        
        zmm0_1 = *(arg2 + 0x20)
        zmm2_1 = var_320_1
        zmm5_1 = zmm8
        zmm1 = var_328_1
        zmm3_1 = var_318_1
        zmm12[0] = zmm12[0] * zmm0_1[0]
        zmm13[0] = zmm13[0] * zmm0_1[0]
        zmm14[0] = zmm14[0] * zmm0_1[0]
        zmm7[0] = zmm7[0] - zmm12[0]
        zmm0_1 = var_2b8_1
        zmm5_1[0] = zmm5_1[0] f- zmm13[0]
        zmm9[0] = zmm9[0] - zmm14[0]
        zmm10[0] = zmm10[0] * zmm7[0]
        zmm0_1[0] = zmm0_1[0] f* zmm5_1[0]
        zmm2_1[0] = zmm2_1[0] * zmm9[0]
        zmm10[0] = zmm10[0] + zmm0_1[0]
        zmm1[0] = zmm1[0] * zmm7[0]
        zmm0_1 = var_2b4_1
        zmm0_1[0] = zmm0_1[0] f* zmm5_1[0]
        zmm10[0] = zmm10[0] + zmm2_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm9[0]
        zmm2_1 = var_324_1
        zmm0_1[0] = zmm0_1[0] + zmm1[0]
        zmm1 = var_31c_1
        zmm2_1[0] = zmm2_1[0] * zmm9[0]
        zmm10[0] = zmm10[0] * zmm7[0]
        zmm0_1[0] = zmm0_1[0] + zmm2_1[0]
        zmm1[0] = zmm1[0] * zmm7[0]
        zmm0_1[0] = zmm0_1[0] * zmm8[0]
        zmm10[0] = zmm10[0] + zmm0_1[0]
        zmm0_1 = var_2b0_1
        zmm0_1[0] = zmm0_1[0] f* zmm5_1[0]
        zmm0_1[0] = zmm0_1[0] + zmm1[0]
        zmm0_1[0] = zmm0_1[0] + zmm3_1[0]
        zmm0_1[0] = zmm0_1[0] * zmm9[0]
        zmm10[0] = zmm10[0] + zmm0_1[0]
        
        if (not(__andps_xmmxud_memxud(zmm10, data_142d3f770)[0] > 9.99999994e-09f))
            zmm10 = 0x3f800000
        
        zmm12 = 0x80000000
        zmm11[0] = zmm11[0] + 1f
        rsi_5 = arg_8
        zmm11[0] = zmm11[0] * var_2ac
        zmm11[0] = zmm11[0] / zmm10[0]
        zmm11 ^= 0x80000000
        zmm11[0] = zmm11[0] f* zmm5_1[0]
        zmm11[0] = zmm11[0] * zmm9[0]
        zmm6 = zx.o(0)
        zmm11[0] = zmm11[0] * zmm7[0]
        zmm2_1 = zmm11
        zmm3_1 = zmm11
        var_3bc_1 = zmm11[0]
        var_3b8_1 = zmm3_1[0]
        var_3a8_1 = zmm3_1
        zmm15 = zmm11
        var_3c0 = zmm11[0]
        var_358 = zmm11
    else
        zmm7 = *(arg2 + 0x24)
        zmm6 = zx.o(0)
        bool cond:5_1 = zmm7[0] == 0f
        var_3c0 = zmm15[0]
        var_3bc_1 = zmm2_1[0]
        var_3b8_1 = zmm3_1[0]
        
        if (cond:5_1)
            rsi_5 = arg_8
        else
            int32_t* rax_18 = sub_1417822f0(&arg_20)
            float (* rax_19)[0x4] = sub_1417822f0(&arg_18)
            zmm0_1 = *rax_19
            zmm1 = (*rax_19)[1]
            zmm0_1[0] = zmm0_1[0] f- *rax_18
            zmm1[0] = zmm1[0] f- rax_18[1]
            var_358[0] = zmm0_1[0]
            zmm0_1 = (*rax_19)[2]
            zmm0_1[0] = zmm0_1[0] f- rax_18[2]
            rsi_5 = arg_8
            var_358[1] = zmm1[0]
            var_358[2] = zmm0_1[0]
            sub_1417652f0(&var_3c0, &var_310, zmm7, &var_358, &var_280, arg2 + 4, &var_378, 
                &var_368, r15, r12, rsi_5, var_3c8_1, &var_348, &var_338, &var_228, &var_1e8)
            zmm3_1 = var_3b8_1
            zmm2_1 = var_3bc_1
            zmm6 = var_310
            zmm15 = var_3c0
            var_3a8_1 = zmm3_1
            var_358 = zmm2_1
            var_314 = zmm6[0]
        
        zmm12 = 0x80000000

if (data_1439b8dd8 != 0)
    int64_t* r8_10 = nullptr
    
    if (*(arg4 + 0xc) u>= 2)
        r8_10 = arg4
    
    if (*(arg3 + 0xc) u>= 2)
        r13 = arg3
    
    uint64_t* rax_23
    rax_23, zmm6, zmm12 =
        sub_141681b40(&var_358, r13, r8_10, &var_3c0, &var_378, &var_368, &var_290, &var_2a0)
    var_3c0.q = *rax_23
    zmm2_1 = var_3bc_1
    zmm15 = var_3c0
    var_3b8_1 = rax_23[1].d
    zmm3_1 = var_3b8_1
    var_3a8_1 = zmm3_1
    var_358 = zmm2_1

zmm13 = var_30c_1
zmm14 = var_308_1
zmm15[0] = zmm15[0] f+ *arg1
zmm2_1[0] = zmm2_1[0] f+ *(arg1 + 4)
*arg1 = zmm15[0]
*(arg1 + 4) = zmm2_1[0]
zmm3_1[0] = zmm3_1[0] f+ arg1[1].d
arg1[1].d = zmm3_1[0]
int128_t* rbx_1

if (rsi_5 == 0)
    zmm9 = 0x3f000000
    rbx_1 = arg5
else
    void* rdx_17 = *r15
    zmm9 = zmm3_1
    zmm9[0] = zmm9[0] * var_374
    int64_t rcx_19 = sx.q(r15[1].d)
    zmm2_1[0] = zmm2_1[0] * zmm0
    zmm5_1 = zmm15
    int64_t rax_25 = *(rdx_17 + 0x2d8)
    zmm5_1[0] = zmm5_1[0] f* zmm0
    rbx_1 = arg5
    zmm3_1 = var_218_1:4.d
    zmm9[0] = zmm9[0] - zmm2_1[0]
    zmm7 = *(rax_25 + (rcx_19 << 2))
    int64_t rcx_20 = rcx_19 * 3
    int64_t rax_26 = *(rdx_17 + 0x1b8)
    zmm1 = var_228[2]
    zmm10 = var_358
    zmm9[0] = zmm9[0] + zmm6[0]
    zmm6 = var_228[1]
    var_3a8_1[0] = var_3a8_1[0] * var_378
    zmm10[0] = zmm10[0] * var_378
    zmm5_1[0] = zmm5_1[0] f- var_3a8_1[0]
    zmm7[0] = zmm7[0] * zmm10[0]
    zmm15[0] = zmm15[0] * zmm7[0]
    zmm15[0] = zmm15[0] * var_374
    zmm5_1[0] = zmm5_1[0] f+ zmm13[0]
    zmm7[0] = zmm7[0] * var_3a8_1[0]
    zmm10[0] = zmm10[0] - zmm15[0]
    zmm0_1 = var_228[0]
    zmm0_1[0] = zmm0_1[0] * zmm9[0]
    zmm6[0] = zmm6[0] f* zmm5_1[0]
    zmm3_1[0] = zmm3_1[0] f* zmm5_1[0]
    zmm10[0] = zmm10[0] + zmm14[0]
    zmm5_1[0] = zmm5_1[0] f* var_208_1:4.d
    zmm6[0] = zmm6[0] + zmm0_1[0]
    zmm0_1 = var_218_1.d
    zmm0_1[0] = zmm0_1[0] * zmm9[0]
    zmm9[0] = zmm9[0] f* var_208_1.d
    zmm3_1[0] = zmm3_1[0] + zmm0_1[0]
    zmm1[0] = zmm1[0] * zmm10[0]
    zmm9[0] = zmm9[0] f+ zmm5_1[0]
    zmm15[0] = zmm15[0] f+ *(rax_26 + (rcx_20 << 2))
    zmm6[0] = zmm6[0] + zmm1[0]
    zmm1 = var_218_1:8.d
    zmm1[0] = zmm1[0] * zmm10[0]
    zmm10[0] = zmm10[0] f* var_208_1:8.d
    *(rax_26 + (rcx_20 << 2)) = zmm15[0]
    zmm3_1[0] = zmm3_1[0] + zmm1[0]
    zmm7[0] = zmm7[0] f+ *(rax_26 + (rcx_20 << 2) + 8)
    zmm7[0] = zmm7[0] f+ *(rax_26 + (rcx_20 << 2) + 4)
    zmm9[0] = zmm9[0] + zmm10[0]
    *(rax_26 + (rcx_20 << 2) + 8) = zmm7[0]
    *(rax_26 + (rcx_20 << 2) + 4) = zmm7[0]
    int64_t rdx_18 = sx.q(r15[1].d) * 3
    int64_t rcx_21 = *(*r15 + 0x1d0)
    zmm6[0] = zmm6[0] f+ *(rcx_21 + (rdx_18 << 2))
    zmm3_1[0] = zmm3_1[0] f+ *(rcx_21 + (rdx_18 << 2) + 4)
    *(rcx_21 + (rdx_18 << 2)) = zmm6[0]
    zmm9[0] = zmm9[0] f+ *(rcx_21 + (rdx_18 << 2) + 8)
    *(rcx_21 + (rdx_18 << 2) + 4) = zmm3_1[0]
    *(rcx_21 + (rdx_18 << 2) + 8) = zmm9[0]
    zmm8 = *rbx_1
    zmm0_1 = var_398
    zmm15[0] = zmm15[0] * zmm8[0]
    zmm7[0] = zmm7[0] * zmm8[0]
    zmm0_1[0] = zmm0_1[0] + zmm15[0]
    zmm7[0] = zmm7[0] * zmm8[0]
    var_398 = zmm0_1[0]
    zmm5_1 = var_348
    zmm0_1 = var_394
    zmm0_1[0] = zmm0_1[0] + zmm7[0]
    float temp0_12[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x1b)
    var_3a8_1[3] = 0
    var_3a8_1[0] = zmm6[0]
    float temp0_13[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x4e)
    float temp0_14[0x4] = _mm_shuffle_ps(var_3a8_1, var_3a8_1, 0xe1)
    float var_394_1 = zmm0_1[0]
    temp0_14[0] = zmm3_1[0]
    zmm0_1 = var_390
    zmm0_1[0] = zmm0_1[0] + zmm7[0]
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc6)
    temp0_15[0] = zmm9[0]
    arg_10.d = 0x322bcc77
    zmm9 = 0x3f000000
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
    float var_3a8_2[0x4] = temp0_16
    float var_390_1 = zmm0_1[0]
    float temp0_18[0x4] = _mm_mul_ps(temp0_12, _mm_shuffle_ps(temp0_16, temp0_16, 0))
    float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xff), zmm5_1)
    float temp0_22[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_18, data_143ef7c70), temp0_20)
    float temp0_24[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(temp0_16, temp0_16, 0x55))
    float temp0_27[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xb1), _mm_shuffle_ps(temp0_16, temp0_16, 0xaa))
    float temp0_28[0x4] = __mulps_xmmps_memps(temp0_24, data_143ef7c60)
    float temp0_29[0x4] = __mulps_xmmps_memps(temp0_27, data_143ef7c50)
    float temp0_31[0x4] = _mm_add_ps(_mm_add_ps(temp0_22, temp0_28), temp0_29)
    zmm8[0] = zmm8[0] * temp0_31[0]
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
    zmm8[0] = zmm8[0] * temp0_32[0]
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
    zmm8[0] = zmm8[0] * 0.5f
    zmm8[0] = zmm8[0] * temp0_33[0]
    zmm0_1 = var_348[1]
    zmm8[0] = zmm8[0] f+ zmm5_1[0]
    zmm5_1 = data_143ef7c40
    zmm8[0] = zmm8[0] * 0.5f
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xff)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
    zmm0_1[0] = zmm0_1[0] + zmm8[0]
    zmm8[0] = zmm8[0] * temp0_34[0]
    zmm1 = var_348[2]
    zmm8[0] = zmm8[0] * 0.5f
    temp0_35[0] = zmm0_1[0]
    zmm8[0] = zmm8[0] * 0.5f
    zmm1[0] = zmm1[0] + zmm8[0]
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc6)
    zmm2_1 = var_348[3]
    zmm2_1[0] = zmm2_1[0] + zmm8[0]
    temp0_36[0] = zmm1[0]
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x27)
    temp0_37[0] = zmm2_1[0]
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x39)
    float temp0_39[0x4] = _mm_mul_ps(temp0_38, temp0_38)
    float temp0_41[0x4] = _mm_add_ps(temp0_39, _mm_shuffle_ps(temp0_39, temp0_39, 0x4e))
    float temp0_43[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0x39), temp0_41)
    float temp0_44[0x4] = _mm_mul_ps(temp0_43, zmm5_1)
    float temp0_45[0x4] = _mm_rsqrt_ps(temp0_43)
    float temp0_50[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_45, temp0_45), temp0_44)), 
            temp0_45), 
        temp0_45)
    zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_50, temp0_50), temp0_44))
    float temp0_55[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_43, 2)
    var_348 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_50), temp0_50), temp0_38) ^ data_143ef7c30, 
        temp0_55) ^ data_143ef7c30
    zmm12, zmm13 = sub_14175f160(r15, &var_398, &var_348)
    zmm3_1 = var_3b8_1
    zmm2_1 = var_3bc_1
    zmm15 = var_3c0
    var_3a8_1 = zmm3_1
    var_358 = zmm2_1

if (var_3c8_1 != 0)
    void* rdx_20 = *r12
    int64_t rcx_23 = sx.q(r12[1].d)
    zmm6 = zmm2_1 ^ zmm12
    zmm10 = var_358
    zmm6[0] = zmm6[0] * zmm2
    int64_t rax_29 = *(rdx_20 + 0x2d8)
    zmm6[0] = zmm6[0] * var_368
    zmm4_1 = zmm15 ^ zmm12
    zmm5_1 = zmm4_1
    zmm2_1 = zmm3_1 ^ zmm12
    zmm4_1[0] = zmm4_1[0] * var_364
    zmm2_1[0] = zmm2_1[0] * var_364
    zmm5_1[0] = zmm5_1[0] f* zmm2
    zmm6[0] = zmm6[0] - zmm4_1[0]
    zmm4_1 = var_1e8[1]
    zmm2_1[0] = zmm2_1[0] - zmm6[0]
    int64_t rcx_24 = rcx_23 * 3
    int64_t rax_30 = *(rdx_20 + 0x1b8)
    zmm0_1 = *(rax_29 + (rcx_23 << 2)) ^ zmm12
    zmm2_1[0] = zmm2_1[0] * var_368
    zmm6[0] = zmm6[0] - zmm14[0]
    zmm2_1[0] = zmm2_1[0] - var_314
    zmm10[0] = zmm10[0] * zmm0_1[0]
    zmm15[0] = zmm15[0] * zmm0_1[0]
    zmm5_1[0] = zmm5_1[0] f- zmm2_1[0]
    var_3a8_1[0] = var_3a8_1[0] * zmm0_1[0]
    zmm6[0] = zmm6[0] * var_1e8[2]
    zmm2_1[0] = zmm2_1[0] * var_1e8[0]
    zmm5_1[0] = zmm5_1[0] f- zmm13[0]
    zmm2_1[0] = zmm2_1[0] f* var_1c8_1.d
    zmm2_1[0] = zmm2_1[0] f* var_1d8_1.d
    zmm4_1[0] = zmm4_1[0] f* zmm5_1[0]
    zmm4_1[0] = zmm4_1[0] + zmm2_1[0]
    zmm0_1 = zmm5_1
    zmm0_1[0] = zmm0_1[0] f* var_1d8_1:4.d
    zmm5_1[0] = zmm5_1[0] f* var_1c8_1:4.d
    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
    zmm15[0] = zmm15[0] f+ *(rax_30 + (rcx_24 << 2))
    zmm4_1[0] = zmm4_1[0] + zmm6[0]
    zmm6[0] = zmm6[0] f* var_1d8_1:8.d
    zmm2_1[0] = zmm2_1[0] f+ zmm5_1[0]
    zmm6[0] = zmm6[0] f* var_1c8_1:8.d
    *(rax_30 + (rcx_24 << 2)) = zmm15[0]
    zmm2_1[0] = zmm2_1[0] + zmm6[0]
    var_3a8_1[0] = var_3a8_1[0] f+ *(rax_30 + (rcx_24 << 2) + 8)
    zmm10[0] = zmm10[0] f+ *(rax_30 + (rcx_24 << 2) + 4)
    zmm2_1[0] = zmm2_1[0] + zmm6[0]
    *(rax_30 + (rcx_24 << 2) + 8) = var_3a8_1[0]
    *(rax_30 + (rcx_24 << 2) + 4) = zmm10[0]
    int64_t rdx_21 = sx.q(r12[1].d) * 3
    int64_t rcx_25 = *(*r12 + 0x1d0)
    zmm4_1[0] = zmm4_1[0] f+ *(rcx_25 + (rdx_21 << 2))
    zmm2_1[0] = zmm2_1[0] f+ *(rcx_25 + (rdx_21 << 2) + 4)
    *(rcx_25 + (rdx_21 << 2)) = zmm4_1[0]
    zmm2_1[0] = zmm2_1[0] f+ *(rcx_25 + (rdx_21 << 2) + 8)
    *(rcx_25 + (rdx_21 << 2) + 4) = zmm2_1[0]
    *(rcx_25 + (rdx_21 << 2) + 8) = zmm2_1[0]
    zmm7 = *rbx_1
    zmm0_1 = var_388
    zmm15[0] = zmm15[0] * zmm7[0]
    zmm10[0] = zmm10[0] * zmm7[0]
    var_3a8_1[0] = var_3a8_1[0] * zmm7[0]
    zmm6 = var_338
    zmm0_1[0] = zmm0_1[0] + zmm15[0]
    var_3a8_1[3] = 0
    float temp0_60[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
    var_3a8_1[0] = zmm4_1[0]
    zmm5_1 = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
    var_388 = zmm0_1[0]
    zmm0_1 = var_384
    zmm0_1[0] = zmm0_1[0] + zmm10[0]
    float temp0_62[0x4] = _mm_shuffle_ps(var_3a8_1, var_3a8_1, 0xe1)
    temp0_62[0] = zmm2_1[0]
    arg_10.d = 0x322bcc77
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xc6)
    temp0_63[0] = zmm2_1[0]
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xc9)
    float var_384_1 = zmm0_1[0]
    zmm0_1 = var_380
    zmm0_1[0] = zmm0_1[0] + var_3a8_1[0]
    float var_380_1 = zmm0_1[0]
    zmm5_1 = _mm_mul_ps(zmm5_1, _mm_shuffle_ps(temp0_64, temp0_64, 0))
    float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), zmm6)
    zmm5_1 = _mm_add_ps(__mulps_xmmps_memps(zmm5_1, data_143ef7c70), temp0_68)
    float temp0_72[0x4] = _mm_mul_ps(temp0_60, _mm_shuffle_ps(temp0_64, temp0_64, 0x55))
    float temp0_75[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xb1), _mm_shuffle_ps(temp0_64, temp0_64, 0xaa))
    float temp0_76[0x4] = __mulps_xmmps_memps(temp0_72, data_143ef7c60)
    float temp0_77[0x4] = __mulps_xmmps_memps(temp0_75, data_143ef7c50)
    zmm5_1 = _mm_add_ps(_mm_add_ps(zmm5_1, temp0_76), temp0_77)
    zmm0_1 = zmm5_1
    float temp0_80[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
    float temp0_81[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
    temp0_80[0] = temp0_80[0] * zmm7[0]
    zmm0_1[0] = zmm0_1[0] * zmm7[0]
    temp0_80[0] = temp0_80[0] * zmm9[0]
    zmm0_1[0] = zmm0_1[0] * zmm9[0]
    temp0_81[0] = temp0_81[0] * zmm7[0]
    zmm6[0] = zmm6[0] + zmm0_1[0]
    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    zmm0_1 = var_338[1]
    zmm0_1[0] = zmm0_1[0] + temp0_80[0]
    temp0_81[0] = temp0_81[0] * zmm9[0]
    zmm1 = var_338[2]
    float temp0_83[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    zmm1[0] = zmm1[0] + temp0_81[0]
    zmm5_1[0] = zmm5_1[0] f* zmm7[0]
    zmm2_1 = var_338[3]
    temp0_83[0] = zmm0_1[0]
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0xc6)
    zmm5_1[0] = zmm5_1[0] f* zmm9[0]
    temp0_84[0] = zmm1[0]
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x27)
    zmm2_1[0] = zmm2_1[0] f+ zmm5_1[0]
    zmm5_1 = data_143ef7c40
    temp0_85[0] = zmm2_1[0]
    float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0x39)
    float temp0_87[0x4] = _mm_mul_ps(temp0_86, temp0_86)
    float temp0_89[0x4] = _mm_add_ps(temp0_87, _mm_shuffle_ps(temp0_87, temp0_87, 0x4e))
    float temp0_91[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0x39), temp0_89)
    float temp0_92[0x4] = _mm_rsqrt_ps(temp0_91)
    float temp0_93[0x4] = _mm_mul_ps(temp0_91, zmm5_1)
    float temp0_98[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_92, temp0_92), temp0_93)), 
            temp0_92), 
        temp0_92)
    zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_98, temp0_98), temp0_93))
    float temp0_103[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_91, 2)
    var_338 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_98), temp0_98), temp0_86) ^ data_143ef7c30, 
        temp0_103) ^ data_143ef7c30
    sub_14175f160(r12, &var_388, &var_338)

return arg1

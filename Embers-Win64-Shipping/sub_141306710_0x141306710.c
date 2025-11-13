// 函数: sub_141306710
// 地址: 0x141306710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
uint128_t zmm6 = *arg4
void*** r14 = zmm6.q
uint128_t var_240 = zmm6
uint128_t var_2c8 = zmm6
int72_t var_2b8 = arg4[1].9
uint64_t var_2d8
uint128_t var_228
uint128_t var_208
char arg_20
int32_t r12_1
int64_t r13_1
int128_t zmm1

if (r14 == 0)
label_141306817:
    zmm6 = arg4[2]
    var_2d8 = arg4[3].q
    arg_20 = sub_14141f7a0(arg3)
    void* rax_4 = zmm6.q
    zmm1 = *(rax_4 + 0x40)
    var_228 = *(rax_4 + 0x30)
    int128_t var_218_1 = zmm1
    var_208 = *(rax_4 + 0x50)
    var_208:8.w = 1
    uint128_t var_1e8_1 = *(rax_4 + 0x70)
    int64_t var_1f8
    var_1f8:8.w = 0
    var_1f8:4.d = ((*(rax_4 + 0x60)).q:4.d & 0xfffeffff) | 1
    var_1e8_1:8.b = 1
    void*** rax_8
    uint128_t zmm6_1
    rax_8, zmm6_1 = sub_141188e50(arg2, &var_228, u"FXAA", 0)
    var_2c8.q = rax_8
    r14 = rax_8
    r12_1 = _mm_bsrli_si128(zmm6_1, 8).d
    var_2b8.d = var_2d8.d
    var_2c8:8.d = r12_1
    var_2c8:0xc.d = (_mm_bsrli_si128(zmm6_1, 8).q u>> 0x20).d
    var_2b8:4.d = (var_2d8 u>> 0x20).d
    var_240 = var_2c8
    r13_1 = var_2c8:8.q
else
    r12_1 = _mm_bsrli_si128(zmm6, 8).d
    var_2c8:8.d = r12_1
    
    if (var_2b8.d != r12_1)
        arg_20 = var_2b8:8.b
        r13_1 = var_2c8:8.q
    else
        r13_1 = _mm_bsrli_si128(zmm6, 8).q
        
        if ((var_2b8.q u>> 0x20).d == (r13_1 u>> 0x20).d)
            goto label_141306817
        
        arg_20 = var_2b8:8.b

int64_t rax_12 = data_14395f4d0
int64_t* rdx_1 = *(arg2 + 8)
float zmm2 = 1f f/ _mm_cvtepi32_ps(zx.o(*(r14 + 0x44))).d
zmm1.d = 1f f/ _mm_cvtepi32_ps(zx.o(r14[9].d)).d
int32_t var_270 = zmm1.d
void*** rax_13 = sub_14081d830(0x150, rdx_1, 1, 0)
void*** rdi = rax_13

if (rax_13 == 0)
    rdi = nullptr
else
    *(rax_13 + 0x8c) = 0x3f800000
    *(rax_13 + 0x94) = 0
    *(rax_13 + 0x9c) = 0x3f800000
    __builtin_memset(&rax_13[0xe], 0, 0x1c)
    sub_14117af20(&rax_13[0x18])

memset(rdi, 0, 0xc0)
memset(&rdi[0x1a], 0, 0x80)
char var_300 = arg_20
void*** var_308 = r14
int16_t var_2ff = 0
int32_t var_2fc = 0xffffffff
*(rdi + 0xc0) = var_308.o
uint128_t zmm1_1 = arg4[2]
uint128_t zmm0_1 = arg4[2]
int64_t var_2e8 = data_143dbb180
void* rcx_9 = zmm1_1.q
var_308.o = zmm0_1
zmm0_1 = zx.o(arg4[3].q)
uint64_t var_258 = zmm0_1.q
uint64_t var_258_1 = zmm0_1.q
int128_t var_2e0 = zx.o(0)
var_2e8.d = *(rcx_9 + 0x44)
var_2e8:4.d = *(rcx_9 + 0x48)
var_2e0:4.d = (_mm_bsrli_si128(zmm1_1, 8).q u>> 0x20).d
var_2d8.d = var_258_1.d
var_2d8:4.d = (var_258_1 u>> 0x20).d
var_2e0.d = _mm_bsrli_si128(zmm1_1, 8).d
int32_t* rax_23 = sub_141455b70(&var_228, &var_2e8)
float zmm2_1[0x4] = rax_23[2]
float zmm3[0x4] = rax_23[3]
float zmm4[0x4] = rax_23[4]
int64_t zmm5 = rax_23[5]
float zmm6_2[0x4] = rax_23[6]
float zmm7[0x4] = rax_23[7]
int32_t rcx_11 = rax_23[8]
int32_t rdx_3 = rax_23[9]
int32_t r8 = rax_23[0xa]
int32_t r9 = rax_23[0xb]
int64_t zmm10 = *(rax_23 + 0x30)
float zmm8[0x4] = rax_23[0xe]
int64_t zmm9 = rax_23[0xf]
float zmm11[0x4] = rax_23[0x10]
int128_t zmm12 = rax_23[0x11]
float zmm13[0x4] = rax_23[0x12]
int128_t zmm14 = rax_23[0x13]
float zmm15[0x4] = rax_23[0x14]
arg_20.d = rax_23[0x15][0]
float var_2a8 = rax_23[0x16][0]
float var_2a0 = rax_23[0x17][0]
float var_298 = rax_23[0x18][0]
float var_288 = rax_23[0x19][0]
float var_280 = rax_23[0x1a][0]
float var_278 = rax_23[0x1b][0]
*rdi = (_mm_unpacklo_ps(*rax_23, rax_23[1][0].q)).q
rdi[1] = (_mm_unpacklo_ps(zmm2_1, zmm3[0].q)).q
float zmm1_2[0x4] = zmm6_2
zmm6_2 = var_270
rdi[2] = (_mm_unpacklo_ps(zmm4, zmm5)).q
rdi[3] = (_mm_unpacklo_ps(zmm1_2, zmm7[0].q)).q
zmm7 = zmm2
float temp0_13[0x4] = _mm_unpacklo_ps(zmm11, zmm12.q)
zmm7[0] = zmm7[0] * 0.5f
zmm7[0] = zmm7[0] + zmm7[0]
rdi[4].d = rcx_11
*(rdi + 0x24) = rdx_3
rdi[5].d = r8
*(rdi + 0x2c) = r9
rdi[6] = zmm10
zmm4 = zmm7 ^ 0x80000000
float temp0_14[0x4] = _mm_unpacklo_ps(zmm13, zmm14.q)
float temp0_15[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
rdi[7] = (_mm_unpacklo_ps(zmm8, zmm9)).q
rdi[8] = temp0_13.q
rdi[9] = temp0_14.q
rdi[0xa] = (_mm_unpacklo_ps(zmm15, arg_20.d[0].q)).q
rdi[0xb] = (_mm_unpacklo_ps(var_2a8, var_2a0[0].q)).q
rdi[0xc] = (_mm_unpacklo_ps(var_298, var_288[0].q)).q
float temp0_20[0x4] = _mm_unpacklo_ps(var_280, var_278[0].q)
zmm1_2 = var_308.o
rdi[0xd] = temp0_20.q
zmm6_2[0] = zmm6_2[0] * 0.5f
zmm6_2[0] = zmm6_2[0] + zmm6_2[0]
rdi[0xf] = rax_12
rdi[0xe] = zmm1_2[0].q
rdi[0x14].d = 0x3f400000
*(rdi + 0xa4) = 0x3e29fbe7
rdi[0x15].d = 0x3daa9931
temp0_15[0] = (zmm6_2 ^ 0x80000000)[0]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
zmm1_2 = zmm7 ^ 0x80000000
temp0_21[0] = zmm7[0]
float temp0_22[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xe1)
temp0_22[0] = (zmm6_2 ^ 0x80000000)[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x27)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc6)
temp0_23[0] = zmm6_2[0]
temp0_24[0] = zmm7[0]
float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x39)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x27)
temp0_26[0] = zmm6_2[0]
var_308.o = temp0_25
float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x39)
var_308.o = temp0_27
*(rdi + 0x90) = temp0_27
*(rdi + 0x80) = temp0_25
void* rcx_12 = arg_18
*(rdi + 0xac) = 0x41000000
rdi[0x16].d = 0x3e000000
*(rdi + 0xb4) = 0x3d4ccccd
int32_t rbx_1 = *(arg4 + 0x38)
sub_1419a2ec0(*(rcx_12 + 0x5150), &var_308, &data_143eb3400, 0)
zmm6_2 = var_308.o
void* rbx_2 = arg_18
sub_1419a2ec0(*(rbx_2 + 0x5150), &var_308, &data_143eb3500, rbx_1)
zmm2_1 = var_308.o
zmm1_2 = arg4[2]
var_2e8.d = *(r14 + 0x44)
void* rcx_15 = zmm1_2[0].q
var_2e8:4.d = r14[9].d
var_2d8.d = var_2b8.d
int64_t* rdx_6 = *(arg2 + 8)
var_2d8:4.d = (var_2b8.q u>> 0x20).d
var_208.q = data_14395da00
var_208:8.q = data_14395d9e8
int64_t rax_32 = data_1439c9210
uint64_t var_258_2 = arg4[3].q
var_308.d = *(rcx_15 + 0x44)
var_308:4.d = *(rcx_15 + 0x48)
var_300.d = _mm_bsrli_si128(zmm1_2, 8).d
uint32_t var_2fc_1 = (_mm_bsrli_si128(zmm1_2, 8)[0].q u>> 0x20).d
int64_t var_1a0 = var_2d8
var_2e0.d = r12_1
var_2e0:4.d = (r13_1 u>> 0x20).d
uint32_t var_2f4 = (var_258_2 u>> 0x20).d
uint128_t var_1b0 = var_2e8.o
int64_t var_188 = var_258_2.d.q
uint128_t var_198 = var_308.o
char var_120 = 2
int64_t var_150 = rax_32
uint64_t var_128 = rdi
void*** rax_40
char rcx_16
rax_40, rcx_16 = sub_14081d830(0xd8, rdx_6, 1, 0)
void*** rbx_3 = rax_40

if (rax_40 == 0)
    rbx_3 = nullptr
else
    var_308 = rdi
    sub_141315b60(rcx_16)
    var_300.q = &data_143eb6340
    var_308.o = var_308.o
    sub_141992bd0(rbx_3, &arg_18, &var_308, 1)
    *rbx_3 = &data_142f5cba0
    *(rbx_3 + 0x38) = rbx_2.o
    *(rbx_3 + 0x48) = var_1b0
    *(rbx_3 + 0x58) = var_198
    *(rbx_3 + 0x68) = var_188.o
    *(rbx_3 + 0x78) = zmm6_2
    *(rbx_3 + 0x88) = zmm2_1
    *(rbx_3 + 0x98) = var_208
    *(rbx_3 + 0xa8) = zmm6_2
    *(rbx_3 + 0xb8) = zmm2_1
    *(rbx_3 + 0xc8) = var_128.o

sub_1419968d0(arg2, rbx_3)
*arg1 = var_240
arg1[1].q = var_2b8.q
return arg1

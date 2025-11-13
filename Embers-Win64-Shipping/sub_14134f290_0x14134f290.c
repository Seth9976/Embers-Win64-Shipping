// 函数: sub_14134f290
// 地址: 0x14134f290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8 = *arg4
void*** r15 = zmm8.q
uint128_t var_298 = zmm8
uint128_t var_288 = arg4[1]
uint64_t var_2a8
uint128_t var_278
uint128_t var_268
uint128_t var_258
uint128_t var_248
uint128_t var_238
char arg_8
uint128_t zmm1

if (r15 == 0)
label_14134f33e:
    int128_t zmm6 = arg4[2]
    var_2a8 = arg4[3].q
    arg_8 = sub_14141f7a0(arg3)
    void* rax_5 = zmm6.q
    zmm1 = *(rax_5 + 0x40)
    var_278 = *(rax_5 + 0x30)
    var_268 = zmm1
    var_258 = *(rax_5 + 0x50)
    var_258:8.w = 1
    var_238 = *(rax_5 + 0x70)
    var_248:8.w = 0
    var_248:4.d = ((*(rax_5 + 0x60)):4.d & 0xfffeffff) | 1
    var_238:8.b = 1
    void*** rax_9
    uint128_t zmm6_1
    rax_9, zmm6_1 = sub_141188e50(arg2, &var_278, u"VisualizeMotionBlur", 0)
    var_298.q = rax_9
    r15 = rax_9
    var_298:0xc.d = (_mm_bsrli_si128(zmm6_1, 8).q u>> 0x20).d
    var_288.d = var_2a8.d
    var_298:8.d = _mm_bsrli_si128(zmm6_1, 8).d
    var_288:4.d = (var_2a8 u>> 0x20).d
else if (var_288.d != _mm_bsrli_si128(zmm8, 8).d)
    arg_8 = var_288:8.b
else
    if ((var_288.q u>> 0x20).d == (_mm_bsrli_si128(zmm8, 8).q u>> 0x20).d)
        goto label_14134f33e
    
    arg_8 = var_288:8.b

zmm1 = arg4[5]
uint64_t var_2c8 = arg4[6].q
void* rcx_9 = zmm1.q
uint128_t temp0_5 = _mm_bsrli_si128(zmm1, 8)
int32_t var_2b0 = _mm_bsrli_si128(zmm1, 8).d
int32_t var_2b8 = *(rcx_9 + 0x44)
int32_t var_2b4 = *(rcx_9 + 0x48)
uint32_t var_2ac = (temp0_5.q u>> 0x20).d
var_2a8.d = var_2c8.d
var_2a8:4.d = (var_2c8 u>> 0x20).d
var_278 = var_2b8.o
uint64_t var_2c8_1 = arg4[3].q
var_268.q = var_2a8
zmm1 = arg4[2]
void* rcx_10 = zmm1.q
uint128_t temp0_7 = _mm_bsrli_si128(zmm1, 8)
int32_t var_2b0_1 = _mm_bsrli_si128(zmm1, 8).d
var_2b8 = *(rcx_10 + 0x44)
int32_t var_2b4_1 = *(rcx_10 + 0x48)
uint32_t var_2ac_1 = (temp0_7.q u>> 0x20).d
var_2a8.d = var_2c8_1.d
var_2a8:4.d = (var_2c8_1 u>> 0x20).d
uint64_t var_2c8_2 = var_2a8
uint128_t var_2d8 = var_2b8.o
int128_t var_218
sub_141345e60(&var_218, &var_2d8, &var_278)
float (* rax_24)[0x4] = sub_14081d830(0x200, *(arg2 + 8), 1, 0)
float (* rbx)[0x4] = rax_24

if (rax_24 == 0)
    rbx = nullptr
else
    __builtin_memset(&rax_24[4], 0, 0x20)
    __builtin_memset(&rax_24[0x15], 0, 0x18)
    sub_14117af20(&rax_24[0x17])

memset(rbx, 0, 0x200)
float (* rax_25)[0x4]
int128_t zmm8_1
rax_25, zmm8_1 = sub_141357c90(&var_278, arg3)
*rbx = *rax_25
rbx[1] = rax_25[1]
rbx[2] = rax_25[2]
rbx[3] = rax_25[3]
sub_1405d16e0(&rbx[4], arg3[2])
*(rbx + 0x48) = arg4[2].q
rbx[5][0].q = *(arg4 + 0x38)
*(rbx + 0x58) = arg4[5].q
int32_t var_1c8
rbx[6][0] = var_1c8.d
int32_t var_1c4
(*rbx)[0x19] = var_1c4.d
int64_t var_1c0
*(rbx + 0x68) = var_1c0
int64_t var_1b8
rbx[7][0].q = var_1b8
int64_t var_1b0
*(rbx + 0x78) = var_1b0
float var_1a8
rbx[8][0] = var_1a8
float var_1a4
(*rbx)[0x21] = var_1a4
float var_1a0
(*rbx)[0x22] = var_1a0
float var_19c
(*rbx)[0x23] = var_19c
int64_t var_198
rbx[9][0].q = var_198
int64_t var_190
*(rbx + 0x98) = var_190
int64_t var_188
rbx[0xa][0].q = var_188
int64_t var_180
*(rbx + 0xa8) = var_180
int64_t var_178
rbx[0xb][0].q = var_178
int64_t var_170
*(rbx + 0xb8) = var_170
int64_t var_168
rbx[0xc][0].q = var_168
int64_t var_160
*(rbx + 0xc8) = var_160
int32_t var_158
rbx[0xd][0] = var_158.d
int32_t var_154
(*rbx)[0x35] = var_154.d
int64_t var_150
*(rbx + 0xd8) = var_150
int64_t var_148
rbx[0xe][0].q = var_148
int64_t var_140
*(rbx + 0xe8) = var_140
float var_138
rbx[0xf][0] = var_138
float var_134
(*rbx)[0x3d] = var_134
float var_130
(*rbx)[0x3e] = var_130
float var_12c
(*rbx)[0x3f] = var_12c
int64_t var_128
rbx[0x10][0].q = var_128
int64_t var_120
*(rbx + 0x108) = var_120
int64_t var_118
rbx[0x11][0].q = var_118
int64_t var_110
*(rbx + 0x118) = var_110
int64_t var_108
rbx[0x12][0].q = var_108
int64_t var_100
*(rbx + 0x128) = var_100
int64_t var_f8
rbx[0x13][0].q = var_f8
int64_t var_f0
*(rbx + 0x138) = var_f0
uint128_t var_78
rbx[0x14] = var_78
rbx[0x15][0].q = data_14395fa10
*(rbx + 0x158) = data_14395fa10
rbx[0x16][0].q = data_14395fa10
var_2d8:8.b = arg_8
var_2d8.q = r15
var_2d8:9.w = 0
var_2d8:0xc.d = 0xffffffff
rbx[0x17] = var_2d8
char rcx_17 = sub_1419a2ec0(arg3[0xa2a], &var_2d8, &data_143ebcd70, 0)
uint128_t zmm7 = var_2d8
int512_t zmm6_2
zmm6_2.o = zx.o(0)
var_2b8.o = sub_1413598d0(rcx_17)
sub_141998c50(zmm7.q, &data_143ec10f0, rbx)
int64_t* rdx_6 = *(arg2 + 8)
var_278.q = arg3
int64_t var_208
var_268:8.q = var_208
var_278 = var_218
var_238:8.q = rbx
var_248.q = var_208
char var_228 = 0
void*** rax_41
char rcx_19
rax_41, rcx_19 = sub_14081d830(0x90, rdx_6, 1, 0)
void*** rsi_1 = rax_41

if (rax_41 == 0)
    rsi_1 = nullptr
else
    var_2d8.q = rbx
    int128_t zmm6_4 = sub_1413598d0(rcx_19)
    var_2d8:8.q = &data_143ec1120
    var_2b8.o = var_2d8
    sub_141992bd0(rsi_1, &arg_8, &var_2b8, 1)
    uint128_t zmm0_5 = var_278
    *rsi_1 = &data_142f64cb0
    *(rsi_1 + 0x38) = zmm0_5
    *(rsi_1 + 0x48) = var_268
    *(rsi_1 + 0x58) = zmm6_4
    *(rsi_1 + 0x68) = zmm7
    *(rsi_1 + 0x78) = var_238
    rsi_1[0x11] = var_228.q

sub_1419968d0(arg2, rsi_1)
var_288:8.b = 1
uint128_t* rax_42
int512_t zmm6_5
rax_42, zmm6_5 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
uint128_t* rsi_2 = rax_42

if (rax_42 == 0)
    rsi_2 = nullptr
else
    sub_14117af20(rax_42)

memset(&rsi_2[1], 0, 0x80)
zmm6_5.o = var_288
var_2d8.q = r15
var_2d8:8.w = 1
var_2d8:0xa.b = 0
var_2d8:0xc.d = 0xffffffff
*rsi_2 = var_2d8
var_258.q = arg3
var_258:8.q = arg3
void*** rax_43 = sub_14081d830(0x68, *(arg2 + 8), 1, 0)
void*** rbx_1 = rax_43

if (rax_43 == 0)
    rbx_1 = nullptr
else
    int64_t* rax_44
    int128_t zmm6_6
    rax_44, zmm6_6 = sub_1412ec240(&var_2d8, rsi_2)
    var_2b8.o = *rax_44
    sub_141992bd0(rbx_1, &arg_8, &var_2b8, 1)
    *(rbx_1 + 0x38) = zmm8_1
    *rbx_1 = &data_142f64cc0
    *(rbx_1 + 0x48) = zmm6_6
    *(rbx_1 + 0x58) = var_258

sub_1419968d0(arg2, rbx_1)
*arg1 = zmm8_1
arg1[1].q = var_288.q
return arg1

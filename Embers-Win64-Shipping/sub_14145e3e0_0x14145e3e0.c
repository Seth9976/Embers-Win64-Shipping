// 函数: sub_14145e3e0
// 地址: 0x14145e3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
void* rax_3 = data_143ed6760
int128_t* var_238 = arg2
uint128_t* var_308 = arg6
int32_t rcx_1 = *(rax_3 + 4)
int32_t var_2e0 = 4
int32_t r8

if (rcx_1 s>= 1)
    r8 = 4
    
    if (rcx_1 s< 4)
        r8 = rcx_1
else
    r8 = 1

int32_t rcx_2 = *(data_143ed6748 + 4)
int32_t var_2e8
int32_t var_2e4

if (r8 == 1)
    var_2e8 = 8
    var_2e4 = 8
else if (r8 == 2)
    var_2e8 = 8
    var_2e4 = 4
    var_2e0 = 8
else if (r8 == 3)
    var_2e8 = 4
    var_2e4 = 4
    var_2e0 = 0x10
else if (r8 != 4)
    var_2e0 = rcx_2
    var_2e4 = rcx_2
    var_2e8 = rcx_2
else
    var_2e8 = 4
    var_2e4 = 2
    var_2e0 = 0x20

uint128_t zmm0 = *(arg4 + 0x1598)
uint128_t var_328 = zmm0
void*** var_2f8
int32_t var_264
int32_t var_260_1
uint32_t var_250
uint32_t var_248

if (rcx_2 == 0)
    var_250 = var_328:0xc.d
    var_264 = var_328:8.d
    var_248 = var_328:4.d
    var_260_1 = var_328.d
else
    var_328 = zmm0
    int64_t rcx_3 = var_328:8.q
    int32_t temp0_1 = divs.dp.d(sx.q(1 + rcx_3.d), 2)
    int32_t var_25c_1 = 2
    int64_t r8_1 = 2.q
    var_264 = temp0_1
    uint32_t r9_1 = (r8_1 u>> 0x20).d
    int32_t var_2c4_1 = divs.dp.d(sx.q((rcx_3 u>> 0x20).d - 1 + r9_1), r9_1)
    void*** rax_15 = var_328.q
    var_2f8 = rax_15
    int32_t temp14_1
    int32_t temp15_1
    temp14_1:temp15_1 = sx.q(rax_15.d)
    int32_t rax_18 = (temp15_1 - temp14_1) s>> 1
    var_260_1 = rax_18
    var_2f8.d = rax_18
    var_2f8:4.d = divs.dp.d(sx.q(var_2f8:4.d), (r8_1 u>> 0x20).d)
    var_248 = (var_2f8 u>> 0x20).d
    var_250 = (temp0_1.q u>> 0x20).d

int32_t rax_32 = *(arg4 + 0x5088)
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x15a0) - *(arg4 + 0x1598)))
int32_t rax_35 = *(arg4 + 0x15a4) - *(arg4 + 0x159c)
zmm9.d = zmm9.d f/ _mm_cvtepi32_ps(zx.o(rax_32 * 2)).d
zmm0 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x508c) * 2))
uint128_t zmm11
zmm11.d = _mm_cvtepi32_ps(zx.o(rax_35)).d f/ zmm0.d
void*** rax_38 = sub_1410fccd0(arg1, arg4 + 0x5030, u"External", 0)
sub_1410fccd0(arg1, arg4 + 0x5038, u"External", 0)
int64_t r12 = *(arg4 + 0x4d88)
void*** rsi = nullptr
var_328.q = r12
int16_t var_280 = 0
void*** rax_39 = *(*(arg2 + 8) + 0x44)
var_2f8 = rax_39
int32_t temp22
int32_t temp23
temp22:temp23 = sx.q(rax_39.d)
int32_t var_29c = 0
int32_t rax_42 = (temp23 - temp22) s>> 1
var_2f8.d = rax_42
int32_t temp24
int32_t temp25
temp24:temp25 = sx.q(var_2f8:4.d)
int32_t var_298 = 1
int32_t var_294 = 0x50000
var_2f8:4.d = (temp25 - temp24) s>> 1
int32_t rcx_9 = data_143f02318
int32_t temp26
int32_t temp27
temp26:temp27 = sx.q(rax_42 + 0xf)
int16_t var_290 = 1
int64_t var_28c = 0x1a
int32_t var_284 = 0x10008
int32_t var_2a4 = ((temp26 & 0xf) + temp27) & 0xfffffff0
int32_t temp28
int32_t temp29
temp28:temp29 = sx.q((var_2f8 u>> 0x20).d + 0xf)
int16_t var_270 = 1
char var_26e = 0
int32_t var_2a0 = (temp29 + (temp28 & 0xf)) & 0xfffffff0
wchar16 const* const var_278 = u"UnknownTexture2D"
uint128_t var_2b8 = data_143f02308
void*** rax_55 = sub_141188e50(arg1, &var_2b8, u"SSRTReducedSceneColor", 0)

if (r12 != 0)
    var_28c.d = 0x1b
    rsi = sub_141188e50(arg1, &var_2b8, u"SSRTReducedSceneAlpha", 0)

uint128_t var_208
sub_1414418c0(&var_208)
uint128_t var_178 = *arg2
uint128_t var_158 = arg2[2]
uint128_t zmm0_2 = arg2[4]
uint128_t var_168 = arg2[1]
uint128_t zmm1 = arg2[3]
uint128_t var_128
sub_14142a1f0(&var_128)
void* var_e8
sub_1405d16e0(&var_e8, *(arg4 + 0x10))
uint128_t zmm0_3 = zx.o(rax_55[9].d)
int64_t* rdx_16 = *(arg1 + 8)
int32_t var_1f0 = _mm_cvtepi32_ps(zx.o(*(rax_55 + 0x44))).d
int32_t var_1ec = _mm_cvtepi32_ps(zmm0_3).d
zmm0_3 = zx.o(rax_55[9].d)
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*(rax_55 + 0x44)))
uint128_t zmm1_1
zmm1_1.d = 1f f/ _mm_cvtepi32_ps(zmm0_3).d
float var_1e8 = 1f f/ zmm2.d
int32_t var_1e4 = zmm1_1.d
int64_t* rax_57 = sub_14081d830(0x160, rdx_16, 1, 0)
int64_t* r14_1

if (rax_57 == 0)
    r14_1 = nullptr
else
    r14_1 = sub_1414418c0(rax_57)

memset(r14_1, 0, 0x160)
sub_141442710(r14_1, &var_208)
int32_t var_2d8
int32_t var_2d4
int32_t var_2c8_2
int32_t r12_1
int32_t r15

if (r12 == 0)
    r12_1 = *(arg4 + 0x4db0)
    r15 = *(arg4 + 0x4db4)
    var_2c8_2 = *(arg4 + 0x4da0)
    var_2f8.d = *(arg4 + 0x4da4)
    var_2d8 = *(arg4 + 0x4da8)
    var_2d4 = *(arg4 + 0x4dac)
    r14_1[7] = sub_1410fccd0(arg1, arg4 + 0x4d90, u"External", 0)
    r14_1[8] = data_14395f4d0
else
    int64_t* rcx_18 = *(arg4 + 0x4d88)
    void* rax_60 = (*(*rcx_18 + 0x10))(rcx_18)
    r12_1 = *(arg4 + 0x15a0)
    r15 = *(arg4 + 0x15a4)
    var_2f8.d = *(rax_60 + 0x18)
    var_2d8 = *(arg4 + 0x1598)
    var_2c8_2 = *(rax_60 + 0x14)
    var_2d4 = *(arg4 + 0x159c)
    r14_1[7] = sub_1410fccd0(arg1, arg4 + 0x4d88, u"External", 0)
    r14_1[8] = data_14395fa10
    r14_1[9] = sub_1410fccd0(arg1, arg4 + 0x4d48, u"External", 0)
    r14_1[0xa] = data_14395f4d0

int32_t r15_1 = r15 - var_2d4
uint64_t rbx_1 = 0
int128_t zmm8 = 0x3f000000
r14_1[5].d = *(arg4 + 0x4fd4) f/ *(arg4 + 0x4d40)
float zmm1_2[0x4] = 0x3f800000
zmm1_2[0] = 1f / float.s(var_2c8_2)
float zmm4 = float.s(r12_1 - var_2d8) * 0.5f
float zmm0_4 = float.s(var_2f8.d)
zmm1_2[0] = zmm1_2[0] * zmm4
zmm2.d = 1f / zmm0_4
float zmm6[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xe1)
int32_t zmm5 = (float.s(var_2d8) f+ zmm4) f* zmm1_2[0]
zmm6[0] = float.s(neg.d(r15_1)) * 0.5f f* zmm2.d
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
zmm6[0] = zmm5
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
zmm6[0] = (float.s(r15_1) * 0.5f + float.s(var_2d4)) f* zmm2.d
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
var_2f8.o = zmm6
*r14_1 = zmm6
int32_t r9_2
int512_t zmm6_1

do
    int64_t* rdx_22 = *(arg1 + 8)
    var_2f8 = rax_55
    char r12_3 = rbx_1.b
    char var_2f0_1 = rbx_1.b
    char var_2ef_1 = 0
    void*** rax_76
    rax_76, r9_2, zmm6_1 = sub_14081d830(0x28, rdx_22, 1, 0)
    
    if (rax_76 != 0)
        int128_t zmm0_5 = var_2f8.o
        rax_76[1] = rax_55[1]
        rax_76[2] = 0
        *(rax_76 + 0x18) = zmm0_5
        *rax_76 = &data_142f285c0
    
    rbx_1 = zx.q(rbx_1.d + 1)
    r14_1[rbx_1 + 0x25] = rax_76
    
    if (rsi != 0)
        char var_2c0_1 = r12_3
        var_2c8_2.q = rsi
        char var_2bf_1 = 0
        void*** rax_77
        rax_77, r9_2, zmm6_1 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
        
        if (rax_77 == 0)
            r14_1[rbx_1 + 0x28] = rax_77
        else
            rax_77[1] = rsi[1]
            *rax_77 = &data_142f285c0
            rax_77[2] = 0
            *(rax_77 + 0x18) = var_2c8_2.o
            r14_1[rbx_1 + 0x28] = rax_77
while (rbx_1.d s< 2)

int64_t r15_2 = var_328.q
char rcx_27 =
    sub_1419a2ec0(*(arg4 + 0x5150), &var_2f8, &data_143ed6770, sbb.d(r9_2, r9_2, r15_2 != 0) & 2)
zmm6_1.o = zx.o(0)
int128_t zmm7 = var_2f8.o
int32_t temp31
int32_t temp32
temp31:temp32 = sx.q(*(arg4 + 0x15a0) - *(arg4 + 0x1598) + 7)
var_328.d = (temp32 + (temp31 & 7)) s>> 3
int32_t temp33
int32_t temp34
temp33:temp34 = sx.q(*(arg4 + 0x15a4) - *(arg4 + 0x159c) + 7)
var_328:4.d = (temp34 + (temp33 & 7)) s>> 3
var_2c8_2.o = sub_141457060(rcx_27)
sub_141998c50(zmm7.q, &data_143ed7d70, r14_1)
int64_t zmm0_7 = var_328.q
int64_t* rdx_29 = *(arg1 + 8)
var_2b8.q = r14_1
var_2b8 = zmm7
int32_t var_298_1 = 1
var_2a0.q = zmm0_7
void*** rax_92
char rcx_29
rax_92, rcx_29 = sub_14081d830(0x60, rdx_29, 1, 0)
void*** rbx_3 = rax_92
void var_338

if (rax_92 == 0)
    rbx_3 = nullptr
else
    var_328.q = r14_1
    sub_141457060(rcx_29)
    var_328:8.q = &data_143ed7da0
    var_328 = var_328
    sub_141992bd0(rbx_3, &var_338, &var_328, 2)
    uint128_t zmm0_9 = var_2b8
    *rbx_3 = &data_142f86100
    *(rbx_3 + 0x38) = zmm0_9
    *(rbx_3 + 0x48) = rcx_9.o
    rbx_3[0xb] = var_298_1.q

sub_1419968d0(arg1, rbx_3)
int32_t rax_93 = 1

if (r15_2 != 0)
    rax_93 = 3

var_2f8.d = rax_93
int64_t* rax_94 = sub_14081d830(0x160, *(arg1 + 8), 1, 0)
int64_t* rbx_4

if (rax_94 == 0)
    rbx_4 = nullptr
else
    rbx_4 = sub_1414418c0(rax_94)

memset(rbx_4, 0, 0x160)
*rbx_4 = var_208
int64_t var_1f8
rbx_4[2] = var_1f8
rbx_4[3] = var_1f0.q
rbx_4[4] = var_1e8.q
int32_t var_1e0
rbx_4[5].d = var_1e0.d
int32_t var_1dc
*(rbx_4 + 0x2c) = var_1dc.d
int32_t var_1d8
rbx_4[6].d = var_1d8.d
int64_t var_1d0
rbx_4[7] = var_1d0
int64_t var_1c8
rbx_4[8] = var_1c8
int64_t var_1c0
rbx_4[9] = var_1c0
int64_t var_1b8
rbx_4[0xa] = var_1b8
int64_t var_1b0
rbx_4[0xb] = var_1b0
int64_t var_1a8
rbx_4[0xc] = var_1a8
int64_t var_1a0
rbx_4[0xd] = var_1a0
int64_t var_198
rbx_4[0xe] = var_198
int64_t var_190
rbx_4[0xf] = var_190
int64_t var_188
rbx_4[0x10] = var_188
*(rbx_4 + 0x90) = var_178
*(rbx_4 + 0xa0) = var_168
*(rbx_4 + 0xb0) = var_158
*(rbx_4 + 0xc0) = zmm1
*(rbx_4 + 0xd0) = zmm0_2
*(rbx_4 + 0xe0) = var_128
uint128_t var_118
*(rbx_4 + 0xf0) = var_118
uint128_t var_108
*(rbx_4 + 0x100) = var_108
uint128_t var_f8
*(rbx_4 + 0x110) = var_f8
sub_1405d16e0(&rbx_4[0x24], var_e8)
var_328.w = 0x100
var_328:4.q = 0
int128_t var_e0
*(rbx_4 + 0x128) = var_e0
var_328:0xc.d = 0
int64_t var_d0
rbx_4[0x27] = var_d0
int128_t var_c8
*(rbx_4 + 0x140) = var_c8
char var_310 = 0
int64_t var_b8
rbx_4[0x2a] = var_b8
var_328:2.b = 1

if (*(rax_55 + 0x54) != 0)
    var_328:0xc.d = *(rax_55 + 0x4c)

void*** rax_107 = sub_14081d830(0x38, *(arg1 + 8), 1, 0)

if (rax_107 == 0)
    rax_107 = nullptr
else
    uint128_t zmm0_12 = var_328
    rax_107[1] = rax_55[1]
    rax_107[2] = 0
    *(rax_107 + 0x18) = zmm0_12
    *rax_107 = &data_142f34e88
    *(rax_107 + 0x28) = rax_55.o

rbx_4[0xb] = rax_107

if (r15_2 == 0)
    rbx_4[0xd] = data_14395f4d0
else
    rbx_4[0xd] = data_14395fa10
    var_328.w = 0x100
    var_328:4.q = 0
    var_328:0xc.d = 0
    char var_310_1 = 0
    var_328:2.b = 1
    
    if (*(rsi + 0x54) != 0)
        var_328:0xc.d = *(rsi + 0x4c)
    
    void*** rax_110 = sub_14081d830(0x38, *(arg1 + 8), 1, 0)
    
    if (rax_110 == 0)
        rbx_4[0xc] = 0
        rbx_4[0xe] = data_14395fa10
    else
        uint128_t zmm0_13 = var_328
        rax_110[1] = rsi[1]
        *rax_110 = &data_142f34e88
        *(rax_110 + 0x18) = zmm0_13
        rax_110[2] = 0
        *(rax_110 + 0x28) = rsi.o
        rbx_4[0xc] = rax_110
        rbx_4[0xe] = data_14395fa10

int32_t i = 0
rbx_4[0xf] = rax_38
rbx_4[2].d = zmm9.d
*(rbx_4 + 0x14) = zmm11.d
rbx_4[6].d = 0x40800000
rbx_4[0x10] = data_14395fa10
int512_t zmm6_3

do
    var_328.q = rax_55
    var_328:8.b = i.b + 2
    var_328:9.b = 0
    void*** rax_116
    rax_116, zmm6_3 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
    
    if (rax_116 == 0)
        rax_116 = nullptr
    else
        uint128_t zmm0_14 = var_328
        rax_116[1] = rax_55[1]
        *rax_116 = &data_142f285c0
        rax_116[2] = 0
        *(rax_116 + 0x18) = zmm0_14
    
    uint64_t i_1 = zx.q(i)
    rbx_4[i_1 + 0x25] = rax_116
    
    if (rsi != 0)
        char var_2c0_2 = i.b + 2
        var_2c8_2.q = rsi
        char var_2bf_2 = 0
        void*** rax_117
        rax_117, zmm6_3 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
        
        if (rax_117 == 0)
            rbx_4[i_1 + 0x28] = rax_117
        else
            rax_117[1] = rsi[1]
            *rax_117 = &data_142f285c0
            rax_117[2] = 0
            *(rax_117 + 0x18) = var_2c8_2.o
            rbx_4[i_1 + 0x28] = rax_117
    
    i += 1
while (i s< 3)

char rcx_40 = sub_1419a2ec0(*(arg4 + 0x5150), &var_328, &data_143ed6770, var_2f8.d)
zmm6_3.o = var_328
int128_t zmm6_4 = sub_141457060(rcx_40)
void* var_228
var_228.o = zx.o(0)
sub_141998c50(zmm6_4.q, &data_143ed7d70, rbx_4)
int64_t* rdx_39 = *(arg1 + 8)
var_2b8.q = rbx_4
var_2b8 = zmm6_4
var_2a0.q = arg4
int32_t var_298_2 = 8
void*** rax_118
char rcx_42
rax_118, rcx_42 = sub_14081d830(0x60, rdx_39, 1, 0)
void*** rsi_1 = rax_118

if (rax_118 == 0)
    rsi_1 = nullptr
else
    var_328.q = rbx_4
    sub_141457060(rcx_42)
    var_328:8.q = &data_143ed7da0
    var_328 = var_328
    sub_141992bd0(rsi_1, &var_338, &var_328, 0xa)
    uint128_t zmm0_17 = var_2b8
    *rsi_1 = &data_142f86080
    *(rsi_1 + 0x38) = zmm0_17
    *(rsi_1 + 0x48) = rcx_9.o
    rsi_1[0xb] = var_298_2.q

sub_1419968d0(arg1, rsi_1)
sub_1405d1550(&var_e8)
uint128_t* rsi_2 = var_238
int16_t var_280_1 = 0
void* rax_119 = *(rsi_2 + 8)
int32_t r9_8
r9_8.b = rcx_2 != 0
var_2b8 = data_1439c7b20
int32_t var_29c_1 = 0
int32_t var_298_3 = 1
int128_t* rcx_46 = *(rax_119 + 0x44)
var_238 = rcx_46
int32_t rcx_47 = data_1439c7b30
int32_t var_294_1 = 0x10000
int32_t var_2a4_1 = divs.dp.d(sx.q(rcx_46.d), r9_8 + 1)
int16_t var_290_1 = 1
int32_t var_2a0_1 = divs.dp.d(sx.q(var_238:4.d), r9_8 + 1)
int64_t var_28c_1 = 0xa
wchar16 const* const var_278_1 = u"UnknownTexture2D"
int32_t var_284_1 = 0x10008
int16_t var_270_1 = 1
char var_26e_1 = 0
void*** rax_126 = sub_141188e50(arg1, &var_2b8, u"SSRTDiffuseIndirect", 0)
void**** r12_4 = var_308
var_28c_1.d = 0x15
*r12_4 = rax_126
r12_4[1] = sub_141188e50(arg1, &var_2b8, u"SSRTAmbientOcclusion", 0)
uint128_t* rax_128 = sub_14081d830(0x130, *(arg1 + 8), 1, 0)
uint128_t* rbx_5 = rax_128

if (rax_128 == 0)
    rbx_5 = nullptr
else
    *(rbx_5 + 0xc) = 0x3f800000
    __builtin_memset(&rbx_5[3], 0, 0x20)
    __builtin_memset(rbx_5 + 0x58, 0, 0x90)
    rbx_5[0x10].q = 0
    *rbx_5 = 0
    *(rbx_5 + 8) = 0
    __builtin_memset(&rbx_5[0x11], 0, 0x20)
    *(rbx_5 + 0x14) = 0
    *(rbx_5 + 0x1c) = 0x3f800000

memset(rbx_5, 0, 0x130)
int128_t zmm1_9 = _mm_unpacklo_ps(0x3f000000, 0x3f000000)
uint128_t zmm2_1

zmm2_1 = rcx_2 == 0 ? 0x3f800000 : 0x40000000

rbx_5[2].d = zmm2_1.d
*(rbx_5 + 0x28) = zmm1_9.q
void* rax_129 = *(rsi_2 + 8)
uint128_t zmm5_1 = zx.o(*(arg4 + 0x159c))
uint128_t zmm4_1 = zx.o(*(arg4 + 0x1598))
zmm2_1 = zx.o(*(rax_129 + 0x48))
uint128_t zmm6_5 = zx.o(*(rax_129 + 0x44))
uint128_t zmm0_19 = _mm_cvtepi32_ps(zx.o(*(rax_55 + 0x44)))
zmm6_5 = _mm_cvtepi32_ps(zmm6_5)
float zmm3_1 = 1f f/ zmm0_19.d
zmm0_19 = _mm_cvtepi32_ps(zx.o(rax_55[9].d))
rbx_5[3].q = rax_38
zmm6_5.d = zmm6_5.d f* 0.5f
zmm1_9.d = 1f f/ zmm0_19.d
zmm6_5.d = zmm6_5.d f* zmm3_1
zmm0_19.d = 1f f/ zmm9.d
_mm_shuffle_ps(zmm6_5, zmm6_5, 0xe1)
_mm_shuffle_ps(zmm9, zmm9, 0xe1)
zmm9.d = zmm11.d
zmm2_1 = _mm_cvtepi32_ps(zmm2_1)
zmm5_1 = _mm_cvtepi32_ps(zmm5_1)
_mm_shuffle_ps(zmm9, zmm9, 0xc6)
zmm5_1.d = zmm5_1.d f* -0.5f
zmm9.d = zmm0_19.d
zmm5_1.d = zmm5_1.d f* zmm1_9.d
zmm4_1.d = _mm_cvtepi32_ps(zmm4_1).d f* -0.5f
zmm2_1.d = zmm2_1.d f* 0.5f
zmm4_1.d = zmm4_1.d f* zmm3_1
zmm2_1.d = zmm2_1.d f* zmm1_9.d
zmm1_9.d = 1f f/ zmm11.d
zmm6_5.d = zmm2_1.d
_mm_shuffle_ps(zmm9, zmm9, 0x27)
_mm_shuffle_ps(zmm6_5, zmm6_5, 0xc6)
zmm9.d = zmm1_9.d
zmm6_5.d = zmm4_1.d
zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0x39)
_mm_shuffle_ps(zmm6_5, zmm6_5, 0x27)
zmm6_5.d = zmm5_1.d
zmm6_5 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0x39)
rbx_5[1] = zmm6_5
*(rbx_5 + 0x38) = data_14395fa10
rbx_5[4].q = rax_55
int64_t rax_132 = data_14395f4d0
*rbx_5 = zmm9
*(rbx_5 + 0x48) = rax_132
rbx_5[5] = *rsi_2
rbx_5[6] = rsi_2[1]
rbx_5[7] = rsi_2[2]
rbx_5[8] = rsi_2[3]
var_308.o = zmm6_5
rbx_5[9] = rsi_2[4]
var_308.o = zmm9
sub_14142a1f0(&rbx_5[0xa])
sub_1405d16e0(&rbx_5[0xe], *(arg4 + 0x10))
void*** rsi_3 = *r12_4
int64_t* rdx_48 = *(arg1 + 8)
var_308 = rsi_3
int16_t var_300 = 0
void*** rax_133 = sub_14081d830(0x28, rdx_48, 1, 0)

if (rax_133 == 0)
    rax_133 = nullptr
else
    int128_t zmm0_20 = var_308.o
    rax_133[1] = rsi_3[1]
    *rax_133 = &data_142f285c0
    rax_133[2] = 0
    *(rax_133 + 0x18) = zmm0_20

rbx_5[0x11].q = rax_133
uint128_t* rsi_4 = r12_4[1]
int64_t* rdx_49 = *(arg1 + 8)
var_308 = rsi_4
int16_t var_300_1 = 0
void*** rax_134
int512_t zmm6_6
rax_134, zmm6_6 = sub_14081d830(0x28, rdx_49, 1, 0)

if (rax_134 == 0)
    rax_134 = nullptr
else
    int128_t zmm0_21 = var_308.o
    rax_134[1] = *(rsi_4 + 8)
    *rax_134 = &data_142f285c0
    rax_134[2] = 0
    *(rax_134 + 0x18) = zmm0_21

*(rbx_5 + 0x118) = rax_134
rbx_5[0x12].q = 0
*(rbx_5 + 0x128) = 0
char rcx_56 = sub_1419a2ec0(*(arg4 + 0x5150), &var_238, &data_143ed6cb0, r8 - 1)
zmm6_6.o = zx.o(0)
zmm7 = var_238.o
var_308.d = divs.dp.d(sx.q(var_264 - var_260_1 - 1 + var_2e8), var_2e8)
var_308:4.d = divs.dp.d(sx.q(var_250 - var_248 - 1 + var_2e4), var_2e4)
var_328 = sub_1414571d0(rcx_56)
sub_141998c50(zmm7.q, &data_143ed7f50, rbx_5)
uint128_t* zmm0_22 = var_308
int64_t* rdx_54 = *(arg1 + 8)
var_2b8.q = rbx_5
var_2b8 = zmm7
int32_t var_298_4 = 1
var_2a0_1.q = zmm0_22
void*** rax_147
char rcx_58
rax_147, rcx_58 = sub_14081d830(0x60, rdx_54, 1, 0)
void*** rsi_5 = rax_147

if (rax_147 == 0)
    rsi_5 = nullptr
else
    var_308 = rbx_5
    sub_1414571d0(rcx_58)
    var_300_1.q = &data_143ed7f80
    var_308.o = var_308.o
    sub_141992bd0(rsi_5, &var_338, &var_308, 2)
    uint128_t zmm0_24 = var_2b8
    *rsi_5 = &data_142f86110
    *(rsi_5 + 0x38) = zmm0_24
    *(rsi_5 + 0x48) = rcx_47.o
    rsi_5[0xb] = var_298_4.q

sub_1419968d0(arg1, rsi_5)

if (rcx_2 == 0)
    zmm8 = 0x3f800000

uint128_t zmm0_25 = _mm_cvtepi32_ps(zx.o(var_2e0))
*arg5 = zmm8.d
arg5[1] = zmm0_25.d
__security_check_cookie(rax_1 ^ &var_358)
return arg5

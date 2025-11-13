// 函数: sub_14134cc40
// 地址: 0x14134cc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_48 = zmm7
uint128_t zmm8
uint128_t var_58 = zmm8
uint128_t zmm9
uint128_t var_68 = zmm9
uint128_t zmm10
uint128_t var_78 = zmm10
int128_t zmm11
int128_t var_88 = zmm11
int128_t zmm12
int128_t var_98 = zmm12
int128_t zmm13
int128_t var_a8 = zmm13
uint128_t zmm14
uint128_t var_b8 = zmm14
int128_t zmm15
int128_t var_c8 = zmm15
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t i_1 = 2
int32_t var_1b8_1

if (*arg5 - 5 u> 1)
    var_1b8_1 = 1
else
    var_1b8_1 = 2
    
    if (sub_1413197f0() == 0)
        var_1b8_1 = 1

char var_1d7_1

if (*arg6 != 0)
    var_1d7_1 = 0

if (*arg6 == 0 || *(arg4 + 0xd64) != 0)
    var_1d7_1 = 1

int32_t rax_5 = *arg5
int64_t rdi_2 = *(*(arg5 + 0x30) + 0x44)
uint32_t rsi_1 = (rdi_2 u>> 0x20).d
int32_t var_1b0
int64_t var_188
int32_t rbx_1
int32_t rdi_3
uint32_t r11

if (rax_5 == 1 || rax_5 == 6 || rax_5 == 2)
    int32_t rcx = arg5[0xb]
    int32_t r8_1 = arg5[0xa] - arg5[8]
    var_1b0 = divs.dp.d(sx.q(arg5[9] - arg5[7] - 1 + rcx), rcx)
    int32_t var_1ac_1 = divs.dp.d(sx.q(rcx - 1 + r8_1), rcx)
    sub_1419a97d0(&var_1b0, &var_188)
    rbx_1 = var_188.d
    r11 = var_188:4.d
    
    if (rdi_2.d s>= rbx_1)
        rbx_1 = rdi_2.d
    
    rdi_3 = *arg5
    
    if (rsi_1 s>= r11)
        r11 = rsi_1
else
    var_1b0.q = rdi_2
    rbx_1 = rdi_2.d
    uint32_t var_1ac
    r11 = var_1ac
    rdi_3 = rax_5

int32_t r10 = arg5[0xb]
uint128_t zmm0 = *(arg5 + 0xc)
var_1b0 = r10
int64_t r8_2 = var_1b0.q
uint128_t var_1c8 = zmm0
zmm0 = *(arg5 + 0x1c)
uint32_t r9_1 = (r8_2 u>> 0x20).d
int64_t rcx_2 = zmm0:8.q
uint32_t var_120 = r11
uint128_t var_138 = data_1439c7ad8
int32_t temp0_3 = divs.dp.d(sx.q((rcx_2 - 1).d + r10), r10)
int32_t var_118 = 1
int32_t var_128 = data_1439c7ae8
int32_t temp0_4 = divs.dp.d(sx.q((rcx_2 u>> 0x20).d - 1 + r9_1), r9_1)
int32_t var_114 = 0x10000
int64_t rax_24 = zmm0.q
var_1b0.q = rax_24
int32_t temp0_5 = divs.dp.d(sx.q(rax_24.d), r10)
wchar16 const* const var_f8 = u"UnknownTexture2D"
int16_t var_110 = 1
int64_t var_10c = 0xa
var_188.d = divs.dp.d(sx.q(r10), (r8_2 u>> 0x20).d)
bool cond:1 = *(arg5 + 5) != 0
__builtin_memset(arg1, 0, 0x18)
int16_t var_100 = 0
int32_t var_11c = 0
int32_t rax_30 = 0x10008

if (cond:1)
    rax_30 = 0x10009

int16_t var_f0 = 1
int32_t var_104 = rax_30
char var_ee = 0
int64_t rdi_4 = (&data_142f64848)[zx.q(rdi_3)]
*arg1 = sub_141188e50(arg2, &var_138, rdi_4, 2)

if (var_1b8_1 == 2)
    arg1[1] = sub_141188e50(arg2, &var_138, rdi_4, 2)

char rcx_7 = *(arg5 + 6)
char var_1d6 = rcx_7

if (rcx_7 != 0)
    int32_t r9_2 = arg5[2]
    
    if (r9_2 == 0)
        r9_2 = *(*(arg5 + 0x30) + 0x5c)
    
    var_1b0.q = rbx_1.q
    int32_t temp38_1
    int32_t temp39_1
    temp38_1:temp39_1 = sx.q(rbx_1)
    var_128 = data_1439c7ae8
    var_10c.d = r9_2
    int16_t var_100_1 = 0
    int32_t temp40_1
    int32_t temp41_1
    temp40_1:temp41_1 = sx.q(r10)
    int32_t var_124_1 = (temp39_1 - temp38_1) s>> 1
    var_138 = data_1439c7ad8
    var_120 = (temp41_1 - temp40_1) s>> 1
    int32_t var_11c_1 = 0
    wchar16 const* const var_f8_1 = u"UnknownTexture2D"
    int32_t var_118_1 = 1
    int32_t var_114_1 = 0x10000
    int16_t var_110_1 = 1
    var_10c:4.d = 0
    int32_t var_104_1 = 0x80010008
    int16_t var_f0_1 = 1
    char var_ee_1 = 0
    arg1[2] = sub_141188e50(arg2, &var_138, u"SceneColorHalfRes", 0)
    var_1d6 = *(arg5 + 6)

int32_t r10_1 = *arg5
char var_1d5 = arg5[1].b
int32_t var_1b8_2 = 0
var_1b0 = r10_1
char var_1d8 = 1

if (((r10_1 - 1) & 0xfffffffa) == 0 && r10_1 != 5)
    if (*(data_143ebbec8 + 4) == 0)
        var_1d8 = 0
    
    if (*(data_143ebbec8 + 4) != 0 || r10_1 != 1)
        var_1d8 = 1
    
    int32_t rax_50 = var_1c8:8.d - var_1c8.d
    int32_t rdx_13 = zmm0:8.d - zmm0.d
    int32_t r8_8
    int32_t r9_4
    
    if (rax_50 s<= rdx_13)
        r8_8 = var_1c8:0xc.d - var_1c8:4.d
        r9_4 = zmm0:0xc.d - zmm0:4.d
    
    if (rax_50 s> rdx_13 || r8_8 s> r9_4)
        var_1b8_2 = 2
    else
        int32_t r11_1 = rax_50 * 0x64
        
        if (r11_1 s< rdx_13 * 0x32 && r8_8 * 0x64 s< r9_4 * 0x32 && r10_1 == 2)
            var_1b8_2 = 3
        else if (r11_1 s< rdx_13 * 0x47 && r8_8 * 0x64 s< r9_4 * 0x47)
            var_1b8_2 = 1

uint128_t* rax_55 = sub_14081d830(0x280, arg2[1], 1, 0)
uint128_t* rsi_2 = rax_55

if (rax_55 == 0)
    rsi_2 = nullptr
else
    *rax_55 = 0
    *(rax_55 + 8) = 0
    *(rax_55 + 0xc) = 0x3f800000
    *(rax_55 + 0x14) = 0
    *(rax_55 + 0x1c) = 0x3f800000
    __builtin_memset(rax_55 + 0x188, 0, 0xb0)
    rax_55[0x12].q = 0
    *(rax_55 + 0x128) = 0
    *(rax_55 + 0x12c) = 0x3f800000
    *(rax_55 + 0x134) = 0
    *(rax_55 + 0x13c) = 0x3f800000
    *(rax_55 + 0x144) = 0
    *(rax_55 + 0x14c) = 0x3f800000
    *(rax_55 + 0x154) = 0
    *(rax_55 + 0x15c) = 0x3f800000
    *(rax_55 + 0x164) = 0
    *(rax_55 + 0x16c) = 0x3f800000
    *(rax_55 + 0x174) = 0
    *(rax_55 + 0x17c) = 0x3f800000
    rax_55[0x24].q = 0
    *(rax_55 + 0x248) = 0
    *(rax_55 + 0x24c) = 0x3f800000
    __builtin_memset(rax_55 + 0x268, 0, 0x18)

memset(rsi_2, 0, 0x280)
int128_t zmm0_2 = *(arg5 + 0xc)
int32_t rcx_13 = *arg5
uint64_t rdi_5 = *(*(arg5 + 0x30) + 0x44)
var_1c8.q = rdi_5
uint128_t var_178 = *(arg5 + 0x1c)

if (rcx_13 == 1 || rcx_13 == 6 || rcx_13 == 2)
    rdi_5 = zx.q(rdi_5.d)
else
    sub_1413687b0(rsi_2, arg5, *(arg4 + 0x4974))

zmm9 = _mm_cvtepi32_ps(zx.o(arg5[0xb]))
zmm11.d = 1f f/ zmm9.d
sub_1405d16e0(&rsi_2[0x23], arg4[2])
var_138:1.b = 0
*(rsi_2 + 0x2c) = *(data_143ebbdb8 + 4)
rsi_2[3].d = zx.d(var_1d7_1)
rsi_2[0x18] = *arg3
rsi_2[0x19] = arg3[1]
rsi_2[0x1a] = arg3[2]
rsi_2[0x1b] = arg3[3]
rsi_2[0x1c] = arg3[4]
*(rsi_2 + 0x218) = data_14395fa10
rsi_2[0x22].q = data_14395fa10
void* rcx_18 = *(arg3 + 8)
var_138:4.q = 0
var_138:0xc.d = 0
var_120.b = 0
var_138:2.b = *(rcx_18 + 0x56)
var_128.q = rcx_18

if (*(rcx_18 + 0x54) != 0)
    var_138:0xc.d = *(rcx_18 + 0x4c)

var_138.b = 0x2c
void*** rax_65 = sub_14081d830(0x38, arg2[1], 1, 0)
uint128_t zmm0_4

if (rax_65 != 0)
    zmm0_4 = var_138
    rax_65[1] = *(rcx_18 + 8)
    *(rax_65 + 0x18) = zmm0_4
    *rax_65 = &data_142f34e88
    rax_65[2] = 0
    *(rax_65 + 0x28) = var_128.o

bool cond:2 = rsi_2[0x19].q != 0
*(rsi_2 + 0x228) = rax_65

if (not(cond:2))
    rsi_2[0x19].q = sub_1410fccd0(arg2, &data_1439b70c8, u"External", 0)

int32_t r9_5 = var_188.d
zmm0_4 = _mm_cvtepi32_ps(zx.o(var_1c8:4.d))
uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(rdi_5.d))
zmm13.d = 1f f/ zmm0_4.d
zmm12.d = 1f f/ zmm1_2.d
_mm_shuffle_ps(zmm1_2, zmm1_2, 0xe1)
zmm1_2.d = zmm0_4.d
_mm_shuffle_ps(zmm1_2, zmm1_2, 0xc6)
zmm1_2.d = zmm12.d
_mm_shuffle_ps(zmm1_2, zmm1_2, 0x27)
zmm1_2.d = zmm13.d
zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x39)
rsi_2[0x12] = zmm1_2
uint128_t var_1c8_1 = zmm1_2
*(rsi_2 + 0x1d8) = *(arg5 + 0x30)
rsi_2[0x1e].q = data_14395fa10
*(rsi_2 + 0x1e8) = *(arg5 + 0x38)
int64_t rax_70 = data_14395fa10
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(temp0_5))
rsi_2[0x1f].q = rax_70
int32_t rax_72 = temp0_3 - temp0_5
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t rax_74 = temp0_4 - r9_5
zmm8 = _mm_cvtepi32_ps(zx.o(rax_72))
var_188.d = rax_74
zmm0_4.d = 1f f/ zmm8.d
zmm14 = _mm_cvtepi32_ps(zx.o(rax_74))
_mm_shuffle_ps(zmm8, zmm8, 0xe1)
zmm1_2.d = zmm14.d
_mm_shuffle_ps(zmm1_2, zmm1_2, 0xc6)
zmm1_2.d = zmm0_4.d
uint128_t zmm2
zmm2.d = 1f f/ zmm14.d
_mm_shuffle_ps(zmm1_2, zmm1_2, 0x27)
zmm1_2.d = zmm2.d
zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x39)
uint128_t var_1c8_2 = zmm1_2
rsi_2[0x13] = zmm1_2
zmm3.d = _mm_cvtepi32_ps(zx.o(r9_5)).d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm1_2 = _mm_cvtepi32_ps(zx.o(temp0_3))
zmm2 = _mm_cvtepi32_ps(zx.o(temp0_4))
zmm3.d = zmm1_2.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = zmm2.d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
uint128_t var_1c8_3 = zmm3
rsi_2[0x14] = zmm3
uint128_t zmm1_3

if (var_1d7_1 == 0)
    int64_t rax_76 = arg6[3]
    int32_t r9_7 = arg6[4].d - rax_76.d
    int64_t rcx_25 = arg6[2]
    uint32_t r8_13 = (rax_76 u>> 0x20).d
    int32_t r10_3 = *(arg6 + 0x24) - r8_13
    int32_t var_194
    var_194.q = rcx_25
    uint128_t zmm4_1
    zmm4_1.d = 1f f/ _mm_cvtepi32_ps(zx.o(rcx_25.d)).d
    zmm1_2.d = _mm_cvtepi32_ps(zx.o(r9_7)).d f* 0.5f
    float zmm5_1 = 1f f/ _mm_cvtepi32_ps(zx.o((rcx_25 u>> 0x20).d)).d
    uint128_t zmm6_1
    zmm6_1.d = zmm1_2.d f* zmm4_1.d
    zmm3 = _mm_cvtepi32_ps(zx.o(rax_76.d))
    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
    zmm3.d = zmm3.d f+ zmm1_2.d
    zmm0_4 = _mm_cvtepi32_ps(zx.o(r8_13))
    zmm2.d = _mm_cvtepi32_ps(zx.o(neg.d(r10_3))).d f* 0.5f
    zmm1_2.d = _mm_cvtepi32_ps(zx.o(r10_3)).d f* 0.5f
    zmm2.d = zmm2.d f* zmm5_1
    zmm1_2.d = zmm1_2.d f+ zmm0_4.d
    zmm3.d = zmm3.d f* zmm4_1.d
    zmm6_1.d = zmm2.d
    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc6)
    zmm6_1.d = zmm3.d
    _mm_shuffle_ps(zmm6_1, zmm6_1, 0x27)
    zmm1_2.d = zmm1_2.d f* zmm5_1
    zmm6_1.d = zmm1_2.d
    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x39)
    int64_t var_1c8_4 = zmm6_1.q
    rsi_2[0x17] = zmm6_1
    int32_t r8_14 = arg5[0xb]
    int32_t temp0_39 = divs.dp.d(sx.q(rax_76.d), r8_14)
    int32_t temp0_40 = divs.dp.d(sx.q(rax_76:4.d), r8_14)
    int32_t temp0_41 = divs.dp.d(sx.q(r9_7 - 1 + r8_14), r8_14)
    int32_t temp0_42 = divs.dp.d(sx.q(r8_14 - 1 + r10_3), r8_14)
    int32_t temp0_43 = divs.dp.d(sx.q(rcx_25.d), r8_14)
    int32_t var_190
    int32_t var_190_1 = divs.dp.d(sx.q(var_190), r8_14)
    zmm1_2.d = 1f f/ _mm_cvtepi32_ps(zx.o(temp0_41)).d
    zmm3.d = 1f f- zmm1_2.d
    zmm7 = _mm_cvtepi32_ps(zx.o(temp0_43))
    rsi_2[2].d = zmm3.d
    zmm0_4 = _mm_cvtepi32_ps(zx.o(temp0_42))
    zmm4_1 = _mm_cvtepi32_ps(zx.o((temp0_43.q u>> 0x20).d))
    zmm1_2.d = 1f f/ zmm0_4.d
    zmm2.d = 1f f- zmm1_2.d
    zmm3 = _mm_cvtepi32_ps(zx.o(temp0_39))
    *(rsi_2 + 0x24) = zmm2.d
    zmm6_1.d = 1f f/ zmm7.d
    zmm3.d = zmm3.d f+ 0.5f
    _mm_shuffle_ps(zmm7, zmm7, 0xe1)
    zmm7.d = zmm4_1.d
    zmm5_1 = 1f f/ zmm4_1.d
    _mm_shuffle_ps(zmm7, zmm7, 0xc6)
    zmm3.d = zmm3.d f* zmm6_1.d
    zmm7.d = zmm6_1.d
    zmm0_4 = _mm_cvtepi32_ps(zx.o(temp0_40))
    _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    zmm1_2 = _mm_cvtepi32_ps(zx.o(temp0_39 + temp0_41))
    zmm0_4.d = zmm0_4.d f+ 0.5f
    zmm2 = _mm_cvtepi32_ps(zx.o(temp0_40 + temp0_42))
    zmm1_2.d = zmm1_2.d f- 0.5f
    _mm_shuffle_ps(zmm7, zmm7, 0x27)
    zmm0_4.d = zmm0_4.d f* zmm5_1
    zmm2.d = zmm2.d f- 0.5f
    zmm7.d = zmm5_1
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x39)
    zmm3.d = zmm0_4.d
    zmm1_2.d = zmm1_2.d f* zmm6_1.d
    _mm_shuffle_ps(zmm3, zmm3, 0xc6)
    zmm2.d = zmm2.d f* zmm5_1
    zmm3.d = zmm1_2.d
    _mm_shuffle_ps(zmm3, zmm3, 0x27)
    zmm3.d = zmm2.d
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
    uint128_t var_1c8_5 = zmm3
    uint128_t var_1c8_6 = zmm7
    rsi_2[0x16] = zmm3
    rsi_2[0x15] = zmm7
    *(rsi_2 + 0x1f8) = sub_1410fccd0(arg2, arg6, u"External", 0)
    
    if (arg6[1] != 0)
        *(rsi_2 + 0x208) = sub_1410fccd0(arg2, &arg6[1], u"External", 0)
else
    void*** rax_75 = sub_1410fccd0(arg2, &data_1439b70c8, u"External", 0)
    zmm1_3 = data_142d3f670
    rsi_2[0x17] = data_142d3f670
    rsi_2[2].q = 0
    *(rsi_2 + 0x1f8) = rax_75
    rsi_2[0x16] = zx.o(0)
    rsi_2[0x19].q = rax_75
    rsi_2[0x15] = zmm1_3
    *(rsi_2 + 0x208) = rax_75

int32_t rdx_31 = zmm0_2.d
int32_t rcx_29 = zmm0_2:4.d
rsi_2[0x20].q = data_14395f4d0
uint128_t zmm0_5
zmm0_5.d = zmm9.d f* 0.5f
rsi_2[0x21].q = data_14395f4d0
zmm3.d = zmm8.d f- zmm0_5.d
zmm2.d = zmm14.d f- zmm0_5.d
zmm7 = _mm_cvtepi32_ps(zx.o(rdx_31))
zmm3.d = zmm3.d f/ zmm8.d
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm2.d = zmm2.d f/ zmm14.d
zmm1_3.d = zmm9.d f/ _mm_cvtepi32_ps(zx.o(zmm0:8.d - zmm0.d)).d
zmm3.d = zmm2.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1_3.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm1_3.d = zmm7.d f* zmm11.d
zmm9.d = zmm9.d f/ _mm_cvtepi32_ps(zx.o(zmm0:0xc.d - zmm0:4.d)).d
zmm1_3.d = zmm1_3.d f* zmm12.d
zmm3.d = zmm9.d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
rsi_2[1] = zmm3
zmm0_5.d = (*(arg4 + 0x4fd4)).d f/ arg4[0x9a8].d
void*** var_1c8_7 = zmm3.q
*(rsi_2 + 0x28) = zmm0_5.d
zmm9 = _mm_cvtepi32_ps(zx.o(zmm0_2:8.d - rdx_31))
zmm8 = _mm_cvtepi32_ps(zx.o(zmm0_2:0xc.d - rcx_29))
zmm3.d = zmm9.d f* zmm11.d
zmm0_5.d = zmm8.d f* zmm11.d
zmm3.d = zmm3.d f* zmm12.d
zmm0_5.d = zmm0_5.d f* zmm13.d
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
uint128_t zmm6_2 = _mm_cvtepi32_ps(zx.o(rcx_29))
zmm3.d = zmm0_5.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1_3.d
zmm2.d = zmm6_2.d f* zmm11.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm2.d = zmm2.d f* zmm13.d
zmm3.d = zmm2.d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
uint128_t var_1a8_2 = zmm3
*rsi_2 = zmm3
void*** rax_111
float zmm6_3
rax_111, zmm6_3 = sub_14141f4d0(arg2, arg4)
rsi_2[0x1d].q = rax_111
zmm3 = _mm_cvtepi32_ps(zx.o(arg5[0xb]))
zmm10.d = 1f f/ zmm3.d
uint128_t zmm1_4
zmm1_4.d = zmm10.d f* *(arg4 + 0x4974)
float zmm0_6 = zmm10.d f* arg4[0x92f].d
int32_t rax_113 = var_178:8.d - var_178.d
*(rsi_2 + 0x258) = zmm1_4.d
*(rsi_2 + 0x25c) = zmm0_6
zmm2.d = zmm9.d f* zmm10.d
void*** rax_114 = *arg1
zmm1_4 = _mm_cvtepi32_ps(zx.o(rax_113))
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm0_6 = zmm9.d f/ zmm1_4.d
zmm1_4.d = zmm1_4.d f/ zmm9.d
rsi_2[0x26].d = zmm0_6
*(rsi_2 + 0x264) = zmm1_4.d
zmm1_4.d = zmm3.d f/ zmm9.d
zmm3.d = zmm3.d f/ zmm8.d
zmm7.d = zmm7.d f* zmm10.d
zmm2.d = zmm8.d f* zmm10.d
_mm_shuffle_ps(zmm2, zmm2, 0xc6)
zmm2.d = zmm1_4.d
rsi_2[0x25].d = zmm7.d
_mm_shuffle_ps(zmm2, zmm2, 0x27)
zmm2.d = zmm3.d
*(rsi_2 + 0x254) = zmm6_3 f* zmm10.d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
uint128_t var_1a8_3 = zmm2
rsi_2[0x24] = zmm2
var_1a8_3.q = rax_114
var_1a8_3:8.w = 0
void*** rax_115
void** const rcx_31
int32_t r9_9
int512_t zmm6_4
rax_115, rcx_31, r9_9, zmm6_4 = sub_14081d830(0x28, arg2[1], 1, 0)

if (rax_115 != 0)
    rcx_31 = rax_114[1]
    rax_115[1] = rcx_31
    rax_115[2] = 0
    *rax_115 = &data_142f285c0
    *(rax_115 + 0x18) = var_1a8_3

*(rsi_2 + 0x268) = rax_115
void*** rax_116 = arg1[1]

if (rax_116 != 0)
    var_1a8_3.q = rax_116
    var_1a8_3:8.w = 0
    void*** rax_117
    rax_117, rcx_31, r9_9, zmm6_4 = sub_14081d830(0x28, arg2[1], 1, 0)
    
    if (rax_117 != 0)
        rax_117[1] = rax_116[1]
        rcx_31 = &data_142f285c0
        *rax_117 = &data_142f285c0
        rax_117[2] = 0
        *(rax_117 + 0x18) = var_1a8_3
    
    rsi_2[0x27].q = rax_117

void*** rax_118 = arg1[2]
var_1c8_7 = rax_118

if (rax_118 != 0)
    var_1a8_3.q = rax_118
    var_1a8_3:8.w = 0
    rax_118, rcx_31, r9_9, zmm6_4 = sub_14081d830(0x28, arg2[1], 1, 0)
    
    if (rax_118 != 0)
        rax_118[1] = var_1c8_7[1]
        rcx_31 = &data_142f285c0
        *rax_118 = &data_142f285c0
        rax_118[2] = 0
        *(rax_118 + 0x18) = var_1a8_3
    
    *(rsi_2 + 0x278) = rax_118

char var_1d6_1 = neg.b(var_1d6)
char var_1d8_1 = neg.b(var_1d8)
char temp80 = var_1d5
var_1d5 = neg.b(var_1d5)
int32_t r9_12 = (sbb.d(r9_9, r9_9, temp80 != 0) & 7) + ((sbb.d(rcx_31.d, rcx_31.d, var_1d8 != 0)
    & 4) + (sbb.d(rax_118.d, rax_118.d, var_1d6 != 0) & 8) + var_1b8_2) * 0xe + var_1b0
char rcx_41 = sub_1419a2ec0(arg4[0xa2a], &var_178, &data_143ebd710, r9_12)
zmm6_4.o = zx.o(0)
zmm7 = var_178
int32_t temp81
int32_t temp82
temp81:temp82 = sx.q(rax_72 + 7)
var_1c8_7.d = (temp82 + (temp81 & 7)) s>> 3
int32_t temp83
int32_t temp84
temp83:temp84 = sx.q(var_188.d + 7)
var_1c8_7:4.d = (temp84 + (temp83 & 7)) s>> 3
int128_t var_1a8_4 = sub_14135ab80(rcx_41)
sub_141998c50(zmm7.q, &data_143ec2010, rsi_2)
int64_t* rdx_41 = arg2[1]
var_138.q = rsi_2
var_138 = zmm7
int32_t var_118_2 = 1
var_120.q = var_1c8_7
void*** rax_134
char rcx_43
rax_134, rcx_43 = sub_14081d830(0x60, rdx_41, 1, 0)
void*** rdi_9 = rax_134

if (rax_134 == 0)
    rdi_9 = nullptr
else
    var_178.q = rsi_2
    sub_14135ab80(rcx_43)
    var_178:8.q = &data_143ec2040
    var_178 = var_178
    sub_141992bd0(rdi_9, &var_1d5, &var_178, 2)
    uint128_t zmm0_12 = var_138
    *rdi_9 = &data_142f64d50
    *(rdi_9 + 0x38) = zmm0_12
    *(rdi_9 + 0x48) = var_128.o
    rdi_9[0xb] = var_118_2.q

sub_1419968d0(arg2, rdi_9)

if ((*(arg4 + 0x497c) & 1) == 0)
    int64_t* rdi_10 = arg7
    int64_t i
    
    do
        int64_t* rcx_46 = *rdi_10
        *rdi_10 = 0
        
        if (rcx_46 != 0)
            (*(*rcx_46 + 0x38))(rcx_46)
        
        rdi_10 = &rdi_10[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    int64_t r15_1 = sx.q(arg2[0x2d].d)
    var_178.q = *arg1
    var_178:8.q = arg7
    char var_168_1 = 1
    int32_t rax_138 = (r15_1 + 1).d
    arg2[0x2d].d = rax_138
    
    if (rax_138 s> *(arg2 + 0x16c))
        sub_14119a720(&arg2[0x2c], r15_1.d)
    
    int64_t rax_139 = arg2[0x2c]
    int64_t rcx_48 = r15_1 * 3
    *(rax_139 + (rcx_48 << 3)) = var_178
    *(rax_139 + (rcx_48 << 3) + 0x10) = var_168_1.q
    int64_t rax_140 = arg1[1]
    
    if (rax_140 != 0)
        int64_t r15_2 = sx.q(arg2[0x2d].d)
        var_178.q = rax_140
        var_178:8.q = &arg7[1]
        char var_168_2 = 1
        int32_t rax_142 = (r15_2 + 1).d
        arg2[0x2d].d = rax_142
        
        if (rax_142 s> *(arg2 + 0x16c))
            sub_14119a720(&arg2[0x2c], r15_2.d)
        
        int64_t rax_143 = arg2[0x2c]
        int64_t rcx_50 = r15_2 * 3
        *(rax_143 + (rcx_50 << 3)) = var_178
        *(rax_143 + (rcx_50 << 3) + 0x10) = var_168_2.q
    
    arg7[3].d = zmm0.d
    *(arg7 + 0x1c) = zmm0:4.d
    arg7[4].d = zmm0:8.d
    *(arg7 + 0x24) = zmm0:0xc.d
    arg7[2].d = rbx_1 * arg5[0xb]
    *(arg7 + 0x14) = r11 * arg5[0xb]

__security_check_cookie(rax_1 ^ &var_1f8)
return arg1

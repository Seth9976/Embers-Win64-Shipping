// 函数: sub_14134aab0
// 地址: 0x14134aab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t rax_2 = *(arg3 + 0x18)
int64_t rbx = *(arg3 + 0x30)
int32_t var_194 = rax_2.d
int32_t var_190 = rax_2:4.d
int32_t var_198 = data_143f02318
int32_t var_188 = 1
int16_t var_180 = 1
int32_t var_178 = data_143ed33a8
wchar16 const* const var_168 = u"UnknownTexture2D"
int16_t var_170 = 0
uint128_t var_1a8 = data_143f02308
int32_t var_18c = 0
int32_t var_184 = 0x10000
int32_t var_17c = 0x1a
int32_t var_174 = 0x10008
int16_t var_160 = 1
char var_15e = 0
void*** rax_5 = sub_141188e50(arg1, &var_1a8, u"VelocityFlat", 0)
int32_t rcx = data_143f02318
int32_t var_190_1 = rbx:4.d
int16_t var_170_1 = 0
int32_t var_188_1 = 1
int16_t var_180_1 = 1
int32_t var_178_1 = data_143ed33ac
wchar16 const* const var_168_1 = u"UnknownTexture2D"
var_1a8 = data_143f02308
int32_t var_194_1 = rbx.d
int32_t var_18c_1 = 0
int32_t var_184_1 = 0x10000
int32_t var_17c_1 = 0xa
int32_t var_174_1 = 0x10008
int16_t var_160_1 = 1
char var_15e_1 = 0
void*** rax_8 = sub_141188e50(arg1, &var_1a8, u"VelocityTile", 0)
void* r8 = *(arg2 + 0x15a8)
uint128_t zmm0_2 = zx.o(*(arg3 + 0x14) - *(arg3 + 0xc))
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x10) - *(arg3 + 8)))
zmm0_2 = _mm_cvtepi32_ps(zmm0_2)
uint128_t zmm3

if (r8 == 0)
    zmm3 = 0x3f800000
else
    zmm3 = *(r8 + 0x1ac)

zmm3.d = zmm3.d f* *(arg2 + 0x1284)
int64_t* rdx_4 = *(arg1 + 8)
uint128_t zmm2
zmm2.d = zmm4.d f* 0.5f
zmm0_2.d = zmm0_2.d f/ zmm4.d
int32_t var_1b8 = zmm0_2.d
zmm0_2.d = zmm3.d f* 0.5f
zmm3.d = zmm3.d f* 0.03125f
zmm0_2.d = zmm0_2.d f* zmm2.d
zmm3.d = zmm3.d f* zmm2.d
zmm2.d = __andps_xmmxud_memxud(zmm2, data_142d3f770).d f* *(arg2 + 0x1288)
int32_t var_1b4 = zmm0_2.d
int32_t var_1b0 = zmm3.d
zmm2.d = zmm2.d f* 0.00999999978f
int32_t var_1ac = zmm2.d
int64_t* rax_9 = sub_14081d830(0xb0, rdx_4, 1, 0)
int64_t* rdi = rax_9

if (rax_9 == 0)
    rdi = nullptr
else
    *rdi = 0
    __builtin_memset(&rdi[0x12], 0, 0x20)

memset(rdi, 0, 0xb0)
int128_t zmm8 = var_1b8.o
*(rdi + 0x10) = zmm8
sub_1405d16e0(rdi, *(arg2 + 0x10))
rdi[4] = *(arg3 + 0xc0)
rdi[5] = *(arg3 + 0xc8)
rdi[6] = *(arg3 + 0xd0)
rdi[7] = *(arg3 + 0xd8)
rdi[8].d = *(arg3 + 0xe0)
*(rdi + 0x44) = *(arg3 + 0xe4)
rdi[9].d = *(arg3 + 0xe8)
*(rdi + 0x4c) = *(arg3 + 0xec)
rdi[0xa] = *(arg3 + 0xf0)
rdi[0xb] = *(arg3 + 0xf8)
rdi[0xc] = *(arg3 + 0x100)
rdi[0xd] = *(arg3 + 0x108)
rdi[0xe] = *(arg3 + 0x110)
rdi[0xf] = *(arg3 + 0x118)
rdi[0x10] = *(arg3 + 0x120)
rdi[0x11] = *(arg3 + 0x128)
rdi[0x13] = arg4
rdi[0x12] = arg5
var_1b8.q = rax_5
var_1b0.w = 0
void*** rax_16 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_16 != 0)
    rax_16[1] = rax_5[1]
    rax_16[2] = 0
    *(rax_16 + 0x18) = var_1b8.o
    *rax_16 = &data_142f285c0

rdi[0x14] = rax_16
var_1b8.q = rax_8
var_1b0.w = 0
void*** rax_17
int512_t zmm6
rax_17, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_17 != 0)
    rax_17[1] = rax_8[1]
    *rax_17 = &data_142f285c0
    rax_17[2] = 0
    *(rax_17 + 0x18) = var_1b8.o

rdi[0x15] = rax_17
uint128_t var_78
char rcx_9 = sub_1419a2ec0(*(arg2 + 0x5150), &var_78, &data_143ebc750, 0)
zmm6.o = zx.o(0)
uint128_t zmm7 = var_78
int32_t temp0_3
int32_t temp1
temp0_3:temp1 = sx.q(*(arg3 + 0x28) - *(arg3 + 0x20) + 0xf)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg3 + 0x2c) - *(arg3 + 0x24) + 0xf)
int32_t var_1b4_1 = (temp3 + (temp2 & 0xf)) s>> 4
uint128_t var_158 = sub_141359760(rcx_9)
sub_141998c50(zmm7.q, &data_143ec0a00, rdi)
int64_t* rdx_13 = *(arg1 + 8)
var_1a8.q = rdi
var_1a8 = zmm7
int32_t var_188_2 = 1
var_190_1.q = ((temp1 + (temp0_3 & 0xf)) s>> 4).q
void*** rax_30
char rcx_11
rax_30, rcx_11 = sub_14081d830(0x60, rdx_13, 1, 0)
void*** r15_1 = rax_30
void var_1c8
int32_t var_1b8_1

if (rax_30 == 0)
    r15_1 = nullptr
else
    var_1b8_1.q = rdi
    sub_141359760(rcx_11)
    var_1b0.q = &data_143ec0a30
    var_158 = var_1b8_1.o
    sub_141992bd0(r15_1, &var_1c8, &var_158, 2)
    uint128_t zmm0_8 = var_1a8
    *r15_1 = &data_142f64c70
    *(r15_1 + 0x38) = zmm0_8
    *(r15_1 + 0x48) = rcx.o
    r15_1[0xb] = var_188_2.q

sub_1419968d0(arg1, r15_1)
void* rcx_14 = *(arg2 + 0x15a8)
uint128_t zmm0_9
zmm0_9.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x10) - *(arg3 + 8))).d f* *(arg2 + 0x1288)
zmm0_9.d = zmm0_9.d f* 0.000312499993f

if (rcx_14 == 0 || *(rcx_14 + 0x1218) != 1)
    rcx_14.b = 0
else
    rcx_14.b = 1

if (*(data_143ebaba8 + 4) == 1 || rcx_14.b != 0 || zmm0_9.d f> 3f != 0)
    rdi.b = 1
else
    rdi.b = 0

int32_t rax_34 = data_143f02318
int32_t var_190_2 = rbx:4.d
int16_t var_170_2 = 0
int32_t var_188_3 = 1
int16_t var_180_2 = 1
int32_t var_178_2 = data_143ed33b0
int32_t rax_37 = 0x10008

if (rdi.b != 0)
    rax_37 = 9

var_1a8 = data_143f02308
int32_t var_174_2 = rax_37
int32_t var_194_2 = rbx.d
wchar16 const* const var_168_2 = u"UnknownTexture2D"
int32_t var_18c_2 = 0
int32_t var_184_2 = 0x10000
int32_t var_17c_2 = 0xa
int16_t var_160_2 = 1
char var_15e_2 = 0
void*** rax_38
int512_t zmm6_2
rax_38, zmm6_2 = sub_141188e50(arg1, &var_1a8, u"DilatedVelocityTile", 0)
int32_t rax_39 = *(arg3 + 0x150)
zmm6_2.o = zx.o(*(arg3 + 0x130))
zmm7 = zx.o(*(arg3 + 0x160))
int32_t rax_40 = *(arg3 + 0x154)
int32_t rax_41 = *(arg3 + 0x158)
int32_t var_dc = *(arg3 + 0x14c)
int32_t rax_42 = *(arg3 + 0x15c)
int32_t var_8c = *(arg3 + 0x19c)
uint128_t var_f0 = *(arg3 + 0x138)
int32_t var_e0 = (*(arg3 + 0x148)).d
uint128_t var_c0 = *(arg3 + 0x168)
uint128_t var_b0 = *(arg3 + 0x178)
uint128_t var_a0 = *(arg3 + 0x188)
int32_t var_90 = (*(arg3 + 0x198)).d
void*** rbx_1

if (rdi.b == 0)
    int128_t* rax_53
    int64_t zmm6_5
    rax_53, zmm6_5 = sub_14081d830(0xa0, *(arg1 + 8), 1, 0)
    int128_t* rdi_2 = rax_53
    
    if (rax_53 == 0)
        rdi_2 = nullptr
    else
        rax_53[9].q = 0
    
    memset(rdi_2 + 0x18, 0, 0x68)
    var_1b8_1.q = rax_38
    __builtin_memset(rdi_2 + 0x88, 0, 0x18)
    *rdi_2 = zmm8
    var_1b0.w = 0
    rdi_2[1].q = zmm6_5
    *(rdi_2 + 0x18) = var_f0
    *(rdi_2 + 0x28) = var_e0.q
    rdi_2[3].d = rax_39
    *(rdi_2 + 0x34) = rax_40
    *(rdi_2 + 0x38) = rax_41
    *(rdi_2 + 0x3c) = rax_42
    rdi_2[4].q = zmm7.q
    *(rdi_2 + 0x48) = var_c0
    *(rdi_2 + 0x58) = var_b0
    *(rdi_2 + 0x68) = var_a0
    *(rdi_2 + 0x78) = var_90.q
    rdi_2[8].q = rax_8
    void*** rax_59
    int512_t zmm6_6
    rax_59, zmm6_6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
    
    if (rax_59 != 0)
        rax_59[1] = rax_38[1]
        *rax_59 = &data_142f285c0
        rax_59[2] = 0
        *(rax_59 + 0x18) = var_1b8_1.o
    
    rdi_2[9].q = rax_59
    char rcx_29 = sub_1419a2ec0(*(arg2 + 0x5150), &var_158, &data_143ebc860, 0)
    zmm7 = var_158
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q((rbx + 0xf).d)
    zmm6_6.o = zx.o(0)
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(rbx:4.d + 0xf)
    int32_t var_1b4_2 = (temp7_1 + (temp6_1 & 0xf)) s>> 4
    var_78 = sub_1413595f0(rcx_29)
    sub_141998c50(zmm7.q, &data_143ec0bb0, rdi_2)
    int64_t* rdx_31 = *(arg1 + 8)
    var_1a8.q = rdi_2
    var_1a8 = zmm7
    int32_t var_188_5 = 1
    var_190_2.q = ((temp5_1 + (temp4_1 & 0xf)) s>> 4).q
    void*** rax_69
    char rcx_31
    rax_69, rcx_31 = sub_14081d830(0x60, rdx_31, 1, 0)
    rbx_1 = rax_69
    
    if (rax_69 == 0)
        rbx_1 = nullptr
    else
        int32_t var_1b8_2
        var_1b8_2.q = rdi_2
        sub_1413595f0(rcx_31)
        var_1b0.q = &data_143ec0be0
        var_158 = var_1b8_2.o
        sub_141992bd0(rbx_1, &var_1c8, &var_158, 2)
        uint128_t zmm0_18 = var_1a8
        *rbx_1 = &data_142f64c80
        *(rbx_1 + 0x38) = zmm0_18
        *(rbx_1 + 0x48) = rax_34.o
        rbx_1[0xb] = var_188_5.q
else
    int32_t var_198_3 = data_1439c7b48
    int32_t var_190_3 = rbx:4.d
    int16_t var_170_3 = 0
    int32_t var_18c_3 = 0
    wchar16 const* const var_168_3 = u"UnknownTexture2D"
    var_1a8 = data_1439c7b38
    int32_t var_194_3 = rbx.d
    int32_t var_188_4 = 1
    int32_t var_184_3 = 0x10000
    int16_t var_180_3 = 1
    var_17c_2.q = 0xc
    int32_t var_174_3 = 4
    int16_t var_160_3 = 1
    char var_15e_3 = 0
    void*** rax_45 = sub_141188e50(arg1, &var_1a8, u"DilatedVelocityDepth", 0)
    int64_t* rax_46
    int64_t zmm6_3
    rax_46, zmm6_3 = sub_14081d830(0x130, *(arg1 + 8), 1, 0)
    int64_t* rdi_1 = rax_46
    
    if (rax_46 == 0)
        rdi_1 = nullptr
    else
        rax_46[0x12] = 0
        sub_14117af20(&rax_46[0x14])
    
    *rdi_1 = 0
    rdi_1[1] = 0
    memset(&rdi_1[4], 0, 0x80)
    memset(&rdi_1[0x16], 0, 0x70)
    *(rdi_1 + 0x10) = zmm8
    var_1b8_1.q = rax_45
    rdi_1[4] = zmm6_3
    *(rdi_1 + 0x28) = var_f0
    var_1b0.w = 2
    rdi_1[7] = var_e0.q
    rdi_1[8].d = rax_39
    *(rdi_1 + 0x44) = rax_40
    rdi_1[9].d = rax_41
    *(rdi_1 + 0x4c) = rax_42
    rdi_1[0xa] = zmm7.q
    *(rdi_1 + 0x58) = var_c0
    var_1b0:2.b = 0
    int32_t var_1ac_1 = 2
    *(rdi_1 + 0x68) = var_b0
    *(rdi_1 + 0x78) = var_a0
    rdi_1[0x11] = var_90.q
    rdi_1[0x12] = rax_8
    *(rdi_1 + 0x120) = var_1b8_1.o
    var_1b8_1.q = rax_38
    var_1b0.w = 0
    var_1b0:2.b = 0
    int32_t var_1ac_2 = 0xffffffff
    *(rdi_1 + 0xa0) = var_1b8_1.o
    sub_1419a2ec0(*(arg2 + 0x5150), &var_158, &data_143ebc970, 0)
    char rcx_22 = sub_1419a2ec0(*(arg2 + 0x5150), &var_158, &data_143ebca70, 0)
    zmm7 = var_158
    sub_1413584b0(sub_1413584b0(rcx_22))
    var_188_4.q = rbx
    var_180_3.q = rdi_1
    void*** rax_52
    char rcx_24
    rax_52, rcx_24 = sub_14081d830(0x68, *(arg1 + 8), 1, 0)
    rbx_1 = rax_52
    
    if (rax_52 == 0)
        rbx_1 = nullptr
    else
        var_1b8_1.q = rdi_1
        int128_t zmm6_4 = sub_1413584b0(rcx_24)
        var_1b0.q = &data_143ec0cf0
        var_158 = var_1b8_1.o
        sub_141992bd0(rbx_1, &var_1c8, &var_158, 1)
        *(rbx_1 + 0x38) = zmm6_4
        *rbx_1 = &data_142f64c20
        *(rbx_1 + 0x48) = zmm7
        *(rbx_1 + 0x58) = var_188_4.o

sub_1419968d0(arg1, rbx_1)
*arg6 = rax_5
*arg7 = rax_38
__security_check_cookie(rax_1 ^ &var_1e8)
return arg7

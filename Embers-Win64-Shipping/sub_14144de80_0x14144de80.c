// 函数: sub_14144de80
// 地址: 0x14144de80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x12d8)
void var_1318
int64_t rax_1 = __security_cookie ^ &var_1318
int128_t* r14 = arg6
int64_t i_32 = 2
bool cond:0 = *(r14 + 0x1c) s> 1
uint128_t zmm0 = *r14
int64_t* rbx_1 = *(*(arg3 + 8) + 0x44)
bool cond:1 = 0.5f f!= *(r14 + 0x24)
int128_t* var_1188 = r14
int64_t var_1298 = rbx_1
uint128_t var_12e0 = zmm0
int64_t* var_12b0
int32_t var_12a0
int32_t rsi
int32_t r12

if (cond:1)
    r12 = rbx_1:4.d
    rsi = rbx_1.d
else
    int64_t rcx = zmm0:8.q
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rbx_1.d)
    var_12a0 = 2
    rsi = (temp4_1 - temp3_1) s>> 1
    int32_t var_129c_1 = 2
    int64_t r8 = var_12a0.q
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(rbx_1:4.d)
    r12 = (temp6_1 - temp5_1) s>> 1
    uint32_t r9_1 = (r8 u>> 0x20).d
    int32_t temp0_1 = divs.dp.d(sx.q((rcx - 1).d + 2), 2)
    var_12a0 = temp0_1
    var_12e0:8.d = temp0_1
    int32_t var_129c_2 = divs.dp.d(sx.q((rcx u>> 0x20).d - 1 + r9_1), r9_1)
    int64_t* rax_21 = zmm0.q
    var_12b0 = rax_21
    int32_t temp19_1
    int32_t temp20_1
    temp19_1:temp20_1 = sx.q(rax_21.d)
    int32_t rax_24 = (temp20_1 - temp19_1) s>> 1
    var_12b0.d = rax_24
    var_12e0.d = rax_24
    var_12b0:4.d = divs.dp.d(sx.q(var_12b0:4.d), (r8 u>> 0x20).d)
    var_12e0:4.d = (var_12b0 u>> 0x20).d
    var_12e0:0xc.d = (var_12a0.q u>> 0x20).d

void var_544
void* rax_32 = &var_544
int32_t r13 = 0
int32_t var_12d0 = 0
int64_t r8_2 = 0
int32_t var_12e4 = 0
int64_t i_20 = 4
int64_t i

do
    *(rax_32 - 4) = 1
    __builtin_memset(rax_32 + 4, 0, 0x18)
    *(rax_32 + 0x1c) = 1
    *(rax_32 + 0x24) = 1
    *(rax_32 + 0x28) = 0
    *(rax_32 + 0x30) = 0
    *(rax_32 + 0x34) = 0
    *(rax_32 + 0x3c) = u"UnknownTexture"
    *(rax_32 + 0x44) = 1
    *(rax_32 + 0x46) = 0
    rax_32 += 0x50
    i = i_20
    i_20 -= 1
while (i != 1)
int64_t i_21 = 4
void var_684
void* rax_33 = &var_684
int64_t i_1

do
    *(rax_33 - 4) = 1
    __builtin_memset(rax_33 + 4, 0, 0x18)
    *(rax_33 + 0x1c) = 1
    *(rax_33 + 0x24) = 1
    *(rax_33 + 0x28) = 0
    *(rax_33 + 0x30) = 0
    *(rax_33 + 0x34) = 0
    *(rax_33 + 0x3c) = u"UnknownTexture"
    *(rax_33 + 0x44) = 1
    *(rax_33 + 0x46) = 0
    rax_33 += 0x50
    i_1 = i_21
    i_21 -= 1
while (i_1 != 1)
int64_t i_22 = 4
void var_7c4
void* rax_34 = &var_7c4
int64_t i_2

do
    *(rax_34 - 4) = 1
    __builtin_memset(rax_34 + 4, 0, 0x18)
    *(rax_34 + 0x1c) = 1
    *(rax_34 + 0x24) = 1
    *(rax_34 + 0x28) = 0
    *(rax_34 + 0x30) = 0
    *(rax_34 + 0x34) = 0
    *(rax_34 + 0x3c) = u"UnknownTexture"
    *(rax_34 + 0x44) = 1
    *(rax_34 + 0x46) = 0
    rax_34 += 0x50
    i_2 = i_22
    i_22 -= 1
while (i_2 != 1)
int64_t i_23 = 4
uint128_t var_c28
void* rax_35 = &var_c28:4
int64_t i_3

do
    *(rax_35 - 4) = 1
    __builtin_memset(rax_35 + 4, 0, 0x18)
    *(rax_35 + 0x1c) = 1
    *(rax_35 + 0x24) = 1
    *(rax_35 + 0x28) = 0
    *(rax_35 + 0x30) = 0
    *(rax_35 + 0x34) = 0
    *(rax_35 + 0x3c) = u"UnknownTexture"
    *(rax_35 + 0x44) = 1
    *(rax_35 + 0x46) = 0
    rax_35 += 0x50
    i_3 = i_23
    i_23 -= 1
while (i_3 != 1)
zmm0 = data_1439c7ad8
int32_t rdx_7 = data_1439c7ae8
wchar16 const* const var_a88 = u"UnknownTexture2D"
int32_t var_aac = 0
int32_t var_a98 = 0
int32_t r9_2 = 1
int32_t var_aa8 = 1
int16_t var_aa0 = 1
int16_t var_a80 = 1
int64_t i_35 = 2
int32_t var_a9c = 0xa
uint128_t var_de8 = zmm0
int32_t var_dd8 = rdx_7
uint128_t var_ac8 = zmm0
int32_t var_ab8 = rdx_7
int32_t var_ab4 = rsi
int32_t var_ab0 = r12
int32_t var_aa4 = 0x10000
int32_t var_a94 = 0x10009
int16_t var_a90 = 0
char var_a7e = 0
int32_t var_c18
int32_t var_c14
int32_t var_c10
int32_t var_c0c
int32_t var_c08
int32_t var_bfc
int32_t var_bf4
char var_bf0
int64_t var_be8
char var_be0
char var_bde
void var_7c8
int32_t var_79c
void var_688
int32_t var_65c
void var_548
void var_51c
int64_t i_4

do
    uint64_t rax_38 = zx.q(r9_2 - 1) * 0xa
    *(&var_548 + (rax_38 << 3)) = zmm0
    void var_538
    *(&var_538 + (rax_38 << 3)) = rdx_7
    void var_534
    *(&var_534 + (rax_38 << 3)) = rsi
    void var_530
    *(&var_530 + (rax_38 << 3)) = r12
    void var_52c
    *(&var_52c + (rax_38 << 3)) = 0
    *(&var_51c + (rax_38 << 3)) = 0
    void var_510
    *(&var_510 + (rax_38 << 3)) = 0
    void var_4fe
    *(&var_4fe + (rax_38 << 3)) = 0
    void var_528
    __builtin_memcpy(&var_528 + (rax_38 << 3), "\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 0xa)
    void var_514
    *(&var_514 + (rax_38 << 3)) = 0x10009
    void var_508
    *(&var_508 + (rax_38 << 3)) = u"UnknownTexture2D"
    void var_500
    *(&var_500 + (rax_38 << 3)) = 1
    *(&var_688 + (rax_38 << 3)) = zmm0
    void var_678
    *(&var_678 + (rax_38 << 3)) = rdx_7
    void var_674
    *(&var_674 + (rax_38 << 3)) = rsi
    void var_670
    *(&var_670 + (rax_38 << 3)) = r12
    void var_66c
    *(&var_66c + (rax_38 << 3)) = 0
    void var_668
    *(&var_668 + (rax_38 << 3)) = 1
    void var_664
    *(&var_664 + (rax_38 << 3)) = 0x10000
    void var_662
    *(&var_662 + (rax_38 << 3)) = 0x10002
    *(&var_65c + (rax_38 << 3)) = 0
    void var_650
    *(&var_650 + (rax_38 << 3)) = 0
    void var_63e
    *(&var_63e + (rax_38 << 3)) = 0
    *(&var_7c8 + (rax_38 << 3)) = zmm0
    void var_654
    *(&var_654 + (rax_38 << 3)) = 0x10009
    *(&var_c28 + (rax_38 << 3)) = zmm0
    void var_648
    *(&var_648 + (rax_38 << 3)) = u"UnknownTexture2D"
    void var_640
    *(&var_640 + (rax_38 << 3)) = 1
    void var_7b8
    *(&var_7b8 + (rax_38 << 3)) = rdx_7
    void var_7b4
    *(&var_7b4 + (rax_38 << 3)) = rsi
    void var_7b0
    *(&var_7b0 + (rax_38 << 3)) = r12
    (&var_c18)[rax_38 * 2] = rdx_7
    (&var_c14)[rax_38 * 2] = rsi
    (&var_c10)[rax_38 * 2] = r12
    void var_7ac
    *(&var_7ac + (rax_38 << 3)) = 0
    *(&var_79c + (rax_38 << 3)) = 0
    void var_790
    *(&var_790 + (rax_38 << 3)) = 0
    void var_77e
    *(&var_77e + (rax_38 << 3)) = 0
    (&var_c0c)[rax_38 * 2] = 0
    *(&var_bfc + (rax_38 << 3)) = 0
    *(&var_bf0 + (rax_38 << 3)) = 0
    (&var_bde)[rax_38 << 3] = 0
    void var_7a8
    __builtin_memcpy(&var_7a8 + (rax_38 << 3), "\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 0xa)
    void var_794
    *(&var_794 + (rax_38 << 3)) = 0x10009
    void var_788
    *(&var_788 + (rax_38 << 3)) = u"UnknownTexture2D"
    void var_780
    *(&var_780 + (rax_38 << 3)) = 1
    __builtin_memcpy(&(&var_c08)[rax_38 * 2], "\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 0xa)
    (&var_bf4)[rax_38 * 2] = 0x10009
    (&var_be8)[rax_38] = u"UnknownTexture2D"
    *(&var_be0 + (rax_38 << 3)) = 1
    uint64_t rcx_4 = zx.q(r9_2) * 0xa
    *(&var_548 + (rcx_4 << 3)) = zmm0
    *(&var_538 + (rcx_4 << 3)) = rdx_7
    *(&var_534 + (rcx_4 << 3)) = rsi
    *(&var_530 + (rcx_4 << 3)) = r12
    *(&var_52c + (rcx_4 << 3)) = 0
    __builtin_memcpy(&var_528 + (rcx_4 << 3), "\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 0xa)
    *(&var_51c + (rcx_4 << 3)) = 0
    *(&var_514 + (rcx_4 << 3)) = 0x10009
    *(&var_510 + (rcx_4 << 3)) = 0
    *(&var_508 + (rcx_4 << 3)) = u"UnknownTexture2D"
    *(&var_688 + (rcx_4 << 3)) = zmm0
    *(&var_500 + (rcx_4 << 3)) = 1
    *(&var_678 + (rcx_4 << 3)) = rdx_7
    *(&var_4fe + (rcx_4 << 3)) = 0
    *(&var_674 + (rcx_4 << 3)) = rsi
    *(&var_7c8 + (rcx_4 << 3)) = zmm0
    *(&var_7b8 + (rcx_4 << 3)) = rdx_7
    r9_2 += 2
    *(&var_7b4 + (rcx_4 << 3)) = rsi
    *(&var_7b0 + (rcx_4 << 3)) = r12
    *(&var_670 + (rcx_4 << 3)) = r12
    *(&var_7ac + (rcx_4 << 3)) = 0
    *(&var_66c + (rcx_4 << 3)) = 0
    __builtin_memcpy(&var_7a8 + (rcx_4 << 3), "\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 0xa)
    *(&var_668 + (rcx_4 << 3)) = 1
    *(&var_664 + (rcx_4 << 3)) = 0x10000
    *(&var_662 + (rcx_4 << 3)) = 0x10002
    *(&var_79c + (rcx_4 << 3)) = 0
    *(&var_65c + (rcx_4 << 3)) = 0
    *(&var_794 + (rcx_4 << 3)) = 0x10009
    *(&var_654 + (rcx_4 << 3)) = 0x10009
    *(&var_790 + (rcx_4 << 3)) = 0
    *(&var_650 + (rcx_4 << 3)) = 0
    *(&var_788 + (rcx_4 << 3)) = u"UnknownTexture2D"
    *(&var_648 + (rcx_4 << 3)) = u"UnknownTexture2D"
    *(&var_780 + (rcx_4 << 3)) = 1
    *(&var_640 + (rcx_4 << 3)) = 1
    *(&var_77e + (rcx_4 << 3)) = 0
    *(&var_63e + (rcx_4 << 3)) = 0
    *(&var_c28 + (rcx_4 << 3)) = zmm0
    (&var_c18)[rcx_4 * 2] = rdx_7
    (&var_c14)[rcx_4 * 2] = rsi
    (&var_c10)[rcx_4 * 2] = r12
    (&var_c0c)[rcx_4 * 2] = 0
    __builtin_memcpy(&(&var_c08)[rcx_4 * 2], "\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 0xa)
    *(&var_bfc + (rcx_4 << 3)) = 0
    (&var_bf4)[rcx_4 * 2] = 0x10009
    *(&var_bf0 + (rcx_4 << 3)) = 0
    (&var_be8)[rcx_4] = u"UnknownTexture2D"
    *(&var_be0 + (rcx_4 << 3)) = 1
    (&var_bde)[rcx_4 << 3] = 0
    i_4 = i_35
    i_35 -= 1
while (i_4 != 1)
int32_t rax_40 = r14[1].d
int32_t var_bac
int32_t var_b5c
int32_t var_b0c

if (rax_40 == 0)
    int32_t r9_3 = *(r14 + 0x14)
    int32_t rdx_8 = 0
    var_12d0 = r9_3
    
    if (r9_3 s> 0)
        do
            int32_t r13_1 = rdx_8
            *(&var_79c + r8_2) = rax_40 + 0xa
            int32_t rcx_5 = 0x1c
            *(&var_bfc + r8_2) = rax_40 + 0xa
            
            if ((1 & rdx_8.b) != 0)
                rcx_5 = 0x44
            
            r8_2 += 0x50
            uint64_t rax_42 = zx.q(rdx_8) u>> 1
            rdx_8 += 1
            r13 = (r13_1 u>> 1) + 1
            *(&var_51c + rax_42 * 0x50) = rcx_5
        while (rdx_8 s< r9_3)
        
        r14 = var_1188
    
    r8_2 = 1
    var_12e4 = 1
else if (rax_40 == 1)
    var_12d0 = 4
    var_79c = 0xa
    int32_t var_74c_1 = 0xa
    int32_t var_6fc_1 = 0xa
    int32_t var_6ac_1 = 0xa
    var_bfc = 0xa
    var_bac = 0xa
    var_12e4 = 2
    r8_2 = 2
else if (rax_40 == 2)
    var_bac = 0x15
    var_bfc = 0xa
    var_79c = 0xa
    int32_t var_74c_2 = 0x15
label_14144e801:
    var_12d0 = 2
    var_12e4 = 2
    r8_2 = 2
else if (rax_40 != 3)
    if (rax_40 == 4)
        int32_t var_74c_3 = 0x15
        var_79c = 0xa
        var_bfc = 0xa
        var_bac = 0x15
        goto label_14144e801
    
    if (rax_40 == 5)
        r8_2 = 4
        var_65c = 0x11
        var_12e4 = 4
        r13 = 4
        var_79c = 0x11
        var_bfc = 0x11
        int32_t var_60c_1 = 0x11
        int32_t var_74c_4 = 0x11
        var_bac = 0x11
        int32_t var_5bc_1 = 0x11
        int32_t var_6fc_2 = 0x11
        var_b5c = 0x11
        int32_t var_56c_1 = 0xd
        int32_t var_6ac_2 = 0xd
        var_b0c = 0xd
        var_12d0 = 4
    else if (rax_40 == 6)
        var_79c = 0x1a
        var_bfc = 0x1a
        int32_t var_74c_5 = 0x28
        var_bac = 0x28
        goto label_14144e801
else
    var_bfc = 0xf
    var_12e4 = 1
    r8_2 = 1
    var_12d0 = 1
    var_79c = 0xf

zmm0 = data_142d3f660
int32_t rcx_6 = var_12e0:4.d
int32_t rdx_9 = var_12e0:8.d
int64_t* r15 = arg1
uint128_t var_d88 = zmm0
uint128_t var_d48 = zmm0
int128_t var_c88
__builtin_memset(&var_c88, 0, 0x28)
int64_t var_c98 = (zx.o(0)).q
int128_t* var_1160 = &var_ac8
int32_t rax_46 = *(r14 + 0x14) * r8_2.d
int32_t r8_3 = var_12e0:0xc.d
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rsi))
int64_t* var_1168 = r15
var_12b0.d = rax_46
int32_t rax_47 = var_12e0.d
int32_t var_d98 = rax_47
zmm0.d = 1f f/ zmm9.d
int32_t var_d94 = rcx_6
int32_t var_d90 = rdx_9
int32_t var_d8c = r8_3
uint128_t zmm10 = _mm_cvtepi32_ps(zx.o(r12))
_mm_shuffle_ps(zmm9, zmm9, 0xe1)
uint128_t zmm2
zmm2.d = zmm10.d
_mm_shuffle_ps(zmm2, zmm2, 0xc6)
zmm2.d = zmm0.d
int32_t var_12c8 = zmm10.d
uint128_t zmm1
zmm1.d = 1f f/ zmm10.d
_mm_shuffle_ps(zmm2, zmm2, 0x27)
zmm2.d = zmm1.d
uint128_t var_1208_2 = zmm9
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
uint128_t var_1218 = zmm2
uint128_t var_d78 = zmm2
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rax_47))
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(rcx_6))
uint128_t zmm3
zmm3.d = zmm7.d f+ 0.5f
zmm3.d = zmm3.d f/ zmm9.d
zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_9)).d f- 0.5f
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm0.d = zmm8.d f+ 0.5f
zmm0.d = zmm0.d f/ zmm10.d
zmm1.d = zmm1.d f/ zmm9.d
zmm3.d = zmm0.d
zmm2.d = _mm_cvtepi32_ps(zx.o(r8_3)).d f- 0.5f
zmm0 = *arg3
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1.d
uint128_t var_ce8 = zmm0
zmm1 = arg3[1]
zmm0 = arg3[2]
zmm2.d = zmm2.d f/ zmm10.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = zmm2.d
void*** var_cd8 = zmm1.q
zmm1 = arg3[3]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
var_1218 = zmm3
uint128_t var_d68 = zmm3
uint128_t var_cc8 = zmm0
uint128_t var_cb8 = zmm1
uint128_t var_ca8 = arg3[4]
sub_1405d16e0(&var_c88:8, arg2[2])
void*** rax_49
uint128_t zmm6
rax_49, zmm6 = sub_14141f4d0(r15, arg2)
int64_t* r8_4 = arg2
var_c98 = rax_49

if (*(r8_4 + 0xd64) != 0 || var_cd8 == 0)
    void*** rax_50
    rax_50, zmm6 = sub_1410fccd0(r15, &data_1439b70c8, u"External", 0)
    r8_4 = arg2
    var_cd8 = rax_50

int32_t rdx_12 = r8_4[0x2b3].d
uint128_t zmm14
zmm14.d = zmm6.d f/ *(r14 + 0x24)
int32_t rcx_10 = *(r8_4 + 0x159c)
int64_t var_1078 = 0
int64_t var_106c = 0x3f800000
int32_t var_1064 = 0
int32_t var_105c = 0
float zmm4[0x4] = r8_4[0x151].d
zmm7.d = zmm7.d f* zmm14.d
uint128_t zmm13
zmm13.d = float.s(rbx_1.d)
zmm8.d = zmm8.d f* zmm14.d
uint128_t zmm0_1
zmm0_1.d = zmm14.d f/ zmm13.d
int32_t var_d58 = zmm9.d
zmm9 = *(r8_4 + 0x320)
zmm7.d = zmm7.d f+ 0.5f
var_d88.d = zmm0_1.d
zmm8.d = zmm8.d f+ 0.5f
int32_t var_d54 = zmm10.d
zmm10 = *(r8_4 + 0x330)
zmm0_1.d = float.s(r8_4[0x2b4].d - rdx_12)
int128_t zmm12
zmm12.d = float.s(var_1298:4.d)
zmm3.d = zmm6.d f/ zmm0_1.d
uint128_t zmm1_1
zmm1_1.d = zmm14.d f/ zmm12.d
zmm0_1.d = zmm3.d f* r8_4[0x60].d
var_d88:4.d = zmm1_1.d
zmm1_1.d = zmm13.d f* zmm3.d
int32_t var_d50 = zmm0_1.d
zmm0_1.d = float.s(*(r8_4 + 0x15a4) - rcx_10)
zmm1_1.d = zmm1_1.d f+ zmm1_1.d
zmm2.d = zmm6.d f/ zmm0_1.d
var_d48.d = zmm1_1.d
zmm0_1.d = float.s(rdx_12)
zmm0_1.d = zmm0_1.d f* zmm3.d
zmm3 = data_142d4cc20
zmm7.d = zmm7.d f/ zmm13.d
zmm0_1.d = zmm0_1.d f+ zmm0_1.d
zmm1_1.d = zmm2.d f* zmm12.d
zmm8.d = zmm8.d f/ zmm12.d
zmm1_1.d = zmm1_1.d f* -2f
zmm0_1.d = zmm0_1.d f- zmm6.d
var_d88:8.d = zmm7.d
zmm7 = *(r8_4 + 0x310)
var_d88:0xc.d = zmm8.d
zmm8 = r8_4[0x153].d
var_d48:8.d = zmm0_1.d
zmm0_1.d = float.s(rcx_10)
var_d48:4.d = zmm1_1.d
zmm0_1.d = zmm0_1.d f* zmm2.d
zmm2 = data_142d4cc00
int128_t var_1098
__builtin_memcpy(&var_1098, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x00\x00\x00\x00\x00\x00", 
    0x20)
zmm0_1.d = zmm0_1.d f+ zmm0_1.d
uint128_t zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0)
zmm6.d = zmm6.d f- zmm0_1.d
zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm7)
var_d48:0xc.d = zmm6.d
zmm6 = *(r8_4 + 0x300)
zmm11 = _mm_add_ps(_mm_mul_ps(zmm11, zmm6), zmm0_1)
int32_t i_24 = r14[1].d
zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm10)
uint128_t zmm5 = _mm_shuffle_ps(zmm3, zmm3, 0)
zmm1_1 = _mm_mul_ps(zmm1_1, zmm9)
zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
zmm5 = _mm_mul_ps(zmm5, zmm6)
zmm14.d = zmm14.d f* 0.5f
zmm11 = _mm_add_ps(zmm11, zmm1_1)
zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm5 = _mm_add_ps(zmm5, zmm0_1)
zmm1_1 = _mm_mul_ps(zmm1_1, zmm9)
zmm14.d = zmm14.d f- 0.5f
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
zmm11 = _mm_add_ps(zmm11, zmm2)
zmm2 = var_1078.o
_mm_shuffle_ps(zmm2, zmm2, 0xd2)
zmm3 = _mm_mul_ps(zmm3, zmm10)
zmm2.d = zmm4[0]
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
zmm5 = _mm_add_ps(zmm5, zmm1_1)
var_1078.o = zmm2
zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0)
zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm5 = _mm_add_ps(zmm5, zmm3)
zmm2 = _mm_mul_ps(zmm2, zmm10)
zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
zmm1_1 = _mm_mul_ps(zmm1_1, zmm9)
uint128_t var_e28 = zmm11
uint128_t var_e18 = zmm5
uint128_t var_d38 = zmm11
uint128_t var_d28 = zmm5
zmm4 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm4, zmm6), zmm0_1), zmm1_1), zmm2)
zmm2 = var_106c:4.o
_mm_shuffle_ps(zmm2, zmm2, 0xd2)
zmm2.d = zmm8.d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
var_106c:4.o = zmm2
zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0)
zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm3 = _mm_mul_ps(zmm3, zmm6)
zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm9)
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm3 = _mm_add_ps(zmm3, zmm0_1)
zmm2 = _mm_mul_ps(zmm2, zmm10)
float var_e08[0x4] = zmm4
float var_d18[0x4] = zmm4
zmm0_1.d = zmm14.d f/ zmm13.d
zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm1_1), zmm2)
int32_t var_cf8 = zmm0_1.d
zmm14.d = zmm14.d f/ zmm12.d
uint128_t var_df8 = zmm3
int32_t var_cf4 = zmm14.d
uint128_t var_d08 = zmm3
int32_t var_1268
int128_t var_c78
int64_t var_c68

if (i_24 == 4)
    void* rbx_2 = *(*r8_4 + 0x20)
    uint64_t rax_56 = r8_4[0x2b5]
    
    if (rax_56 != 0)
        rax_56 = zx.q(*(rax_56 + 0x4c8)) & 0x3ff
    
    void** var_e68
    sub_1411c8490(&var_e68, rbx_2 + 0x6338, *(r14 + 0x1c), 1, 0x18, rax_56.d)
    int32_t var_e34
    int64_t rax_58 = zx.q(var_e34)
    int32_t var_e30
    uint32_t var_10b8 = var_e30 u/ 3
    int32_t rcx_12 = int.d(_mm_sqrt_ss(0, float.s(rax_58)))
    int32_t var_10b4_1 = rcx_12
    int64_t* rcx_13 = data_143f0f180
    uint32_t var_10b0_1 = divu.dp.d(0:(rax_58.d), rcx_12)
    int32_t var_e38
    int32_t var_10ac_1 = var_e38
    int64_t var_1138
    int64_t var_e58
    (*(*rcx_13 + 0x5b0))(rcx_13, &var_1138, &data_143f02b98, var_e58)
    int64_t var_10a8_1 = var_1138
    sub_1405ec8a0(&var_1138)
    int64_t* rcx_15 = data_143f0f180
    var_1268 = *(rbx_2 + 0x6380)
    int64_t var_1158
    (*(*rcx_15 + 0x5b0))(rcx_15, &var_1158, &data_143f02b98, *(rbx_2 + 0x6368))
    int64_t var_1260_1 = var_1158
    sub_1405ec8a0(&var_1158)
    void* r8_6 = data_143f5b298
    int32_t* rcx_17 = *(*(r8_6 + 0x700) + 0xd0)
    int32_t rax_67
    int32_t rcx_18
    
    if (rcx_17 == 0)
        rax_67 = 0
        rcx_18 = 0
    else
        rax_67 = rcx_17[1]
        rcx_18 = *rcx_17
    
    int32_t var_1058 = rcx_18
    int32_t var_1054_1 = rcx_18
    
    if (rcx_18 s<= 1)
        rcx_18 = 1
    
    int32_t var_1050_1 = divs.dp.d(sx.q(rax_67), rcx_18)
    int64_t* rcx_20 = data_143f0f180
    int64_t var_1048_1 = *(*(*(r8_6 + 0x700) + 0x78) + 0x10)
    void* var_1150
    (*(*rcx_20 + 0xf8))(rcx_20, &var_1150, &var_10b8, &data_143e793f0, 1, 1, cond:0, var_12e0, 
        var_12d0, var_12c8)
    void* const rbx_3 = var_1150
    void* const var_11b0 = rbx_3
    
    if (rbx_3 != 0)
        *(rbx_3 + 8) += 1
        rbx_3 = var_11b0
    
    sub_1405d1550(&var_1150)
    int64_t* rax_73 = var_c78.q
    var_c78.q = rbx_3
    var_11b0 = nullptr
    
    if (rax_73 != 0)
        rax_73[1].d -= 1
        
        if (rax_73[1].d == 1)
            char rax_75
            
            if (rax_73[2].b == 0 && data_143f0f1d0 == 0)
                rax_75 = sub_1405949a0()
            
            if (rax_73[2].b != 0 || (data_143f0f1d0 == 0 && rax_75 != 0))
                (**rax_73)(rax_73, 1)
            else
                bool z_1
                
                if (0 == *(rax_73 + 0xc))
                    *(rax_73 + 0xc) = 1
                    z_1 = true
                else
                    *(rax_73 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_77 = sub_140a20af0()
                    uint64_t rdx_20 = zx.q(rax_77)
                    void* const rax_78
                    
                    if (rax_77 != 0)
                        rax_78 = *((rdx_20 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_20.d) & 0x3fff) * 0x18
                    else
                        rax_78 = nullptr
                    
                    *(rax_78 + 8) = rax_73
                    sub_1405a42f0(&data_143f02390, rdx_20.d)
    
    sub_1405d1550(&var_11b0)
    int64_t* rcx_27 = data_143f0f180
    void* var_1170
    (*(*rcx_27 + 0xf8))(rcx_27, &var_1170, &var_1268, &data_143e79490, 1, 1)
    void* const rbx_5 = var_1170
    void* const var_11b8 = rbx_5
    
    if (rbx_5 != 0)
        *(rbx_5 + 8) += 1
        rbx_5 = var_11b8
    
    sub_1405d1550(&var_1170)
    int64_t* rax_84 = var_c78:8.q
    var_c78:8.q = rbx_5
    var_11b8 = nullptr
    
    if (rax_84 != 0)
        rax_84[1].d -= 1
        
        if (rax_84[1].d == 1)
            char rax_86
            
            if (rax_84[2].b == 0 && data_143f0f1d0 == 0)
                rax_86 = sub_1405949a0()
            
            if (rax_84[2].b != 0 || (data_143f0f1d0 == 0 && rax_86 != 0))
                (**rax_84)(rax_84, 1)
            else
                bool z_2
                
                if (0 == *(rax_84 + 0xc))
                    *(rax_84 + 0xc) = 1
                    z_2 = true
                else
                    *(rax_84 + 0xc)
                    z_2 = false
                
                if (z_2)
                    int32_t rax_88 = sub_140a20af0()
                    uint64_t rdx_22 = zx.q(rax_88)
                    void* const rax_89
                    
                    if (rax_88 != 0)
                        rax_89 = *((rdx_22 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_22.d) & 0x3fff) * 0x18
                    else
                        rax_89 = nullptr
                    
                    *(rax_89 + 8) = rax_84
                    sub_1405a42f0(&data_143f02390, rdx_22.d)
    
    sub_1405d1550(&var_11b8)
    int64_t* rcx_34 = data_143f0f180
    (*(*rcx_34 + 0xf8))(rcx_34, &var_1298, &var_1058, &data_143e2d9c0, 1, 1)
    int64_t rbx_7 = var_1298
    var_12a0.q = rbx_7
    
    if (rbx_7 != 0)
        *(rbx_7 + 8) += 1
        rbx_7 = var_12a0.q
    
    sub_1405d1550(&var_1298)
    int64_t rax_95 = var_c68
    var_c68 = rbx_7
    rbx_1 = rax_95
    var_12a0.q = 0
    
    if (rax_95 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_97
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_97 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_97 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_3
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_3 = true
                else
                    *(rbx_1 + 0xc)
                    z_3 = false
                
                if (z_3)
                    int32_t rax_99 = sub_140a20af0()
                    uint64_t rdx_24 = zx.q(rax_99)
                    void* const rax_100
                    
                    if (rax_99 != 0)
                        rax_100 = *((rdx_24 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_24.d) & 0x3fff) * 0x18
                    else
                        rax_100 = nullptr
                    
                    *(rax_100 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_24.d)
    
    sub_1405d1550(&var_12a0)
    sub_1411c8fd0(&var_e68)
    i_24 = r14[1].d

int128_t var_2f8
__builtin_memcpy(&var_2f8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x80\x3f", 
    0x80)
bool var_12e6
int32_t var_12b8
int64_t* var_c58
int64_t* r12_1

if (i_24 != 0)
label_14144f325:
    
    if (i_24 != 6)
        r12_1 = arg2
        var_12b8 = 0
    else
        int32_t var_10f8_1 = data_1439c7ae8
        int32_t var_10f0_1 = r12
        uint128_t var_1108 = data_1439c7ad8
        wchar16 const* const var_10c8_1 = u"UnknownTexture2D"
        var_12b8 = 2
        int16_t var_10d0_1 = 0
        int32_t var_10f4_1 = rsi
        int32_t var_10ec_1 = 0
        int32_t var_10e8_1 = 1
        int32_t var_10e4_1 = 0x10000
        int16_t var_10e0_1 = 1
        int64_t var_10dc_1 = 0x1c
        int32_t var_10d4_1 = 0x10009
        int16_t var_10c0_1 = 1
        char var_10be_1 = 0
        var_c98 = sub_141188e50(r15, &var_1108, u"DenoiserMetadata0", 0)
        int64_t* rax_111 = sub_14081d830(0x150, r15[1], 1, 0)
        rbx_1 = rax_111
        
        if (rax_111 == 0)
            rbx_1 = nullptr
        else
            sub_141442300(rax_111)
            rax_111[0x28] = 0
        
        memset(rbx_1, 0, 0x150)
        sub_141442d80(rbx_1, &var_d98)
        int64_t* rdx_29 = r15[1]
        var_1298 = var_c98
        int16_t var_1290_1 = 0
        void*** rax_112
        int512_t zmm6_1
        rax_112, zmm6_1 = sub_14081d830(0x28, rdx_29, 1, 0)
        
        if (rax_112 == 0)
            rax_112 = nullptr
        else
            int128_t zmm0_3 = var_1298.o
            rax_112[1] = *(var_c98 + 8)
            *rax_112 = &data_142f285c0
            rax_112[2] = 0
            *(rax_112 + 0x18) = zmm0_3
        
        r12_1 = arg2
        rbx_1[0x28] = rax_112
        uint128_t var_f28
        char rcx_50 = sub_1419a2ec0(r12_1[0xa2a], &var_f28, &data_143ed60e0, 2)
        zmm6_1.o = zx.o(0)
        zmm7 = var_f28
        int32_t temp44_1
        int32_t temp45_1
        temp44_1:temp45_1 = sx.q(var_12e0:8.d - var_12e0.d + 7)
        var_1298.d = (temp45_1 + (temp44_1 & 7)) s>> 3
        int32_t temp46_1
        int32_t temp47_1
        temp46_1:temp47_1 = sx.q(var_12e0:0xc.d - var_12e0:4.d + 7)
        var_1298:4.d = (temp47_1 + (temp46_1 & 7)) s>> 3
        int128_t var_f18_1 = sub_1414567c0(rcx_50)
        sub_141998c50(zmm7.q, &data_143ed57c0, rbx_1)
        int64_t zmm0_4 = var_1298
        int64_t* rdx_35 = r15[1]
        var_c58 = rbx_1
        int32_t var_c38_1 = 1
        int64_t var_c40_1 = zmm0_4
        void*** rax_125
        char rcx_52
        rax_125, rcx_52 = sub_14081d830(0x60, rdx_35, 1, 0)
        void*** rsi_2 = rax_125
        
        if (rax_125 == 0)
            rsi_2 = nullptr
        else
            var_1268.q = rbx_1
            sub_1414567c0(rcx_52)
            void* var_1260_2 = &data_143ed57f0
            int128_t var_f08 = var_1268.o
            sub_141992bd0(rsi_2, &var_12e6, &var_f08, 2)
            uint128_t zmm0_6 = var_c58.o
            *rsi_2 = &data_142f860a0
            *(rsi_2 + 0x38) = zmm0_6
            *(rsi_2 + 0x48) = zmm7
            rsi_2[0xb] = var_c38_1.q
        
        sub_1419968d0(r15, rsi_2)
        i_24 = r14[1].d
else
    if (*(r14 + 0x14) s> i_24)
        int32_t i_5 = i_24
        
        do
            uint64_t i_33 = zx.q(i_5)
            rbx_1 = *(*(r14 + (i_33 << 3) + 0x80) + 0x20)
            int64_t var_e70_1 = 0
            int32_t var_ec8
            (*(*rbx_1 + 0x68))(rbx_1, &var_ec8)
            uint64_t rdi = i_33 * 2
            zmm3 = var_ec8
            int64_t rax_107 = *rbx_1
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            int32_t var_ec4
            zmm3.d = var_ec4.d
            int32_t var_ea4
            zmm0_1 = var_ea4
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            int32_t var_ec0
            zmm3.d = var_ec0.d
            _mm_shuffle_ps(zmm3, zmm3, 0x27)
            int32_t var_e8c
            zmm3.d = var_e8c.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            var_1298.o = zmm3
            *(&var_2f8 + (rdi << 3)) = zmm3
            int32_t var_ea8
            zmm3 = var_ea8
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = zmm0_1.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            int32_t var_ea0
            zmm3.d = var_ea0.d
            _mm_shuffle_ps(zmm3, zmm3, 0x27)
            int32_t var_e7c
            zmm3.d = var_e7c.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            var_1298.o = zmm3
            int128_t var_2b8
            *(&var_2b8 + (rdi << 3)) = zmm3
            (*(rax_107 + 0x48))(rbx_1)
            zmm0_1.d = zmm0_1.d f* 0.0174532924f
            zmm0_1.d = zmm0_1.d f* 0.5f
            zmm0_1 = tanf(zmm0_1.d)
            uint32_t rax_108 = zx.d(*(rbx_1 + 0x13c))
            i_5 += 1
            int32_t var_278[0x10]
            var_278[rdi * 2] = zmm0_1.d
            int32_t var_238[0x10]
            var_238[rdi * 2] = rax_108
        while (i_5 s< *(r14 + 0x14))
        
        i_24 = r14[1].d
        i_32 = 2
        r15 = arg1
        goto label_14144f325
    
    r12_1 = arg2
    var_12b8 = 0

zmm6 = *arg5
zmm7 = arg5[1]
uint128_t var_ae8 = zmm6
uint128_t var_ad8 = zmm7
int32_t var_12f8
bool var_12e7

if (i_24 == 0)
    var_12f8.q = &data_142f7ff60
    uint128_t var_368
    sub_14144b2c0(&var_368, r15, r13, &var_548, var_12f8)
    int64_t* rax_127 = sub_14081d830(0x280, r15[1], 1, 0)
    rbx_1 = rax_127
    
    if (rax_127 == 0)
        rbx_1 = nullptr
    else
        sub_141442300(rax_127)
        rax_127[0x28] = 0
        rax_127[0x29].d = 0
        *(rax_127 + 0x14c) = 0x3f800000
        *(rax_127 + 0x154) = 0
        *(rax_127 + 0x15c) = 0x3f800000
        *(rax_127 + 0x164) = 0
        *(rax_127 + 0x16c) = 0x3f800000
        *(rax_127 + 0x174) = 0
        *(rax_127 + 0x17c) = 0x3f800000
        *(rax_127 + 0x184) = 0
        *(rax_127 + 0x18c) = 0x3f800000
        *(rax_127 + 0x194) = 0
        *(rax_127 + 0x19c) = 0x3f800000
        __builtin_memset(&rax_127[0x48], 0, 0x40)
        *(rax_127 + 0x1a4) = 0
        *(rax_127 + 0x1ac) = 0x3f800000
        *(rax_127 + 0x1b4) = 0
        *(rax_127 + 0x1bc) = 0x3f800000
    
    memset(rbx_1, 0, 0x280)
    int128_t zmm6_3 = sub_141442d80(rbx_1, &var_d98)
    void* rax_128 = &rbx_1[0x28]
    int64_t i_27 = 2
    int128_t* rcx_59 = &var_2f8
    int64_t i_6
    
    do
        rax_128 += 0x80
        int128_t zmm0_7 = *rcx_59
        int128_t zmm1_4 = rcx_59[1]
        rcx_59 = &rcx_59[8]
        *(rax_128 - 0x80) = zmm0_7
        zmm0_7 = rcx_59[-6]
        *(rax_128 - 0x70) = zmm1_4
        zmm1_4 = rcx_59[-5]
        *(rax_128 - 0x60) = zmm0_7
        zmm0_7 = rcx_59[-4]
        *(rax_128 - 0x50) = zmm1_4
        zmm1_4 = rcx_59[-3]
        *(rax_128 - 0x40) = zmm0_7
        zmm0_7 = rcx_59[-2]
        *(rax_128 - 0x30) = zmm1_4
        zmm1_4 = rcx_59[-1]
        *(rax_128 - 0x20) = zmm0_7
        *(rax_128 - 0x10) = zmm1_4
        i_6 = i_27
        i_27 -= 1
    while (i_6 != 1)
    *(rbx_1 + 0x240) = zmm6_3
    *(rbx_1 + 0x250) = zmm7
    void* var_1f8
    void** rax_129
    int512_t zmm6_4
    rax_129, zmm6_4 = sub_14144b430(&var_1f8, r15, &var_368)
    *(rbx_1 + 0x260) = *rax_129
    *(rbx_1 + 0x270) = *(rax_129 + 0x10)
    int32_t rcx_61 = r14[1].d
    int32_t var_11a4_1 = *(r14 + 0x14)
    uint32_t rax_134 = zx.d(cond:0)
    
    if (((rcx_61 - 2) & 0xfffffffd) != 0)
        rax_134 = 1
    
    uint64_t var_11f8_1 = rcx_61.q
    char temp55_1 = rax_134.b
    rax_134.b = neg.b(rax_134.b)
    uint128_t var_ef8
    char rcx_67 = sub_1419a2ec0(r12_1[0xa2a], &var_ef8, &data_143ed61f0, 
        var_11f8_1.d - 7
            + ((var_11f8_1 u>> 0x20).d + (sbb.d(rax_134, rax_134, temp55_1 != 0) & 4)) * 7)
    zmm6_4.o = zx.o(0)
    zmm7 = var_ef8
    int32_t temp56_1
    int32_t temp57_1
    temp56_1:temp57_1 = sx.q(var_12e0:8.d - var_12e0.d + 7)
    var_11f8_1.d = (temp57_1 + (temp56_1 & 7)) s>> 3
    int32_t temp58_1
    int32_t temp59_1
    temp58_1:temp59_1 = sx.q(var_12e0:0xc.d - var_12e0:4.d + 7)
    var_11f8_1:4.d = (temp59_1 + (temp58_1 & 7)) s>> 3
    int128_t var_ee8_1 = sub_141456930(rcx_67)
    sub_141998c50(zmm7.q, &data_143ed5860, rbx_1)
    int64_t* rdx_47 = r15[1]
    uint64_t var_c40_2 = var_11f8_1
    var_c58 = rbx_1
    int32_t var_c38_2 = 1
    void*** rax_149
    char rcx_69
    rax_149, rcx_69 = sub_14081d830(0x60, rdx_47, 1, 0)
    void*** rsi_3 = rax_149
    
    if (rax_149 == 0)
        rsi_3 = nullptr
    else
        var_1268.q = rbx_1
        sub_141456930(rcx_69)
        void* var_1260_3 = &data_143ed5890
        int128_t var_ed8 = var_1268.o
        sub_141992bd0(rsi_3, &var_12e7, &var_ed8, 2)
        uint128_t zmm0_11 = var_c58.o
        *rsi_3 = &data_142f860b0
        *(rsi_3 + 0x38) = zmm0_11
        *(rsi_3 + 0x48) = zmm7
        rsi_3[0xb] = var_c38_2.q
    
    sub_1419968d0(r15, rsi_3)
    zmm6 = var_368
    uint128_t var_358
    zmm7 = var_358
    i_24 = r14[1].d
    var_ae8 = zmm6
    uint128_t var_ad8_1 = zmm7

int72_t var_1278
bool rsi_5
int64_t* r13_3

if (i_24 != 5)
    rsi_5 = cond:0
    r13_3 = arg2
else
    var_12f8.q = &data_142f80140
    uint128_t var_408
    sub_14144b2c0(&var_408, r15, r13, &var_688, var_12f8)
    int64_t* rax_150 = sub_14081d830(0x2a0, r15[1], 1, 0)
    rbx_1 = rax_150
    
    if (rax_150 == 0)
        rbx_1 = nullptr
    else
        sub_141442300(rax_150)
        sub_1414423b0(&rax_150[0x28])
        void* rcx_75 = &rbx_1[0x4c]
        __builtin_memset(&rbx_1[0x48], 0, 0x20)
        int64_t i_19 = 2
        int64_t i_7
        
        do
            __builtin_memset(rcx_75, 0, 0x20)
            rcx_75 += 0x20
            i_7 = i_19
            i_19 -= 1
        while (i_7 != 1)
    
    memset(rbx_1, 0, 0x2a0)
    int128_t zmm6_6 = sub_141442d80(rbx_1, &var_d98)
    void* rax_151 = &rbx_1[0x28]
    int128_t* rcx_78 = &var_2f8
    int64_t i_8
    
    do
        rax_151 += 0x80
        int128_t zmm0_12 = *rcx_78
        int128_t zmm1_7 = rcx_78[1]
        rcx_78 = &rcx_78[8]
        *(rax_151 - 0x80) = zmm0_12
        zmm0_12 = rcx_78[-6]
        *(rax_151 - 0x70) = zmm1_7
        zmm1_7 = rcx_78[-5]
        *(rax_151 - 0x60) = zmm0_12
        zmm0_12 = rcx_78[-4]
        *(rax_151 - 0x50) = zmm1_7
        zmm1_7 = rcx_78[-3]
        *(rax_151 - 0x40) = zmm0_12
        zmm0_12 = rcx_78[-2]
        *(rax_151 - 0x30) = zmm1_7
        zmm1_7 = rcx_78[-1]
        *(rax_151 - 0x20) = zmm0_12
        *(rax_151 - 0x10) = zmm1_7
        i_8 = i_32
        i_32 -= 1
    while (i_8 != 1)
    *(rbx_1 + 0x240) = zmm6_6
    int32_t i_9 = 0
    void* rsi_4 = &rbx_1[0x4c]
    *(rbx_1 + 0x250) = zmm7
    int512_t zmm6_7
    
    do
        void* var_1d8
        void** rax_152
        rax_152, zmm6_7 = sub_14144b430(&var_1d8, r15, &var_408)
        i_9 += 1
        *rsi_4 = *rax_152
        *(rsi_4 + 0x10) = *(rax_152 + 0x10)
        rsi_4 += 0x20
    while (i_9 s< 2)
    
    int32_t rcx_80 = r14[1].d
    rsi_5 = cond:0
    r13_3 = arg2
    int32_t var_1194_1 = *(r14 + 0x14)
    var_1278.q = rcx_80.q
    int32_t r9_16 = var_1278.d
    var_1278:8.d = rsi_5.d
    uint32_t rax_156 = zx.d(var_1278:8.b)
    
    if (((rcx_80 - 2) & 0xfffffffd) != 0)
        rax_156 = 1
    
    char temp62_1 = rax_156.b
    rax_156.b = neg.b(rax_156.b)
    uint128_t var_1038
    char rcx_86 = sub_1419a2ec0(r13_3[0xa2a], &var_1038, &data_143ed6300, 
        r9_16 - 7 + ((var_1278.q u>> 0x20).d + (sbb.d(rax_156, rax_156, temp62_1 != 0) & 4)) * 7)
    zmm6_7.o = zx.o(0)
    zmm7 = var_1038
    int32_t temp63_1
    int32_t temp64_1
    temp63_1:temp64_1 = sx.q(var_12e0:8.d - var_12e0.d + 7)
    var_1278.d = (temp64_1 + (temp63_1 & 7)) s>> 3
    int32_t temp65_1
    int32_t temp66_1
    temp65_1:temp66_1 = sx.q(var_12e0:0xc.d - var_12e0:4.d + 7)
    var_1278:4.d = (temp66_1 + (temp65_1 & 7)) s>> 3
    int128_t var_1028_1 = sub_141456aa0(rcx_86)
    sub_141998c50(zmm7.q, &data_143ed5900, rbx_1)
    int64_t* rdx_59 = r15[1]
    int64_t var_c40_3 = var_1278.q
    var_c58 = rbx_1
    int32_t var_c38_3 = 1
    void*** rax_171
    char rcx_88
    rax_171, rcx_88 = sub_14081d830(0x60, rdx_59, 1, 0)
    void*** rdi_1 = rax_171
    
    if (rax_171 == 0)
        rdi_1 = nullptr
    else
        var_1268.q = rbx_1
        sub_141456aa0(rcx_88)
        void* var_1260_4 = &data_143ed5930
        int128_t var_1018 = var_1268.o
        void var_1288
        sub_141992bd0(rdi_1, &var_1288, &var_1018, 2)
        uint128_t zmm0_16 = var_c58.o
        *rdi_1 = &data_142f860c0
        *(rdi_1 + 0x38) = zmm0_16
        *(rdi_1 + 0x48) = zmm7
        rdi_1[0xb] = var_c38_3.q
    
    sub_1419968d0(r15, rdi_1)
    zmm6 = var_408
    uint128_t var_3f8
    zmm7 = var_3f8
    var_ae8 = zmm6
    uint128_t var_ad8_2 = zmm7

int32_t rdi_2 = var_12d0
int32_t var_1258
int64_t i_36

if (*(r14 + 0x28) == 0)
    zmm10 = var_1208_2
    i_36 = 2
    zmm11 = var_12c8
else
    var_12f8.q = &(&data_142f80240)[sx.q(r14[1].d << 2)]
    uint128_t var_3e8
    sub_14144b2c0(&var_3e8, r15, rdi_2, &var_7c8, var_12f8)
    int64_t* rax_176 = sub_141434450(r15)
    zmm10 = var_1208_2
    int32_t i_10 = 0
    zmm11 = var_12c8
    uint128_t zmm0_17
    
    if (*(r14 + 0x14) s> 0)
        do
            uint64_t i_28 = zx.q(i_10)
            i_10 += 1
            zmm0_17 = r14[i_28 + 4]
            int64_t rcx_96 = zmm0_17.q
            int64_t rax_177 = _mm_bsrli_si128(zmm0_17, 8).q
            zmm3.d = float.s(rcx_96.d)
            zmm3.d = zmm3.d f+ 0.5f
            zmm2.d = float.s((rcx_96 u>> 0x20).d)
            zmm3.d = zmm3.d f/ zmm10.d
            zmm0_17.d = float.s((rax_177 u>> 0x20).d)
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm2.d = zmm2.d f+ 0.5f
            zmm0_17.d = zmm0_17.d f- 0.5f
            zmm2.d = zmm2.d f/ zmm11.d
            zmm3.d = zmm2.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = (float.s(rax_177.d) - 0.5f) f/ zmm10.d
            zmm0_17.d = zmm0_17.d f/ zmm11.d
            _mm_shuffle_ps(zmm3, zmm3, 0x27)
            zmm3.d = zmm0_17.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            *(rax_176 + i_28 * 0x10) = zmm3
            var_1278 = zmm3.9
        while (i_10 s< *(r14 + 0x14))
    
    int32_t rcx_98 = *(r14 + 0x2c)
    int32_t rax_179
    
    if (rcx_98 s>= 1)
        rax_179 = 0x38
        
        if (rcx_98 s< 0x38)
            rax_179 = rcx_98
    else
        rax_179 = 1
    
    rax_176[8].d = rax_179
    zmm0_17.d = (*(r14 + 0x24)).d f/ r14[2].d
    *(rax_176 + 0x44) = int.d(zmm0_17.d)
    *(rax_176 + 0x4c) = *(r14 + 0x18)
    int128_t zmm6_9 = sub_141442d80(&rax_176[0xa], &var_d98)
    i_36 = 2
    void* rax_182 = &rax_176[0x32]
    int64_t i_29 = 2
    int128_t* rcx_100 = &var_2f8
    int64_t i_11
    
    do
        rax_182 += 0x80
        int128_t zmm0_18 = *rcx_100
        int128_t zmm1_11 = rcx_100[1]
        rcx_100 = &rcx_100[8]
        *(rax_182 - 0x80) = zmm0_18
        zmm0_18 = rcx_100[-6]
        *(rax_182 - 0x70) = zmm1_11
        zmm1_11 = rcx_100[-5]
        *(rax_182 - 0x60) = zmm0_18
        zmm0_18 = rcx_100[-4]
        *(rax_182 - 0x50) = zmm1_11
        zmm1_11 = rcx_100[-3]
        *(rax_182 - 0x40) = zmm0_18
        zmm0_18 = rcx_100[-2]
        *(rax_182 - 0x30) = zmm1_11
        zmm1_11 = rcx_100[-1]
        *(rax_182 - 0x20) = zmm0_18
        *(rax_182 - 0x10) = zmm1_11
        i_11 = i_29
        i_29 -= 1
    while (i_11 != 1)
    *(rax_176 + 0x290) = zmm6_9
    *(rax_176 + 0x2a0) = zmm7
    void* var_1b8
    void** rax_183 = sub_14144b430(&var_1b8, r15, &var_3e8)
    *(rax_176 + 0x2d0) = *rax_183
    *(rax_176 + 0x2e0) = *(rax_183 + 0x10)
    void*** rax_184 = sub_1414437c0(&var_1168, u"DebugDenoiserReconstruction")
    bool cond:8_1 = *(rax_176 + 0x44) != 1
    rax_176[0x5e] = rax_184
    bool var_1128_1 = cond:8_1
    int32_t rcx_103 = r14[1].d
    int32_t var_1124_1 = *(r14 + 0x14)
    int32_t var_112c_1 = 0
    uint128_t zmm0_20 = rcx_103.o
    uint32_t rax_188
    
    if ((zmm0_20.q u>> 0x20).d == 0)
        rax_188 = zx.d(rsi_5.d.b)
    
    if ((zmm0_20.q u>> 0x20).d != 0 || ((rcx_103 - 2) & 0xfffffffd) != 0)
        rax_188.b = 1
    
    char temp74_1 = rax_188.b
    rax_188.b = neg.b(rax_188.b)
    uint64_t rcx_106 = zx.q((zmm0_20:8.q u>> 0x20).d + (sbb.d(rax_188, rax_188, temp74_1 != 0) & 4))
    uint128_t var_1008
    sub_1419a2ec0(r13_3[0xa2a], &var_1008, &data_143ed6410, 
        ((zmm0_20.q u>> 0x20).d - 0xa + (sbb.d(rcx_106.d, rcx_106.d, zmm0_20:8.b != 0) & 5)
            + ((rcx_106 * 5).d << 1)) * 7 + zmm0_20.d)
    uint128_t var_ff8 = var_1008
    int32_t temp76_1
    int32_t temp77_1
    temp76_1:temp77_1 = sx.q(var_12e0:8.d - var_12e0.d + 7)
    var_1278.d = (temp77_1 + (temp76_1 & 7)) s>> 3
    int32_t temp78_1
    int32_t temp79_1
    temp78_1:temp79_1 = sx.q(var_12e0:0xc.d - var_12e0:4.d + 7)
    var_1278:4.d = (temp79_1 + (temp78_1 & 7)) s>> 3
    int32_t var_1250_1 = 1
    var_12f8.q = &var_1258
    var_1258.q = var_1278.q
    void var_1287
    sub_141434340(r15, &var_1287, &var_ff8, rax_176, var_12f8)
    zmm6 = var_3e8
    uint128_t var_3d8
    zmm7 = var_3d8
    var_ae8 = zmm6
    uint128_t var_ad8_3 = zmm7

int32_t i_12 = 0

if (r14[3].d s> 0)
    int32_t temp51_1
    int32_t temp52_1
    temp51_1:temp52_1 = sx.q(var_12e0:8.d - var_12e0.d + 7)
    var_1258 = (temp52_1 + (temp51_1 & 7)) s>> 3
    int32_t temp53_1
    int32_t temp54_1
    temp53_1:temp54_1 = sx.q(var_12e0:0xc.d - var_12e0:4.d + 7)
    int32_t var_1254_1 = (temp54_1 + (temp53_1 & 7)) s>> 3
    zmm9 = zx.o(var_1258.q)
    
    do
        var_12f8.q = &(&data_142f807d0)[sx.q(r14[1].d << 2)]
        uint128_t var_3c8
        sub_14144b2c0(&var_3c8, r15, rdi_2, &var_7c8, var_12f8)
        int64_t* rax_225 = sub_141434450(r15)
        int128_t zmm6_10 = sub_141442d80(&rax_225[0xa], &var_d98)
        void* rcx_115 = &rax_225[0x32]
        int64_t j_1 = 2
        int128_t* rdx_80 = &var_2f8
        int64_t j
        
        do
            rcx_115 += 0x80
            uint128_t zmm0_22 = *rdx_80
            int128_t zmm1_13 = rdx_80[1]
            rdx_80 = &rdx_80[8]
            *(rcx_115 - 0x80) = zmm0_22
            zmm0_22 = rdx_80[-6]
            *(rcx_115 - 0x70) = zmm1_13
            zmm1_13 = rdx_80[-5]
            *(rcx_115 - 0x60) = zmm0_22
            zmm0_22 = rdx_80[-4]
            *(rcx_115 - 0x50) = zmm1_13
            zmm1_13 = rdx_80[-3]
            *(rcx_115 - 0x40) = zmm0_22
            zmm0_22 = rdx_80[-2]
            *(rcx_115 - 0x30) = zmm1_13
            zmm1_13 = rdx_80[-1]
            *(rcx_115 - 0x20) = zmm0_22
            *(rcx_115 - 0x10) = zmm1_13
            j = j_1
            j_1 -= 1
        while (j != 1)
        *(rax_225 + 0x290) = zmm6_10
        *(rax_225 + 0x2a0) = zmm7
        rax_225[9].d = _mm_cvtepi32_ps(zx.o(8 << i_12.b)).d
        void** rax_227 = sub_14144b430(&var_c58, r15, &var_3c8)
        *(rax_225 + 0x2d0) = *rax_227
        *(rax_225 + 0x2e0) = *(rax_227 + 0x10)
        void*** rax_229
        int512_t zmm6_11
        rax_229, zmm6_11 =
            sub_1411e0390(r15, sub_141188e50(r15, &var_ac8, DebugDenoiserPreConvolution", 0))
        rax_225[0x5e] = rax_229
        int128_t var_fe8
        char rcx_123 = sub_1419a2ec0(r13_3[0xa2a], &var_fe8, &data_143ed6410, 
            r14[1].d + *(r14 + 0x14) * 0x46 + 0xd9)
        zmm6_11.o = var_fe8
        int128_t zmm6_12 = sub_141456c10(rcx_123)
        int128_t var_fd8_1 = zx.o(0)
        sub_141998c50(zmm6_12.q, &data_143ed5a40, rax_225)
        int64_t* rdx_85 = r15[1]
        var_c58 = rax_225
        uint64_t var_c40_4 = zmm9.q
        int32_t var_c38_4 = 1
        void*** rax_230
        char rcx_125
        rax_230, rcx_125 = sub_14081d830(0x60, rdx_85, 1, 0)
        void*** rdi_3 = rax_230
        
        if (rax_230 == 0)
            rdi_3 = nullptr
        else
            var_1268.q = rax_225
            sub_141456c10(rcx_125)
            void* var_1260_5 = &data_143ed5a70
            int128_t var_fc8 = var_1268.o
            void var_1286
            sub_141992bd0(rdi_3, &var_1286, &var_fc8, 2)
            uint128_t zmm0_25 = var_c58.o
            *rdi_3 = &data_142f860d0
            *(rdi_3 + 0x38) = zmm0_25
            *(rdi_3 + 0x48) = zmm6_12
            rdi_3[0xb] = var_c38_4.q
        
        sub_1419968d0(r15, rdi_3)
        zmm6 = var_3c8
        i_12 += 1
        uint128_t var_3b8
        zmm7 = var_3b8
        rdi_2 = var_12d0
    while (i_12 s< r14[3].d)
    
    var_ae8 = zmm6
    uint128_t var_ad8_4 = zmm7

rbx_1.b = 0
bool var_12e8_1 = false
var_12e7 = false
var_12e6 = false
uint64_t var_1248
char var_c04
char var_c03
int16_t var_c02
int16_t var_c00
int32_t var_bf8
char var_bef
char var_bdf
uint128_t var_bd8
int32_t var_bc8
int32_t var_bc4
int32_t var_bc0
int32_t var_bbc
int32_t var_bb8
char var_bb4
char var_bb3
int16_t var_bb2
int16_t var_bb0
int32_t var_ba8
int32_t var_ba4
char var_ba0
char var_b9f
int64_t var_b98
char var_b90
char var_b8f
char var_b8e
uint128_t var_b88
int32_t var_b78
int32_t var_b74
int32_t var_b70
int32_t var_b6c
int32_t var_b68
char var_b64
char var_b63
int16_t var_b62
int16_t var_b60
int32_t var_b58
int32_t var_b54
char var_b50
char var_b4f
int64_t var_b48
char var_b40
char var_b3f
char var_b3e
uint128_t var_b38
int32_t var_b28
int32_t var_b24
int32_t var_b20
int32_t var_b1c
int32_t var_b18
char var_b14
char var_b13
int16_t var_b12
int16_t var_b10
int32_t var_b08
int32_t var_b04
char var_b00
char var_aff
int64_t var_af8
char var_af0
char var_aef
char var_aee

if (*(r14 + 0x34) != 0)
    uint64_t rcx_128 = zx.q(r14[1].d)
    zmm8 = zx.o(0)
    zmm9 = zx.o(0)
    
    if ((rcx_128 - 2).d u<= 1)
        int64_t i_37 = 1
        uint128_t var_a78
        sub_141441080(&var_a78)
        int32_t var_a68_1 = var_c18
        int32_t var_a64_1 = var_c14
        int32_t var_a60_1 = var_c10
        int32_t var_a5c_1 = var_c0c
        int32_t var_a58_1 = var_c08
        int32_t rcx_130 = var_bfc
        char var_a54_1 = var_c04
        char var_a53_1 = var_c03
        int16_t var_a52_1 = var_c02
        int16_t var_a50_1 = var_c00
        int32_t var_a48_1 = var_bf8
        int32_t var_a44_1 = var_bf4
        char var_a40_1 = var_bf0
        char var_a3f_1 = var_bef
        int64_t var_a38_1 = var_be8
        char var_a30_1 = var_be0
        char var_a2f_1 = var_bdf
        char var_a2e_1 = var_bde
        int32_t var_a18_1 = var_bc8
        int32_t var_a14_1 = var_bc4
        int32_t var_a10_1 = var_bc0
        int32_t var_a0c_1 = var_bbc
        int32_t var_a08_1 = var_bb8
        char var_a04_1 = var_bb4
        char var_a03_1 = var_bb3
        int16_t var_a02_1 = var_bb2
        int16_t var_a00_1 = var_bb0
        int32_t var_9fc_1 = var_bac
        int32_t var_9f8_1 = var_ba8
        int32_t var_9f4_1 = var_ba4
        char var_9f0_1 = var_ba0
        char var_9ef_1 = var_b9f
        int64_t var_9e8_1 = var_b98
        char var_9e0_1 = var_b90
        char var_9df_1 = var_b8f
        var_a78 = var_c28
        char var_9de_1 = var_b8e
        int32_t var_a4c = rcx_130
        uint128_t var_a28_1 = var_bd8
        uint128_t var_9d8_1 = var_b88
        int32_t var_9c8_1 = var_b78
        int32_t var_9c4_1 = var_b74
        int32_t var_9c0_1 = var_b70
        int32_t var_9bc_1 = var_b6c
        int32_t var_9b8_1 = var_b68
        uint64_t rdx_88 = zx.q(r14[1].d)
        char var_9b4_1 = var_b64
        char var_9b3_1 = var_b63
        int16_t var_9b2_1 = var_b62
        int16_t var_9b0_1 = var_b60
        int32_t var_9ac_1 = var_b5c
        int32_t var_9a8_1 = var_b58
        int32_t var_9a4_1 = var_b54
        char var_9a0_1 = var_b50
        char var_99f_1 = var_b4f
        int64_t var_998_1 = var_b48
        char var_990_1 = var_b40
        char var_98f_1 = var_b3f
        char var_98e_1 = var_b3e
        int32_t var_978_1 = var_b28
        int32_t var_974_1 = var_b24
        int32_t var_970_1 = var_b20
        int32_t var_96c_1 = var_b1c
        int32_t var_968_1 = var_b18
        char var_964_1 = var_b14
        char var_963_1 = var_b13
        int16_t var_962_1 = var_b12
        int16_t var_960_1 = var_b10
        int32_t var_95c_1 = var_b0c
        int32_t var_958_1 = var_b08
        int32_t var_954_1 = var_b04
        char var_950_1 = var_b00
        char var_94f_1 = var_aff
        int64_t var_948_1 = var_af8
        char var_940_1 = var_af0
        char var_93f_1 = var_aef
        char var_93e_1 = var_aee
        uint128_t var_988_1 = var_b38
        
        if (rdx_88.d == 0)
            i_37 = sx.q(*(r14 + 0x14))
            int64_t i_25 = i_37
            
            if (i_37.d s> 0)
                int32_t* rax_303 = &var_a4c
                int64_t i_13
                
                do
                    *rax_303 = 0xa
                    rax_303 = &rax_303[0x14]
                    i_13 = i_25
                    i_25 -= 1
                while (i_13 != 1)
        else if (rdx_88.d != 2)
            if (rdx_88.d == 3)
                rcx_130 = 0xa
            
            var_a4c = rcx_130
        else
            var_a4c = 0xa
            i_37 = 3
            int32_t var_9fc_2 = 0xf
            int32_t var_9ac_2 = 0xa
        
        var_12f8.q = &(&data_142f809f0)[sx.q((rdx_88 << 2).d)]
        void* var_198
        void** rax_307 = sub_14144b2c0(&var_198, r15, i_37.d, &var_a78, var_12f8)
        zmm8 = *rax_307
        zmm9 = *(rax_307 + 0x10)
        uint128_t var_318 = zmm8
        uint128_t var_308_1 = zmm9
        int64_t* rax_308 = sub_141434450(r15)
        int128_t zmm6_13 = sub_141442d80(&rax_308[0xa], &var_d98)
        void* rcx_135 = &rax_308[0x32]
        int64_t i_34 = 2
        int128_t* rdx_91 = &var_2f8
        int64_t i_14
        
        do
            rcx_135 += 0x80
            int128_t zmm0_26 = *rdx_91
            int128_t zmm1_16 = rdx_91[1]
            rdx_91 = &rdx_91[8]
            *(rcx_135 - 0x80) = zmm0_26
            zmm0_26 = rdx_91[-6]
            *(rcx_135 - 0x70) = zmm1_16
            zmm1_16 = rdx_91[-5]
            *(rcx_135 - 0x60) = zmm0_26
            zmm0_26 = rdx_91[-4]
            *(rcx_135 - 0x50) = zmm1_16
            zmm1_16 = rdx_91[-3]
            *(rcx_135 - 0x40) = zmm0_26
            zmm0_26 = rdx_91[-2]
            *(rcx_135 - 0x30) = zmm1_16
            zmm1_16 = rdx_91[-1]
            *(rcx_135 - 0x20) = zmm0_26
            *(rcx_135 - 0x10) = zmm1_16
            i_14 = i_34
            i_34 -= 1
        while (i_14 != 1)
        *(rax_308 + 0x290) = zmm6_13
        *(rax_308 + 0x2a0) = zmm7
        void* var_178
        void** rax_309 = sub_14144b430(&var_178, r15, &var_318)
        *(rax_308 + 0x2d0) = *rax_309
        *(rax_308 + 0x2e0) = *(rax_309 + 0x10)
        int32_t rdi_4 = r14[1].d
        int32_t rbx_8 = *(r14 + 0x14)
        rax_308[0x5e] = sub_1414437c0(&var_1168, u"DebugDenoiserRejectionPreConvolution")
        uint128_t var_fb8
        sub_1419a2ec0(r13_3[0xa2a], &var_fb8, &data_143ed6410, rbx_8 * 0x46 + 0xe0 + rdi_4)
        uint128_t var_fa8 = var_fb8
        int32_t temp81_1
        int32_t temp82_1
        temp81_1:temp82_1 = sx.q(var_12e0:8.d - var_12e0.d + 7)
        var_1258 = (temp82_1 + (temp81_1 & 7)) s>> 3
        int32_t temp83_1
        int32_t temp84_1
        temp83_1:temp84_1 = sx.q(var_12e0:0xc.d - var_12e0:4.d + 7)
        int32_t var_1254_2 = (temp84_1 + (temp83_1 & 7)) s>> 3
        int32_t var_1240_1 = 1
        var_12f8.q = &var_1248
        var_1248 = var_1258.q
        void var_1282
        sub_141434340(r15, &var_1282, &var_fa8, rax_308, var_12f8)
        rcx_128 = zx.q(r14[1].d)
    
    var_12f8.q = &(&data_142f80cf0)[sx.q((rcx_128 << 2).d)]
    uint128_t var_3a8
    sub_14144b2c0(&var_3a8, r15, var_12b0.d, &var_c28, var_12f8)
    int128_t var_1148
    sub_1419a2ec0(r13_3[0xa2a], &var_1148, &data_143ed6520, r14[1].d + *(r14 + 0x14) * 7 - 7)
    zmm12 = var_1148
    void* rax_326 = sub_14081d830(0x380, r15[1], 1, 0)
    void* const r13_4
    
    if (rax_326 == 0)
        r13_4 = nullptr
    else
        r13_4 = sub_141441740(rax_326)
    
    memset(r13_4, 0, 0x380)
    int128_t zmm6_14 = sub_141442d80(r13_4 + 0x90, &var_d98)
    void* rax_328 = r13_4 + 0x1d0
    int64_t i_30 = 2
    int128_t* rcx_148 = &var_2f8
    int128_t zmm0_29
    int64_t i_15
    
    do
        rax_328 += 0x80
        zmm0_29 = *rcx_148
        int128_t zmm1_18 = rcx_148[1]
        rcx_148 = &rcx_148[8]
        *(rax_328 - 0x80) = zmm0_29
        zmm0_29 = rcx_148[-6]
        *(rax_328 - 0x70) = zmm1_18
        zmm1_18 = rcx_148[-5]
        *(rax_328 - 0x60) = zmm0_29
        zmm0_29 = rcx_148[-4]
        *(rax_328 - 0x50) = zmm1_18
        zmm1_18 = rcx_148[-3]
        *(rax_328 - 0x40) = zmm0_29
        zmm0_29 = rcx_148[-2]
        *(rax_328 - 0x30) = zmm1_18
        zmm1_18 = rcx_148[-1]
        *(rax_328 - 0x20) = zmm0_29
        *(rax_328 - 0x10) = zmm1_18
        i_15 = i_30
        i_30 -= 1
    while (i_15 != 1)
    rbx_1 = arg2
    zmm0_29.d = (*(rbx_1 + 0x4fd4)).d f/ rbx_1[0x9a8].d
    *(r13_4 + 0x2d0) = zmm6_14
    *(r13_4 + 0x2f0) = zmm8
    *(r13_4 + 0x40) = zmm0_29.d
    *(r13_4 + 0x2e0) = zmm7
    *(r13_4 + 0x300) = zmm9
    void* const var_7f8
    void** rax_329 = sub_14144b430(&var_7f8, r15, &var_3a8)
    *(r13_4 + 0x310) = *rax_329
    *(r13_4 + 0x320) = *(rax_329 + 0x10)
    *(r13_4 + 0x350) = sub_1419a9d70(r15, arg4, &data_1439b70c8, u"External")
    *(r13_4 + 0x358) = sub_1419a9d70(r15, &arg4[1], &data_1439b70c8, u"External")
    *(r13_4 + 0x360) = sub_1419a9d70(r15, &arg4[2], &data_1439b70c8, u"External")
    
    if (var_12b8 == 2)
        *(r13_4 + 0x368) = sub_1419a9d70(r15, &arg4[3], &data_1439b7168, u"External")
    
    uint64_t rdx_108 = 0
    int32_t var_12c8_1 = 0
    int128_t var_348
    __builtin_memset(&var_348, 0, 0x30)
    
    if (*(r14 + 0x14) s> 0)
        do
            int128_t* rsi_7 = &var_348
            int128_t* rax_335 = *(arg7 + (rdx_108 << 3))
            
            if (rax_335 != 0)
                rsi_7 = rax_335
            
            uint64_t rcx_155 = zx.q(rdx_108.d) * 2
            int32_t rax_336
            rax_336.b = rsi_7[1].q == 0
            void* rdi_6 = &rsi_7[1]
            *(r13_4 + (rcx_155 << 3)) = rax_336
            
            if (rbx_1[0x2b5] == 0 || *(r14 + 0x34) == 0)
                *(r13_4 + (rcx_155 << 3)) = 1
            
            int32_t rbx_9 = 0
            
            if (var_12e4 != 0)
                do
                    int64_t rax_340 = sub_1419a9d70(r15, rsi_7 + ((sx.q(rbx_9) + 2) << 3), 
                        &data_1439b70c8, External")
                    uint64_t rcx_157 = zx.q(rdx_108.d * var_12e4 + rbx_9)
                    rbx_9 += 1
                    *(r13_4 + (rcx_157 << 3) + 0x330) = rax_340
                while (rbx_9 s< var_12e4)
                
                r14 = var_1188
                rdx_108 = zx.q(var_12c8_1)
            
            zmm3.d = float.s(*rsi_7)
            int64_t i_31 = 3
            int128_t zmm0_31
            zmm0_31.d = float.s(*(rsi_7 + 4))
            int128_t zmm1_20
            zmm1_20.d = float.s(*(rsi_7 + 8))
            zmm3.d = zmm3.d f+ 0.5f
            zmm2.d = float.s(*(rsi_7 + 0xc))
            zmm3.d = zmm3.d f/ zmm10.d
            zmm0_31.d = zmm0_31.d f+ 0.5f
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm1_20.d = zmm1_20.d f- 0.5f
            zmm2.d = zmm2.d f- 0.5f
            zmm0_31.d = zmm0_31.d f/ zmm11.d
            zmm1_20.d = zmm1_20.d f/ zmm10.d
            zmm3.d = zmm0_31.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = zmm1_20.d
            zmm2.d = zmm2.d f/ zmm11.d
            _mm_shuffle_ps(zmm3, zmm3, 0x27)
            zmm3.d = zmm2.d
            *(r13_4 + (zx.q(rdx_108.d) + 5) * 0x10) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            int64_t i_16
            
            do
                int64_t* rcx_158 = *rdi_6
                *rdi_6 = 0
                
                if (rcx_158 != 0)
                    (*(*rcx_158 + 0x38))(rcx_158)
                
                rdi_6 += 8
                i_16 = i_31
                i_31 -= 1
            while (i_16 != 1)
            int64_t* rcx_159 = *(rsi_7 + 0x28)
            *(rsi_7 + 0x28) = i_31
            
            if (rcx_159 != 0)
                (*(*rcx_159 + 0x38))(rcx_159)
            
            rbx_1 = arg2
            rdx_108 = zx.q(var_12c8_1 + 1)
            var_12c8_1 = rdx_108.d
        while (rdx_108.d s< *(r14 + 0x14))
        
        i_36 = 2
    
    void*** rax_346
    char rcx_161
    int512_t zmm6_15
    rax_346, rcx_161, zmm6_15 = sub_1414437c0(&var_1168, u"DebugDenoiserTemporalAccumulation")
    *(r13_4 + 0x370) = rax_346
    zmm6_15.o = zx.o(0)
    int128_t var_f98_1 = sub_141456d80(rcx_161)
    char rcx_163 = sub_141998c50(var_1148.q, &data_143ed5af0, r13_4)
    var_12e8_1 = *(r13_4 + 0x350) != 0
    var_12e7 = *(r13_4 + 0x358) != 0
    var_12e6 = *(r13_4 + 0x360) != 0
    rbx_1.b = *(r13_4 + 0x368) != 0
    int32_t temp90_1
    int32_t temp91_1
    temp90_1:temp91_1 = sx.q(var_12e0:8.d - var_12e0.d + 7)
    var_1248.d = (temp91_1 + (temp90_1 & 7)) s>> 3
    int32_t temp92_1
    int32_t temp93_1
    temp92_1:temp93_1 = sx.q(var_12e0:0xc.d - var_12e0:4.d + 7)
    var_1248:4.d = (temp93_1 + (temp92_1 & 7)) s>> 3
    int128_t var_f88_1 = sub_141456d80(rcx_163)
    sub_141998c50(zmm12.q, &data_143ed5af0, r13_4)
    uint64_t zmm0_32 = var_1248
    int64_t* rdx_115 = r15[1]
    var_7f8 = r13_4
    int32_t var_7d8_1 = 1
    uint64_t var_7e0_1 = zmm0_32
    void*** rax_359
    char rcx_165
    rax_359, rcx_165 = sub_14081d830(0x60, rdx_115, 1, 0)
    void*** rdi_7 = rax_359
    
    if (rax_359 == 0)
        rdi_7 = nullptr
    else
        var_1148.q = r13_4
        sub_141456d80(rcx_165)
        var_1148:8.q = &data_143ed5b20
        int128_t var_f78 = var_1148
        void var_1285
        sub_141992bd0(rdi_7, &var_1285, &var_f78, 2)
        uint128_t zmm0_34 = var_7f8.o
        *rdi_7 = &data_142f860e0
        *(rdi_7 + 0x38) = zmm0_34
        *(rdi_7 + 0x48) = zmm12
        rdi_7[0xb] = var_7d8_1.q
    
    sub_1419968d0(r15, rdi_7)
    zmm6 = var_3a8
    uint128_t var_398
    zmm7 = var_398
    var_ae8 = zmm6
    uint128_t var_ad8_5 = zmm7
    sub_1414424c0(&var_348)

int32_t rax_360 = *(r14 + 0x38)
int32_t var_11c8

if (rax_360 s>= 1)
    int32_t rsi_8 = 0x38
    int32_t rdi_8 = 0x38
    
    if (rax_360 s< 0x38)
        rdi_8 = rax_360
    
    if (rdi_8 s> 1)
        var_12f8.q = &(&data_142f81250)[sx.q(r14[1].d << 2)]
        uint128_t var_388
        sub_14144b2c0(&var_388, r15, var_12b0.d, &var_c28, var_12f8)
        int64_t* rax_365 = sub_141434450(r15)
        
        if (rdi_8 s< 0x38)
            rsi_8 = rdi_8
        
        rax_365[8].d = rsi_8
        rax_365[9].d = *(r14 + 0x3c)
        int128_t zmm6_18 = sub_141442d80(&rax_365[0xa], &var_d98)
        void* rcx_174 = &rax_365[0x32]
        int128_t* rdx_120 = &var_2f8
        int64_t i_17
        
        do
            rcx_174 += 0x80
            int128_t zmm0_35 = *rdx_120
            int128_t zmm1_22 = rdx_120[1]
            rdx_120 = &rdx_120[8]
            *(rcx_174 - 0x80) = zmm0_35
            zmm0_35 = rdx_120[-6]
            *(rcx_174 - 0x70) = zmm1_22
            zmm1_22 = rdx_120[-5]
            *(rcx_174 - 0x60) = zmm0_35
            zmm0_35 = rdx_120[-4]
            *(rcx_174 - 0x50) = zmm1_22
            zmm1_22 = rdx_120[-3]
            *(rcx_174 - 0x40) = zmm0_35
            zmm0_35 = rdx_120[-2]
            *(rcx_174 - 0x30) = zmm1_22
            zmm1_22 = rdx_120[-1]
            *(rcx_174 - 0x20) = zmm0_35
            *(rcx_174 - 0x10) = zmm1_22
            i_17 = i_36
            i_36 -= 1
        while (i_17 != 1)
        *(rax_365 + 0x290) = zmm6_18
        *(rax_365 + 0x2a0) = zmm7
        void* var_158
        void** rax_366 = sub_14144b430(&var_158, r15, &var_388)
        *(rax_365 + 0x2d0) = *rax_366
        *(rax_365 + 0x2e0) = *(rax_366 + 0x10)
        int32_t rsi_9 = r14[1].d
        int32_t rdi_9 = *(r14 + 0x14)
        rax_365[0x5e] = sub_1414437c0(&var_1168, u"DebugDenoiserPostfilter")
        uint128_t var_f68
        sub_1419a2ec0(arg2[0xa2a], &var_f68, &data_143ed6410, rdi_9 * 0x46 + 0xe7 + rsi_9)
        uint128_t var_f58 = var_f68
        int32_t temp86_1
        int32_t temp87_1
        temp86_1:temp87_1 = sx.q(var_12e0:8.d - var_12e0.d + 7)
        var_1248.d = (temp87_1 + (temp86_1 & 7)) s>> 3
        int32_t temp88_1
        int32_t temp89_1
        temp88_1:temp89_1 = sx.q(var_12e0:0xc.d - var_12e0:4.d + 7)
        var_1248:4.d = (temp89_1 + (temp88_1 & 7)) s>> 3
        int32_t var_11c0_1 = 1
        var_12f8.q = &var_11c8
        var_11c8.q = var_1248
        void var_1284
        sub_141434340(r15, &var_1284, &var_f58, rax_365, var_12f8)
        zmm6 = var_388
        uint128_t var_378
        zmm7 = var_378
        var_ae8 = zmm6
        uint128_t var_ad8_6 = zmm7

int64_t* r13_8 = arg2

if ((*(r13_8 + 0x497c) & 1) == 0 && *(r14 + 0x34) != 0)
    if (var_12e8_1 != 0)
        zmm6 = sub_14131f2d0(r15, *(arg3 + 8), arg4[4], 1)
    
    if (var_12e7 != 0)
        zmm6 = sub_14131f2d0(r15, *(arg3 + 0x18), arg4[5], 1)
    
    if (var_12e6 != 0)
        zmm6 = sub_14131f2d0(r15, arg3[2].q, arg4[6], 1)
    
    int64_t rcx_183 = 0
    
    if (var_12b8 == 2)
        rcx_183 = arg4[7]
    
    uint128_t var_1238
    int32_t var_1228
    
    if (rbx_1.b != 0)
        int64_t rdi_11 = sx.q(r15[0x2d].d)
        var_1238.q = var_c98
        var_1238:8.q = rcx_183
        int32_t rax_381 = (rdi_11 + 1).d
        var_1228.b = 1
        r15[0x2d].d = rax_381
        
        if (rax_381 s> *(r15 + 0x16c))
            zmm6 = sub_14119a720(&r15[0x2c], rdi_11.d)
        
        int64_t rax_382 = r15[0x2c]
        int64_t rcx_185 = rdi_11 * 3
        *(rax_382 + (rcx_185 << 3)) = var_1238
        *(rax_382 + (rcx_185 << 3) + 0x10) = var_1228.q
    
    uint64_t rcx_186 = 0
    var_12b0.d = 0
    
    if (*(r14 + 0x14) s> 0)
        int64_t rdx_132 = arg8
        
        do
            int32_t rdi_12 = 0
            int32_t* r12_4 = *(rdx_132 + (rcx_186 << 3))
            
            if (var_12e4 != 0)
                do
                    int64_t rsi_11 = sx.q(r15[0x2d].d)
                    var_1238.q = *(&var_ae8 + (zx.q(rdi_12 + rcx_186.d * var_12e4) << 3))
                    int32_t rax_386 = (rsi_11 + 1).d
                    var_1228.b = 1
                    r15[0x2d].d = rax_386
                    var_1238:8.q = &r12_4[(sx.q(rdi_12) + 2) * 2]
                    
                    if (rax_386 s> *(r15 + 0x16c))
                        zmm6 = sub_14119a720(&r15[0x2c], rsi_11.d)
                    
                    int64_t rax_387 = r15[0x2c]
                    int64_t rcx_191 = rsi_11 * 3
                    rdi_12 += 1
                    *(rax_387 + (rcx_191 << 3)) = var_1238
                    *(rax_387 + (rcx_191 << 3) + 0x10) = var_1228.q
                while (rdi_12 s< var_12e4)
                
                r15 = arg1
                rcx_186 = zx.q(var_12b0.d)
                rdx_132 = arg8
            
            rcx_186 = zx.q(rcx_186.d + 1)
            *r12_4 = *r14
            r12_4[1] = *(r14 + 4)
            r12_4[2] = *(r14 + 8)
            r12_4[3] = *(r14 + 0xc)
            var_12b0.d = rcx_186.d
        while (rcx_186.d s< *(r14 + 0x14))
        
        r13_8 = arg2

if (r14[1].d != 0)
    *arg9 = zmm6
    arg9[1] = zmm7
else
    uint128_t var_938
    sub_141441080(&var_938)
    int32_t var_928_1 = var_c18
    int32_t var_924_1 = var_c14
    int32_t var_920_1 = var_c10
    int32_t var_91c_1 = var_c0c
    int32_t var_918_1 = var_c08
    zmm0_1 = var_c28
    char var_914_1 = var_c04
    char var_913_1 = var_c03
    int16_t var_912_1 = var_c02
    int16_t var_910_1 = var_c00
    int32_t var_90c = var_bfc
    int32_t var_908_1 = var_bf8
    int32_t var_904_1 = var_bf4
    char var_900_1 = var_bf0
    char var_8ff_1 = var_bef
    int64_t var_8f8_1 = var_be8
    char var_8f0_1 = var_be0
    char var_8ef_1 = var_bdf
    char var_8ee_1 = var_bde
    int32_t var_8d8_1 = var_bc8
    int32_t var_8d4_1 = var_bc4
    int32_t var_8d0_1 = var_bc0
    int32_t var_8cc_1 = var_bbc
    int32_t var_8c8_1 = var_bb8
    char var_8c4_1 = var_bb4
    char var_8c3_1 = var_bb3
    int16_t var_8c2_1 = var_bb2
    int16_t var_8c0_1 = var_bb0
    int32_t var_8bc_1 = var_bac
    int32_t var_8b8_1 = var_ba8
    int32_t var_8b4_1 = var_ba4
    char var_8b0_1 = var_ba0
    char var_8af_1 = var_b9f
    int64_t var_8a8_1 = var_b98
    char var_8a0_1 = var_b90
    char var_89f_1 = var_b8f
    var_938 = zmm0_1
    char var_89e_1 = var_b8e
    int32_t var_888_1 = var_b78
    uint128_t var_8e8_1 = var_bd8
    uint128_t var_898_1 = var_b88
    int32_t var_884_1 = var_b74
    int32_t var_880_1 = var_b70
    int32_t var_87c_1 = var_b6c
    int32_t var_878_1 = var_b68
    uint64_t rdx_134 = zx.q(r14[1].d)
    char var_874_1 = var_b64
    char var_873_1 = var_b63
    int16_t var_872_1 = var_b62
    int16_t var_870_1 = var_b60
    int32_t var_86c_1 = var_b5c
    int32_t var_868_1 = var_b58
    int32_t var_864_1 = var_b54
    char var_860_1 = var_b50
    char var_85f_1 = var_b4f
    int64_t var_858_1 = var_b48
    char var_850_1 = var_b40
    char var_84f_1 = var_b3f
    char var_84e_1 = var_b3e
    int32_t var_838_1 = var_b28
    int32_t var_834_1 = var_b24
    int32_t var_830_1 = var_b20
    int32_t var_82c_1 = var_b1c
    int32_t var_828_1 = var_b18
    char var_824_1 = var_b14
    char var_823_1 = var_b13
    int16_t var_822_1 = var_b12
    int16_t var_820_1 = var_b10
    int32_t var_81c_1 = var_b0c
    int32_t var_818_1 = var_b08
    int32_t var_814_1 = var_b04
    char var_810_1 = var_b00
    char var_80f_1 = var_aff
    int64_t var_808_1 = var_af8
    char var_800_1 = var_af0
    char var_7ff_1 = var_aef
    char var_7fe_1 = var_aee
    uint128_t var_848_1 = var_b38
    
    if (rdx_134.d == 0)
        int64_t i_26 = sx.q(*(r14 + 0x14))
        
        if (i_26 s> 0)
            int32_t* rax_464 = &var_90c
            int64_t i_18
            
            do
                *rax_464 = 0xa
                rax_464 = &rax_464[0x14]
                i_18 = i_26
                i_26 -= 1
            while (i_18 != 1)
    
    var_12f8.q = &(&data_142f81560)[sx.q((rdx_134 << 2).d)]
    void* var_138
    void** rax_468 = sub_14144b2c0(&var_138, r15, *(r14 + 0x14), &var_938, var_12f8)
    *arg9 = *rax_468
    arg9[1] = *(rax_468 + 0x10)
    int64_t* rax_469 = sub_141434450(r15)
    *(rax_469 + 0x290) = sub_141442d80(&rax_469[0xa], &var_d98)
    *(rax_469 + 0x2a0) = zmm7
    void* var_118
    void** rax_470 = sub_14144b430(&var_118, r15, arg9)
    *(rax_469 + 0x2d0) = *rax_470
    *(rax_469 + 0x2e0) = *(rax_470 + 0x10)
    uint128_t var_f48
    sub_1419a2ec0(r13_8[0xa2a], &var_f48, &data_143ed6410, r14[1].d + *(r14 + 0x14) * 0x46 + 0xee)
    uint128_t var_f38 = var_f48
    int32_t temp67_1
    int32_t temp68_1
    temp67_1:temp68_1 = sx.q(var_12e0:8.d - var_12e0.d + 7)
    var_11c8 = (temp68_1 + (temp67_1 & 7)) s>> 3
    int32_t temp69_1
    int32_t temp70_1
    temp69_1:temp70_1 = sx.q(var_12e0:0xc.d - var_12e0:4.d + 7)
    int32_t var_11c4_1 = (temp70_1 + (temp69_1 & 7)) s>> 3
    var_1218:8.d = 1
    var_12f8.q = &var_1218
    var_1218.q = var_11c8.q
    void var_1283
    sub_141434340(r15, &var_1283, &var_f38, rax_469, var_12f8)

sub_1405d1550(&var_c68)
sub_1405d1550(&var_c78:8)
sub_1405d1550(&var_c78)
int64_t result = sub_1405d1550(&var_c88:8)
__security_check_cookie(rax_1 ^ &var_1318)
return result

// 函数: sub_14138fdf0
// 地址: 0x14138fdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8 = *arg4
void*** r15 = zmm8.q
uint128_t var_168 = zmm8
uint128_t var_158 = arg4[1]
uint128_t var_e8
uint128_t var_d8
uint128_t var_c8
uint128_t var_b8
uint128_t var_a8
char arg_8
int64_t rdx
int32_t r8
int32_t r9
uint128_t zmm1

if (r15 == 0)
label_14138feb6:
    int128_t zmm6 = arg4[2]
    uint64_t var_138_1 = arg4[3].q
    arg_8 = sub_14141f7a0(arg3)
    void* rax_4 = zmm6.q
    zmm1 = *(rax_4 + 0x40)
    var_e8 = *(rax_4 + 0x30)
    var_d8 = zmm1
    var_c8 = *(rax_4 + 0x50)
    var_c8:8.w = 1
    var_a8 = *(rax_4 + 0x70)
    var_b8:8.w = 0
    var_b8:4.d = ((*(rax_4 + 0x60)):4.d & 0xfffeffff) | 1
    var_a8:8.b = 1
    void*** rax_8
    uint128_t zmm6_1
    rax_8, zmm6_1 = sub_141188e50(arg2, &var_e8, u"VisualizeHDR", 0)
    r9 = var_138_1.d
    var_168.q = rax_8
    r15 = rax_8
    uint128_t temp0_3 = _mm_bsrli_si128(zmm6_1, 8)
    r8 = _mm_bsrli_si128(zmm6_1, 8).d
    var_168:0xc.d = (temp0_3.q u>> 0x20).d
    var_168:8.d = r8
    var_158:4.d = (var_138_1 u>> 0x20).d
    var_158.d = r9
    rdx = var_168:8.q
else
    r9 = var_158.d
    r8 = _mm_bsrli_si128(zmm8, 8).d
    var_168:8.d = r8
    
    if (r9 != r8)
        arg_8 = var_158:8.b
        rdx = var_168:8.q
    else
        rdx = _mm_bsrli_si128(zmm8, 8).q
        
        if ((var_158.q u>> 0x20).d == (rdx u>> 0x20).d)
            goto label_14138feb6
        
        arg_8 = var_158:8.b

zmm1 = arg4[2]
void* rcx_6 = zmm1.q
uint64_t var_138_2 = arg4[3].q
uint128_t temp0_5 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_6 = _mm_bsrli_si128(zmm1, 8)
int32_t var_100 = *(rcx_6 + 0x44)
int32_t var_fc = *(rcx_6 + 0x48)
uint32_t var_f4 = (temp0_5.q u>> 0x20).d
uint32_t var_ec = (var_138_2 u>> 0x20).d
int32_t var_f8 = temp0_6.d
int32_t var_118 = *(r15 + 0x44)
int32_t var_114 = r15[9].d
uint32_t var_104 = (var_158.q u>> 0x20).d
int64_t rax_22 = data_14395f4d0
int32_t var_110 = r8
uint32_t var_10c = (rdx u>> 0x20).d
int64_t* rax_23 = sub_14081d830(0x2c0, *(arg2 + 8), 1, 0)
int64_t* rbx = rax_23

if (rax_23 == 0)
    rbx = nullptr
else
    *(rax_23 + 0x7c) = 0x3f800000
    *(rax_23 + 0x84) = 0
    *(rax_23 + 0x8c) = 0x3f800000
    *(rax_23 + 0x94) = 0
    *(rax_23 + 0x9c) = 0x3f800000
    *rax_23 = 0
    *(rax_23 + 0xa4) = 0
    *(rax_23 + 0xac) = 0x3f800000
    __builtin_memset(&rax_23[0xc], 0, 0x1c)
    *(rax_23 + 0xb4) = 0
    *(rax_23 + 0xbc) = 0x3f800000
    *(rax_23 + 0xc4) = 0
    *(rax_23 + 0xcc) = 0x3f800000
    *(rax_23 + 0xd4) = 0
    *(rax_23 + 0xdc) = 0x3f800000
    *(rax_23 + 0xe4) = 0
    *(rax_23 + 0xec) = 0x3f800000
    __builtin_memset(&rax_23[0x3e], 0, 0x38)
    sub_14117af20(&rax_23[0x46])

memset(rbx, 0, 0x230)
memset(&rbx[0x48], 0, 0x80)
char var_170 = arg_8
int64_t* var_178 = r15
int16_t var_16f = 0
int32_t var_16c = 0xffffffff
*(rbx + 0x230) = var_178.o
sub_1405d16e0(rbx, arg3[2])
int32_t* rax_25 = sub_141455b70(&var_e8, &var_100)
rbx[0x22] = *rax_25
rbx[0x23] = *(rax_25 + 8)
rbx[0x24] = *(rax_25 + 0x10)
rbx[0x25] = *(rax_25 + 0x18)
rbx[0x26].d = rax_25[8]
*(rbx + 0x134) = rax_25[9]
rbx[0x27].d = rax_25[0xa]
*(rbx + 0x13c) = rax_25[0xb]
rbx[0x28] = *(rax_25 + 0x30)
rbx[0x29] = *(rax_25 + 0x38)
rbx[0x2a] = *(rax_25 + 0x40)
rbx[0x2b] = *(rax_25 + 0x48)
rbx[0x2c] = *(rax_25 + 0x50)
rbx[0x2d] = *(rax_25 + 0x58)
rbx[0x2e] = *(rax_25 + 0x60)
rbx[0x2f] = *(rax_25 + 0x68)
int32_t* rax_28 = sub_141455b70(&var_e8, &var_118)
rbx[0x30] = *rax_28
rbx[0x31] = *(rax_28 + 8)
rbx[0x32] = *(rax_28 + 0x10)
rbx[0x33] = *(rax_28 + 0x18)
rbx[0x34].d = rax_28[8]
*(rbx + 0x1a4) = rax_28[9]
rbx[0x35].d = rax_28[0xa]
*(rbx + 0x1ac) = rax_28[0xb]
rbx[0x36] = *(rax_28 + 0x30)
rbx[0x37] = *(rax_28 + 0x38)
rbx[0x38] = *(rax_28 + 0x40)
rbx[0x39] = *(rax_28 + 0x48)
rbx[0x3a] = *(rax_28 + 0x50)
rbx[0x3b] = *(rax_28 + 0x58)
rbx[0x3c] = *(rax_28 + 0x60)
rbx[0x3d] = *(rax_28 + 0x68)
int64_t rax_31 = arg4[2].q
rbx[0x43] = rax_22
rbx[0x3f] = rax_31
int64_t rax_32 = *(arg4 + 0x38)
rbx[0x42] = rax_22
rbx[0x3e] = rax_32
rbx[0x40] = arg4[5].q
rbx[0x41] = *(arg4 + 0x58)
int128_t* rax_35 = arg4[6].q
*(rbx + 0x10) = *rax_35
*(rbx + 0x20) = rax_35[1]
*(rbx + 0x30) = rax_35[2]
*(rbx + 0x40) = rax_35[3]
*(rbx + 0x50) = rax_35[4]
*(rbx + 0x60) = rax_35[5]
int128_t var_148
int64_t* rax_36 = sub_14135ba90(&var_148, *arg3)
*(rbx + 0xf0) = *rax_36
*(rbx + 0x100) = *(rax_36 + 0x10)
int128_t* rax_37
int512_t zmm6_2
int128_t zmm8_1
rax_37, zmm6_2, zmm8_1 = sub_141356ee0(&var_e8, &arg3[0x1bc], 1, 1, 1)
*(rbx + 0x70) = *rax_37
*(rbx + 0x80) = rax_37[1]
*(rbx + 0x90) = rax_37[2]
*(rbx + 0xa0) = rax_37[3]
*(rbx + 0xb0) = rax_37[4]
*(rbx + 0xc0) = rax_37[5]
*(rbx + 0xd0) = rax_37[6]
*(rbx + 0xe0) = rax_37[7]
rbx[0x44] = *sub_1414558d0()
char rcx_22 = sub_1419a2ec0(arg3[0xa2a], &var_178, &data_143ec4690, 0)
int128_t zmm7 = var_178.o
zmm6_2.o = zx.o(0)
var_148 = sub_14139f180(rcx_22)
sub_141998c50(zmm7.q, &data_143ec6950, rbx)
var_e8.q = arg3
int64_t* rdx_12 = *(arg2 + 8)
var_a8:8.q = rbx
var_e8 = var_118.o
char var_98 = 0
var_d8:8.q = r9.q
var_b8.q = var_138_2.d.q
void*** rax_39
char rcx_24
rax_39, rcx_24 = sub_14081d830(0x90, rdx_12, 1, 0)
void*** rsi_1 = rax_39

if (rax_39 == 0)
    rsi_1 = nullptr
else
    var_178 = rbx
    int128_t zmm6_4 = sub_14139f180(rcx_24)
    var_170.q = &data_143ec6980
    var_148 = var_178.o
    sub_141992bd0(rsi_1, &arg_8, &var_148, 1)
    uint128_t zmm0_8 = var_e8
    *rsi_1 = &data_142f6e270
    *(rsi_1 + 0x38) = zmm0_8
    *(rsi_1 + 0x48) = var_d8
    *(rsi_1 + 0x58) = zmm6_4
    *(rsi_1 + 0x68) = zmm7
    *(rsi_1 + 0x78) = var_a8
    rsi_1[0x11] = var_98.q

sub_1419968d0(arg2, rsi_1)
var_158:8.b = 1
int512_t zmm6_5
zmm6_5.o = var_158
uint128_t* rax_40
int128_t zmm6_6
rax_40, zmm6_6 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
uint128_t* rsi_2 = rax_40

if (rax_40 == 0)
    rsi_2 = nullptr
else
    sub_14117af20(rax_40)

memset(&rsi_2[1], 0, 0x80)
var_178 = r15
var_170.w = 1
var_16f:1.b = 0
int32_t var_16c_1 = 0xffffffff
*rsi_2 = var_178.o
var_c8.q = arg3
var_a8:8.q = arg3
void*** rax_41 = sub_14081d830(0x88, *(arg2 + 8), 1, 0)
void*** rbx_1 = rax_41

if (rax_41 == 0)
    rbx_1 = nullptr
else
    int64_t* rax_42
    int128_t zmm6_7
    rax_42, zmm6_7 = sub_1412ec240(&var_178, rsi_2)
    var_148 = *rax_42
    sub_141992bd0(rbx_1, &arg_8, &var_148, 1)
    *rbx_1 = &data_142f6e280
    *(rbx_1 + 0x38) = zmm8_1
    *(rbx_1 + 0x48) = zmm6_7
    *(rbx_1 + 0x58) = zmm8_1
    *(rbx_1 + 0x68) = zmm6_6
    *(rbx_1 + 0x78) = var_a8

sub_1419968d0(arg2, rbx_1)
*arg1 = zmm8_1
arg1[1].q = var_158.q
return arg1

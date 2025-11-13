// 函数: sub_14130dbe0
// 地址: 0x14130dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8 = *arg4
void*** r13 = zmm8.q
uint128_t var_168 = zmm8
uint128_t var_158 = arg4[1]
uint128_t var_e8
uint128_t var_d8
uint128_t var_b8
uint128_t var_a8
char arg_10
int64_t r12_1
int32_t r15_1
uint128_t zmm1

if (r13 == 0)
label_14130dca8:
    int128_t zmm6 = arg4[2]
    uint64_t var_108_1 = arg4[3].q
    arg_10 = sub_14141f7a0(arg3)
    void* rax_4 = zmm6.q
    zmm1 = *(rax_4 + 0x40)
    var_e8 = *(rax_4 + 0x30)
    var_d8 = zmm1
    uint128_t var_c8_1 = *(rax_4 + 0x50)
    var_c8_1:8.w = 1
    var_a8 = *(rax_4 + 0x70)
    var_b8:8.w = 0
    var_b8:4.d = ((*(rax_4 + 0x60)):4.d & 0xfffeffff) | 1
    var_a8:8.b = 1
    void*** rax_8
    uint128_t zmm6_1
    rax_8, zmm6_1 = sub_141188e50(arg2, &var_e8, u"VisualizeDOF", 0)
    var_168.q = rax_8
    r13 = rax_8
    var_158.d = var_108_1.d
    uint128_t temp0_3 = _mm_bsrli_si128(zmm6_1, 8)
    r15_1 = _mm_bsrli_si128(zmm6_1, 8).d
    var_168:0xc.d = (temp0_3.q u>> 0x20).d
    var_168:8.d = r15_1
    var_158:4.d = (var_108_1 u>> 0x20).d
    r12_1 = var_168:8.q
else
    r15_1 = _mm_bsrli_si128(zmm8, 8).d
    var_168:8.d = r15_1
    
    if (var_158.d != r15_1)
        arg_10 = var_158:8.b
        r12_1 = var_168:8.q
    else
        r12_1 = _mm_bsrli_si128(zmm8, 8).q
        
        if ((var_158.q u>> 0x20).d == (r12_1 u>> 0x20).d)
            goto label_14130dca8
        
        arg_10 = var_158:8.b

zmm1 = arg4[2]
int64_t* rdx_1 = *(arg2 + 8)
void* rcx_6 = zmm1.q
uint64_t var_108_2 = arg4[3].q
uint128_t temp0_5 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_6 = _mm_bsrli_si128(zmm1, 8)
int32_t var_138 = *(rcx_6 + 0x44)
int32_t var_134 = *(rcx_6 + 0x48)
uint32_t var_12c = (temp0_5.q u>> 0x20).d
int32_t rax_16 = var_108_2.d
uint32_t var_124 = (var_108_2 u>> 0x20).d
int64_t rax_19 = data_14395fa10
int32_t var_130 = temp0_6.d
int64_t* rax_20 = sub_14081d830(0x160, rdx_1, 1, 0)
int64_t* rbx = rax_20

if (rax_20 == 0)
    rbx = nullptr
else
    *(rax_20 + 0xac) = 0x3f800000
    *rax_20 = 0
    *(rax_20 + 0xb4) = 0
    *(rax_20 + 0xbc) = 0x3f800000
    *(rax_20 + 0xc4) = 0
    *(rax_20 + 0xcc) = 0x3f800000
    __builtin_memset(&rax_20[0x10], 0, 0x2c)
    sub_14117af20(&rax_20[0x1a])

memset(rbx, 0, 0x160)
sub_1405d16e0(rbx, *(arg3 + 0x10))
int32_t* rax_22
int512_t zmm6_2
int128_t zmm8_1
rax_22, zmm6_2, zmm8_1 = sub_141455b70(&var_e8, &var_138)
rbx[2] = *rax_22
rbx[3] = *(rax_22 + 8)
rbx[4] = *(rax_22 + 0x10)
rbx[5] = *(rax_22 + 0x18)
rbx[6].d = rax_22[8]
*(rbx + 0x34) = rax_22[9]
rbx[7].d = rax_22[0xa]
*(rbx + 0x3c) = rax_22[0xb]
rbx[8] = *(rax_22 + 0x30)
rbx[9] = *(rax_22 + 0x38)
rbx[0xa] = *(rax_22 + 0x40)
rbx[0xb] = *(rax_22 + 0x48)
rbx[0xc] = *(rax_22 + 0x50)
rbx[0xd] = *(rax_22 + 0x58)
rbx[0xe] = *(rax_22 + 0x60)
rbx[0xf] = *(rax_22 + 0x68)
rbx[0x10] = arg4[2].q
rbx[0x11] = *(arg4 + 0x38)
rbx[0x12] = rax_19
rbx[0x13] = rax_19
uint128_t zmm0_1
zmm0_1.d = (*(arg3 + 0x1280)).d f* 0.0199999996f
float zmm2 = *(arg3 + 0x127c)
float zmm3 = (0.5f f- _mm_max_ss(zmm0_1.d, 0).d) * 10f

if (not(zmm2 > 0f))
    zmm2 = 100000000f

char rax_28 = arg_10
int32_t var_174 = 0x41200000
int32_t var_16c = 0
zmm0_1.d = zmm2
_mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
zmm0_1.d = zmm3
zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
uint128_t var_178 = zmm0_1
*(rbx + 0xa0) = zmm0_1
var_178.q = r13
__builtin_memcpy(&rbx[0x16], 
    "\x00\x00\x00\x00\xcd\xcc\x4c\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"cd\xcc\x4c\x3f\x00\x00\x00\x00", 
    0x20)
char var_170 = rax_28
int16_t var_16f = 0
int32_t var_16c_1 = 0xffffffff
*(rbx + 0xd0) = var_178
char rcx_14 = sub_1419a2ec0(*(arg3 + 0x5150), &var_178, &data_143eb3910, 0)
int32_t rax_29 = *(r13 + 0x44)
zmm6_2.o = zx.o(0)
uint128_t zmm7 = var_178
int32_t var_114 = r13[9].d
var_108_2.d = var_158.d
var_108_2:4.d = (var_158.q u>> 0x20).d
int32_t var_110 = r15_1
uint32_t var_10c = (r12_1 u>> 0x20).d
uint128_t var_148 = sub_141318960(rcx_14)
sub_141998c50(zmm7.q, &data_143eb67c0, rbx)
int64_t* rdx_6 = *(arg2 + 8)
var_e8.q = arg3
var_e8 = rax_29.o
var_a8:8.q = rbx
var_b8.q = rax_16.q
var_d8:8.q = var_108_2
char var_98 = 0
void*** rax_34
char rcx_16
rax_34, rcx_16 = sub_14081d830(0x90, rdx_6, 1, 0)
void*** rsi_2 = rax_34

if (rax_34 == 0)
    rsi_2 = nullptr
else
    var_178.q = rbx
    int128_t zmm6_4 = sub_141318960(rcx_16)
    var_170.q = &data_143eb67f0
    var_148 = var_178
    sub_141992bd0(rsi_2, &arg_10, &var_148, 1)
    uint128_t zmm0_4 = var_e8
    *rsi_2 = &data_142f5cbd0
    *(rsi_2 + 0x38) = zmm0_4
    *(rsi_2 + 0x48) = var_d8
    *(rsi_2 + 0x58) = zmm6_4
    *(rsi_2 + 0x68) = zmm7
    *(rsi_2 + 0x78) = var_a8
    rsi_2[0x11] = var_98.q

sub_1419968d0(arg2, rsi_2)
var_158:8.b = 1
uint128_t* rax_35
int512_t zmm6_5
rax_35, zmm6_5 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
uint128_t* rsi_3 = rax_35

if (rax_35 == 0)
    rsi_3 = nullptr
else
    sub_14117af20(rax_35)

memset(&rsi_3[1], 0, 0x80)
zmm6_5.o = var_158
var_178.q = r13
var_170.w = 1
var_16f:1.b = 0
int32_t var_16c_2 = 0xffffffff
*rsi_3 = var_178
void* var_f0 = arg3
void*** rax_37 = sub_14081d830(0x68, *(arg2 + 8), 1, 0)
void*** rbx_1 = rax_37

if (rax_37 == 0)
    rbx_1 = nullptr
else
    int64_t* rax_38
    int128_t zmm6_6
    rax_38, zmm6_6 = sub_1412ec240(&var_178, rsi_3)
    var_148 = *rax_38
    sub_141992bd0(rbx_1, &arg_10, &var_148, 1)
    *(rbx_1 + 0x38) = zmm8_1
    *rbx_1 = &data_142f5cbe0
    *(rbx_1 + 0x48) = zmm6_6
    *(rbx_1 + 0x58) = arg3.o

sub_1419968d0(arg2, rbx_1)
*arg1 = zmm8_1
arg1[1].q = var_158.q
return arg1

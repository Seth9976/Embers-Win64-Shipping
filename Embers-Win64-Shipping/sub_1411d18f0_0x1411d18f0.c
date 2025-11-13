// 函数: sub_1411d18f0
// 地址: 0x1411d18f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg9

if (r13 == 0 || arg8 == 0)
    *arg1 = zx.o(0)
    return arg1

uint64_t rdi = zx.q(*(r13 + 0x34))
arg9.d = rdi.d
int32_t var_ac = 2
int32_t var_b0 = 0x209
int32_t var_b4 = rdi.d
void*** rax = sub_14081d830(0x48, *(arg2 + 8), 1, 0)
void*** rsi = rax

if (rax == 0)
    rsi = nullptr
else
    rsi[2] = 0
    rsi[1] = u"HairCompactNodeData"
    rsi[3].b = 0
    *(rsi + 0x1c) = 0
    rsi[4] = 0
    rsi[5].w = 0x200
    *rsi = &data_142f285d0
    *(rsi + 0x30) = 0x14.o
    rsi[8] = 0

var_b0.q = 0x209
int32_t var_b4_1 = *(r13 + 0x34)
void*** rax_2 = sub_14081d830(0x48, *(arg2 + 8), 1, 0)
void*** r14 = rax_2

if (rax_2 == 0)
    r14 = nullptr
else
    r14[2] = 0
    r14[1] = u"HairCompactNodeVelocity"
    r14[3].b = 0
    *(r14 + 0x1c) = 0
    r14[4] = 0
    r14[5].w = 0x200
    *r14 = &data_142f285d0
    *(r14 + 0x30) = 4.o
    r14[8] = 0

void*** var_48 = r14
int128_t zmm0_2
zmm0_2.d = float.s(rdi)
int64_t var_a0 = 0
int64_t* var_a8 = 1
wchar16 const* const var_68 = u"UnknownTexture"
int32_t var_98 = 0
int32_t var_88 = 1
int32_t var_84 = 0x10000
int32_t temp0 = _mm_sqrt_ss(0, zmm0_2.d)
int16_t var_80 = 1
int16_t var_70 = 0
int16_t var_60 = 1
char var_5e = 0
int32_t var_8c = 0
int64_t var_7c = 0xa
int32_t var_74 = 1
zmm0_2.d = -0.5f f- (temp0 f+ temp0)
int32_t rax_5 = neg.d(int.d(zmm0_2.d) s>> 1)
int32_t arg_c = rax_5
int32_t var_94 = rax_5
int32_t var_90 = rax_5
void*** rax_6 = sub_141188e50(arg2, &var_a8, u"HairMaterialDummyOutput", 0)
int64_t* rax_7 = sub_14081d830(0xc0, *(arg2 + 8), 1, 0)
int64_t* rdi_1 = rax_7

if (rax_7 == 0)
    rdi_1 = nullptr
else
    __builtin_memset(&rax_7[1], 0, 0x28)
    sub_14117af20(&rax_7[6])

memset(&rdi_1[1], 0, 0xb8)
*rdi_1 = arg8
int32_t var_b8_1
var_b8_1.q = r13
var_b0.q = 1

if ((*(r13 + 0x38) & 0x100) != 0)
    var_b0 = 4
    var_ac = 0x1c

void*** rax_9 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_9 == 0)
    rax_9 = nullptr
else
    rax_9[1] = *(r13 + 8)
    rax_9[2] = 0
    *(rax_9 + 0x18) = 4
    *rax_9 = &data_142f285c0

rdi_1[2] = rax_9
var_b8_1.q = arg10
var_b0.q = 1

if ((*(arg10 + 0x38) & 0x100) != 0)
    var_b0 = 4
    var_ac = 0x1c

void*** rax_10 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_10 == 0)
    rax_10 = nullptr
else
    rax_10[1] = *(arg10 + 8)
    *rax_10 = &data_142f285c0
    rax_10[2] = 0
    *(rax_10 + 0x18) = var_b8_1.o

rdi_1[1] = rax_10
var_b8_1.q = arg11
var_b0.q = 1

if ((*(arg11 + 0x38) & 0x100) != 0)
    int32_t var_b0_1 = 4
    var_ac = 0x1c

void*** rax_11 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_11 == 0)
    rax_11 = nullptr
else
    rax_11[1] = *(arg11 + 8)
    *rax_11 = &data_142f285c0
    rax_11[2] = 0
    *(rax_11 + 0x18) = var_b8_1.o

rdi_1[3] = rax_11
int32_t rax_12 = 0

if ((rsi[7].d & 0x100) != 0)
    rax_12 = 0x1c

var_b8_1.q = rsi
var_ac.w = 0
int32_t var_b0_2 = rax_12
void*** rax_13 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_13 == 0)
    rax_13 = nullptr
else
    rax_13[1] = rsi[1]
    rax_13[2] = 0
    *(rax_13 + 0x18) = var_b8_1.o
    *rax_13 = &data_142f285c0

rdi_1[4] = rax_13
var_b8_1.q = r14
int32_t var_b0_3 = 0xe
var_ac.w = 0
void*** rax_14 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_14 == 0)
    rax_14 = nullptr
else
    rax_14[1] = r14[1]
    rax_14[2] = 0
    *(rax_14 + 0x18) = var_b8_1.o
    *rax_14 = &data_142f285c0

rdi_1[5] = rax_14
var_b8_1.q = rax_6
int64_t var_a0_1 = arg3
var_98.q = arg4
var_90.q = arg6
int32_t var_88_1 = arg9.d
var_84.q = rax_5.q
var_7c.d = arg7
var_7c:4.b = arg5
var_b0_3.w = 2
var_b0_3:2.b = 0
int32_t var_ac_1 = 0xffffffff
*(rdi_1 + 0x30) = var_b8_1.o
var_a8 = rdi_1
sub_1411b2790(arg2, &arg9, rdi_1, 1, &var_a8)
*arg1 = rsi.o
return arg1

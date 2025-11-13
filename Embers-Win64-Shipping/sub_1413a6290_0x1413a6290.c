// 函数: sub_1413a6290
// 地址: 0x1413a6290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t var_1a4 = data_143ec4fdc.d
int128_t var_1f4 = zx.o(0)
int32_t var_1a0 = data_143ec4fdc:4.d
int32_t temp0 = _mm_bsrli_si128(zx.o(0), 0xc)
int32_t* r15 = nullptr
int32_t var_1f8 = 1
int16_t var_180 = 0
int32_t var_1a8 = temp0
uint128_t var_1b8 = var_1f8.o
int32_t var_19c = 0
int32_t var_198 = 1
int32_t var_194 = 0x10000
int16_t var_190 = 1
int64_t var_18c = 0xa
int32_t var_184 = 0x10008
wchar16 const* const var_178 = u"UnknownTexture2D"
int16_t var_170 = 1
char var_16e = 0
var_18c.d = 0x15
*arg5 = sub_141188e50(arg2, &var_1b8, u"RTDReflections", 0)
arg5[1] = sub_141188e50(arg2, &var_1b8, u"RTDReflectionsHitDistance", 0)
int32_t rcx_3 = *(arg4 + 0x15a4) - *(arg4 + 0x159c)
int32_t r8_1 = arg4[0x2b4].d - arg4[0x2b3].d
int64_t var_150
__builtin_memset(&var_150, 0, 0x20)
int64_t var_120
__builtin_memset(&var_120, 0, 0xc0)
int32_t temp0_1
int32_t temp1
temp0_1:temp1 = sx.q(r8_1 + 0x3f)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rcx_3 + 0x3f)
int32_t r12_1 = ((temp0_1 & 0x3f) + temp1) & 0xffffffc0
int32_t var_168 = r8_1
int32_t rbx_2 = ((temp2 & 0x3f) + temp3) & 0xffffffc0
int32_t var_164 = rcx_3
int32_t var_160 = r12_1
int32_t var_15c = rbx_2
int64_t var_150_1 = *(arg4[0xa3d] + 0x18)
int128_t var_128 = *arg3
int128_t var_108 = arg3[2]
int128_t var_118 = arg3[1]
int128_t var_e8 = arg3[4]
int128_t var_f8 = arg3[3]
int128_t var_d8
sub_14142a1f0(&var_d8)
int128_t var_78
sub_1405d16e0(&var_78, arg4[2])
int64_t var_68
sub_1405d16e0(&var_68, arg4[0xa45])
int128_t var_98
var_98.q = arg4[0xa46]
var_98:8.q = sub_1410fccd0(arg2, &arg4[0xa42], u"External", 0)
int32_t var_1c8
int64_t* rax_13 = sub_1412238e0(&var_1c8, arg4, 1)
sub_1405d1600(&var_78:8, rax_13)
sub_1405d1550(&var_1c8)
int32_t zmm0_2 = sub_1413e95d0()
int64_t* rdx_11 = *(arg2 + 8)
int32_t r12_2 = r12_1 * rbx_2
int32_t var_158 = zmm0_2
int32_t var_20c = 2
int32_t var_210 = 0x209
int32_t var_218 = 0x20
var_1c8 = r12_2
int32_t var_214 = r12_2
void*** rax_14 = sub_14081d830(0x48, rdx_11, 1, 0)
void*** r14 = rax_14

if (rax_14 == 0)
    r14 = nullptr
else
    r14[2] = 0
    r14[1] = u"ReflectionRayBuffer"
    r14[3].b = 0
    *(r14 + 0x1c) = 0
    r14[4] = 0
    r14[5].w = 0x200
    *r14 = &data_142f285d0
    *(r14 + 0x30) = var_218.o
    r14[8] = 0

int32_t var_20c_1 = 2
int32_t var_210_1 = 0x209
int32_t var_218_1 = 0xc
int32_t var_214_1 = r12_2
void*** rax_15 = sub_14081d830(0x48, *(arg2 + 8), 1, 0)
void*** rbx_3 = rax_15

if (rax_15 == 0)
    rbx_3 = nullptr
else
    rbx_3[2] = 0
    rbx_3[1] = u"RayTracingReflectionsMaterialBuffer"
    rbx_3[3].b = 0
    *(rbx_3 + 0x1c) = 0
    rbx_3[4] = 0
    rbx_3[5].w = 0x200
    *rbx_3 = &data_142f285d0
    *(rbx_3 + 0x30) = var_218_1.o
    rbx_3[8] = 0

int32_t var_20c_2 = 2
int32_t var_210_2 = 0x209
int32_t var_218_2 = 8
int32_t var_214_2 = r12_2
void*** rax_16 = sub_14081d830(0x48, *(arg2 + 8), 1, 0)
void*** rdi_1 = rax_16

if (rax_16 == 0)
    rdi_1 = nullptr
else
    rdi_1[2] = 0
    rdi_1[1] = u"RayTracingReflectionsBookmarkBuffer"
    rdi_1[3].b = 0
    *(rdi_1 + 0x1c) = 0
    rdi_1[4] = 0
    rdi_1[5].w = 0x200
    *rdi_1 = &data_142f285d0
    *(rdi_1 + 0x30) = var_218_2.o
    rdi_1[8] = 0

sub_14138c960(arg2, arg4, r14, &var_168)
int64_t rax_17 = sub_14081d830(0x110, *(arg2 + 8), 1, 0)

if (rax_17 != 0)
    r15 = sub_141384e90(rax_17)

memset(r15, 0, 0x110)
sub_141386c40(r15, &var_168)
int32_t rax_19 = 0

if ((rbx_3[7].d & 0x100) != 0)
    rax_19 = 0x1c

var_218_2.q = rbx_3
var_20c_2.w = 0
int32_t var_210_3 = rax_19
void*** rax_20 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_20 != 0)
    rax_20[1] = rbx_3[1]
    rax_20[2] = 0
    *(rax_20 + 0x18) = var_218_2.o
    *rax_20 = &data_142f285c0

*(r15 + 0x30) = rax_20
int32_t rax_21 = 0

if ((r14[7].d & 0x100) != 0)
    rax_21 = 0x1c

var_218_2.q = r14
var_20c_2.w = 0
int32_t var_210_4 = rax_21
void*** rax_22 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_22 != 0)
    rax_22[1] = r14[1]
    *rax_22 = &data_142f285c0
    rax_22[2] = 0
    *(rax_22 + 0x18) = var_218_2.o

*(r15 + 0x20) = rax_22
int32_t rax_23 = 0

if ((rdi_1[7].d & 0x100) != 0)
    rax_23 = 0x1c

var_218_2.q = rdi_1
var_20c_2.w = 0
int32_t var_210_5 = rax_23
void*** rax_24 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_24 != 0)
    rax_24[1] = rdi_1[1]
    *rax_24 = &data_142f285c0
    rax_24[2] = 0
    *(rax_24 + 0x18) = var_218_2.o

*(r15 + 0x28) = rax_24
var_1f4:4.w = 0
void*** rax_26 = *arg5
var_218_2.q = rax_26
var_1f8.q = rax_26
void*** rax_27 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_27 != 0)
    int128_t zmm0_9 = var_1f8.o
    rax_27[1] = *(var_218_2.q + 8)
    rax_27[2] = 0
    *rax_27 = &data_142f285c0
    *(rax_27 + 0x18) = zmm0_9

*(r15 + 0xe0) = rax_27
var_1f4:4.w = 0
int64_t rax_29 = arg5[1]
var_218_2.q = rax_29
var_1f8.q = rax_29
void*** rax_30
int512_t zmm6
rax_30, zmm6 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_30 != 0)
    int128_t zmm0_10 = var_1f8.o
    rax_30[1] = *(var_218_2.q + 8)
    *rax_30 = &data_142f285c0
    rax_30[2] = 0
    *(rax_30 + 0x18) = zmm0_10

*(r15 + 0xe8) = rax_30
char rcx_24 = sub_1419a2ec0(arg4[0xa2a], &var_1f8, &data_143ec5aa0, 1)
int128_t zmm7 = var_1f8.o
zmm6.o = zx.o(0)
var_218_2.o = sub_14139e8e0(rcx_24)
sub_141998c50(zmm7.q, &data_143ec7790, r15)
var_1b8.q = r15
var_1b8:8.q = arg1
var_1a8.q = arg4
int32_t var_1a0_1 = r12_2
void*** rax_32
char rcx_26
rax_32, rcx_26 = sub_14081d830(0x68, *(arg2 + 8), 1, 0)
void*** r12_3 = rax_32
void var_208

if (rax_32 == 0)
    r12_3 = nullptr
else
    var_1f8.q = r15
    sub_14139e8e0(rcx_26)
    var_1f4:4.q = &data_143ec77c0
    var_1f8.o = var_1f8.o
    sub_141992bd0(r12_3, &var_208, &var_1f8, 2)
    uint128_t zmm0_12 = var_1b8
    *r12_3 = &data_142f6e1b0
    *(r12_3 + 0x38) = zmm0_12
    *(r12_3 + 0x48) = var_1a8.o
    *(r12_3 + 0x58) = zmm7

sub_1419968d0(arg2, r12_3)
int32_t r12_4 = var_1c8
sub_1413ab4b0(arg2, arg4, 5, r12_4, rbx_3)
int64_t rax_33 = sub_14081d830(0x110, *(arg2 + 8), 1, 0)
int32_t* r15_1

if (rax_33 == 0)
    r15_1 = nullptr
else
    r15_1 = sub_141384e90(rax_33)

memset(r15_1, 0, 0x110)
sub_141386c40(r15_1, &var_168)
int32_t rax_35 = 0

if ((rbx_3[7].d & 0x100) != 0)
    rax_35 = 0x1c

int16_t var_1cc = 0
int32_t var_1d0 = rax_35
void*** rax_36 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_36 != 0)
    rax_36[1] = rbx_3[1]
    rax_36[2] = 0
    *(rax_36 + 0x18) = rbx_3.o
    *rax_36 = &data_142f285c0

*(r15_1 + 0x30) = rax_36
int32_t rax_37 = 0

if ((r14[7].d & 0x100) != 0)
    rax_37 = 0x1c

int16_t var_1cc_1 = 0
int32_t var_1d0_1 = rax_37
void*** rax_38 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_38 == 0)
    rax_38 = nullptr
else
    rax_38[1] = r14[1]
    rax_38[2] = 0
    *(rax_38 + 0x18) = r14.o
    *rax_38 = &data_142f285c0

*(r15_1 + 0x20) = rax_38
int32_t rax_39 = 0

if ((rdi_1[7].d & 0x100) != 0)
    rax_39 = 0x1c

int16_t var_1cc_2 = 0
int32_t var_1d0_2 = rax_39
void*** rax_40 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_40 == 0)
    rax_40 = nullptr
else
    rax_40[1] = rdi_1[1]
    rax_40[2] = 0
    *(rax_40 + 0x18) = rdi_1.o
    *rax_40 = &data_142f285c0

*(r15_1 + 0x28) = rax_40
var_1f4:4.w = 0
void*** rbx_4 = *arg5
var_1f8.q = rbx_4
void*** rax_41 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_41 == 0)
    rax_41 = nullptr
else
    int128_t zmm0_16 = var_1f8.o
    rax_41[1] = rbx_4[1]
    *rax_41 = &data_142f285c0
    rax_41[2] = 0
    *(rax_41 + 0x18) = zmm0_16

*(r15_1 + 0xe0) = rax_41
void* rbx_5 = arg5[1]
var_1f8.q = rbx_5
var_1f4:4.w = 0
void*** rax_42 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_42 == 0)
    rax_42 = nullptr
else
    int128_t zmm0_17 = var_1f8.o
    rax_42[1] = *(rbx_5 + 8)
    *rax_42 = &data_142f285c0
    rax_42[2] = 0
    *(rax_42 + 0x18) = zmm0_17

*(r15_1 + 0xe8) = rax_42
char rcx_39 = sub_1419a2ec0(arg4[0xa2a], &var_1f8, &data_143ec5aa0, 2)
int128_t zmm7_1 = var_1f8.o
void*** var_1d8_3
var_1d8_3.o = sub_14139e8e0(rcx_39)
sub_141998c50(zmm7_1.q, &data_143ec7790, r15_1)
var_1b8.q = r15_1
var_1b8:8.q = arg4
var_1a0_1.o = zmm7_1
void*** rax_43
char rcx_41
rax_43, rcx_41 = sub_14081d830(0x60, *(arg2 + 8), 1, 0)
void*** rbx_6 = rax_43

if (rax_43 == 0)
    rbx_6 = nullptr
else
    var_1f8.q = r15_1
    sub_14139e8e0(rcx_41)
    var_1f4:4.q = &data_143ec77c0
    var_1f8.o = var_1f8.o
    sub_141992bd0(rbx_6, &var_208, &var_1f8, 2)
    uint128_t zmm0_19 = var_1b8
    *rbx_6 = &data_142f6e1c0
    *(rbx_6 + 0x38) = zmm0_19
    *(rbx_6 + 0x48) = r12_4.o
    rbx_6[0xb] = var_198.q

sub_1419968d0(arg2, rbx_6)
sub_1405d1550(&var_68)
sub_1405d1550(&var_78:8)
int64_t result = sub_1405d1550(&var_78)
__security_check_cookie(rax_1 ^ &var_248)
return result

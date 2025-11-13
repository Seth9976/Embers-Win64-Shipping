// 函数: sub_1411d0cf0
// 地址: 0x1411d0cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
uint64_t r15 = zx.q(arg4)
uint128_t zmm0
zmm0.d = float.s(r15)
int32_t var_e8 = 1
int16_t var_c0 = 1
int64_t rbx_1 = *(*arg5 + 0x44)
int64_t var_80 = 2
int32_t var_f4 = 1
float zmm2 = 1f f/ zmm0.d
int64_t var_f0 = 1
int16_t var_e0 = 1
int32_t var_e4 = 0x10000
int16_t var_d0 = 0
char var_be = 0
int64_t var_dc = 0x1c
int32_t var_d4 = 0x10008
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rbx_1.d)).d f* zmm2
zmm1.d = zmm1.d f+ zmm1.d
zmm0.d = -0.5f f- zmm1.d
wchar16 const* const var_c8 = u"UnknownTexture"
int32_t var_78 = 0
int32_t r13_2 = neg.d(int.d(zmm0.d) s>> 1)
int32_t var_70
int32_t var_f8 = var_70
zmm0.d = _mm_cvtepi32_ps(zx.o((rbx_1 u>> 0x20).d)).d f* zmm2
uint128_t var_108 = var_80.o
zmm0.d = zmm0.d f+ zmm0.d
int32_t rdi_2 = neg.d(int.d(-0.5f f- zmm0.d) s>> 1)
void*** rax_8 = sub_141188e50(arg1, &var_108, u"HairTileCounter", 0)
int32_t var_e4_1 = 0x10000
int32_t var_e8_1 = 1
int16_t var_d0_1 = 0
wchar16 const* const var_c8_1 = u"UnknownTexture"
var_f0:4.d = 0
int32_t var_130 = 0
int16_t var_c0_1 = 1
char var_be_1 = 0
int32_t var_f4_1 = r13_2
var_f0.d = rdi_2
int64_t var_dc_1 = 0x1c
int16_t var_e0_1 = 1
int32_t var_d4_1 = 0x10008
void*** var_138 = 2
var_108 = var_138.o
void*** rax_10 = sub_141188e50(arg1, &var_108, u"HairTileIndexTexture", 0)
var_130.q = 0x209
var_138.d = 4
*arg6 = rax_10
var_138:4.d = r13_2 * rdi_2
void*** rax_13 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)

if (rax_13 == 0)
    rax_13 = nullptr
else
    int128_t zmm0_2 = var_138.o
    rax_13[2] = 0
    rax_13[1] = u"HairTileBuffer"
    rax_13[3].b = 0
    *(rax_13 + 0x1c) = 0
    rax_13[4] = 0
    rax_13[5].w = 0x200
    *rax_13 = &data_142f285d0
    *(rax_13 + 0x30) = zmm0_2
    rax_13[8] = 0

*arg7 = rax_13
int64_t* rdx_3 = *(arg1 + 8)
var_80 = 0
var_78.q = 0
var_138 = rax_8
var_130.w = 0
void*** rax_14 = sub_14081d830(0x28, rdx_3, 1, 0)
void*** rdx_4 = rax_14

if (rax_14 == 0)
    rdx_4 = nullptr
else
    int128_t zmm0_3 = var_138.o
    rdx_4[1] = rax_8[1]
    rdx_4[2] = 0
    *(rdx_4 + 0x18) = zmm0_3
    *rdx_4 = &data_142f285c0

sub_141996630(arg1, rdx_4, &var_80)
int32_t* rax_16 = sub_14081d830(0x30, *(arg1 + 8), 1, 0)
__builtin_memset(&rax_16[3], 0, 0x24)
rax_16[1] = rbx_1:4.d
*rax_16 = rbx_1.d
rax_16[2] = r13_2
rax_16[3] = rdi_2
*(rax_16 + 0x10) = *arg5
int64_t* rdx_6 = *(arg1 + 8)
var_138 = rax_8
var_130.w = 0
void*** rax_18 = sub_14081d830(0x28, rdx_6, 1, 0)

if (rax_18 != 0)
    int128_t zmm0_4 = var_138.o
    rax_18[1] = rax_8[1]
    *rax_18 = &data_142f285c0
    rax_18[2] = 0
    *(rax_18 + 0x18) = zmm0_4

*(rax_16 + 0x18) = rax_18
int64_t* rdx_7 = *(arg1 + 8)
var_130.w = 0
void*** rbx_2 = *arg6
var_138 = rbx_2
void*** rax_20 = sub_14081d830(0x28, rdx_7, 1, 0)

if (rax_20 != 0)
    int128_t zmm0_5 = var_138.o
    rax_20[1] = rbx_2[1]
    *rax_20 = &data_142f285c0
    rax_20[2] = 0
    *(rax_20 + 0x18) = zmm0_5

*(rax_16 + 0x20) = rax_20
void*** rbx_3 = *arg7
int64_t* rdx_8 = *(arg1 + 8)
var_138 = rbx_3
int32_t var_130_1 = 0x31
int16_t var_12c = 0
void*** rax_21
int512_t zmm6
rax_21, zmm6 = sub_14081d830(0x28, rdx_8, 1, 0)

if (rax_21 != 0)
    int128_t zmm0_6 = var_138.o
    rax_21[1] = rbx_3[1]
    *rax_21 = &data_142f285c0
    rax_21[2] = 0
    *(rax_21 + 0x18) = zmm0_6

*(rax_16 + 0x28) = rax_21
char rcx_11 = sub_1419a2ec0(*(arg2 + 0x5150), &var_138, &data_143e77cc0, 0)
zmm6.o = zx.o(0)
int128_t zmm7 = var_138.o
void* var_b0
var_b0:4.d = rdi_2
var_b0.d = r13_2
int64_t var_98
var_98.o = sub_1411e2150(rcx_11)
sub_141998c50(zmm7.q, &data_143e7d760, rax_16)
int64_t* rdx_10 = *(arg1 + 8)
var_108.q = rax_16
var_108 = zmm7
int32_t var_e8_2 = 1
void* var_f0_1 = var_b0
void*** rax_23
char rcx_13
rax_23, rcx_13 = sub_14081d830(0x60, rdx_10, 1, 0)
void*** rbx_4 = rax_23

if (rax_23 == 0)
    rbx_4 = nullptr
else
    var_138 = rax_16
    sub_1411e2150(rcx_13)
    var_130_1.q = &data_143e7d790
    var_138.o = var_138.o
    void var_118
    sub_141992bd0(rbx_4, &var_118, &var_138, 2)
    uint128_t zmm0_9 = var_108
    *rbx_4 = &data_142f38a68
    *(rbx_4 + 0x38) = zmm0_9
    int32_t var_128
    *(rbx_4 + 0x48) = var_128.o
    rbx_4[0xb] = var_e8_2.q

sub_1419968d0(arg1, rbx_4)
void*** result = sub_1411cfa80(arg1, arg2, arg3, r15.d * r15.d, rax_8)
*arg8 = result
__security_check_cookie(rax_1 ^ &var_168)
return result

// 函数: sub_141307730
// 地址: 0x141307730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int32_t r10_1 = *(arg4 + 0x14) - *(arg4 + 0xc)
int32_t var_138 = data_143f02318
int64_t r9 = data_1439b67c0
int16_t var_110 = 0
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg4[2].d - arg4[1].d - 1 + r9.d)
uint128_t var_148 = data_143f02308
int32_t temp0 = divs.dp.d(temp2:temp3, r9.d)
uint32_t r9_1 = (r9 u>> 0x20).d
int32_t var_134 = 0x10
int32_t var_12c = 0
int32_t var_128 = 1
int32_t var_124 = 0x10000
int16_t var_120 = 1
int32_t var_11c = 0xa
int32_t temp0_1 = divs.dp.d(sx.q(r9_1 - 1 + r10_1), r9_1)
int32_t var_114 = 0x10009
int16_t var_100 = 1
int32_t rax_10 = temp0_1 * temp0
char var_fe = 0
int32_t var_130 = rax_10
int32_t var_118 = data_143ed33a0
wchar16 const* const var_108 = u"UnknownTexture2D"
void*** rax_12 = sub_141188e50(arg1, &var_148, u"Histogram", 0)
int64_t* rax_13 = sub_14081d830(0x100, *(arg1 + 8), 1, 0)
int64_t* rbx = rax_13

if (rax_13 == 0)
    rbx = nullptr
else
    *rbx = 0
    __builtin_memset(&rbx[0x1a], 0, 0x20)

memset(rbx, 0, 0x100)
sub_1405d16e0(rbx, *(arg_10 + 0x10))
uint128_t zmm1 = *arg4
uint128_t zmm0_1 = zx.o(arg4[2])
int64_t var_168 = data_143dbb180
void* rcx_4 = zmm1.q
var_138.q = zmm0_1.q
int128_t var_160 = zx.o(0)
int32_t rax_15 = *(rcx_4 + 0x44)
zmm0_1 = zmm1
zmm1 = _mm_bsrli_si128(zmm1, 8)
var_168.d = rax_15
var_168:4.d = *(rcx_4 + 0x48)
var_160:4.d = (zmm1.q u>> 0x20).d
var_160:8.d = var_138
var_160:0xc.d = (var_138.q u>> 0x20).d
var_160.d = _mm_bsrli_si128(zmm0_1, 8).d
void* var_c8
int32_t* rax_22 = sub_141455b70(&var_c8, &var_168)
int16_t var_170 = 0
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
rbx[0x1c] = *arg4
void*** rax_26
int512_t zmm6
rax_26, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_26 != 0)
    rax_26[1] = rax_12[1]
    *rax_26 = &data_142f285c0
    rax_26[2] = 0
    *(rax_26 + 0x18) = rax_12.o

rbx[0x1d] = rax_26
void* rax_27 = arg_10
rbx[0x1e].d = temp0
*(rbx + 0xf4) = temp0_1
*(rbx + 0x80) = *arg3
*(rbx + 0x90) = arg3[1]
*(rbx + 0xa0) = arg3[2]
*(rbx + 0xb0) = arg3[3]
*(rbx + 0xc0) = arg3[4]
*(rbx + 0xd0) = arg3[5]
int128_t var_d8
char rcx_10 = sub_1419a2ec0(*(rax_27 + 0x5150), &var_d8, &data_143eb4a60, 0)
int128_t zmm7 = var_d8
zmm6.o = zx.o(0)
void*** var_178
var_178.d = temp0
var_178:4.d = temp0_1
var_168.o = sub_1413180c0(rcx_10)
sub_141998c50(zmm7.q, &data_143eb8d90, rbx)
int64_t* rdx_10 = *(arg1 + 8)
var_148.q = rbx
var_148 = zmm7
int32_t var_128_1 = 1
var_130.q = var_178
void*** rax_28
char rcx_12
rax_28, rcx_12 = sub_14081d830(0x60, rdx_10, 1, 0)
void*** rdi_1 = rax_28

if (rax_28 == 0)
    rdi_1 = nullptr
else
    sub_1413180c0(rcx_12)
    var_170.q = &data_143eb8dc0
    var_168.o = rbx.o
    void arg_8
    sub_141992bd0(rdi_1, &arg_8, &var_168, 2)
    uint128_t zmm0_6 = var_148
    *rdi_1 = &data_142f5cc90
    *(rdi_1 + 0x38) = zmm0_6
    *(rdi_1 + 0x48) = var_138.o
    rdi_1[0xb] = var_128_1.q

sub_1419968d0(arg1, rdi_1)
int32_t var_138_1 = data_143f02318
int32_t var_118_1 = data_143ed33a4
int16_t var_110_1 = 0
wchar16 const* const var_108_1 = u"UnknownTexture2D"
var_148 = data_143f02308
int32_t var_134_1 = 0x10
var_130.q = 2
int32_t var_128_2 = 1
int32_t var_124_1 = 0x10000
int16_t var_120_1 = 1
int32_t var_11c_1 = 1
int32_t var_114_1 = 9
int16_t var_100_1 = 1
char var_fe_1 = 0
void*** result = sub_141188e50(arg1, &var_148, u"HistogramReduce", 0)
var_148 = zx.o(0)
int32_t rdx_14

if (rax_12 == 0)
    rdx_14 = var_138_1
else
    rdx_14 = *(rax_12 + 0x44)
    var_138_1 = rdx_14
    int32_t var_134_2 = rax_12[9].d

int32_t var_f8 = *(rax_12 + 0x44)
int32_t var_f4 = rax_12[9].d
uint32_t var_ec = (var_148:8.q u>> 0x20).d
int32_t var_f0 = 0
uint32_t var_e4 = (var_138_1.q u>> 0x20).d
int128_t var_160_1 = zx.o(0)
int32_t rcx_17

if (result == 0)
    rcx_17 = 0
else
    rcx_17 = *(result + 0x44)
    var_160_1:8.d = rcx_17
    var_160_1:0xc.d = result[9].d

var_148.d = *(result + 0x44)
var_148:4.d = result[9].d
var_148:0xc.d = (var_160_1.q u>> 0x20).d
uint32_t var_134_3 = (var_160_1:8.q u>> 0x20).d
var_148:8.d = 0
uint64_t* rax_44 = sub_14081d830(0x120, *(arg1 + 8), 1, 0)
uint64_t* rdi_2 = rax_44

if (rax_44 == 0)
    rdi_2 = nullptr
else
    __builtin_memset(&rax_44[0xe], 0, 0x18)
    sub_14117af20(&rax_44[0x12])

memset(rdi_2, 0, 0x120)
int32_t* rax_45 = sub_141455b70(&var_c8, &var_f8)
void* rbx_1 = arg_10
int16_t var_170_1 = 0
*rdi_2 = *rax_45
rdi_2[1] = *(rax_45 + 8)
rdi_2[2] = *(rax_45 + 0x10)
rdi_2[3] = *(rax_45 + 0x18)
rdi_2[4].d = rax_45[8]
*(rdi_2 + 0x24) = rax_45[9]
rdi_2[5].d = rax_45[0xa]
*(rdi_2 + 0x2c) = rax_45[0xb]
rdi_2[6] = *(rax_45 + 0x30)
rdi_2[7] = *(rax_45 + 0x38)
rdi_2[8] = *(rax_45 + 0x40)
rdi_2[9] = *(rax_45 + 0x48)
rdi_2[0xa] = *(rax_45 + 0x50)
rdi_2[0xb] = *(rax_45 + 0x58)
rdi_2[0xc] = *(rax_45 + 0x60)
rdi_2[0xd] = *(rax_45 + 0x68)
rdi_2[0xf] = rax_12
rdi_2[0xe] = data_14395f4d0
rdi_2[0x11].d = rax_10
rdi_2[0x10] = arg5
char var_16e = 0
int32_t var_16c = 0xffffffff
*(rdi_2 + 0x90) = result.o
char rcx_24 = sub_1419a2ec0(*(rbx_1 + 0x5150), &var_168, &data_143eb4b60, 0)
int128_t zmm7_1 = var_168.o
var_d8 = sub_141318230(rcx_24)
sub_141998c50(zmm7_1.q, &data_143eb8ea0, rdi_2)
uint128_t zmm0_9 = var_148
int64_t* rdx_19 = *(arg1 + 8)
var_c8 = rbx_1
uint64_t* var_80 = rdi_2
uint64_t var_98 = rdx_14.q
int64_t var_b0 = rcx_17.q
char var_78 = 0
void*** rax_51
char rcx_26
rax_51, rcx_26 = sub_14081d830(0x90, rdx_19, 1, 0)
void*** rbx_2 = rax_51

if (rax_51 == 0)
    rbx_2 = nullptr
else
    int128_t zmm6_3 = sub_141318230(rcx_26)
    var_170_1.q = &data_143eb8ed0
    var_168.o = rdi_2.o
    sub_141992bd0(rbx_2, &arg_10, &var_168, 1)
    uint128_t zmm0_11 = var_c8.o
    *rbx_2 = &data_142f5cca0
    *(rbx_2 + 0x38) = zmm0_11
    *(rbx_2 + 0x48) = zmm0_9
    *(rbx_2 + 0x58) = zmm6_3
    *(rbx_2 + 0x68) = var_98.o
    *(rbx_2 + 0x78) = zmm7_1
    rbx_2[0x11] = var_78.q

sub_1419968d0(arg1, rbx_2)
return result

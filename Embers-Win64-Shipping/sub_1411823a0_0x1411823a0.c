// 函数: sub_1411823a0
// 地址: 0x1411823a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 8)
int32_t var_bc = 2
int32_t var_c0 = 0x209
int32_t var_c8 = 4
int32_t var_c4 = 0x1000
void*** rax = sub_14081d830(0x48, rdx, 1, 0)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    int128_t zmm0_1 = var_c8.o
    rbx[2] = 0
    rbx[1] = u"HairCoverageData"
    rbx[3].b = 0
    *(rbx + 0x1c) = 0
    rbx[4] = 0
    rbx[5].w = 0x200
    *rbx = &data_142f285d0
    *(rbx + 0x30) = zmm0_1
    rbx[8] = 0

void** rax_1 = sub_14081d830(0x10, *(arg1 + 8), 1, 0)
rax_1[1] = 0
*rax_1 = rbx
var_c8.q = rax_1
int32_t var_c0_1 = 0x4000
void arg_8
sub_14115fcd0(arg1, &arg_8, rax_1, 4, &var_c8)
int32_t* var_b8 = 1
wchar16 const* const var_78 = u"UnknownTexture"
int64_t var_b0 = 0
int32_t var_a8 = 0
int32_t var_9c = 0
int32_t var_98 = 1
int32_t var_94 = 0x10000
int16_t var_90 = 1
int16_t var_80 = 0
int16_t var_70 = 1
char var_6e = 0
int32_t var_a4 = 0x40
int32_t var_a0 = 0x40
int64_t var_8c = 0xd
int32_t var_84 = 0x10008
void*** result = sub_141188e50(arg1, &var_b8, u"HairCoverageLUT", 0)
int32_t* rax_2 = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
__builtin_memset(&rax_2[2], 0, 0x18)
*rax_2 = 0x40
rax_2[1] = 0x40
var_c8.q = rbx
var_c0_1.q = 1

if ((rbx[7].d & 0x100) != 0)
    var_c0_1 = 4
    int32_t var_bc_1 = 0x1c

void*** rax_3 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_3 == 0)
    rax_3 = nullptr
else
    int128_t zmm0_2 = var_c8.o
    rax_3[1] = rbx[1]
    *rax_3 = &data_142f285c0
    rax_3[2] = 0
    *(rax_3 + 0x18) = zmm0_2

*(rax_2 + 8) = rax_3
var_c8.q = result
var_c0_1.w = 0
void*** rax_4
int512_t zmm6
rax_4, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_4 == 0)
    rax_4 = nullptr
else
    int128_t zmm0_3 = var_c8.o
    rax_4[1] = result[1]
    *rax_4 = &data_142f285c0
    rax_4[2] = 0
    *(rax_4 + 0x18) = zmm0_3

*(rax_2 + 0x10) = rax_4
int128_t var_58
char rcx_5 = sub_1419a2ec0(*(arg2 + 0x5150), &var_58, &data_143e6d300, 0)
int128_t zmm7 = var_58
zmm6.o = zx.o(0)
var_c8 = 8
int32_t var_c4_1 = 8
int128_t var_68 = sub_14118dd40(rcx_5)
sub_141998c50(zmm7.q, &data_143e74390, rax_2)
int64_t zmm0_4 = var_c8.q
int64_t* rdx_8 = *(arg1 + 8)
var_b8 = rax_2
var_b0.o = zmm7
int32_t var_98_1 = 1
var_a0.q = zmm0_4
void*** rax_5
char rcx_7
rax_5, rcx_7 = sub_14081d830(0x60, rdx_8, 1, 0)
void*** rbx_1 = rax_5

if (rax_5 == 0)
    rbx_1 = nullptr
else
    var_c8.q = rax_2
    sub_14118dd40(rcx_7)
    var_c0_1.q = &data_143e743c0
    var_68 = var_c8.o
    sub_141992bd0(rbx_1, &arg_8, &var_68, 2)
    uint128_t zmm0_6 = var_b8.o
    *rbx_1 = &data_142f2caa8
    *(rbx_1 + 0x38) = zmm0_6
    *(rbx_1 + 0x48) = var_a8.o
    rbx_1[0xb] = var_98_1.q

sub_1419968d0(arg1, rbx_1)
return result

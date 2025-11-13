// 函数: sub_1411cfcd0
// 地址: 0x1411cfcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_14081d830(0x1a0, *(arg1 + 8), 1, 0)
int32_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    __builtin_memset(&rax[4], 0, 0x20)
    __builtin_memset(&rax[0x30], 0, 0x50)
    *(rax + 0xa0) = 0
    rax[0x2a] = 0
    rax[0x2b] = 0x3f800000
    sub_14117af20(&rax[0x44])

memset(rbx, 0, 0x1a0)
sub_1405d16e0(&rbx[0x40], *(arg3 + 0x10))
*(rbx + 0xe8) = *arg2
int16_t var_120 = 1
char var_11e = 0
int32_t var_11c = 0xffffffff
*(rbx + 0x50) = *(arg5 + 0x20)
*(rbx + 0x60) = *(arg5 + 0x30)
*(rbx + 0x70) = *(arg5 + 0x40)
*(rbx + 0x80) = *(arg5 + 0x50)
*(rbx + 0xd0) = arg5[0xe]
*(rbx + 0xd8) = arg5[0xf]
*(rbx + 0xe0) = *arg5
*(rbx + 0xf0) = data_14395f4d0
*(rbx + 0xf8) = data_14395fa10
int32_t rax_7
rax_7.b = arg5[1].b != 0
rbx[0x24] = rax_7
rbx[0x25] = *(arg5 + 0x84)
rbx[0x26] = arg5[0x11].d
int32_t* var_128 = *arg6
*(rbx + 0x110) = var_128.o
rbx[0xe] = *(arg5 + 0x8c)
int32_t rcx_3 = arg5[0xc].d
rbx[0xd] = *(arg5 + 0x64)
rbx[0xc] = rcx_3
int32_t rcx_5 = arg5[0xd].d - arg5[0xc].d
rbx[0x11] = *(arg5 + 0x6c) - *(arg5 + 0x64)
rbx[0x10] = rcx_5
*(rbx + 0xc8) = arg5[2]
int32_t rax_17
rax_17.b = arg5[0x10].b != 0
rbx[0x27] = rax_17

if (sub_1405949a0() != 0)
    sub_14119c160(arg1, arg3 + 0x51b0, rbx)
    sub_1414610e0(arg3, &rbx[8])

void*** r12 = nullptr
int32_t* var_118
int32_t var_110
int32_t* var_10c
int32_t* var_100
int32_t var_f8
int64_t var_f4
int64_t var_ec
int32_t var_e0

if (arg4 == 1)
    void* rax_20 = *arg6
    uint128_t var_a8_1 = *(rax_20 + 0x40)
    uint128_t zmm1 = *(rax_20 + 0x60)
    uint128_t var_b8 = *(rax_20 + 0x30)
    uint128_t zmm0 = *(rax_20 + 0x50)
    uint128_t var_88_1 = zmm1
    uint128_t temp0_1 = _mm_bsrli_si128(zmm1, 4)
    uint128_t var_98_1 = zmm0
    uint128_t var_78_1 = *(rax_20 + 0x70)
    var_88_1:4.d = temp0_1.d | 8
    void*** rax_23 = sub_141188e50(arg1, &var_b8, u"RayMarchMask", 0)
    int32_t rcx_10 = data_143dbb190
    int32_t* zmm0_1 = data_143dbb188.q
    r12 = rax_23
    var_118 = zmm0_1
    int32_t var_110_1 = rcx_10
    int32_t var_104_1 = rcx_10
    void* rdx_5 = *arg6
    var_f8 = rcx_10
    var_10c = zmm0_1
    var_100 = zmm0_1
    var_f4 = 0
    var_ec = 1
    int32_t var_e4_1 = 0
    var_e0 = arg4
    var_118:4.d = *(rdx_5 + 0x48)
    var_110 = *(rdx_5 + 0x4c)
    var_118.d = *(rdx_5 + 0x44)
    sub_141996750(arg1, rdx_5, r12, &var_118)

*(rbx + 0xc0) = r12

if (arg4 == 1)
    *(rbx + 0xa0) = *(arg5 + 0xa0)
    *(rbx + 0xb0) = arg5[0x12]
    rbx[0x2e] = arg5[0x13].d
    rbx[0x2f] = arg5[0x16].d
    sub_1405d16e0(&rbx[0x42], *(arg5[0x17] + 0x80))

int32_t rax_28 = data_1439b6130
uint64_t rsi_2

if (rax_28 s>= 0)
    rsi_2 = 4
    
    if (rax_28 s< 4)
        rsi_2 = zx.q(rax_28)
else
    rsi_2 = 0

sub_1419a2ec0(*(arg3 + 0x5150), &var_128, &data_143ed5e80, 0)
int128_t zmm9 = var_128.o
char rcx_16 = sub_1419a2ec0(*(arg3 + 0x5150), &var_128, &data_143e76ea0, (rsi_2 << 1).d + arg4)
int128_t zmm8 = var_128.o
int512_t zmm6
zmm6.o = zx.o(0)
int128_t zmm7 = *(arg3 + 0x1598)
int128_t var_c8 = sub_1411e1740(rcx_16)
sub_141998c50(zmm8.q, &data_143e7bc70, rbx)
int64_t* rdx_10 = *(arg1 + 8)
var_118 = rbx
var_110.o = zmm9
var_100.o = zmm8
var_f4:4.o = zmm7
var_e0.q = *(*arg6 + 0x44)
void*** rax_31
char rcx_19
rax_31, rcx_19 = sub_14081d830(0x80, rdx_10, 1, 0)
void*** rsi_3 = rax_31

if (rax_31 == 0)
    rsi_3 = nullptr
else
    var_128 = rbx
    sub_1411e1740(rcx_19)
    var_120.q = &data_143e7bca0
    var_c8 = var_128.o
    void arg_20
    sub_141992bd0(rsi_3, &arg_20, &var_c8, 1)
    uint128_t zmm0_3 = var_118.o
    *rsi_3 = &data_142f38918
    *(rsi_3 + 0x38) = zmm0_3
    *(rsi_3 + 0x48) = var_10c:4.o
    *(rsi_3 + 0x58) = var_f8.o
    *(rsi_3 + 0x68) = var_ec:4.o
    rsi_3[0xf] = arg3

return sub_1419968d0(arg1, rsi_3)

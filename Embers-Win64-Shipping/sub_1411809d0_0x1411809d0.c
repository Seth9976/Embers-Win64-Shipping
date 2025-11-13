// 函数: sub_1411809d0
// 地址: 0x1411809d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg4 + 0x28) == 0 || *(arg4 + 0xa0) == 0 || *(arg4 + 0xa8) == 0 || *(arg4 + 0x70) == 0
        || (arg3 == 7 && *arg5 == 0))
    return 

void*** rax_1 = sub_1410fccd0(arg1, arg4 + 0x28, u"CategorizationTexture", 0)
bool cond:1_1 = *(arg4 + 0xa0) == 0
void*** var_108 = rax_1
void*** var_e8_1

if (cond:1_1)
    var_e8_1 = nullptr
else
    var_e8_1 = sub_1410fccd0(arg1, arg4 + 0xa0, u"NodeIndex", 0)

void*** r13_1

if (*(arg4 + 0xa8) == 0)
    r13_1 = nullptr
else
    r13_1 = sub_141193740(arg1, arg4 + 0xa8, u"NodeData", 0)

void*** var_d8_1

if (*(arg4 + 0x70) == 0)
    var_d8_1 = nullptr
else
    var_d8_1 = sub_1410fccd0(arg1, arg4 + 0x70, u"TileIndexTexture", 0)

void*** rax_5

if (*(arg4 + 0x30) == 0)
    rax_5 = sub_1414cb880(&data_1439b70b0, arg1)
else
    rax_5 = sub_1410fccd0(arg1, arg4 + 0x30, u"HairCount", 0)

void*** rax_6

if (*(arg4 + 0x38) == 0)
    rax_6 = sub_1414cb880(&data_1439b70b0, arg1)
else
    rax_6 = sub_1410fccd0(arg1, arg4 + 0x38, u"HairCountUint", 0)

int32_t r14_1 = 0
uint128_t zmm9 = *(arg2 + 0x1598)
int64_t rax_8 = zmm9.q
int64_t rcx_5 = _mm_bsrli_si128(zmm9, 8).q
int32_t rbx_2 = rcx_5.d - rax_8.d
int32_t arg_20 = rbx_2
uint32_t arg_24 = (rcx_5 u>> 0x20).d - (rax_8 u>> 0x20).d

if (zx.d(arg3) - 5 u<= 0xe)
    switch (arg3)
        case 6
            r14_1 = 1
        case 7
            r14_1 = 2
        case 0xd
            r14_1 = 3
        case 0xe
            r14_1 = 4
        case 0xf
            r14_1 = 5
        case 0x10
            r14_1 = 6
        case 0x11
            r14_1 = 7
        case 0x12
            r14_1 = 8
        case 0x13
            r14_1 = 9

void*** rax_13 = sub_14081d830(0x100, *(arg1 + 8), 1, 0)
void*** rdi_1 = rax_13

if (rax_13 == 0)
    rdi_1 = nullptr
else
    __builtin_memset(&rax_13[4], 0, 0x48)
    sub_14117af20(&rax_13[0xe])

memset(rdi_1, 0, 0x100)
sub_1405d16e0(&rdi_1[0xc], *(arg2 + 0x10))
int64_t rbx_3 = arg_20.q
rdi_1[1].d = 8
uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rbx_2))
int64_t var_100_1 = 1
rdi_1[6] = var_108
rdi_1[4] = rax_5
rdi_1[5] = rax_6
uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o((rbx_3 u>> 0x20).d))
rdi_1[7] = var_e8_1
var_108 = r13_1
*rdi_1 = zmm1_1.d
*(rdi_1 + 4) = zmm0_2.d

if ((r13_1[7].d & 0x100) != 0)
    var_100_1.d = 4
    var_100_1:4.d = 0x1c

void*** rax_20
int512_t zmm6_1
rax_20, zmm6_1 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_20 != 0)
    int128_t zmm0_3 = var_108.o
    rax_20[1] = r13_1[1]
    *rax_20 = &data_142f285c0
    rax_20[2] = 0
    *(rax_20 + 0x18) = zmm0_3

rdi_1[9] = rax_20
rdi_1[8] = var_d8_1
*(rdi_1 + 0x14) = *(arg4 + 0x88)
var_100_1.w = 1
var_100_1:2.b = 0
var_100_1:4.d = 0xffffffff
rdi_1[0xa] = *arg5
rdi_1[0xb] = data_14395f4d0
*(rdi_1 + 0xc) = r14_1
rdi_1[2].d = data_1439b5fbc
rdi_1[3].d = *(arg4 + 0x90)
var_108 = *arg6
*(rdi_1 + 0x70) = var_108.o
sub_1419a2ec0(*(arg2 + 0x5150), &var_108, &data_143ed5e80, 0)
int128_t zmm8 = var_108.o
char rcx_17 = sub_1419a2ec0(*(arg2 + 0x5150), &var_108, &data_143e6c060, 0)
int128_t zmm7 = var_108.o
zmm6_1.o = zx.o(0)
var_d8_1.o = sub_14118deb0(rcx_17)
sub_141998c50(zmm7.q, &data_143e732f0, rdi_1)
int64_t var_90_1 = rbx_3
void*** rax_29
char rcx_19
rax_29, rcx_19 = sub_14081d830(0x80, *(arg1 + 8), 1, 0)
void*** rbx_4 = rax_29

if (rax_29 == 0)
    rbx_4 = nullptr
else
    var_108 = rdi_1
    sub_14118deb0(rcx_19)
    void* var_100_2 = &data_143e73320
    var_108.o = var_108.o
    sub_141992bd0(rbx_4, &arg_20, &var_108, 1)
    *rbx_4 = &data_142f2c948
    *(rbx_4 + 0x38) = rdi_1.o
    *(rbx_4 + 0x48) = zmm8
    *(rbx_4 + 0x58) = zmm7
    *(rbx_4 + 0x68) = zmm9
    rbx_4[0xf] = arg2

sub_1419968d0(arg1, rbx_4)

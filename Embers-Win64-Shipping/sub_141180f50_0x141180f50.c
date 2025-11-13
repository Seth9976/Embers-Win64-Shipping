// 函数: sub_141180f50
// 地址: 0x141180f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg4 + 0x28) == 0 || *(arg4 + 0xa0) == 0 || *(arg4 + 0xa8) == 0 || *arg6 == 0)
    return 

void*** rax_1

if (*(arg4 + 0x30) == 0)
    rax_1 = sub_1414cb880(&data_1439b70b0, arg1)
else
    rax_1 = sub_1410fccd0(arg1, arg4 + 0x30, u"ViewHairCountTexture", 0)

bool cond:2_1 = *(arg4 + 0x38) == 0
void*** arg_20 = rax_1
void*** rax_2

if (cond:2_1)
    rax_2 = sub_1414cb880(&data_1439b70b0, arg1)
else
    rax_2 = sub_1410fccd0(arg1, arg4 + 0x38, u"ViewHairCountUintTexture", 0)

void*** r15_1

if (*(arg4 + 0x28) == 0)
    r15_1 = nullptr
else
    r15_1 = sub_1410fccd0(arg1, arg4 + 0x28, u"CategorizationTexture", 0)

void*** var_b8_1

if (*(arg4 + 0xa0) == 0)
    var_b8_1 = nullptr
else
    var_b8_1 = sub_1410fccd0(arg1, arg4 + 0xa0, u"NodeIndex", 0)

void*** r14_1

if (*(arg4 + 0xa8) == 0)
    r14_1 = nullptr
else
    r14_1 = sub_141193740(arg1, arg4 + 0xa8, u"NodeData", 0)

void*** rax_6 = sub_141193740(arg1, arg5 + 0x128, u"MacroGroupData", 0)
int64_t* rdx_9 = *(arg1 + 8)
void*** var_a8 = rax_6
void*** rax_7 = sub_14081d830(0xb0, rdx_9, 1, 0)
void*** rbx_1 = rax_7

if (rax_7 == 0)
    rbx_1 = nullptr
else
    __builtin_memset(&rax_7[5], 0, 0x50)
    rax_7[0x10] = 0
    rax_7[0x11] = 0
    rax_7[0x14] = 0
    rax_7[0x15] = 0

void*** var_98
int32_t* rax_8 = sub_1411e5630(&var_98, memset(rbx_1, 0, 0xb0))
*rbx_1 = *rax_8
*(rbx_1 + 4) = rax_8[1]
int64_t rax_10
uint32_t rcx_9

if (r15_1 == 0)
    rax_10 = 0
    rcx_9 = 0
else
    rax_10 = *(r15_1 + 0x44)
    rcx_9 = (rax_10 u>> 0x20).d

rbx_1[2].d = rax_10.d
*(rbx_1 + 0x14) = rcx_9
var_98 = r14_1
rbx_1[1].d = *(arg2 + 0xd68)
*(rbx_1 + 0xc) = *(arg2 + 0xd6c)
void*** rax_13 = arg_20
rbx_1[7] = r15_1
rbx_1[6] = rax_2
rbx_1[5] = rax_13
rbx_1[3].d = 8
int64_t var_90_1 = 1

if ((r14_1[7].d & 0x100) != 0)
    var_90_1.d = 4
    var_90_1:4.d = 0x1c

void*** rax_14 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_14 == 0)
    rax_14 = nullptr
else
    int128_t zmm0_1 = var_98.o
    rax_14[1] = r14_1[1]
    *rax_14 = &data_142f285c0
    rax_14[2] = 0
    *(rax_14 + 0x18) = zmm0_1

rbx_1[9] = rax_14
rbx_1[8] = var_b8_1
void*** rax_17 = sub_141188b30(arg1, sub_141193740(arg1, arg4 + 0xc8, u"External", 0), 0x1c)
void*** rdx_14 = var_a8
rbx_1[0xa] = rax_17
*(rbx_1 + 0x24) = *(arg4 + 0xd0)
rbx_1[0xc] = *arg6
rbx_1[0xd] = data_14395f4d0
*(rbx_1 + 0x1c) = *(arg5 + 8)
rbx_1[4].d = *(arg4 + 0x90)
rbx_1[0xb] = sub_141188b30(arg1, rdx_14, 0x1d)
sub_1414610e0(arg2, &rbx_1[0x10])
sub_14119c160(arg1, arg2 + 0x51b0, &rbx_1[0x12])
char rcx_17 = sub_1419a2ec0(*(arg2 + 0x5150), &var_a8, &data_143e6bf60, 0)
int128_t zmm7 = var_a8.o
int512_t zmm6_1
zmm6_1.o = zx.o(0)
var_98.o = sub_14118e020(rcx_17)
char rcx_19 = sub_141998c50(zmm7.q, &data_143e731e0, rbx_1)
var_98.d = 1
var_98:4.d = 1
var_b8_1.o = sub_14118e020(rcx_19)
sub_141998c50(zmm7.q, &data_143e731e0, rbx_1)
int32_t var_68_1 = 1
void*** var_70_1 = var_98
void*** rax_26
char rcx_21
rax_26, rcx_21 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** rsi_1 = rax_26

if (rax_26 == 0)
    rsi_1 = nullptr
else
    var_98 = rbx_1
    sub_14118e020(rcx_21)
    void* var_90_2 = &data_143e73210
    var_98.o = var_98.o
    sub_141992bd0(rsi_1, &arg_20, &var_98, 2)
    *rsi_1 = &data_142f2ca48
    *(rsi_1 + 0x38) = rbx_1.o
    *(rsi_1 + 0x48) = zmm7
    rsi_1[0xb] = var_68_1.q

sub_1419968d0(arg1, rsi_1)

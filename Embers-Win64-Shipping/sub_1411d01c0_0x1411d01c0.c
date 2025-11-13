// 函数: sub_1411d01c0
// 地址: 0x1411d01c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void* arg_18 = arg3
int64_t i_3 = 2
int32_t var_ac = 2
int32_t var_b0 = 0x209
int32_t var_b4 = *(*(arg5 + 0x590) + 0x34)
void*** result_1 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    result[2] = 0
    result[1] = u"HairTransmittanceNodeData"
    result[3].b = 0
    *(result + 0x1c) = 0
    result[4] = 0
    result[5].w = 0x200
    *result = &data_142f285d0
    *(result + 0x30) = 0x10.o
    result[8] = 0

int128_t* rax_1 = sub_14081d830(0x680, *(arg1 + 8), 1, 0)
int128_t* rdi = rax_1

if (rax_1 == 0)
    rdi = nullptr
else
    __builtin_memset(rax_1 + 8, 0, 0x48)
    __builtin_memset(&rax_1[6], 0, 0x20)
    __builtin_memset(rax_1 + 0x618, 0, 0x68)
    rax_1[0x5a].q = 0
    *(rax_1 + 0x5a8) = 0
    *(rax_1 + 0x5ac) = 0x3f800000

memset(rdi, 0, 0x680)
sub_1405d16e0(&rdi[0x67], *(arg_18 + 0x10))
*rdi = *arg2
int32_t var_b8
var_b8.q = result
rdi[1] = arg2[1]
var_ac.w = 0
rdi[2] = arg2[2]
rdi[3] = arg2[3]
int128_t zmm0_2 = arg2[4]
*(rdi + 0x638) = arg7
rdi[4] = zmm0_2
rdi[0x62].q = *(arg5 + 0x580)
*(rdi + 0x628) = *(arg5 + 0x588)
rdi[0x66].q = data_14395f4d0
int32_t rax_7 = 0

if ((result[7].d & 0x100) != 0)
    rax_7 = 0x1c

int32_t var_b0_1 = rax_7
void*** rax_8 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
void*** rcx_2 = rax_8

if (rax_8 == 0)
    rcx_2 = nullptr
else
    rcx_2[1] = result[1]
    *rcx_2 = &data_142f285c0
    rcx_2[2] = 0
    *(rcx_2 + 0x18) = var_b8.o

void* r12_1 = arg_18
*(rdi + 0x658) = rcx_2
rdi[0x5b].d = *(arg5 + 0x530)
rdi[0x58].d = *(arg5 + 0x508)
*(rdi + 0x584) = *(arg5 + 0x50c)
rdi[0x59].q = *(arg5 + 0x514)
*(rdi + 0x598) = *(arg5 + 0x51c)
rdi[0x5a] = *(arg5 + 0x520)
*(rdi + 0x588) = *(arg5 + 0x534)
*(rdi + 0x5b4) = *(arg5 + 0x538)
*(rdi + 0x5b8) = *(arg5 + 0x53c)
*(rdi + 0x5bc) = data_1439b6120.d
int32_t rax_17 = data_1439b611c

if (rax_17 s<= 0)
    rax_17 = 0

rdi[0x5c].d = rax_17
int32_t rax_18 = data_143e75b60

if (rax_18 s<= 0)
    rax_18 = 0

*(rdi + 0x5c4) = rax_18
rdi[0x5d] = *(arg5 + 0x540)
rdi[0x5e] = *(arg5 + 0x550)
rdi[0x5f] = *(arg5 + 0x560)
rdi[0x65].q = arg8
rdi[0x60] = *(arg5 + 0x570)
*(rdi + 0x59c) = *(*(arg5 + 0x590) + 0x34)
int32_t rax_21
rax_21.b = *(arg5 + 0x510) != 0
rdi[0x61].d = rax_21
rdi[0x63].q = *(arg5 + 0x500)

if (sub_1405949a0() != 0)
    sub_14119c160(arg1, r12_1 + 0x51b0, &rdi[5])
    sub_1414610e0(r12_1, &rdi[7])

void* rax_24 = &rdi[8]
void* rcx_7 = arg5
uint128_t zmm0_3
int64_t i

do
    rax_24 += 0x80
    zmm0_3 = *rcx_7
    rcx_7 += 0x80
    *(rax_24 - 0x80) = zmm0_3
    *(rax_24 - 0x70) = *(rcx_7 - 0x70)
    *(rax_24 - 0x60) = *(rcx_7 - 0x60)
    *(rax_24 - 0x50) = *(rcx_7 - 0x50)
    *(rax_24 - 0x40) = *(rcx_7 - 0x40)
    *(rax_24 - 0x30) = *(rcx_7 - 0x30)
    *(rax_24 - 0x20) = *(rcx_7 - 0x20)
    *(rax_24 - 0x10) = *(rcx_7 - 0x10)
    i = i_3
    i_3 -= 1
while (i != 1)
void* rax_25 = &rdi[0x18]
void* rcx_8 = arg5 + 0x100
uint64_t i_2 = zx.q((i_3 + 8).d)
uint64_t i_1

do
    rax_25 += 0x80
    zmm0_3 = *rcx_8
    rcx_8 += 0x80
    *(rax_25 - 0x80) = zmm0_3
    *(rax_25 - 0x70) = *(rcx_8 - 0x70)
    *(rax_25 - 0x60) = *(rcx_8 - 0x60)
    *(rax_25 - 0x50) = *(rcx_8 - 0x50)
    *(rax_25 - 0x40) = *(rcx_8 - 0x40)
    *(rax_25 - 0x30) = *(rcx_8 - 0x30)
    *(rax_25 - 0x20) = *(rcx_8 - 0x20)
    *(rax_25 - 0x10) = *(rcx_8 - 0x10)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
int64_t* rdx_6 = arg9

if (*rdx_6 == 0)
    rdx_6 = &data_1439b70c0

void*** rax_26 = sub_1410fccd0(arg1, rdx_6, u"External", 0)
bool cond:1 = arg_20 != 1
int32_t r12_2 = 0
*(rdi + 0x618) = rax_26

if (not(cond:1))
    sub_1405d16e0(rdi + 0x678, *(*(arg5 + 0x5a0) + 0x80))
    r12_2.b = data_143e75b64 s> 0

void* r15 = *(arg5 + 0x590)
var_b8.q = r15
var_b0_1.q = 1

if ((*(r15 + 0x38) & 0x100) != 0)
    var_b0_1 = 4
    int32_t var_ac_1 = 0x1c

void*** rax_27 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
void*** rcx_11 = rax_27

if (rax_27 == 0)
    rcx_11 = nullptr
else
    rcx_11[1] = *(r15 + 8)
    rcx_11[2] = 0
    *(rcx_11 + 0x18) = var_b8.o
    *rcx_11 = &data_142f285c0

rdi[0x64].q = rcx_11
void* r14_1 = *(arg5 + 0x598)
var_b8.q = r14_1
var_b0_1.q = 1

if ((*(r14_1 + 0x38) & 0x100) != 0)
    int32_t var_b0_2 = 4
    int32_t var_ac_2 = 0x1c

void*** rax_29
int512_t zmm6
rax_29, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
void*** rcx_12 = rax_29

if (rax_29 == 0)
    rcx_12 = nullptr
else
    rcx_12[1] = *(r14_1 + 8)
    *rcx_12 = &data_142f285c0
    rcx_12[2] = 0
    *(rcx_12 + 0x18) = var_b8.o

int32_t r8_1 = arg_20
int32_t rax_31 = 0
*(rdi + 0x648) = rcx_12

if (arg6 != 0x40)
    rax_31.b = arg6 != 0x20
    rax_31 += 1

int32_t var_b4_1 = rax_31
uint32_t var_ac_3 = data_1439b6170 s> 0
int32_t var_b0_3 = r12_2
int32_t var_a8
int32_t var_88 = var_a8
int128_t var_98 = r8_1.o
int32_t rcx_14

if (r8_1 != 0)
    rcx_14 = var_98:8.d
else
    rcx_14 = 0
    var_98:8.q = 0

char rcx_18 = sub_1419a2ec0(*(arg_18 + 0x5150), &var_98, &data_143e76da0, 
    var_98.d + (((var_98.q u>> 0x20).d + ((rcx_14 + (var_98:8.q u>> 0x20 << 1).d) << 1)) << 1))
zmm6.o = var_98
int32_t var_b8_1
var_b8_1.q = &arg_18
var_b0_3.q = &arg_20
arg_18 = arg8
int128_t zmm6_1 = sub_1411e18b0(rcx_18)
var_b8_1.o = var_b8_1.o
sub_141998c50(zmm6_1.q, &data_143e7bb60, rdi)
void* var_60 = arg8
int32_t var_58 = 0
void*** rax_40
char rcx_20
rax_40, rcx_20 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** r14_3 = rax_40

if (rax_40 == 0)
    r14_3 = nullptr
else
    var_b8_1.q = rdi
    sub_1411e18b0(rcx_20)
    var_b0_3.q = &data_143e7bb90
    var_98 = var_b8_1.o
    sub_141992bd0(r14_3, &arg_20, &var_98, 2)
    *r14_3 = &data_142f38a08
    *(r14_3 + 0x38) = rdi.o
    *(r14_3 + 0x48) = zmm6_1
    r14_3[0xb] = var_58.q

sub_1419968d0(arg1, r14_3)
return result

// 函数: sub_14248db80
// 地址: 0x14248db80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_c0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c0)

int64_t var_b8 = 0
int64_t var_b0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_b8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_98, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t var_a0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a0, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

uint128_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_70, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int32_t var_c4 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_c4, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c4)

int128_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_80, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_a8, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_10, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t r15
r15.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &arg_20, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = arg_20 != 0
int32_t var_c8 = 0
int64_t r14
r14.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &var_c8, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t rsi
rsi.b = var_c8 != 0
uint128_t var_90

if (*(arg2 + 0x20) == 0)
    int64_t* r8_23 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_23[4]
    sub_140d30490(arg2, &var_90, r8_23)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int64_t rax_13 = *(arg2 + 0x20)
int64_t r9 = var_98
int128_t zmm1 = var_80
int64_t rdx_24 = var_c0
int64_t rdi
rdi.b = rax_13 != 0
uint128_t var_58 = var_90
uint128_t zmm0_1 = var_70
*(arg2 + 0x20) = rdi + rax_13
uint128_t var_38 = zmm0_1
uint64_t var_f8 = var_a8
int32_t var_108 = var_c4.d
uint64_t var_118 = var_a0
int128_t var_48 = zmm1
int64_t result = sub_142416ab0(arg1, rdx_24, &var_b8, r9, var_118, &var_38, var_108, &var_48, 
    var_f8, r15.b, r14.b, rsi.b, &var_58)
int64_t rcx_13 = var_b8

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)

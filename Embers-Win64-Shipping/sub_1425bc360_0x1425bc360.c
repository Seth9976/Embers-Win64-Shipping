// 函数: sub_1425bc360
// 地址: 0x1425bc360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_98 = 0
int32_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_98, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

uint128_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_38, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_20 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_a8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_a8, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_10, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = arg_10 != 0
int64_t rsi = var_98
int64_t zmm1 = var_78
uint128_t var_28 = var_38
uint128_t zmm0_1 = zx.o(var_68)
int64_t rcx_8
rcx_8.b = rax_9 != 0
int64_t var_58 = zmm1
*(arg2 + 0x20) = rcx_8 + rax_9
int32_t var_70
int32_t var_50 = var_70
uint64_t var_48 = zmm0_1.q
int32_t var_60
int32_t var_40 = var_60
int16_t* var_88 = nullptr
int32_t var_80 = var_90

if (var_90 != 0)
    sub_1405a4c70(&var_88, var_90, 0)
    memcpy(var_88, rsi, var_90 * 2)
else
    int32_t var_7c_1 = 0

char var_b0 = rdi.b
int64_t var_b8 = var_a8
int32_t var_c0 = arg_20.d
int64_t result = sub_14243c180(var_a0, &var_48, &var_58, &var_88, &var_28)
int64_t rcx_13 = var_98

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)

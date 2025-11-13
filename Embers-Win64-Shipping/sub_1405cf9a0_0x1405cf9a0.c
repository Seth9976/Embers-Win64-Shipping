// 函数: sub_1405cf9a0
// 地址: 0x1405cf9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 0x3f800000
int128_t var_a8 = data_142d4cc10
int32_t var_98 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rbp = &var_a8
int32_t arg_10 = 0

if (rax_2 != 0)
    rbp = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
void var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_88, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

float (* rax_5)[0x4] = *(arg2 + 0x38)
float (* rsi)[0x4] = &var_88
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    rsi = rax_5

void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t* rax_7 = *(arg2 + 0x38)
int32_t* r9 = &var_48
float zmm1[0x4] = arg_10

if (rax_7 != 0)
    r9 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
return j_sub_1405bc770(rbp, zmm1, rsi, r9)

// 函数: sub_1424feb40
// 地址: 0x1424feb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_80, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_84 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_84, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_84)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:3 = arg_18 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_88, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_20, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_8 = *(arg2 + 0x20)
uint128_t zmm3 = var_84
int64_t var_58 = var_80
int64_t rdi
rdi.b = rax_8 != 0
int64_t var_48 = var_70
int32_t var_78
int32_t var_50 = var_78
int32_t var_68
int32_t var_40 = var_68
int32_t rax_11 = arg_20
char rax_12 = arg_10
int32_t var_98 = var_88.d
*(arg2 + 0x20) = rdi + rax_8
float var_38[0x4]
float* rax_13 = sub_1420cf1d0(&var_38, &var_48, &var_58, zmm3, rsi.b, rax_12, var_98, rax_11)
*arg3 = *rax_13
int32_t result = rax_13[2]
arg3[1].d = result
return result

// 函数: sub_14256bb00
// 地址: 0x14256bb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t var_5c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_5c, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_5c)

int32_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_60, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t var_64 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_64, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_64)

int32_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t r14
r14.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_20, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = arg_20 != 0
char arg_8 = 0
int64_t rsi
rsi.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_8, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_50, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t rax_10 = *(arg2 + 0x20)
int64_t zmm0 = var_50
int32_t zmm1 = var_64
int512_t zmm3
zmm3.o = var_60
int64_t rdi
rdi.b = rax_10 != 0
int64_t rdx_18 = var_58
int32_t var_48
int32_t var_30 = var_48
uint32_t rax_12 = zx.d(arg_8)
*(arg2 + 0x20) = rdi + rax_10
int64_t r8_18 = *arg1
int64_t var_38 = zmm0
return (*(r8_18 + 0x950))(arg1, rdx_18, r8_18, zmm3, zmm1, var_68.d, r14.b, rsi.b, rax_12, &var_38)

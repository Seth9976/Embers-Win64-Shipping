// 函数: sub_1408b8200
// 地址: 0x1408b8200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_1c = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_1c, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_1c)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_20 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_24 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_24, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

bool cond:3 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t var_28 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_28, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:5 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:5)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_18, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_8 = *(arg2 + 0x20)
char r9 = arg_10
int64_t rdi
rdi.b = rax_8 != 0
uint128_t zmm2 = var_24
int32_t rax_9 = arg_18
int32_t var_40 = arg_20.d
uint128_t zmm0 = var_1c
int32_t var_48 = var_28.d
uint128_t zmm1 = var_20
*(arg2 + 0x20) = rdi + rax_8
int64_t result
int32_t zmm0_1
zmm0_1, result = sub_1408aee10(zmm0, zmm1, zmm2, r9, var_48, var_40, rax_9)
*arg3 = zmm0_1
return result

// 函数: sub_1408b7f60
// 地址: 0x1408b7f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_24 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_24, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_28 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_2c = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_2c, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_2c)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t var_30 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_30, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

bool cond:4 = *(arg2 + 0x20) == 0
char result_1 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &result_1, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

bool cond:5 = *(arg2 + 0x20) == 0
int32_t var_34 = 0

if (cond:5)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_34, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

bool cond:6 = *(arg2 + 0x20) == 0
int32_t var_38 = 0

if (cond:6)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_38, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

bool cond:7 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:7)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_20, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0
int64_t rcx_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    rcx_9 = sub_140d30490(arg2, &arg_18, r8_17)
else
    rcx_9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_10 = *(arg2 + 0x20)
int32_t zmm3 = var_30
int64_t rdi
rdi.b = rax_10 != 0
int128_t zmm2 = var_2c
int32_t var_48 = arg_18
char result = result_1
int32_t var_50 = arg_20
int32_t zmm0 = var_34
int32_t var_58 = var_38.d
int128_t zmm1 = var_28
*(arg2 + 0x20) = rdi + rax_10
*arg3 = sub_1408aedf0(rcx_9, zmm1, zmm2, zmm3, result, zmm0)
return result

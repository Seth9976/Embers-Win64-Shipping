// 函数: sub_1408a1cb0
// 地址: 0x1408a1cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = zx.o(0)
var_28.q = 0
var_28:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t var_2c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_2c, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_2c)

int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_30, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

char var_37 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_37, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_37)

char var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_38, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

char arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_34 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_34, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_10, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
int64_t result =
    sub_14089f790(arg1, &var_28, var_2c, var_30, var_37, var_38, arg_20, var_34, arg_10)
int64_t rcx_9 = var_28.q

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)

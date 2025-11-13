// 函数: sub_14248d6b0
// 地址: 0x14248d6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t var_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_28, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_30, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_38, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_8 = *(arg2 + 0x20)
int64_t r9 = var_20
int64_t rdi
rdi.b = rax_8 != 0
int64_t r8_14 = var_18
int64_t* rdx_14 = arg_20
int32_t var_40 = var_38.d
int32_t zmm0_1 = var_30.d
int32_t var_48 = arg_10
int32_t zmm1 = var_28.d
*(arg2 + 0x20) = rdi + rax_8
return sub_142416690(arg1, rdx_14, r8_14, r9, zmm1, zmm0_1, var_48, var_40, var_38.d, var_30)

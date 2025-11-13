// 函数: sub_1424bdc20
// 地址: 0x1424bdc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_68 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* var_70 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_70, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_50, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_60, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_88, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
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

int64_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_78, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_80, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &arg_10, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_11 = *(arg2 + 0x20)
int32_t zmm1 = arg_20
int64_t* rdx_20 = var_70
bool var_90 = arg_10 != 0
int64_t* rcx_11 = var_68
int64_t rdi
rdi.b = rax_11 != 0
int64_t var_38 = var_60
int32_t var_58
int32_t var_30 = var_58
int32_t var_48
int32_t var_20 = var_48
char rax_14 = var_80.b
int64_t rax_15 = var_78
int64_t var_28 = var_50
int32_t var_a8 = arg_18.d
int32_t var_b8 = var_88.d
*(arg2 + 0x20) = rdi + rax_11
int64_t* result =
    sub_14203f420(rcx_11, rdx_20, &var_28, &var_38, var_b8, zmm1, var_a8, rax_15, rax_14)
*arg3 = result
return result

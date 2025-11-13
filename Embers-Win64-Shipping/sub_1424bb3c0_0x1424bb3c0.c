// 函数: sub_1424bb3c0
// 地址: 0x1424bb3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_10)

int32_t var_14 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_14, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_14)

int32_t var_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t var_1c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_1c, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_1c)

int32_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int32_t var_24 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_24, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

int32_t var_28 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_28, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_20, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0
int32_t r8_17
int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_18 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_18[4]
    r8_17, r9 = sub_140d30490(arg2, &arg_10, r8_18)
else
    r8_17, r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_10 = *(arg2 + 0x20)
int512_t zmm3
zmm3.o = var_1c
int64_t rdi
rdi.b = rax_10 != 0
int512_t zmm2
zmm2.o = var_18
int64_t* rcx_9 = var_10
int32_t var_38 = arg_10
float var_40 = arg_20[0]
int32_t var_48 = var_28
int32_t zmm0 = var_20
float var_50 = var_24[0]
float zmm1[0x4] = var_14
*(arg2 + 0x20) = rdi + rax_10
return sub_14203c3f0(rcx_9, zmm1, r8_17, r9, zmm0, var_50, var_48)

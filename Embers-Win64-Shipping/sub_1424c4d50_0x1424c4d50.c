// 函数: sub_1424c4d50
// 地址: 0x1424c4d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28 = nullptr

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

float var_34 = 0f

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_34, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

float var_38 = 0f

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_38, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

float arg_20 = 0f

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
float zmm0 = arg_20
float zmm1 = var_38
int128_t zmm3 = var_30
int64_t rdi
rdi.b = rax_8 != 0
int128_t zmm2 = var_2c
int64_t rdi_1 = rdi + rax_8
int64_t* rdx_14 = var_28
rax_8.b = arg_10 != 0
*(arg2 + 0x20) = rdi_1
return sub_1420867b0(arg1, rdx_14, zmm2, zmm3, var_34, zmm1, zmm0, rax_8.b)

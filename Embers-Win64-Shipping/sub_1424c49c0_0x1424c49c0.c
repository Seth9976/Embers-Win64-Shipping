// 函数: sub_1424c49c0
// 地址: 0x1424c49c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_30 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int32_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t var_3c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_3c, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_3c)

int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_40, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

float var_44 = 0f

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_44, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

int32_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_48, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

float var_4c = 0f

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_4c, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_4c)

int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_50, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

float var_54 = 0f

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_54, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_54)

int32_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_58, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &arg_10, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
float arg_20 = 0f
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_23 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_23[4]
    sub_140d30490(arg2, &arg_20, r8_23)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_25 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_25[4]
    sub_140d30490(arg2, &var_28, r8_25)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_14 = *(arg2 + 0x20)
int128_t zmm3 = var_3c
int64_t rdi
rdi.b = rax_14 != 0
int128_t zmm2 = var_38
int64_t* rdx_26 = var_30
int64_t var_60 = var_28
float var_68 = arg_20
int32_t var_78 = var_58.d
float var_80 = var_54
float var_88 = var_50.d
float var_90 = var_4c
float zmm1 = var_44
int32_t var_98 = var_48.d
float var_a8 = var_40.d
*(arg2 + 0x20) = rdi + rax_14
return sub_142086630(arg1, rdx_26, zmm2, zmm3, var_a8, zmm1, var_98, var_90, var_88, var_80, 
    var_78, rsi.b, var_68, var_60)

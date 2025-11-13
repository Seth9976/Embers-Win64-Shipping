// 函数: sub_141aea8f0
// 地址: 0x141aea8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_34 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_34, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_38 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_3c = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_3c, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_3c)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t var_40 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_40, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

bool cond:4 = *(arg2 + 0x20) == 0
float var_44 = 0f

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_44, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

bool cond:5 = *(arg2 + 0x20) == 0
int32_t var_48 = 0

if (cond:5)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_48, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

bool cond:6 = *(arg2 + 0x20) == 0
float arg_20 = 0f

if (cond:6)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_20, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:7 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:7)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_18, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:8 = *(arg2 + 0x20) == 0
float arg_10 = 0f

if (cond:8)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_10, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_10 = *(arg2 + 0x20)
uint128_t zmm3 = var_3c
int64_t rcx_9
rcx_9.b = rax_10 != 0
uint128_t zmm2 = var_38
float var_50 = arg_10
float var_58 = arg_18.d
float var_60 = arg_20
float zmm0 = var_44
float var_68 = var_48.d
float var_78 = var_40.d
uint128_t zmm1 = var_34
*(arg2 + 0x20) = rcx_9 + rax_10
float var_30[0x6]
float* rax_11 =
    sub_141ac77b0(&var_30, zmm1, zmm2, zmm3, var_78, zmm0, var_68, var_60, var_58, var_50)
*arg3 = *rax_11
int32_t result = rax_11[2]
arg3[1].d = result
return result

// 函数: sub_1424ea7b0
// 地址: 0x1424ea7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
int32_t zmm1 = arg_18
int128_t zmm3 = arg_20
int64_t var_48 = var_68
int64_t rcx_5
rcx_5.b = rax_6 != 0
int64_t var_38 = var_58
int64_t zmm0 = arg_10
*(arg2 + 0x20) = rcx_5 + rax_6
int32_t var_60
int32_t var_40 = var_60
int32_t var_50
int32_t var_30 = var_50
int32_t var_28[0x4]
int32_t* rax_9 = sub_1420bbe30(&var_28, &var_38, &var_48, zmm3, zmm1, zmm0.d)
*arg3 = *rax_9
int32_t result = rax_9[2]
arg3[1].d = result
return result

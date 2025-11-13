// 函数: sub_140648580
// 地址: 0x140648580
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

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_88, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_5 = *(arg2 + 0x20)
int64_t var_48 = var_88
int64_t var_38 = var_78
int64_t rcx_4
rcx_4.b = rax_5 != 0
int64_t var_28 = var_68
int64_t zmm0 = var_58
int32_t var_80
int32_t var_40 = var_80
int32_t var_70
int32_t var_30 = var_70
int32_t var_60
int32_t var_20 = var_60
*(arg2 + 0x20) = rcx_4 + rax_5
int32_t var_50
int32_t var_10 = var_50
int64_t var_18 = zmm0
char result = sub_140628c30(&var_18, &var_28, &var_38, &var_48)
*arg3 = result
return result

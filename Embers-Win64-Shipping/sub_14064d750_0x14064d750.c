// 函数: sub_14064d750
// 地址: 0x14064d750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_3 = *(arg2 + 0x20)
int64_t var_38 = var_58
int64_t var_28 = var_48
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_50
int32_t var_30 = var_50
int32_t var_40
int32_t var_20 = var_40
float var_18[0x4]
float* rax_6 = sub_1406305d0(&var_18, &var_28, &var_38)
*arg3 = *rax_6
int32_t result = rax_6[2]
arg3[1].d = result
return result

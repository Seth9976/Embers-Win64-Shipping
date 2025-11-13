// 函数: sub_142579510
// 地址: 0x142579510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_4 = *(arg2 + 0x20)
int64_t r9 = arg_8
int64_t var_28 = var_48
int64_t rdi
rdi.b = rax_4 != 0
int64_t var_18 = var_38
int32_t var_40
int32_t var_20 = var_40
int32_t var_30
int32_t var_10 = var_30
*(arg2 + 0x20) = rdi + rax_4
return (*(*arg1 + 0x5b8))(arg1, &var_18, &var_28, r9)

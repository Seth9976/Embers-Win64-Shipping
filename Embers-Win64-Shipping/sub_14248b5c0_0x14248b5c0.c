// 函数: sub_14248b5c0
// 地址: 0x14248b5c0
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

int64_t rax_3 = *(arg2 + 0x20)
int64_t var_28 = var_48
int64_t var_18 = var_38
int64_t rcx_2
rcx_2.b = rax_3 != 0
int32_t var_40
int32_t var_20 = var_40
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_30
int32_t var_10 = var_30
return (*(*arg1 + 0x760))(arg1, &var_18, &var_28)

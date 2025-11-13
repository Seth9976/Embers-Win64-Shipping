// 函数: sub_14065e290
// 地址: 0x14065e290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_3 = *(arg2 + 0x20)
int32_t rdx_4 = arg_10
int64_t rdi
rdi.b = rax_3 != 0
int64_t var_18 = var_28
*(arg2 + 0x20) = rdi + rax_3
int32_t var_20
int32_t var_10 = var_20
return sub_140631940(arg1, rdx_4, &var_18)

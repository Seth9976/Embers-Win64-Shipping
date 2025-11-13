// 函数: sub_14064a470
// 地址: 0x14064a470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:1 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
char rdx_4 = arg_10
int64_t rcx_2
rcx_2.b = rax_3 != 0
int64_t var_18 = var_28
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_20
int32_t var_10 = var_20
float result = sub_14062b240(&var_18, rdx_4)
*arg3 = result
return result

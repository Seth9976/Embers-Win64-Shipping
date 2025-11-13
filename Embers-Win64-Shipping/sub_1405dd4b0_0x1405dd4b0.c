// 函数: sub_1405dd4b0
// 地址: 0x1405dd4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28
sub_1405d51f0(&var_28)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_2 = *(arg2 + 0x20)
int128_t var_18 = var_28
int64_t rcx_2
rcx_2.b = rax_2 != 0
*(arg2 + 0x20) = rcx_2 + rax_2
char result = sub_1405d6fa0(arg1, &var_18)
*arg3 = result
return result

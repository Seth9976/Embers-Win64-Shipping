// 函数: sub_14251fb50
// 地址: 0x14251fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28
sub_140d3a3a0(&var_28, nullptr)
int64_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_2 = *(arg2 + 0x20)
int128_t var_18 = var_28
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
int64_t result
int32_t zmm0_1
result, zmm0_1 = sub_1420c9be0(&var_18)
*arg3 = zmm0_1
return result

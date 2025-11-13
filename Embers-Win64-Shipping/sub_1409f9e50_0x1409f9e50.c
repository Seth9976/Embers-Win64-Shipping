// 函数: sub_1409f9e50
// 地址: 0x1409f9e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38
sub_140d3a3a0(&var_38, nullptr)
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

uint128_t var_48
sub_140d3a3a0(&var_48, nullptr)
int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_3 = *(arg2 + 0x20)
int128_t zmm1 = var_38
uint128_t var_28 = var_48
int64_t rdi
rdi.b = rax_3 != 0
int128_t var_18 = zmm1
*(arg2 + 0x20) = rdi + rax_3
return sub_1409f8690(arg1, &var_18, &var_28)

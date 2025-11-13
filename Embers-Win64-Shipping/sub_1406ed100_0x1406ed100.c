// 函数: sub_1406ed100
// 地址: 0x1406ed100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58
sub_140d3a3a0(&var_58, nullptr)
int64_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int128_t var_68
sub_140d3a3a0(&var_68, nullptr)
int64_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int128_t var_78
sub_140d3a3a0(&var_78, nullptr)
int64_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int128_t var_88
sub_140d3a3a0(&var_88, nullptr)
int64_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_88, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_5 = *(arg2 + 0x20)
int128_t zmm1 = var_78
int128_t var_48 = var_88
int128_t zmm0 = var_68
int64_t rdi
rdi.b = rax_5 != 0
int128_t var_38 = zmm1
zmm1 = var_58
*(arg2 + 0x20) = rdi + rax_5
int128_t var_28 = zmm0
int128_t var_18 = zmm1
return sub_1406ea230(&var_18, &var_28, &var_38, &var_48)

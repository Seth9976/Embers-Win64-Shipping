// 函数: sub_14251c610
// 地址: 0x14251c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_60, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int128_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_28, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_7 = *(arg2 + 0x20)
int64_t zmm1 = var_60
int64_t rdi
rdi.b = rax_7 != 0
int128_t var_18 = var_28
int32_t var_58
int32_t var_40 = var_58
int32_t var_70 = arg_10.d
int128_t* var_78 = &var_18
*(arg2 + 0x20) = rdi + rax_7
int64_t var_48 = zmm1
int64_t rcx_7 = var_38

if (rcx_7 == 0)
    return &var_18

return sub_140a74f90(rcx_7)

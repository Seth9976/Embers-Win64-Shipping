// 函数: sub_14251b880
// 地址: 0x14251b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_28 = 0x42c80000
int64_t var_38 = 0
int64_t var_30 = 0
int64_t var_24 = 0
char var_1c = 1
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

*(arg2 + 0x38)
int64_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_80, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_88, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)
int128_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_58, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
int64_t zmm1 = var_80
int64_t rdi
rdi.b = rax_8 != 0
int128_t var_48 = var_58
int32_t var_78
int32_t var_60 = var_78
int32_t var_90 = arg_10.d
int128_t* var_98 = &var_48
*(arg2 + 0x20) = rdi + rax_8
int64_t var_68 = zmm1
int64_t rcx_7 = var_38

if (rcx_7 == 0)
    return &var_48

return sub_140a74f90(rcx_7)

// 函数: sub_14250fd90
// 地址: 0x14250fd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

char var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t var_6c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_6c, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_6c)

char arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_70, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

char arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t var_74 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_74, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_10, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_9 = *(arg2 + 0x20)
int32_t r9 = var_6c
char r8_16 = var_78
int32_t rdx_16 = var_68
int64_t rdi
rdi.b = rax_9 != 0
char rax_10 = arg_10
int32_t rax_11 = var_74
char rax_12 = arg_18
int32_t rax_13 = var_70
char rax_14 = arg_20
*(arg2 + 0x20) = rdi + rax_9
void var_60
int32_t* result = sub_1420cc6e0(&var_60, rdx_16, r8_16, r9, rax_14, rax_13, rax_12, rax_11, rax_10)
int32_t rcx_9 = result[0xe]
int128_t zmm2 = *(result + 0x10)
int128_t zmm3 = *(result + 0x20)
int64_t zmm0 = *(result + 0x30)
*arg3 = *result
arg3[1] = zmm2
arg3[2] = zmm3
arg3[3].q = zmm0
*(arg3 + 0x38) = rcx_9
return result

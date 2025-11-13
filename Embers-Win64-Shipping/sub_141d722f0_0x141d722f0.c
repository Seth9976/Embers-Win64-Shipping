// 函数: sub_141d722f0
// 地址: 0x141d722f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = data_143f38074
char var_54 = 1
int64_t var_50 = 0
int64_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_68 = 0
int64_t var_60 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_68
int32_t arg_10 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
int128_t var_38 = var_58.o
int64_t var_28 = var_48
bool cond:2 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_5
int64_t result = sub_141d6c2d0(arg1, &var_38, rsi, cond:2)
int64_t rcx_4 = var_68

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)

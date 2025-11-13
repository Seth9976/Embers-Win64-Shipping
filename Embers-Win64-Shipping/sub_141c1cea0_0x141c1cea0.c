// 函数: sub_141c1cea0
// 地址: 0x141c1cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38
sub_141b7bae0(&var_38)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void** rax_2 = *(arg2 + 0x38)
void** rsi = &var_38

if (rax_2 != 0)
    rsi = rax_2

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* const arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int128_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_60, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t rax_7 = *(arg2 + 0x20)
void* const r9 = arg_10
int64_t r8_10 = arg_20
int64_t rdx_10 = var_68
int64_t rdi
rdi.b = rax_7 != 0
int128_t var_48 = var_60
*(arg2 + 0x20) = rdi + rax_7
return sub_141ba3b90(rsi, rdx_10, r8_10, r9, &var_48)

// 函数: sub_140682c80
// 地址: 0x140682c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = 0
int64_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_50, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

char arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t* var_58 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void var_40
sub_140d3a3a0(&var_40, nullptr)
int64_t var_38 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_40, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

void* rax_6 = *(arg2 + 0x38)
void* rcx_6 = &var_40
char r9 = arg_10
char r8_10 = arg_20

if (rax_6 != 0)
    rcx_6 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
int128_t var_30
int128_t* var_60 = &var_30
int64_t* rax_8 = var_58
*(arg2 + 0x20) = rdi + rax_7
var_30 = *rcx_6
int64_t result = sub_14066b610(arg1, &var_50, r8_10, r9, rax_8)
int64_t rcx_8 = var_50

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)

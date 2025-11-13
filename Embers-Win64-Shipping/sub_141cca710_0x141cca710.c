// 函数: sub_141cca710
// 地址: 0x141cca710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

void var_58
sub_141cbe4d0(&var_58)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_58
uint64_t var_68 = 0
int64_t var_60 = 0

if (rax_4 != 0)
    rsi = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

uint64_t* rax_6 = *(arg2 + 0x38)
uint64_t* r9 = &var_68
void* rdx_8 = arg_10
int64_t* rcx_5 = arg_20

if (rax_6 != 0)
    r9 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
uint64_t result = sub_141cc2910(rcx_5, rdx_8, rsi, r9)
uint64_t rcx_6 = var_68

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t var_20

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

int64_t var_40

if (var_40 != 0)
    result = sub_140a74f90(var_40)

int64_t var_50

if (var_50 == 0)
    return result

return sub_140a74f90(var_50)

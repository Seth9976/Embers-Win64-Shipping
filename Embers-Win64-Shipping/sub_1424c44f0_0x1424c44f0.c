// 函数: sub_1424c44f0
// 地址: 0x1424c44f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0
int32_t var_60 = 0
int64_t var_58
__builtin_memset(&var_58, 0, 0x30)
void var_28
sub_140d3a3a0(&var_28, nullptr)
char var_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* r14 = &var_68
int64_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r14 = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rsi = &arg_20
char arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rsi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_6 = *(arg2 + 0x38)
char* r8_6 = &arg_10

if (rax_6 != 0)
    r8_6 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
int64_t result = sub_1420b3db0(r14, rsi, r8_6)
int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

int64_t rcx_7 = var_58

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)

// 函数: sub_141ccb110
// 地址: 0x141ccb110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
__builtin_memset(&var_38, 0, 0x20)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* r14 = &var_38
int64_t var_58 = 0
int64_t var_50 = 0

if (rax_2 != 0)
    r14 = rax_2

int64_t var_48 = 0
int64_t var_40 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rsi = &var_58
int32_t arg_10 = 0

if (rax_4 != 0)
    rsi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_6 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_6[4]
    sub_140d30490(arg2, &arg_10, r8_6)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:2 = arg_10 != 0
int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
char result = sub_141cc3140(r14, rsi, cond:2)
*arg3 = result

if (var_48 != 0)
    result = sub_140a74f90(var_48)

int64_t rcx_5 = var_58

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t var_28

if (var_28 != 0)
    result = sub_140a74f90(var_28)

int64_t rcx_7 = var_38

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)

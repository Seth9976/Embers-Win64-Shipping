// 函数: sub_14252f2f0
// 地址: 0x14252f2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_98
__builtin_memset(&var_98, 0, 0x18)
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0
int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t var_b8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_b8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t var_c8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_c8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_6 = *(arg2 + 0x38)
char* rbx = &arg_10
int64_t var_78 = var_c8

if (rax_6 != 0)
    rbx = rax_6

int64_t var_68 = var_b8
int64_t rax_7 = *(arg2 + 0x20)
int64_t rcx_5
rcx_5.b = rax_7 != 0
int32_t var_58 = 0xffffffff
int64_t var_54 = 0
int32_t var_c0
int32_t var_70 = var_c0
int32_t var_b0
int32_t var_60 = var_b0
*(arg2 + 0x20) = rcx_5 + rax_7
int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
arg_20 = 0
sub_141e38d70(&var_58, &var_a8)
int64_t* result = sub_1420e68b0(arg_18, &var_58, &var_68, &var_78, rbx)
*arg3 = result
int64_t var_90

if (var_90 == 0)
    return result

return sub_140a74f90(var_90)

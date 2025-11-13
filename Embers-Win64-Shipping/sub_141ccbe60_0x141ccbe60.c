// 函数: sub_141ccbe60
// 地址: 0x141ccbe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
__builtin_memset(&var_48, 0, 0x20)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_68 = 0
int32_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi = var_68
int64_t var_58 = 0
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_50 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_58, var_60, 0)
    memcpy(var_58, rdi, var_60 * 2)
else
    int32_t var_4c_1 = 0

uint64_t var_28
__builtin_memset(&var_28, 0, 0x20)
sub_141cbed70(&var_28, &var_48)
char result = sub_141cc4f90(&var_28, &var_58)
int64_t rcx_8 = var_68
*arg3 = result

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

int64_t rcx_10 = var_48

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)

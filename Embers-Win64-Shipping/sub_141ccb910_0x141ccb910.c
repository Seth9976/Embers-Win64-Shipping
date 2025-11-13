// 函数: sub_141ccb910
// 地址: 0x141ccb910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68
__builtin_memset(&var_68, 0, 0x20)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_2 = *(arg2 + 0x20)
uint64_t var_48
__builtin_memset(&var_48, 0, 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
sub_141cbed70(&var_48, &var_68)
int64_t var_28
int64_t* result = sub_140ae7d20(arg3, sub_141cc4390(&var_28, &var_48))
int64_t var_18

if (var_18 != 0)
    result = sub_140a74f90(var_18)

int64_t rcx_7 = var_28

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

int64_t rcx_9 = var_68

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)

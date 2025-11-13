// 函数: sub_142522960
// 地址: 0x142522960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 0xffffffff
int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
int64_t var_54 = 0
int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
arg_10 = 0
int64_t var_20
__builtin_memset(&var_20, 0, 0x18)
int64_t var_30 = var_58.q
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t var_28 = var_54:4.d
sub_141ddfdd0(&var_20, &var_48)
uint64_t result = sub_1420cbde0(&var_30)
*arg3 = result
int64_t var_40

if (var_40 == 0)
    return result

return sub_140a74f90(var_40)

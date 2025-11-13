// 函数: sub_141c02650
// 地址: 0x141c02650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 0xffffffff
int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
int64_t var_54 = 0
int64_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_2 = *(arg2 + 0x20)
uint64_t var_18 = 0
int64_t var_10 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
int64_t var_30 = var_58.q
int32_t var_28 = var_54:4.d
int64_t rax_5 = var_48
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t var_20 = rax_5
int64_t var_40
sub_140597df0(&var_18, &var_40)
int64_t result = (*(*arg1 + 0x2f8))(arg1, &var_30)
int64_t rcx_5 = var_40

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)

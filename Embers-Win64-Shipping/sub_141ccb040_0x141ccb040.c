// 函数: sub_141ccb040
// 地址: 0x141ccb040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
__builtin_memset(&var_28, 0, 0x20)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_28

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_3 != 0
*(arg2 + 0x20) = rbx + rax_3
char result = (*(*arg1 + 0x28))(arg1, rdx_2)
*arg3 = result
int64_t var_18

if (var_18 != 0)
    result = sub_140a74f90(var_18)

int64_t rcx_3 = var_28

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)

// 函数: sub_141ccb6a0
// 地址: 0x141ccb6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdx_2 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
int64_t var_28
int64_t* result = sub_140ae7d20(arg3, sub_141cc42f0(&var_28, rdx_2))
int64_t var_18

if (var_18 != 0)
    result = sub_140a74f90(var_18)

int64_t rcx_4 = var_28

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)

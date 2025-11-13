// 函数: sub_141809c50
// 地址: 0x141809c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
__builtin_memset(&var_38, 0, 0x30)
int64_t var_28
uint64_t var_18
uint64_t result = sub_141806230(arg1 - 8, &var_18, &var_28, &var_38)
int64_t rcx_1 = var_38

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = var_28

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

uint64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall

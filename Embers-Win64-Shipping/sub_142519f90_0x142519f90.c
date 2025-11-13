// 函数: sub_142519f90
// 地址: 0x142519f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38 = 0xffffffff
int64_t var_34 = 0
int64_t var_28
__builtin_memset(&var_28, 0, 0x18)
uint64_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rdx_2 = &var_38

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_3 != 0
*(arg2 + 0x20) = rbx + rax_3
uint64_t* result = sub_1420b8090(&arg_10, rdx_2)
*arg3 = *result
int64_t var_20

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)

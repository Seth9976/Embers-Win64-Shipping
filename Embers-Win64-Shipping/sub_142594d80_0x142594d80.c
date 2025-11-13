// 函数: sub_142594d80
// 地址: 0x142594d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
__builtin_memset(&var_48, 0, 0x31)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_48

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_3 != 0
*(arg2 + 0x20) = rbx + rax_3
int64_t result = sub_141f4b140(arg1, rdx_2)
int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

int64_t rcx_3 = var_48

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)

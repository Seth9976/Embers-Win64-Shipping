// 函数: sub_1406ed630
// 地址: 0x1406ed630
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

*(arg2 + 0x38)
int64_t rax_3 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_3 != 0
*(arg2 + 0x20) = rbx + rax_3
void* result = sub_1406eb230()
int64_t var_28

if (var_28 != 0)
    result = sub_140a74f90(var_28)

int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

int64_t rcx_4 = var_48

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)

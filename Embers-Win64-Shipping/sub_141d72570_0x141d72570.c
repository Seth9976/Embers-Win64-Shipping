// 函数: sub_141d72570
// 地址: 0x141d72570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
__builtin_memset(&var_38, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_2 != 0
int64_t var_20 = var_38
*(arg2 + 0x20) = rbx + rax_2
int64_t var_30
void var_18
sub_140596d10(&var_18, &var_30)
void* result = sub_141d6cb50(arg1, &var_20)
int64_t rcx_3 = var_30

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)

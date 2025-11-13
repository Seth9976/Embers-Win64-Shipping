// 函数: sub_141ccb4f0
// 地址: 0x141ccb4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
sub_141cbe4d0(&var_58)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_2 = *(arg2 + 0x38)
void* rcx_2 = &var_58

if (rax_2 != 0)
    rcx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
char result = sub_141cc3e50(rcx_2)
*arg3 = result
int64_t var_20

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

int64_t var_40

if (var_40 != 0)
    result = sub_140a74f90(var_40)

int64_t var_50

if (var_50 == 0)
    return result

return sub_140a74f90(var_50)

// 函数: sub_140f59250
// 地址: 0x140f59250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x390) == 0)
    sub_140a0e2a0(arg1, arg2)
    return arg2

sub_140f5fbb0(arg1, 0)
int64_t var_28 = *(arg4 + 0x38)
int64_t var_20 = *(arg4 + 0x40)
void* rax_2 = *(arg4 + 0x48)
void* var_18 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

sub_140f5cdb0(arg1, &var_28, 0, 0, 0, 0)
*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2

// 函数: sub_140fbbb90
// 地址: 0x140fbbb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x3a0)
int64_t var_18 = *(arg1 + 0x3d0)
void* rax_1 = *(arg1 + 0x3d8)
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

(*(*r8 + 0x240))(r8, &var_18)
*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2

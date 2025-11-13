// 函数: sub_141b071f0
// 地址: 0x141b071f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 8)
int64_t rbx = *(arg3 + 0xc8)
char var_2f = *(arg1 + 9)
char var_2e = *(arg1 + 0xa)
char var_2d = *(arg1 + 0xb)
char var_2c = *(arg1 + 0xc)
char var_2b = *(arg1 + 0xd)
void var_28
sub_140d3a3a0(&var_28, *(arg3 + 0xc0))
arg2[4].b &= 0xfc
char var_18 = 1
void** const var_38 = &data_143050f78
void*** rax_6 = sub_140a82f30(0x28, 8)
char rcx_1 = arg2[4].b
void*** rdx_1 = rax_6
*arg2 = rax_6
rcx_1 |= 1
arg2[4].b = rcx_1

if ((rcx_1 & 2) != 0)
    rdx_1 = arg2

*(rdx_1 + 8) = rax.o
rdx_1[3] = rbx
rdx_1[4].d = var_18.d
*rdx_1 = &data_143050f78
return arg2

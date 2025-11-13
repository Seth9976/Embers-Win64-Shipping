// 函数: sub_1420eb500
// 地址: 0x1420eb500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140d3a3a0(&var_18, arg2)
int64_t rdi_1 = sx.q(*(arg1 + 0x268))
int32_t rax = (rdi_1 + 1).d
*(arg1 + 0x268) = rax

if (rax s> *(arg1 + 0x26c))
    sub_14083a7e0(arg1 + 0x260)

int64_t rax_1 = *(arg1 + 0x260)
int64_t rcx_2 = rdi_1 * 3
*(rax_1 + (rcx_2 << 2)) = var_18
*(rax_1 + (rcx_2 << 2) + 8) = arg3
return arg3

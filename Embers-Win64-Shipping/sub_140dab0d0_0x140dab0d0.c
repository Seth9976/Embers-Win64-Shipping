// 函数: sub_140dab0d0
// 地址: 0x140dab0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140dab140(&var_18)
int16_t* rdx_2 = zx.q(arg2) * 0x30 + var_18
*arg1 = *rdx_2
*(arg1 + 8) = *(rdx_2 + 8)
void* rax_2 = *(rdx_2 + 0x10)
*(arg1 + 0x10) = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

*(arg1 + 0x18) = *(rdx_2 + 0x18)
*(arg1 + 0x20) = *(rdx_2 + 0x20)
return arg1

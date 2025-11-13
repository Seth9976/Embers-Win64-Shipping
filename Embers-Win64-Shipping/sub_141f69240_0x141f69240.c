// 函数: sub_141f69240
// 地址: 0x141f69240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x428)
uint128_t* rcx_2

if (rax s<= 0)
    rcx_2 = &data_143f3bba0
else
    int32_t rax_1
    
    if (*(arg1 + 0x4e1) == 0 || arg3 s< rax)
        rax_1 = rax - 1
    
    if ((*(arg1 + 0x4e1) != 0 && arg3 s>= rax) || arg3 s< 0)
        rax_1 = 0
    else if (arg3 s< rax_1)
        rax_1 = arg3
    
    rcx_2 = sx.q(rax_1) * 0x50 + *(arg1 + 0x420)

sub_141f68bf0(arg1, arg2, *rcx_2, arg4, arg5)
return arg2

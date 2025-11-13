// 函数: sub_141f654e0
// 地址: 0x141f654e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x428)
float (* rcx_2)[0x4]

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

sub_141f652d0(arg1, arg2, *rcx_2, arg4)
return arg2

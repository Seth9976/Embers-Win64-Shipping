// 函数: sub_142b77000
// 地址: 0x142b77000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s<= 0)
    if (arg3 != 0)
        *arg3 = 0
        arg3[1].w = 0
        arg3[5].w = 0
    
    arg5 = sub_142a48100(arg1 + 0x10, arg2)
    *(arg1 + 0x7c) = 0
    *(arg1 + 0x7e) = 0
    *(arg1 + 0x60) = 0
    *(arg1 + 0x78) = 0

sub_142b76b60(arg1, 3, 0, 0, arg5, arg3, arg4)
int64_t* rax = *(arg1 + 0x50)

if (rax != 0)
    *(arg1 + 0x58) = *rax

int64_t* rax_2 = *(arg1 + 0x68)

if (rax_2 != 0)
    *(arg1 + 0x70) = *rax_2

return arg1

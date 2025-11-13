// 函数: sub_140387a90
// 地址: 0x140387a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 1)
    char rax_1 = *arg1
    
    if (rax_1 u< 0xfc)
        *arg3 = zx.w(rax_1)
        return 1
    
    if (arg2 s>= 2)
        *arg3 = (zx.w(arg1[1]) << 2) + zx.w(rax_1)
        return 2

*arg3 = 0xffff
return 0xffffffff

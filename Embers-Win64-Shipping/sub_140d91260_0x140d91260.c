// 函数: sub_140d91260
// 地址: 0x140d91260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
*(arg1 + 8) = 0
arg1[4] = 0

if (arg3 != &arg1[2] && arg3[1].d != 0)
    int64_t* rcx = *arg3
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx)

*(arg1 + 0x18) = arg4.q
arg1[8].b = 0
sub_140745b20(arg3)
return arg1

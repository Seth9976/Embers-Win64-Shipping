// 函数: sub_1423a4c80
// 地址: 0x1423a4c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0

if (arg2 != arg1 && arg2[1].d != 0)
    int64_t* rcx = *arg2
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, arg1)

arg1[2] = 0
arg1[3] = -1
return arg1

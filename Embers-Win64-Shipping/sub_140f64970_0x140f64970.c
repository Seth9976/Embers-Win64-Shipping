// 函数: sub_140f64970
// 地址: 0x140f64970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
__builtin_memset(arg2, 0, 0x20)
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = 0
arg1[5].d = 0

if (&arg2[4] != &arg1[4] && arg2[5].d != 0)
    int64_t* rcx_1 = arg2[4]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1)

arg1[6].b = arg2[6].b
return arg1

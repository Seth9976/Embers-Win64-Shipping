// 函数: sub_140f4f880
// 地址: 0x140f4f880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[1].d != 0)
    int64_t* rcx = *arg3
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg3[1].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *arg3
        
        (*(*rcx_1 + 0x50))(rcx_1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
sub_140745b20(arg3)
return arg2

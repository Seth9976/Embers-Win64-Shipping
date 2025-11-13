// 函数: sub_140f062b0
// 地址: 0x140f062b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x5c0) != 0)
    int64_t* rcx = *(arg1 + 0x5b8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x5c0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x5b8)
        
        (*(*rcx_1 + 0x50))(rcx_1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2

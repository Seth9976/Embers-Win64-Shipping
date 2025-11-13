// 函数: sub_140f00af0
// 地址: 0x140f00af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x628) != 0)
    int64_t* rcx = *(arg1 + 0x620)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x628) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x620)
        
        int128_t var_18
        (*(*rcx_1 + 0x48))(rcx_1, &var_18)
        *(arg1 + 0x608) = var_18

*arg2 = *(arg1 + 0x608)
return arg2

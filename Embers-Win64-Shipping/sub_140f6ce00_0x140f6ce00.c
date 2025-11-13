// 函数: sub_140f6ce00
// 地址: 0x140f6ce00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3e0) != 0)
    int64_t* rcx = *(arg1 + 0x3d8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x3e0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x3d8)
        
        int64_t arg_8
        (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
        *(arg1 + 0x3c8) = arg_8

*arg2 = *(arg1 + 0x3c8)
return arg2

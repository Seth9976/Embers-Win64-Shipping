// 函数: sub_140f034f0
// 地址: 0x140f034f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x658) != 0)
    int64_t* rcx = *(arg1 + 0x650)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x658) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x650)
        
        int128_t var_18
        (*(*rcx_1 + 0x48))(rcx_1, &var_18)
        *(arg1 + 0x638) = var_18

*arg2 = *(arg1 + 0x638)
arg2[1].b = 0
*(arg2 + 0x18) = 0
arg2[2].q = 0
return arg2

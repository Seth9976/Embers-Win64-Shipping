// 函数: sub_141b9eb50
// 地址: 0x141b9eb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[2].d != 0)
    int64_t* rcx = *(arg3 + 0x18)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg3[2].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg3 + 0x18)
        
        int128_t var_18
        (*(*rcx_1 + 0x48))(rcx_1, &var_18)
        *arg3 = var_18

*arg2 = *arg3
arg2[1].b = 0
*(arg2 + 0x18) = 0
arg2[2].q = 0
sub_140745b20(arg3 + 0x18)
return arg2

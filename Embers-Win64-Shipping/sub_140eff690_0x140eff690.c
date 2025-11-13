// 函数: sub_140eff690
// 地址: 0x140eff690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2].d != 0)
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[2].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x18)
        
        int128_t var_18
        (*(*rcx_1 + 0x48))(rcx_1, &var_18)
        *arg1 = var_18

return arg1

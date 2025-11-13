// 函数: sub_141baf030
// 地址: 0x141baf030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x68)

if (rbx == 0)
    *arg2 = *(arg1 + 0x38)
    return arg2

if (*(rbx + 0x40) != 0)
    int64_t* rcx = *(rbx + 0x38)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0x40) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0x38)
        
        int128_t var_18
        (*(*rcx_1 + 0x48))(rcx_1, &var_18)
        *(rbx + 0x20) = var_18

*arg2 = *(rbx + 0x20)
return arg2

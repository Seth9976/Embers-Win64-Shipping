// 函数: sub_141baa3d0
// 地址: 0x141baa3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x68)

if (rbx == 0)
    *arg2 = *(arg1 + 0x58)
    return arg2

if (*(rbx + 0x88) != 0)
    int64_t* rcx = *(rbx + 0x80)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0x88) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0x80)
        
        int64_t arg_8
        (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
        *(rbx + 0x70) = arg_8

*arg2 = *(rbx + 0x70)
return arg2

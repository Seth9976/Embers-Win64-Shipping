// 函数: sub_141baac80
// 地址: 0x141baac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x68)

if (rbx == 0)
    return zx.q(*(arg1 + 0x60))

if (*(rbx + 0xa0) != 0)
    int64_t* rcx = *(rbx + 0x98)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0xa0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0x98)
        
        *(rbx + 0x90) = (*(*rcx_1 + 0x48))(rcx_1)

return zx.q(*(rbx + 0x90))

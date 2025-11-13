// 函数: sub_141baa360
// 地址: 0x141baa360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x128)

if (rbx == 0)
    return zx.q(*(arg1 + 0x120))

if (*(rbx + 0x2b8) != 0)
    int64_t* rcx = *(rbx + 0x2b0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0x2b8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0x2b0)
        
        *(rbx + 0x2a8) = (*(*rcx_1 + 0x48))(rcx_1)

return zx.q(*(rbx + 0x2a8))

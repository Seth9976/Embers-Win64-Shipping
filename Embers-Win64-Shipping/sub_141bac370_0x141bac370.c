// 函数: sub_141bac370
// 地址: 0x141bac370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x508)

if (rbx == 0)
    return *(arg1 + 0x41c)

if (*(rbx + 0x460) != 0)
    int64_t* rcx = *(rbx + 0x458)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0x460) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0x458)
        
        (*(*rcx_1 + 0x48))(rcx_1)
        *(rbx + 0x450) = arg2

return *(rbx + 0x450)

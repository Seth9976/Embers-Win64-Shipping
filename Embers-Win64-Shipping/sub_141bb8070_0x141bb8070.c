// 函数: sub_141bb8070
// 地址: 0x141bb8070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x760)

if (rbx == 0)
    return *(arg1 + 0x120) == 1

if (*(rbx + 0x3b0) != 0)
    int64_t* rcx = *(rbx + 0x3a8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0x3b0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0x3a8)
        
        *(rbx + 0x3a0) = (*(*rcx_1 + 0x48))(rcx_1)

return *(rbx + 0x3a0) == 1

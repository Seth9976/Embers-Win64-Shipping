// 函数: sub_140ec2420
// 地址: 0x140ec2420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x28) & 1) == 0)
    if (*(arg1 + 0x5c8) != 0)
        int64_t* rcx = *(arg1 + 0x5c0)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x5c8) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x5c0)
            
            *(arg1 + 0x5b8) = (*(*rcx_1 + 0x48))(rcx_1)
    
    if (*(arg1 + 0x5b8) == 0)
        return 0

return 1

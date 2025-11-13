// 函数: sub_140edb400
// 地址: 0x140edb400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = *arg2
*(arg1 + 0x24) = arg2[1].b

if (&arg2[2] != arg1 + 0x28)
    if (arg2[4] != 0)
        int64_t* rcx_1 = *(arg2 + 8)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1, arg1 + 0x28)
            return arg1
    
    if (*(arg1 + 0x30) != 0)
        int64_t* rcx_2 = *(arg1 + 0x28)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = *(arg1 + 0x28)
            
            if (rcx_3 != 0)
                *(arg1 + 0x28) = sub_140a84c80(rcx_3, 0, 0)
            
            *(arg1 + 0x30) = 0

return arg1

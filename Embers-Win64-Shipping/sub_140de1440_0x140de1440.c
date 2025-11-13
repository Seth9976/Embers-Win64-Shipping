// 函数: sub_140de1440
// 地址: 0x140de1440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]

if (&arg2[8] != &arg1[8])
    if (*(arg2 + 0x10) != 0)
        int64_t* rcx_1 = *(arg2 + 8)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1, &arg1[8])
            return arg1
    
    if (*(arg1 + 0x10) != 0)
        int64_t* rcx_2 = *(arg1 + 8)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = *(arg1 + 8)
            
            if (rcx_3 != 0)
                *(arg1 + 8) = sub_140a84c80(rcx_3, 0, 0)
            
            *(arg1 + 0x10) = 0

return arg1

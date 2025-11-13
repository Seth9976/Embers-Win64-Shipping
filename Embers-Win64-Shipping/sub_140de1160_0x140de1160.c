// 函数: sub_140de1160
// 地址: 0x140de1160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1)
    if (*(arg1 + 0x18) != 0)
        *(arg1 + 0x18) = 0
    
    if (*(arg2 + 0x18) != 0)
        *arg1 = *arg2
        arg1[1].q = arg2[1].q
        *(arg1 + 0x18) = 1

*(arg1 + 0x1c) = *(arg2 + 0x1c)

if (&arg2[2] != &arg1[2])
    if (*(arg2 + 0x28) != 0)
        int64_t* rcx = arg2[2].q
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx, &arg1[2])
            return arg1
    
    if (*(arg1 + 0x28) != 0)
        int64_t* rcx_1 = arg1[2].q
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = arg1[2].q
            
            if (rcx_2 != 0)
                arg1[2].q = sub_140a84c80(rcx_2, 0, 0)
            
            *(arg1 + 0x28) = 0

return arg1

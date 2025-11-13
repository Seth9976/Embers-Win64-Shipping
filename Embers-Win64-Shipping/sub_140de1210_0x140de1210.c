// 函数: sub_140de1210
// 地址: 0x140de1210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1)
    if (arg1[1].b != 0)
        arg1[1].b = 0
    
    if (arg2[1].b != 0)
        *arg1 = *arg2
        arg1[1].b = 1

arg1[2].b = arg2[2].b

if (&arg2[4] != &arg1[4])
    if (arg2[6] != 0)
        int64_t* rcx = *(arg2 + 0x10)
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx, &arg1[4])
            return arg1
    
    if (arg1[6] != 0)
        int64_t* rcx_1 = *(arg1 + 0x10)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *(arg1 + 0x10)
            
            if (rcx_2 != 0)
                *(arg1 + 0x10) = sub_140a84c80(rcx_2, 0, 0)
            
            arg1[6] = 0

return arg1

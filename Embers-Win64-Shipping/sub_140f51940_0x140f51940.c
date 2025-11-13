// 函数: sub_140f51940
// 地址: 0x140f51940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x339) = 1
char result = sub_140f5bee0(arg1)

if (arg1[0x63].d != 0)
    int64_t* rcx = arg1[0x62]
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result != 0)
            int64_t* rcx_1
            
            if (arg1[0x63].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x62]
            
            result = (*(*rcx_1 + 0x48))(rcx_1, 0)

int64_t* rbx_1 = *(arg2 + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result

// 函数: sub_140f0bde0
// 地址: 0x140f0bde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e29f28

if ((*(*rcx + 0xa0))(rcx, arg4) != 0)
    *arg2 = 0
else
    sub_140f19af0(arg1)
    
    if (*(arg1 + 0x3b0) != 0)
        int64_t* rcx_2 = *(arg1 + 0x3a8)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (*(arg1 + 0x3b0) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(arg1 + 0x3a8)
            
            *(arg1 + 0x3a0) = (*(*rcx_3 + 0x48))(rcx_3)
    
    char rax_6 = *(arg1 + 0x3a0)
    
    if (rax_6 == 1)
        sub_140e78f50(data_143e29f28, arg1 + 0x4f8, 0)
    else if (rax_6 == 0)
        sub_140e78f50(data_143e29f28, arg1 + 0x510, 0)
    
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2

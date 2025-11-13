// 函数: sub_141f876a0
// 地址: 0x141f876a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + *(arg1 + 0x10))
        
        if ((*(*rcx + 0x40))(rcx, arg2, arg3, arg4) != 0)
            return 1
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x18))

return 0

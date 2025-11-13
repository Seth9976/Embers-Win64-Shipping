// 函数: sub_141f0e570
// 地址: 0x141f0e570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141ede5c0(arg1)

if ((*(arg1 + 0x20c) & 1) != 0)
    void* rdi_1 = arg1[0x15]
    
    if (rdi_1 == 0)
        rdi_1 = sub_141ee69e0(arg1)
    
    result = sub_141f4ac00(arg1)
    
    if (result != 0)
        result = sub_141f4ac80(arg1)
        
        if (result != 0 && not(0f f>= *(arg1 + 0x204)))
            sub_141f1dd40(arg1)
            int64_t* rcx_4 = *(rdi_1 + 0x1b0)
            result = (*(*rcx_4 + 0x50))(rcx_4, arg1)
            arg1[0x63].d |= 1

return result

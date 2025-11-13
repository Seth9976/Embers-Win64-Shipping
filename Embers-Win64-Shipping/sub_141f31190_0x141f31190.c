// 函数: sub_141f31190
// 地址: 0x141f31190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x280) s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t* rcx = *(*(*(arg1 + 0x278) + rdi_1) + 8)
        
        if (rcx != 0)
            (*(*rcx + 0x10))(rcx, arg2)
        
        i += 1
        rdi_1 += 8
    while (i s< *(arg1 + 0x280))

return sub_140594850() __tailcall

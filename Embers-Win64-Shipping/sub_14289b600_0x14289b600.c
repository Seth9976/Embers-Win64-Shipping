// 函数: sub_14289b600
// 地址: 0x14289b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return 0

if (*(arg1 + 0x24) != 0 && *(arg1 + 0x20) != 0)
    int64_t* rdi_1 = *(arg1 + 0x38)
    
    if (rdi_1 != 0)
        void* rcx = *rdi_1
        
        if ((*(arg1 + 0x28) & 0x200) != 0)
            *(rcx + 8) = 0
        
        sub_1428a71f0(rcx)
        
        if (arg2 != 0)
            sub_1428a6780(rdi_1[1])
            sub_1428a6780(rdi_1)
        
        *(arg1 + 0x38) = 0

return 1

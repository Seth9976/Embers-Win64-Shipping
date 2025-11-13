// 函数: sub_1428ad590
// 地址: 0x1428ad590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
sub_1428a6780(*(arg1 + 0x48))
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x60) = 0

if (arg2 != 0 && arg3 != 0)
    int64_t rax_1 = sub_1428a6af0(arg2, arg3, "crypto\ct\ct_sct.c", 0xb9)
    *(arg1 + 0x48) = rax_1
    
    if (rax_1 == 0)
        sub_1428a5670((rax_1 + 0x32).d, (rax_1 + 0x74).d, (rax_1 + 0x41).d, "crypto\ct\ct_sct.c", 
            0xbb)
        return 0
    
    *(arg1 + 0x50) = arg3

return 1

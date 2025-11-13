// 函数: sub_1429521c0
// 地址: 0x1429521c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
sub_1428cc600(*(arg1 + 0x78))
int64_t* rcx_1 = *(arg1 + 0x80)
*(arg1 + 0x78) = 0
sub_14288fbf0(rcx_1)
*(arg1 + 0x80) = 0

if (sub_14296f470(arg1, arg2) != 0)
    if (*(arg2 + 0x78) == 0)
    label_142952236:
        int64_t* rcx_4 = *(arg2 + 0x80)
        int64_t* rax_3
        
        if (rcx_4 != 0)
            rax_3 = sub_1428900c0(rcx_4)
            *(arg1 + 0x80) = rax_3
        
        if (rcx_4 == 0 || rax_3 != 0)
            return 1
        
        sub_1428cc600(*(arg1 + 0x78))
        *(arg1 + 0x78) = 0
    else
        int32_t* rax_1 = sub_1428cc660()
        *(arg1 + 0x78) = rax_1
        
        if (rax_1 != 0)
            if (sub_1428cc570(rax_1, *(arg2 + 0x78)) != 0)
                goto label_142952236
            
            sub_1428cc600(*(arg1 + 0x78))
            *(arg1 + 0x78) = 0

return 0

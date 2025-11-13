// 函数: sub_14290a3c0
// 地址: 0x14290a3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = arg3

if (arg3 == 0xffffffff)
    rsi.b = *(arg2 + 0x40) != 0

if (sub_14290a340(arg1 + 8, *(arg2 + 8)) != 0 && sub_14290a340(arg1 + 0x10, *(arg2 + 0x10)) != 0)
    if (rsi == 0)
        *(arg1 + 0x18) = *(arg2 + 0x18)
        return 1
    
    if (sub_14290a340(arg1 + 0x40, *(arg2 + 0x40)) != 0
            && sub_14290a340(arg1 + 0x48, *(arg2 + 0x48)) != 0)
        sub_1428a6780(*(arg1 + 0x50))
        *(arg1 + 0x50) = 0
        *(arg1 + 0x58) = 0
        int64_t rcx_5 = *(arg2 + 0x50)
        
        if (rcx_5 == 0)
            return 1
        
        int64_t rax_4 = sub_1428a6af0(rcx_5, sx.q(*(arg2 + 0x58)), "crypto\dh\dh_ameth.c", 0x19b)
        *(arg1 + 0x50) = rax_4
        
        if (rax_4 != 0)
            *(arg1 + 0x58) = *(arg2 + 0x58)
            return 1

return 0

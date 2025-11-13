// 函数: sub_1429364a0
// 地址: 0x1429364a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 != 0)
    int64_t rax_1 = sx.q(*arg2)
    
    if (rax_1.d != 0)
        int64_t result = sub_1428a6730(rax_1 + 1)
        
        if (result == 0)
            sub_1428a5670((result + 0x22).d, 0x95, (result + 0x41).d, "crypto\x509v3\v3_ia5.c", 
                0x23)
            return 0
        
        memcpy(result, *(arg2 + 8), *arg2)
        *(sx.q(*arg2) + result) = 0
        return result

return 0

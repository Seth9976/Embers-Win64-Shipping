// 函数: sub_1428c0db0
// 地址: 0x1428c0db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx != 0)
        int64_t* rax_1 = *(arg1 + 0x20)
        
        if (rax_1 != 0)
        label_1428c0e10:
            
            if (sub_142919d30(*(arg1 + 0x18), rax_1, arg2, arg3, arg4) != 0)
                if ((***(arg1 + 0x18) & 2) == 0)
                    *(arg1 + 0x34) = zx.d(*arg2) & 0xfffffffe
                
                return 1
        else
            rax_1 = sub_1428bfa80(rcx)
            *(arg1 + 0x20) = rax_1
            
            if (rax_1 != 0)
                goto label_1428c0e10

return 0

// 函数: sub_14288cec0
// 地址: 0x14288cec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg3 != 0x4000)
    if (*(arg1 + 0x718) == 0)
        if (sub_142855f40(*(arg1 + 0x488) + 0x1e8, not.d(arg3 u>> 7) & 2, 0x12, nullptr) == 0)
            sub_142856580(arg1, 0x6e, 0x234, 0x6e, "ssl\statem\extensions_clnt.c", 0x5ea)
            return 0
        
        if (sub_142856000(arg1, arg3, 0x12, *arg2, arg2[1], arg4, arg5) == 0)
            return 0
    else
        uint64_t rsi_1 = arg2[1]
        sub_1428a6780(*(arg1 + 0x640))
        *(arg1 + 0x640) = 0
        arg1[0x192].w = rsi_1.w
        
        if (rsi_1 != 0)
            int64_t rax_1 = sub_1428a6730(rsi_1)
            *(arg1 + 0x640) = rax_1
            int32_t rax_2
            
            if (rax_1 != 0)
                rax_2 = sub_1428672d0(arg2, rax_1, rsi_1)
            
            if (rax_1 == 0 || rax_2 == 0)
                sub_142856580(arg1, 0x50, 0x234, 0x44, "ssl\statem\extensions_clnt.c", 0x5da)
                return 0

return 1

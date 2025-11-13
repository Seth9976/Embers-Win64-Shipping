// 函数: sub_14287be50
// 地址: 0x14287be50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_142879cf0(arg1) != 0)
    if (*(arg1 + 0x638) == 0xffffffff)
    label_14287bef5:
        int32_t rax_4
        
        if (*(arg1 + 0x718) != 0)
            rax_4 = sub_142852820(arg1)
        
        if (*(arg1 + 0x718) == 0 || rax_4 != 0 || (*(arg1 + 0x558) & 1) == 0)
            return 1
    else
        void* rdx_1 = *(arg1 + 0x598)
        int64_t rax_1 = *(rdx_1 + 0x220)
        
        if (rax_1 == 0)
            goto label_14287bef5
        
        int32_t rax_2 = rax_1(arg1, *(rdx_1 + 0x228))
        
        if (rax_2 != 0)
            if (rax_2 s>= 0)
                goto label_14287bef5
            
            char const* const var_18_2 = "ssl\statem\statem_clnt.c"
            sub_142856580(arg1, 0x50, 0x1ba, 0x41, "ssl\statem\statem_clnt.c", 0xb0e)
        else
            char const* const var_18_1 = "ssl\statem\statem_clnt.c"
            sub_142856580(arg1, 0x71, 0x1ba, 0x148, "ssl\statem\statem_clnt.c", 0xb08)

return 0

// 函数: sub_142878550
// 地址: 0x142878550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*(arg1 + 0x98) = 0
int32_t rax_13

switch (*(arg1 + 0x5c) - 0xc)
    case 0
        if (*(arg1 + 0x84) != 2 || *(arg1 + 0x16e0) u<= 0)
            if (sub_142856dc0(arg1) == 0)
                return 3
        else if ((*(arg1 + 0x5c4) & 0x100000) == 0)
            int32_t result = sub_1428618c0(arg1, 0x52)
            
            if (result == 0)
                return result
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
            *(arg1 + 0x5e0) = 1
    case 2
        void* rax_6 = *(arg1 + 0xa8)
        int64_t rdi_1 = *(rax_6 + 0x2b8)
        uint64_t rsi_1 = *(rax_6 + 0x2c0)
        char rcx_4 = (*(*(rax_6 + 0x238) + 0x1c)).b
        
        if ((rcx_4 & 0x20) == 0)
            if (rdi_1 == 0 && (rcx_4 & 8) == 0)
                sub_142856580(arg1, (rdi_1 + 0x50).d, 0x162, (rdi_1 + 0x41).d, 
                    "ssl\statem\statem_clnt.c", 0xd31)
            label_1428786cf:
                sub_1428a6890(rdi_1, rsi_1, "ssl\statem\statem_clnt.c", 0xd5a)
                *(*(arg1 + 0xa8) + 0x2b8) = 0
                return 0
            
            if (sub_142872ab0(arg1, rdi_1, rsi_1, 1) == 0)
                rdi_1 = 0
                rsi_1 = 0
                goto label_1428786cf
        else if (sub_142855390(arg1) == 0)
            goto label_1428786cf
    case 4
        int32_t* rcx_9 = *(arg1 + 8)
        int32_t rax_12
        
        if ((*(*(rcx_9 + 0xc0) + 0x60) & 8) == 0)
            rax_12 = *rcx_9
        
        if (((*(*(rcx_9 + 0xc0) + 0x60) & 8) != 0 || rax_12 s< 0x304 || rax_12 == 0x10000)
                && *(arg1 + 0x4d8) != 1)
            if (*(arg1 + 0x84) == 2 && *(arg1 + 0x16e0) u> 0)
                rax_13 = sub_1428618c0(arg1, 0x52)
                goto label_142878884
            
            *(*(arg1 + 0x508) + 0x128) = *(*(arg1 + 0xa8) + 0x238)
            int32_t* rdx_6 = *(*(arg1 + 0xa8) + 0x298)
            
            if (rdx_6 != 0)
                *(*(arg1 + 0x508) + 0x120) = *rdx_6
            else
                *(*(arg1 + 0x508) + 0x120) = 0
            
            int64_t rdx_7 = *(*(arg1 + 8) + 0xc0)
            
            if ((*(rdx_7 + 0x10))(arg1, rdx_7) == 0)
                return 0
            
            int64_t r8_2 = *(*(arg1 + 8) + 0xc0)
            
            if ((*(r8_2 + 0x20))(arg1, 0x12, r8_2) == 0)
                return 0
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                sub_14286f430(arg1, 2)
    case 6
        if (sub_142856dc0(arg1) != 1)
            return 4
        
        int32_t* rcx_18 = *(arg1 + 8)
        
        if ((*(*(rcx_18 + 0xc0) + 0x60) & 8) == 0)
            int32_t rax_26 = *rcx_18
            
            if (rax_26 s>= 0x304 && rax_26 != 0x10000)
                if (sub_14285f910(arg1) == 0)
                    return 0
                
                if (*(arg1 + 0x758) != 4)
                    int64_t r8_3 = *(*(arg1 + 8) + 0xc0)
                    rax_13 = (*(r8_3 + 0x20))(arg1, 0x112, r8_3)
                    goto label_142878884
    case 0x1f
        if (sub_142856dc0(arg1) != 1)
            return 3
        
        rax_13 = sub_142862cb0(arg1, 1)
    label_142878884:
        
        if (rax_13 == 0)
            return 0
    case 0x24
        sub_1428921c0(*(arg1 + 0x460))
        *(arg1 + 0x460) = 0

return 2

// 函数: sub_14285e820
// 地址: 0x14285e820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg3 != 0)
    int64_t* rbp_1 = *arg3
    
    if (rbp_1 != 0)
        int32_t* rsi_1 = arg3[2]
        
        if (rsi_1 == 0)
            rsi_1 = *(*(arg1 + 0x598) + 0xf8)
        
        if ((arg1[0x172].b & 8) != 0 || rsi_1 != 0)
        label_14285e9bb:
            int32_t rax_12 = sub_1428637b0(arg1, rsi_1, rbp_1, 0)
            
            if (rax_12 != 1)
                sub_142856580(arg1, 0x50, 0x13c, rax_12, "ssl\statem\statem_lib.c", 0x3cd)
                return 0
            
            if (sub_14285ea50(arg1, arg2, rbp_1, 0) == 0)
                return 0
            
            int32_t rbx_4 = 0
            
            if (sub_142898c70(rsi_1) s> 0)
                while (true)
                    int64_t rax_15 = sub_142898ea0(rsi_1, rbx_4)
                    rbx_4 += 1
                    
                    if (sub_14285ea50(arg1, arg2, rax_15, rbx_4) == 0)
                        return 0
                    
                    if (rbx_4 s>= sub_142898c70(rsi_1))
                        return 1
        else
            void* rbx_1 = *(*(arg1 + 0x488) + 0x1d8)
            
            if (rbx_1 == 0)
                rbx_1 = *(*(arg1 + 0x598) + 0x20)
                
                if (rbx_1 == 0)
                    goto label_14285e9bb
            
            int64_t* rax_4 = sub_14289e400()
            int32_t var_20_1
            int32_t r9_1
            
            if (rax_4 == 0)
                var_20_1 = 0x3a0
                r9_1 = (rax_4 + 0x41).d
            label_14285e8c9:
                sub_142856580(arg1, 0x50, 0x13c, r9_1, "ssl\statem\statem_lib.c", var_20_1)
                return 0
            
            if (sub_14289e160(rax_4, rbx_1, rbp_1, 0) == 0)
                sub_14289e0e0(rax_4)
                r9_1 = 0xb
                var_20_1 = 0x3a6
                goto label_14285e8c9
            
            sub_14289e8e0(rax_4)
            sub_1428a49e0()
            int32_t* rax_6 = sub_14067b2f0(rax_4)
            int32_t rax_7 = sub_1428637b0(arg1, rax_6, nullptr, 0)
            
            if (rax_7 != 1)
                sub_14289e0e0(rax_4)
                r9_1 = rax_7
                var_20_1 = 0x3bc
                goto label_14285e8c9
            
            int32_t rax_8 = sub_142898c70(rax_6)
            int32_t rbx_3 = 0
            
            if (rax_8 s> 0)
                do
                    if (sub_14285ea50(arg1, arg2, sub_142898ea0(rax_6, rbx_3), rbx_3) == 0)
                        sub_14289e0e0(rax_4)
                        return 0
                    
                    rbx_3 += 1
                while (rbx_3 s< rax_8)
            
            sub_14289e0e0(rax_4)

return 1

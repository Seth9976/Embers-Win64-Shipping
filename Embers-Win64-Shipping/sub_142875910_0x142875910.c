// 函数: sub_142875910
// 地址: 0x142875910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rbp = 0
int32_t var_38 = 0

if (sub_142873e80(arg2, 2) != 0)
    int32_t rax_1
    
    if ((arg3 & 0x180) != 0)
        rax_1 = sub_142873d50(arg2, 2)
    
    if ((arg3 & 0x180) == 0 || rax_1 != 0)
        int32_t r15_1 = arg3 & 0x80
        
        if (r15_1 != 0)
            void var_34
            int32_t rax_2 = sub_14285f240(arg1, &var_34, &var_38, nullptr)
            
            if (rax_2 != 0)
                sub_142856580(arg1, 0x50, 0x1bf, rax_2, "ssl\statem\extensions.c", 0x330)
                return 0
            
            sub_142855fc0(*(arg1 + 0x488) + 0x1e8)
        
        if (sub_142855ca0(arg1, arg3, arg2, arg4, arg5, var_38) != 0)
            void** const rdi_1 = &data_1434e7200
            
            while (true)
                int32_t rsi_1 = *(rdi_1 - 0x1c)
                
                if ((arg3 & rsi_1) != 0 && sub_142875330(arg1, rsi_1, arg3) != 0)
                    if ((rsi_1.b & 0x20) == 0 || r15_1 == 0)
                    label_142875a63:
                        void* rax_8
                        
                        if (arg1[0xe] == 0)
                            rax_8 = rdi_1[1]
                        else
                            rax_8 = *rdi_1
                        
                        if (rax_8 != 0)
                            int32_t rax_9 = rax_8(arg1, arg2, zx.q(arg3), arg4, arg5)
                            
                            if (rax_9 == 0)
                                break
                            
                            if (rax_9 == 1 && (arg3 & 0x6080) != 0)
                                *(arg1 + rbp + 0x600) |= 2
                    else if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0 && var_38 s>= 0x304)
                        goto label_142875a63
                
                rbp += 1
                rdi_1 = &rdi_1[7]
                
                if (rbp u>= 0x1a)
                    int32_t rax_10 = sub_1428736e0(arg2)
                    
                    if (rax_10 != 0)
                        return 1
                    
                    sub_142856580(arg1, rax_10 + 0x50, 0x1bf, rax_10 + 0x44, 
                        "ssl\statem\extensions.c", 0x35c)
                    break
        
        return 0

sub_142856580(arg1, 0x50, 0x1bf, 0x44, "ssl\statem\extensions.c", 0x328)
return 0

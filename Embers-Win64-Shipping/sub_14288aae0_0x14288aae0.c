// 函数: sub_14288aae0
// 地址: 0x14288aae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
int64_t var_48 = 0
int32_t r14 = 0
int64_t var_40 = 0
int64_t r13 = 0
int64_t arg_8 = 0
int64_t rbp = 0
int32_t* r12 = nullptr
int32_t* r15 = nullptr
int32_t rsi = 0
*(*(arg1 + 0x508) + 0x198) = 0xffffffff
int32_t* rax_1 = *(arg1 + 0x508)

if (*rax_1 == 0x304 && (*(rax_1 + 0x188) != 0 || *(arg1 + 0x510) != 0))
    if (*(arg1 + 0x4d8) == 1)
        rbp = sub_14285b130(arg1)
        rax_1 = *(arg1 + 0x508)
    
    void* rax_9
    
    if (*(rax_1 + 0x188) != 0)
        void* rcx = *(rax_1 + 0x128)
        int32_t var_70_1
        
        if (rcx == 0)
            var_70_1 = 0x3f8
        label_14288aba2:
            sub_142856580(arg1, 0x50, 0x1f5, 0x44, "ssl\statem\extensions_clnt.c", var_70_1)
            return 0
        
        int32_t* rax_3 = sub_14285b4c0((*(rcx + 0x40)).b)
        r12 = rax_3
        
        if (rax_3 == 0 || (*(arg1 + 0x4d8) == 1 && rax_3 != rbp))
            goto label_14288ac52
        
        int32_t rax_4 = _time64(nullptr)
        void* r8_1 = *(arg1 + 0x508)
        int32_t rax_5 = rax_4 - *(r8_1 + 0x11c)
        int32_t rcx_3 = rax_5 - 1
        
        if (rax_4 == *(r8_1 + 0x11c))
            rcx_3 = rax_5
        
        if (*(r8_1 + 0x190) u< rcx_3)
            goto label_14288ac52
        
        r14 = rcx_3 * 0x3e8
        int32_t temp2_1
        int32_t temp3_1
        
        if (rcx_3 != 0)
            temp2_1:temp3_1 = mulu.dp.d(0x10624dd3, r14)
        
        if (rcx_3 != 0 && temp2_1 u>> 6 != rcx_3)
            goto label_14288ac52
        
        r14 += *(r8_1 + 0x194)
        rsi = 1
        arg_8 = sx.q(sub_1428916c0(r12))
        rax_9 = *(arg1 + 0x510)
    label_14288ac65:
        
        if (rax_9 != 0)
            int32_t* rax_11 = sub_14285b4c0((*(*(rax_9 + 0x128) + 0x40)).b)
            r15 = rax_11
            
            if (rax_11 == 0)
                sub_142856580(arg1, 0x50, 0x1f5, 0xdb, "ssl\statem\extensions_clnt.c", 0x44a)
                return 0
            
            if (*(arg1 + 0x4d8) == 1 && rax_11 != rbp)
                sub_142856580(arg1, 0x50, 0x1f5, 0xdb, "ssl\statem\extensions_clnt.c", 0x454)
                return 0
            
            r13 = sx.q(sub_1428916c0(rax_11))
        
        if (sub_142873b60(arg2, 0x29, 2) != 0 && sub_142873e80(arg2, 2) != 0
                && sub_142873e80(arg2, 2) != 0)
            int32_t rax_16
            int32_t rax_17
            
            if (rsi != 0)
                void* rdx_2 = *(arg1 + 0x508)
                rax_16 = sub_142874080(arg2, *(rdx_2 + 0x180), *(rdx_2 + 0x188), 2)
                
                if (rax_16 != 0)
                    rax_17 = sub_142873b60(arg2, r14, 4)
            
            if (rsi != 0 && (rax_16 == 0 || rax_17 == 0))
                var_70_1 = 0x469
                goto label_14288aba2
            
            int32_t rax_18
            int32_t rax_19
            
            if (*(arg1 + 0x510) != 0)
                rax_18 = sub_142874080(arg2, *(arg1 + 0x518), *(arg1 + 0x520), 2)
                
                if (rax_18 != 0)
                    rax_19 = sub_142873b60(arg2, 0, 4)
            
            if (*(arg1 + 0x510) != 0 && (rax_18 == 0 || rax_19 == 0))
                var_70_1 = 0x473
                goto label_14288aba2
            
            int64_t var_38
            
            if (sub_1428736e0(arg2) != 0 && sub_142873850(arg2, &var_38) != 0
                    && sub_142873e80(arg2, 2) != 0)
                int32_t rax_23
                
                if (rsi != 0)
                    rax_23 = sub_142873ff0(arg2, arg_8, &var_48, 1)
                
                if (rsi == 0 || rax_23 != 0)
                    int32_t rax_24
                    
                    if (*(arg1 + 0x510) != 0)
                        rax_24 = sub_142873ff0(arg2, r13, &var_40, 1)
                    
                    int64_t var_30
                    
                    if ((*(arg1 + 0x510) == 0 || rax_24 != 0) && sub_1428736e0(arg2) != 0
                            && sub_1428736e0(arg2) != 0 && sub_142873850(arg2, &var_30) != 0
                            && sub_142873710(arg2) != 0)
                        int64_t rdi_2 = sub_142873800(arg2) - var_30
                        int32_t var_70
                        int32_t rax_32
                        
                        if (rsi != 0)
                            var_70.q = var_48
                            rax_32, arg4 = sub_142875de0(arg1, r12, rdi_2, var_38, arg4, arg3, 
                                nullptr, var_70, *(arg1 + 0x508), 1, 0)
                        
                        if (rsi == 0 || rax_32 == 1)
                            void* rax_33 = *(arg1 + 0x510)
                            int32_t rax_35
                            
                            if (rax_33 != 0)
                                var_70.q = var_40
                                rax_35 = sub_142875de0(arg1, r15, rdi_2, var_38, arg4, arg3, 
                                    nullptr, var_70, rax_33, 1, 1)
                            
                            if (rax_33 == 0 || rax_35 == 1)
                                if (rsi != 0)
                                    *(*(arg1 + 0x508) + 0x198) = 0
                                
                                void* rcx_27 = *(arg1 + 0x510)
                                
                                if (rcx_27 != 0)
                                    *(rcx_27 + 0x198) = rsi
                                
                                return 1
                        
                        return 0
            
            var_70_1 = 0x488
            goto label_14288aba2
        
        var_70_1 = 0x460
        goto label_14288aba2
    
label_14288ac52:
    rax_9 = *(arg1 + 0x510)
    
    if (rax_9 != 0)
        goto label_14288ac65

return 2

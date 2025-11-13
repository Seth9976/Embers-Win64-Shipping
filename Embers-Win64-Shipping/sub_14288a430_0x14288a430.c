// 函数: sub_14288a430
// 地址: 0x14288a430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t var_30 = 0
int64_t var_28 = 0
int32_t var_40_1
int32_t r9_1

if (sub_142873b60(arg2, 0x33, 2) == 0)
    var_40_1 = 0x290
    r9_1 = 0x44
else if (sub_142873e80(arg2, 2) == 0)
    var_40_1 = 0x290
    r9_1 = 0x44
else
    int32_t rax_2
    int512_t zmm0_1
    rax_2, zmm0_1 = sub_142873e80(arg2, 2)
    
    if (rax_2 == 0)
        var_40_1 = 0x290
        r9_1 = 0x44
    else
        sub_142865410(arg1, &var_28, &var_30)
        int16_t rbx_1 = *(*(arg1 + 0xa8) + 0x406)
        
        if (rbx_1 != 0)
        label_14288a542:
            void* rax_8 = *(arg1 + 0xa8)
            int64_t var_38 = 0
            void* rsi = *(rax_8 + 0x240)
            
            if (rsi == 0)
                void* rax_10
                rax_10, zmm0_1 = sub_142872e60(arg1, rbx_1)
                rsi = rax_10
                
                if (rax_10 != 0)
                label_14288a5d3:
                    int64_t rax_11 = sub_142896830(rsi, &var_38, zmm0_1)
                    int32_t rax_12
                    int32_t r9_2
                    
                    if (rax_11 != 0)
                        int32_t rax_13 = sub_142873b60(arg2, zx.d(rbx_1), 2)
                        int32_t rax_14
                        
                        if (rax_13 != 0)
                            rax_14 = sub_142874080(arg2, var_38, rax_11, 2)
                        
                        if (rax_13 == 0 || rax_14 == 0)
                            rax_12 = 0x26a
                            r9_2 = 0x44
                            goto label_14288a6c3
                        
                        *(*(arg1 + 0xa8) + 0x240) = rsi
                        *(*(arg1 + 0xa8) + 0x406) = rbx_1
                        sub_1428a6780(var_38)
                        
                        if (sub_1428736e0(arg2) != 0 && sub_1428736e0(arg2) != 0)
                            return 1
                        
                        char const* const var_48_2 = "ssl\statem\extensions_clnt.c"
                        sub_142856580(arg1, 0x50, 0x1d6, 0x44, "ssl\statem\extensions_clnt.c", 
                            0x2b4)
                    else
                        rax_12 = 0x262
                        r9_2 = (rax_11 + 0x10).d
                    label_14288a6c3:
                        sub_142856580(arg1, 0x50, 0x200, r9_2, "ssl\statem\extensions_clnt.c", 
                            rax_12)
                        
                        if (*(*(arg1 + 0xa8) + 0x240) == 0)
                            sub_1428965a0(rsi)
                        
                        sub_1428a6780(var_38)
            else
                if (*(arg1 + 0x4d8) == 1)
                    goto label_14288a5d3
                
                char const* const var_48_1 = "ssl\statem\extensions_clnt.c"
                sub_142856580(arg1, 0x50, 0x200, 0x44, "ssl\statem\extensions_clnt.c", 0x24f)
            
            return 0
        
        int64_t rbx_2 = 0
        
        if (var_30 u> 0)
            while (sub_142866c60(arg1, *(var_28 + (rbx_2 << 1)), 0x20004) == 0)
                rbx_2 += 1
                
                if (rbx_2 u>= var_30)
                    goto label_14288a4f5
            
            rbx_1 = *(var_28 + (rbx_2 << 1))
            
            if (rbx_1 == 0)
                goto label_14288a4f5
            
            goto label_14288a542
        
    label_14288a4f5:
        var_40_1 = 0x2a9
        r9_1 = 0x65

sub_142856580(arg1, 0x50, 0x1d6, r9_1, "ssl\statem\extensions_clnt.c", var_40_1)
return 0

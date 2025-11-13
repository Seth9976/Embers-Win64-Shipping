// 函数: sub_1428893f0
// 地址: 0x1428893f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int128_t zmm6
int128_t var_28 = zmm6

if (*(arg1 + 0xc8) == 0 && arg4 == 0)
    if (arg2[1] == arg4)
        sub_142856580(arg1, 0x32, 0x241, 0x6e, "ssl\statem\extensions_srvr.c", 0x156)
        return 0
    
    *(arg1 + 0x638) = zx.d(**arg2)
    *arg2 += 1
    arg2[1] -= 1
    
    if (*(arg1 + 0x638) == 1)
        int32_t var_50_1
        int128_t var_38
        int32_t rdx_2
        int32_t r9
        
        if (sub_1428673b0(arg2, &var_38) == 0)
            var_50_1 = 0x164
        label_142889497:
            rdx_2 = 0x32
            r9 = 0x6e
        label_1428894b5:
            sub_142856580(arg1, rdx_2, 0x241, r9, "ssl\statem\extensions_srvr.c", var_50_1)
            return 0
        
        sub_142898cb0(*(arg1 + 0x650), sub_1428af320)
        int64_t var_30
        int64_t rdi_1 = var_30
        
        if (rdi_1 == 0)
            *(arg1 + 0x650) = 0
        else
            void* rax_4 = sub_142898ba0()
            *(arg1 + 0x650) = rax_4
            
            if (rax_4 == 0)
                var_50_1 = 0x171
                rdx_2 = (rax_4 + 0x50).d
                r9 = (rax_4 + 0x41).d
                goto label_1428894b5
        
        void* arg_8
        
        if (rdi_1 != 0)
            zmm6 = var_38
            
            while (true)
                if (rdi_1 u>= 2)
                    char* rcx_3 = var_38.q
                    int128_t var_48_1
                    var_48_1:8.q = zmm6:8.q - 2
                    uint64_t rdi_3 = zx.q(rcx_3[1]) | zx.q(*rcx_3) << 8
                    var_48_1.q = &rcx_3[2]
                    
                    if (zmm6:8.q - 2 u>= rdi_3)
                        int64_t rsi_3 = zmm6:8.q - 2 - rdi_3
                        var_48_1.q = &rcx_3[2 + rdi_3]
                        var_48_1:8.q = rsi_3
                        zmm6 = var_48_1
                        var_38 = zmm6
                        
                        if (rdi_3 != 0)
                            arg_8 = &rcx_3[2]
                            int64_t rax_8 = sub_1428af370(nullptr, &arg_8, rdi_3.d)
                            
                            if (rax_8 == 0)
                                var_50_1 = 0x18a
                                goto label_142889497
                            
                            if (arg_8 != &rcx_3[2 + rdi_3])
                                sub_1428af320(rax_8)
                                var_50_1 = 0x191
                                goto label_142889497
                            
                            if (sub_142898d50(*(arg1 + 0x650), rax_8) == 0)
                                sub_1428af320(rax_8)
                                rdx_2 = 0x50
                                var_50_1 = 0x199
                                r9 = 0x44
                                goto label_1428894b5
                            
                            if (rsi_3 == 0)
                                break
                            
                            rdi_1 = var_30
                            continue
                
                var_50_1 = 0x180
                goto label_142889497
        
        if (sub_1428780e0(arg2, &var_38) == 0)
            var_50_1 = 0x1a2
            goto label_142889497
        
        if (var_30 != 0)
            void* rsi_4 = var_38.q
            int32_t* rcx_9 = *(arg1 + 0x658)
            arg_8 = rsi_4
            sub_142898cb0(rcx_9, sub_1428ac670)
            int64_t rax_11 = sub_1428ac690(nullptr, &arg_8, var_30.d)
            *(arg1 + 0x658) = rax_11
            
            if (rax_11 == 0 || arg_8 != rsi_4 + var_30)
                var_50_1 = 0x1af
                goto label_142889497
    else
        *(arg1 + 0x638) = 0xffffffff

return 1

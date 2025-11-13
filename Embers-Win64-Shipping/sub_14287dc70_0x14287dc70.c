// 函数: sub_14287dc70
// 地址: 0x14287dc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rcx = arg2[1]

if (rcx != 0)
    char* rax_1 = *arg2
    char rdx = *rax_1
    *arg2 = &rax_1[1]
    arg2[1] = rcx - 1
    
    if (rcx - 1 u>= 2)
        char r8 = rax_1[1]
        char r9 = rax_1[2]
        *arg2 = &rax_1[3]
        arg2[1] = rcx - 3
        int32_t rax_6
        uint16_t rsi_1
        
        if (rdx == 3)
            rsi_1 = zx.w(r8) << 8 | zx.w(r9)
            rax_6 = sub_142864e30(arg1, rsi_1, 1)
        
        int32_t var_20_1
        int32_t rdx_2
        int32_t r9_1
        
        if (rdx != 3 || rax_6 == 0)
            var_20_1 = 0x8ab
            r9_1 = 0x17a
            rdx_2 = 0x2f
        else
            int64_t* rax_7 = sub_142872ce0(rsi_1)
            *(*(arg1 + 0xa8) + 0x408) = rax_7
            
            if (rax_7 != 0)
                void* var_18
                int32_t rax_8 = sub_142867330(arg2, &var_18)
                
                if (rax_8 != 0)
                    int64_t var_10
                    
                    if (sub_142896c60(*(*(arg1 + 0xa8) + 0x408), var_18, var_10) != 0)
                        char rax_11 = (*(*(*(arg1 + 0xa8) + 0x238) + 0x20)).b
                        
                        if ((rax_11 & 8) != 0 || (rax_11 & 1) != 0)
                            *arg3 = sub_1428a38c0(*(*(arg1 + 0x508) + 0xf8))
                        
                        return 1
                    
                    var_20_1 = 0x8bf
                    r9_1 = 0x132
                    rdx_2 = 0x2f
                else
                    rdx_2 = rax_8 + 0x32
                    var_20_1 = 0x8b7
                    r9_1 = rdx_2 + 0x6d
            else
                var_20_1 = 0x8b1
                rdx_2 = (&rax_7[0xa]).d
                r9_1 = 0x13a
        
        sub_142856580(arg1, rdx_2, 0x1a4, r9_1, "ssl\statem\statem_clnt.c", var_20_1)
        return 0

sub_142856580(arg1, 0x32, 0x1a4, 0xa0, "ssl\statem\statem_clnt.c", 0x8a1)
return 0

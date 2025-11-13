// 函数: sub_14286d710
// 地址: 0x14286d710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t rsi = *(*(*(arg1 + 0xa8) + 0x238) + 0x1c)
int32_t rax_1

if ((rsi & 0x1c8) != 0)
    rax_1 = sub_14286c090(arg1, arg2)

if ((rsi & 0x1c8) == 0 || rax_1 != 0)
    int32_t rax_2
    
    if ((rsi.b & 8) != 0)
        if (*(arg2 + 8) == 0)
            rax_2 = sub_142872ab0(arg1, 0, 0, 0)
            goto label_14286da9b
        
        sub_142856580(arg1, 0x32, 0x17e, 0x9f, "ssl\statem\statem_srvr.c", 0xd6d)
    else
        bool cond:2_1
        
        if ((rsi.b & 0x41) == 0)
            if ((rsi & 0x102) != 0)
                rax_2 = sub_14286bbb0(arg1, arg2)
                goto label_14286da9b
            
            if ((rsi.b & 0x84) != 0)
                int32_t* rsi_1 = nullptr
                int64_t rdx_3 = *(arg2 + 8)
                int32_t r14_1 = 0
                int32_t* r12_1 = *(*(arg1 + 0xa8) + 0x240)
                
                if (rdx_3 != 0)
                    char* rax_4 = *arg2
                    uint64_t rcx_4 = zx.q(*rax_4)
                    *arg2 = &rax_4[1]
                    *(arg2 + 8) = rdx_3 - 1
                    
                    if (rdx_3 - 1 u>= rcx_4)
                        *arg2 = &rax_4[1 + rcx_4]
                        *(arg2 + 8) = rdx_3 - 1 - rcx_4
                    
                    if (rdx_3 - 1 u< rcx_4 || rdx_3 - 1 != rcx_4)
                        sub_142856580(arg1, 0x32, 0x19c, 0x9f, "ssl\statem\statem_srvr.c", 0xc96)
                    else
                        int32_t* rax_6 = sub_1428968f0()
                        rsi_1 = rax_6
                        int32_t rax_7
                        
                        if (rax_6 != 0)
                            rax_7 = sub_142896470(rax_6, r12_1)
                        
                        if (rax_6 == 0 || rax_7 s<= 0)
                            sub_142856580(arg1, 0x50, 0x19c, 6, "ssl\statem\statem_srvr.c", 0xc9c)
                        else
                            int32_t rax_8 = sub_142896c60(rsi_1, &rax_4[1], zx.q(rcx_4.d))
                            
                            if (rax_8 != 0)
                                if (sub_142872740(arg1, r12_1, rsi_1, 1) != 0)
                                    r14_1 = 1
                                    sub_1428965a0(*(*(arg1 + 0xa8) + 0x240))
                                    *(*(arg1 + 0xa8) + 0x240) = 0
                            else
                                sub_142856580(arg1, rax_8 + 0x50, 0x19c, rax_8 + 0x10, 
                                    "ssl\statem\statem_srvr.c", 0xca1)
                else
                    sub_142856580(arg1, 0x28, 0x19c, 0x137, "ssl\statem\statem_srvr.c", 0xc87)
                
                sub_1428965a0(rsi_1)
                cond:2_1 = r14_1 == 0
                goto label_14286da9d
            
            if ((rsi.b & 0x20) == 0)
                if ((rsi.b & 0x10) != 0)
                    rax_2 = sub_14286bdd0(arg1, arg2)
                    goto label_14286da9b
                
                sub_142856580(arg1, 0x50, 0x17e, 0xf9, "ssl\statem\statem_srvr.c", 0xd91)
            else
                int64_t r8_3 = *(arg2 + 8)
                char* rcx_11
                uint64_t rdx_12
                uint64_t r9_3
                
                if (r8_3 u>= 2)
                    rcx_11 = *arg2
                    rdx_12 = zx.q(zx.d(*rcx_11) << 8) | zx.q(rcx_11[1])
                    *arg2 = &rcx_11[2]
                    r9_3 = zx.q(rdx_12.d)
                    *(arg2 + 8) = r8_3 - 2
                
                if (r8_3 u< 2 || r8_3 - 2 u< r9_3)
                    sub_142856580(arg1, 0x32, 0x1a0, 0x15b, "ssl\statem\statem_srvr.c", 0xcc3)
                else
                    *(arg2 + 8) = r8_3 - 2 - r9_3
                    *arg2 = &rcx_11[2 + rdx_12]
                    int64_t* rax_13 = sub_14288fa60(&rcx_11[2], rdx_12.d, nullptr)
                    *(arg1 + 0x7c8) = rax_13
                    
                    if (rax_13 != 0)
                        int32_t rax_14 = sub_1428909a0(rax_13, *(arg1 + 0x7a8))
                        int32_t rax_15
                        
                        if (rax_14 s< 0)
                            rax_15 = sub_142890300(*(arg1 + 0x7c8))
                        
                        if (rax_14 s>= 0 || rax_15 != 0)
                            sub_142856580(arg1, 0x2f, 0x1a0, 0x173, "ssl\statem\statem_srvr.c", 
                                0xccd)
                        else
                            sub_1428a6780(*(*(arg1 + 0x508) + 0x1b8))
                            *(*(arg1 + 0x508) + 0x1b8) = sub_1428a6ba0(*(arg1 + 0x7a0))
                            
                            if (*(*(arg1 + 0x508) + 0x1b8) != 0)
                                if (sub_1428555d0(arg1) != 0)
                                    return 2
                            else
                                sub_142856580(arg1, 0x50, 0x1a0, 0x41, "ssl\statem\statem_srvr.c", 
                                    0xcd4)
                    else
                        sub_142856580(arg1, (&rax_13[0xa]).d, 0x1a0, (rax_13 + 3).d, 
                            "ssl\statem\statem_srvr.c", 0xcc8)
        else
            rax_2 = sub_14286c2f0(arg1, arg2)
        label_14286da9b:
            cond:2_1 = rax_2 == 0
        label_14286da9d:
            
            if (not(cond:2_1))
                return 2

void* rcx_19 = *(arg1 + 0xa8)
sub_1428a6890(*(rcx_19 + 0x2c8), *(rcx_19 + 0x2d0), "ssl\statem\statem_srvr.c", 0xd98)
*(*(arg1 + 0xa8) + 0x2c8) = 0
return 0

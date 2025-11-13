// 函数: sub_142854f70
// 地址: 0x142854f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    void* rdi_1 = *(arg1 + 0x598)
    
    if (rdi_1 != 0)
        memset(arg1 + 0x780, 0, 0x78)
        *(arg1 + 0x780) = *(rdi_1 + 0x2d8)
        *(arg1 + 0x788) = *(rdi_1 + 0x2e0)
        *(arg1 + 0x790) = *(rdi_1 + 0x2e8)
        *(arg1 + 0x798) = *(rdi_1 + 0x2f0)
        *(arg1 + 0x7f0) = *(rdi_1 + 0x348)
        int64_t* rcx_1 = *(rdi_1 + 0x300)
        int64_t* rax_5
        
        if (rcx_1 != 0)
            rax_5 = sub_1428900c0(rcx_1)
            *(arg1 + 0x7a8) = rax_5
        
        int32_t rax_14
        int32_t r8_1
        
        if (rcx_1 != 0 && rax_5 == 0)
            rax_14 = 0x62
            r8_1 = 3
        else
            int64_t* rcx_2 = *(rdi_1 + 0x308)
            int64_t* rax_6
            
            if (rcx_2 != 0)
                rax_6 = sub_1428900c0(rcx_2)
                *(arg1 + 0x7b0) = rax_6
            
            if (rcx_2 != 0 && rax_6 == 0)
                rax_14 = 0x62
                r8_1 = 3
            else
                int64_t* rcx_3 = *(rdi_1 + 0x310)
                int64_t* rax_7
                
                if (rcx_3 != 0)
                    rax_7 = sub_1428900c0(rcx_3)
                    *(arg1 + 0x7b8) = rax_7
                
                if (rcx_3 != 0 && rax_7 == 0)
                    rax_14 = 0x62
                    r8_1 = 3
                else
                    int64_t* rcx_4 = *(rdi_1 + 0x318)
                    int64_t* rax_8
                    
                    if (rcx_4 != 0)
                        rax_8 = sub_1428900c0(rcx_4)
                        *(arg1 + 0x7c0) = rax_8
                    
                    if (rcx_4 != 0 && rax_8 == 0)
                        rax_14 = 0x62
                        r8_1 = 3
                    else
                        int64_t* rcx_5 = *(rdi_1 + 0x320)
                        int64_t* rax_9
                        
                        if (rcx_5 != 0)
                            rax_9 = sub_1428900c0(rcx_5)
                            *(arg1 + 0x7c8) = rax_9
                        
                        if (rcx_5 != 0 && rax_9 == 0)
                            rax_14 = 0x62
                            r8_1 = 3
                        else
                            int64_t* rcx_6 = *(rdi_1 + 0x328)
                            int64_t* rax_10
                            
                            if (rcx_6 != 0)
                                rax_10 = sub_1428900c0(rcx_6)
                                *(arg1 + 0x7d0) = rax_10
                            
                            if (rcx_6 != 0 && rax_10 == 0)
                                rax_14 = 0x62
                                r8_1 = 3
                            else
                                int64_t* rcx_7 = *(rdi_1 + 0x338)
                                int64_t* rax_11
                                
                                if (rcx_7 != 0)
                                    rax_11 = sub_1428900c0(rcx_7)
                                    *(arg1 + 0x7e0) = rax_11
                                
                                if (rcx_7 != 0 && rax_11 == 0)
                                    rax_14 = 0x62
                                    r8_1 = 3
                                else
                                    int64_t* rcx_8 = *(rdi_1 + 0x330)
                                    int64_t* rax_12
                                    
                                    if (rcx_8 != 0)
                                        rax_12 = sub_1428900c0(rcx_8)
                                        *(arg1 + 0x7d8) = rax_12
                                    
                                    if (rcx_8 == 0 || rax_12 != 0)
                                        char* rcx_9 = *(rdi_1 + 0x2f8)
                                        int64_t rax_13
                                        
                                        if (rcx_9 != 0)
                                            rax_13 = sub_1428a6ba0(rcx_9)
                                            *(arg1 + 0x7a0) = rax_13
                                        
                                        if (rcx_9 == 0 || rax_13 != 0)
                                            char* rcx_10 = *(rdi_1 + 0x340)
                                            int64_t rax_15
                                            
                                            if (rcx_10 != 0)
                                                rax_15 = sub_1428a6ba0(rcx_10)
                                                *(arg1 + 0x7e8) = rax_15
                                            
                                            if (rcx_10 == 0 || rax_15 != 0)
                                                *(arg1 + 0x7f4) = *(rdi_1 + 0x34c)
                                                return 1
                                            
                                            rax_14 = 0x6c
                                        else
                                            rax_14 = 0x67
                                        
                                        r8_1 = 0x44
                                    else
                                        rax_14 = 0x62
                                        r8_1 = 3
        
        sub_1428a5670(0x14, 0x139, r8_1, "ssl\tls_srp.c", rax_14)
        sub_1428a6780(*(arg1 + 0x7a0))
        sub_1428a6780(*(arg1 + 0x7e8))
        sub_1428901a0(*(arg1 + 0x7a8))
        sub_1428901a0(*(arg1 + 0x7b0))
        sub_1428901a0(*(arg1 + 0x7b8))
        sub_1428901a0(*(arg1 + 0x7c0))
        sub_1428901a0(*(arg1 + 0x7c8))
        sub_1428901a0(*(arg1 + 0x7d0))
        sub_1428901a0(*(arg1 + 0x7d8))
        sub_1428901a0(*(arg1 + 0x7e0))
        memset(arg1 + 0x780, 0, 0x78)

return 0

// 函数: sub_14286d130
// 地址: 0x14286d130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t* rsi = nullptr

if (arg1[0x1d4] != 0)
    goto label_14286d21d

void* rcx = *(arg1 + 0xa8)

if (*(rcx + 0x198) == 0 || *(rcx + 0x220) == 0)
    goto label_14286d21d

int32_t* rdx = *(arg1 + 8)
int32_t rax_2

if ((*(*(rdx + 0xc0) + 0x60) & 8) == 0)
    rax_2 = *rdx

if ((*(*(rdx + 0xc0) + 0x60) & 8) != 0 || rax_2 s< 0x304 || rax_2 == 0x10000)
    int32_t rax_3 = arg1[0x171]
    
    if (test_bit(rax_3, 0x1e) || (*(rcx + 0x3d8) == 0 && not(test_bit(rax_3, 0x12))))
        sub_1428732d0(arg1, 1, 0x64)
        return 1
    
    arg1[0x1d4] = 1
    arg1[0xf] = 1
label_14286d21d:
    int32_t* rax_4 = sub_1428a6a70(0x290)
    rsi = rax_4
    
    if (rax_4 != 0)
        int32_t rax_5 = sub_14285b7a0(&arg1[0x200])
        *rsi = rax_5
        void* var_48 = nullptr
        int64_t var_40_1 = 0
        
        if (rax_5 == 0)
        label_14286d2dd:
            
            if (*(arg2 + 8) u< 2)
                sub_142856580(arg1, 0x32, 0x17d, 0xa0, "ssl\statem\statem_srvr.c", 0x598)
            else
                uint32_t rdx_5 = zx.d(**arg2) << 8
                rsi[1] = rdx_5
                rsi[1] = zx.d(*(*arg2 + 1)) | rdx_5
                *arg2 += 2
                *(arg2 + 8) -= 2
                char* rcx_7 = *arg2
                int64_t rdx_6 = *(arg2 + 8)
                void* rdx_12
                int64_t r8_8
                void* r14_4
                
                if (*rsi == 0)
                    if (sub_1428672d0(arg2, &rsi[2], 0x20) == 0)
                        goto label_14286d4d5
                    
                    void* var_38
                    
                    if (sub_142867330(arg2, &var_38) == 0)
                        goto label_14286d4d5
                    
                    int64_t var_30
                    
                    if (var_30 u<= 0x20)
                        void* rdx_15 = var_38
                        *(rsi + 0x28) = var_30
                        memcpy(&rsi[0xc], rdx_15, var_30.d)
                        
                        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                        label_14286d58b:
                            
                            if (sub_1428673b0(arg2, &rsi[0x56]) != 0)
                                if (sub_142867330(arg2, &var_38) != 0)
                                    r14_4 = &rsi[0x9c]
                                    
                                    if (*(arg2 + 8) != 0)
                                        if (sub_1428673b0(arg2, r14_4) != 0 && *(arg2 + 8) == 0)
                                            goto label_14286d5fe
                                        
                                        sub_142856580(arg1, 0x32, 0x17d, 0x9f, 
                                            "ssl\statem\statem_srvr.c", 0x60a)
                                    else
                                        *r14_4 = 0
                                        *(r14_4 + 8) = 0
                                    label_14286d5fe:
                                        r8_8 = var_30
                                        
                                        if (r8_8 u<= 0xff)
                                            rdx_12 = var_38
                                        label_14286d635:
                                            *(rsi + 0x168) = r8_8
                                            memcpy(&rsi[0x5c], rdx_12, r8_8.d)
                                            int128_t var_28 = *r14_4
                                            
                                            if (sub_142875450(arg1, &var_28, 0x80, &rsi[0xa2], 
                                                    &rsi[0xa0], 1) != 0)
                                                *(arg1 + 0x708) = rsi
                                                return 2
                                        else
                                            *(rsi + 0x168) = 0
                                            sub_142856580(arg1, 0x50, 0x17d, 0x44, 
                                                "ssl\statem\statem_srvr.c", 0x614)
                                else
                                    sub_142856580(arg1, 0x32, 0x17d, 0x9f, 
                                        "ssl\statem\statem_srvr.c", 0x5ff)
                            else
                                sub_142856580(arg1, 0x32, 0x17d, 0x9f, "ssl\statem\statem_srvr.c", 
                                    0x5f9)
                        else if (sub_142867330(arg2, &var_48) != 0)
                            if (var_40_1 u<= 0x100)
                                void* rdx_17 = var_48
                                *(rsi + 0x50) = var_40_1
                                memcpy(&rsi[0x16], rdx_17, var_40_1.d)
                                
                                if (not(test_bit(sub_14284fc20(arg1), 0xd)) || *(rsi + 0x50) != 0)
                                    goto label_14286d58b
                                
                                return 1
                            
                            *(rsi + 0x50) = 0
                            sub_142856580(arg1, 0x50, 0x17d, 0x44, "ssl\statem\statem_srvr.c", 
                                0x5e9)
                        else
                            sub_142856580(arg1, 0x32, 0x17d, 0x9f, "ssl\statem\statem_srvr.c", 
                                0x5e2)
                    else
                        *(rsi + 0x28) = 0
                    label_14286d4d5:
                        sub_142856580(arg1, 0x32, 0x17d, 0x9f, "ssl\statem\statem_srvr.c", 0x5db)
                else if (rdx_6 u< 2)
                label_14286d48c:
                    sub_142856580(arg1, 0x32, 0x17d, 0xd5, "ssl\statem\statem_srvr.c", 0x5aa)
                else
                    char r8_2 = *rcx_7
                    char r10_1 = rcx_7[1]
                    *arg2 = &rcx_7[2]
                    *(arg2 + 8) = rdx_6 - 2
                    
                    if (rdx_6 - 2 u< 2)
                        goto label_14286d48c
                    
                    uint32_t r9_3 = zx.d(rcx_7[3]) | zx.d(rcx_7[2]) << 8
                    *arg2 = &rcx_7[4]
                    *(arg2 + 8) = rdx_6 - 4
                    
                    if (rdx_6 - 4 u< 2)
                        goto label_14286d48c
                    
                    uint64_t r14_3 = zx.q(zx.d(rcx_7[4]) << 8) | zx.q(rcx_7[5])
                    *arg2 = &rcx_7[6]
                    *(arg2 + 8) = rdx_6 - 6
                    
                    if (r9_3 u<= 0x20)
                        if (sub_142867430(arg2, &rsi[0x56], zx.q(r8_2) << 8 | zx.q(r10_1)) == 0)
                        label_14286d479:
                            sub_142856580(arg1, 0x32, 0x17d, 0xd5, "ssl\statem\statem_srvr.c", 
                                0x5bb)
                        else
                            if (sub_1428672d0(arg2, &rsi[0xc], zx.q(r9_3)) == 0)
                                goto label_14286d479
                            
                            int64_t rcx_12 = *(arg2 + 8)
                            uint64_t r9_4 = zx.q(r14_3.d)
                            
                            if (rcx_12 u< r9_4)
                                goto label_14286d479
                            
                            int64_t rdx_11 = *arg2
                            *(arg2 + 8) = rcx_12 - r9_4
                            *arg2 = rdx_11 + r14_3
                            
                            if (rcx_12 != r9_4)
                                goto label_14286d479
                            
                            *(rsi + 0x28) = zx.q(r9_3)
                            
                            if (r14_3.d u> 0x20)
                                r14_3 = 0x20
                            
                            __builtin_memset(&rsi[2], 0, 0x20)
                            uint64_t r8_7 = zx.q(r14_3.d)
                            
                            if (r9_4 u>= r8_7)
                                memcpy(rsi - r8_7 + 0x28, rdx_11, r8_7.d)
                                r14_4 = &rsi[0x9c]
                                r8_8 = 1
                                *r14_4 = 0
                                rdx_12 = &data_1434dcd33
                                *(r14_4 + 8) = 0
                                goto label_14286d635
                            
                            sub_142856580(arg1, 0x50, 0x17d, 0x44, "ssl\statem\statem_srvr.c", 
                                0x5ce)
                    else
                        sub_142856580(arg1, 0x2f, 0x17d, 0x9f, "ssl\statem\statem_srvr.c", 0x5b0)
        else
            void* rax_6 = *(arg1 + 0xa8)
            
            if (*(rax_6 + 0x198) == 0)
                if (arg1[0x136] == 0)
                    goto label_14286d2a5
                
                goto label_14286d28d
            
            if (*(rax_6 + 0x220) != 0 || arg1[0x136] != 0)
            label_14286d28d:
                sub_142856580(arg1, 0xa, 0x17d, 0xf4, "ssl\statem\statem_srvr.c", 0x576)
            else
            label_14286d2a5:
                int64_t rdx_3 = *(arg2 + 8)
                char rcx_4
                
                if (rdx_3 != 0)
                    char* rax_7 = *arg2
                    rcx_4 = *rax_7
                    *arg2 = &rax_7[1]
                    *(arg2 + 8) = rdx_3 - 1
                
                if (rdx_3 != 0 && rcx_4 == 1)
                    goto label_14286d2dd
                
                sub_142856580(arg1, 0x50, 0x17d, 0x44, "ssl\statem\statem_srvr.c", 0x591)
        
        sub_1428a6780(*(rsi + 0x288))
    else
        sub_142856580(arg1, 0x50, 0x17d, 0x44, "ssl\statem\statem_srvr.c", 0x566)
else
    sub_142856580(arg1, 0x50, 0x17d, 0x44, "ssl\statem\statem_srvr.c", 0x555)

sub_1428a6780(rsi)
return 0

// 函数: sub_14286a000
// 地址: 0x14286a000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb0)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t var_a8 = 0
int64_t var_a0 = 0
int64_t* rbx = nullptr
uint32_t r13 = 0
void* const r12 = *(*(arg1 + 0xa8) + 0x2d8)
int64_t* rax_3 = sub_142891ee0()
int64_t* var_98 = nullptr
int64_t* rsi = rax_3
int64_t var_80
int64_t result

if (sub_142873850(arg2, &var_80) == 0)
    sub_142856580(arg1, 0x50, 0x1ec, 0x44, "ssl\statem\statem_srvr.c", 0x9ac)
else if (rsi != 0)
    void* rcx_2 = *(arg1 + 0xa8)
    int64_t rsi_1 = 0
    int32_t r15_1 = *(*(rcx_2 + 0x238) + 0x1c)
    int64_t* var_68
    __builtin_memset(&var_68, 0, 0x20)
    
    if ((r15_1.b & 0x48) != 0)
        goto label_14286a2ad
    
    int32_t var_c0_2
    int64_t var_60
    int64_t* var_58
    int32_t r9_2
    
    if ((r15_1 & 0x102) != 0)
        void* rsi_2 = *(arg1 + 0x488)
        int32_t rdx_1
        int64_t* rsi_4
        
        if (*(rsi_2 + 0x18) != 0)
            void* rax_6 = sub_142863520(arg1)
            int64_t* rax_7 = sub_1428968f0()
            rbx = rax_7
            
            if (rax_7 != 0 && rax_6 != 0)
                sub_142896310(rax_7, 0x1c, rax_6)
                rsi_4 = rbx
                goto label_14286a17a
            
            sub_1428c1620(rax_6)
            var_c0_2 = 0x9cc
        label_14286a148:
            r9_2 = 0x44
        label_14286a14e:
            rdx_1 = 0x50
            goto label_14286a153
        
        rsi_4 = *(rsi_2 + 8)
    label_14286a17a:
        
        if (rsi_4 != 0)
            goto label_14286a1d5
        
        int64_t r9_3 = *(*(arg1 + 0x488) + 0x10)
        
        if (r9_3 == 0)
            sub_142856580(arg1, 0x50, 0x1ec, 0xab, "ssl\statem\statem_srvr.c", 0x9e2)
            rsi = rax_3
        else
            int64_t* rax_10 = sub_142872980(r9_3(arg1, 0, 0x400))
            rbx = rax_10
            
            if (rax_10 == 0)
                var_c0_2 = 0x9da
                goto label_14286a148
            
            rsi_4 = rax_10
        label_14286a1d5:
            int32_t rax_12 = sub_1428546e0(arg1, 0x40007, sub_142896b50(rsi_4), 0, rsi_4)
            
            if (rax_12 != 0)
                if (*(*(arg1 + 0xa8) + 0x240) != 0)
                    var_c0_2 = 0x9ef
                    goto label_14286a148
                
                *(*(arg1 + 0xa8) + 0x240) = sub_142872de0(rsi_4)
                int32_t* rcx_13 = *(*(arg1 + 0xa8) + 0x240)
                
                if (rcx_13 != 0)
                    void* rax_16 = sub_142896670(rcx_13)
                    
                    if (rax_16 == 0)
                        var_c0_2 = 0x9fd
                        goto label_14286a148
                    
                    sub_1428965a0(rbx)
                    sub_1428c1720(rax_16, &var_68, nullptr, &var_60)
                    sub_1428c1700(rax_16, &var_58, nullptr)
                    rsi_1 = 0
                    goto label_14286a2ad
                
                rsi = rax_3
            else
                var_c0_2 = 0x9e9
                rdx_1 = rax_12 + 0x28
                r9_2 = 0x18a
            label_14286a153:
                sub_142856580(arg1, rdx_1, 0x1ec, r9_2, "ssl\statem\statem_srvr.c", var_c0_2)
                rsi = rax_3
    else if ((r15_1.b & 0x84) != 0)
        if (*(rcx_2 + 0x240) == 0)
            r13 = zx.d(sub_1428664a0(arg1, 0xfffffffe))
            
            if (r13 != 0)
                void* rax_19
                int512_t zmm0_1
                rax_19, zmm0_1 = sub_142872e60(arg1, r13.w)
                *(*(arg1 + 0xa8) + 0x240) = rax_19
                void* rcx_20 = *(*(arg1 + 0xa8) + 0x240)
                
                if (rcx_20 != 0)
                    int64_t rax_21 = sub_142896830(rcx_20, &var_a8, zmm0_1)
                    var_a0 = rax_21
                    
                    if (rax_21 != 0)
                        goto label_14286a2ad
                    
                    var_c0_2 = 0xa26
                    r9_2 = (rax_21 + 0x10).d
                    goto label_14286a14e
                
                rsi = rax_3
            else
                sub_142856580(arg1, r13 + 0x28, 0x1ec, 0x13b, "ssl\statem\statem_srvr.c", 0xa17)
                rsi = rax_3
        else
            sub_142856580(arg1, 0x50, 0x1ec, 0x44, "ssl\statem\statem_srvr.c", 0xa0e)
            rsi = rax_3
    else
        char const* const var_c8_4
        int32_t var_c0_3
        int32_t r9_4
        
        if ((r15_1.b & 0x20) == 0)
            var_c0_3 = 0xa47
            var_c8_4 = "ssl\statem\statem_srvr.c"
            r9_4 = 0xfa
        label_14286a41b:
            sub_142856580(arg1, 0x50, 0x1ec, r9_4, var_c8_4, var_c0_3)
            rsi = rax_3
        else
            int64_t* rax_22 = *(arg1 + 0x7a8)
            
            if (rax_22 == 0)
            label_14286a403:
                var_c0_3 = 0xa3b
                var_c8_4 = "ssl\statem\statem_srvr.c"
                r9_4 = 0x166
                goto label_14286a41b
            
            int64_t rdx_7 = *(arg1 + 0x7b0)
            
            if (rdx_7 == 0)
                goto label_14286a403
            
            int64_t* r8_3 = *(arg1 + 0x7b8)
            
            if (r8_3 == 0)
                goto label_14286a403
            
            int64_t rcx_21 = *(arg1 + 0x7c0)
            
            if (rcx_21 == 0)
                goto label_14286a403
            
            var_68 = rax_22
            var_60 = rdx_7
            var_58 = r8_3
            int64_t var_50_1 = rcx_21
        label_14286a2ad:
            void* rcx_17 = *(*(arg1 + 0xa8) + 0x238)
            
            if ((*(rcx_17 + 0x20) & 0x44) != 0 || (*(rcx_17 + 0x1c) & 0x1c8) != 0)
                r12 = nullptr
            label_14286a481:
                int32_t rax_24
                uint64_t i_1
                
                if ((r15_1 & 0x1c8) != 0)
                    char* rdx_9 = *(*(arg1 + 0x488) + 0x210)
                    int32_t i = 0
                    
                    if (rdx_9 != 0)
                        char* rcx_25 = rdx_9
                        
                        if (*rdx_9 != 0)
                            while (i u< 0x80000000)
                                rcx_25 = &rcx_25[1]
                                i += 1
                                
                                if (*rcx_25 == 0)
                                    break
                        
                        i &= 0x7fffffff
                    
                    i_1 = zx.q(i)
                    
                    if (i_1 u<= 0x80)
                        rax_24 = sub_142874080(arg2, rdx_9, i_1, 2)
                
                if ((r15_1 & 0x1c8) == 0 || (i_1 u<= 0x80 && rax_24 != 0))
                    while (true)
                        int32_t var_c0_6
                        int64_t var_b0
                        
                        if ((&var_68)[rsi_1] != 0)
                            uint64_t rdx_10
                            
                            if (rsi_1 == 2)
                                rdx_10 = zx.q((rsi_1 - 1).d)
                            
                            if (rsi_1 != 2 || (r15_1.b & 0x20) == 0)
                                rdx_10 = 2
                            
                            if (sub_142873e80(arg2, rdx_10) == 0)
                                var_c0_6 = 0xa76
                                goto label_14286a6c6
                            
                            if (rsi_1 == 2 && (r15_1 & 0x102) != 0)
                                int32_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(sub_142890560(var_68) + 7)
                                int32_t rbx_2 = ((temp2_1 & 7) + temp3_1) s>> 3
                                int32_t temp4_1
                                int32_t temp5_1
                                temp4_1:temp5_1 = sx.q(sub_142890560(var_58) + 7)
                                int32_t rax_33 = (temp5_1 + (temp4_1 & 7)) s>> 3
                                uint64_t count = sx.q(rbx_2 - rax_33)
                                
                                if (rbx_2 != rax_33)
                                    if (sub_142873640(arg2, count, &var_b0) == 0)
                                        var_c0_6 = 0xa87
                                        goto label_14286a6c6
                                    
                                    memset(var_b0, 0, count)
                            
                            int32_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(sub_142890560((&var_68)[rsi_1]) + 7)
                            int32_t rax_40 =
                                sub_142873640(arg2, sx.q((temp1_1 + (temp0_1 & 7)) s>> 3), &var_b0)
                            int32_t rax_41
                            
                            if (rax_40 != 0)
                                rax_41 = sub_1428736e0(arg2)
                            
                            if (rax_40 == 0 || rax_41 == 0)
                                var_c0_6 = 0xa92
                                goto label_14286a6c6
                            
                            sub_14288fba0((&var_68)[rsi_1], var_b0)
                            rsi_1 += 1
                            
                            if (rsi_1 s< 4)
                                continue
                        
                        if ((r15_1.b & 0x84) != 0)
                            if (sub_142873b60(arg2, 3, 1) == 0)
                            label_14286a6d6:
                                var_c0_6 = 0xaa7
                            label_14286a6c6:
                                sub_142856580(arg1, 0x50, 0x1ec, 0x44, "ssl\statem\statem_srvr.c", 
                                    var_c0_6)
                                rsi = rax_3
                                rbx = nullptr
                                break
                            
                            if (sub_142873b60(arg2, 0, 1) == 0)
                                goto label_14286a6d6
                            
                            if (sub_142873b60(arg2, r13, 1) == 0)
                                goto label_14286a6d6
                            
                            if (sub_142874080(arg2, var_a8, var_a0, 1) == 0)
                                goto label_14286a6d6
                            
                            sub_1428a6780(var_a8)
                            var_a8 = 0
                        
                        if (r12 == 0)
                            rsi = rax_3
                        else
                            int32_t* rbx_4 = *(*(*(arg1 + 0xa8) + 0x2e0) + 8)
                            int32_t* var_88
                            int32_t rax_47
                            
                            if (rbx_4 != 0)
                                rax_47 = sub_1428654d0(r12, &var_88)
                            
                            int32_t var_c0_7
                            
                            if (rbx_4 == 0 || rax_47 == 0)
                                var_c0_7 = 0xabb
                            label_14286a751:
                                sub_142856580(arg1, 0x50, 0x1ec, 0x44, "ssl\statem\statem_srvr.c", 
                                    var_c0_7)
                                rsi = rax_3
                                rbx = nullptr
                                break
                            
                            int64_t var_78
                            
                            if (sub_142873820(arg2, &var_78) == 0)
                                var_c0_7 = 0xac2
                                goto label_14286a751
                            
                            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 2) != 0
                                    && sub_142873b60(arg2, zx.d(*(r12 + 8)), 2) == 0)
                                var_c0_7 = 0xac9
                                goto label_14286a751
                            
                            int64_t rdx_26 = sx.q(sub_142896de0(rbx_4))
                            var_b0 = rdx_26
                            int64_t var_90
                            int32_t rax_52 = sub_1428741b0(arg2, rdx_26, &var_90, 2)
                            rsi = rax_3
                            int32_t rax_53
                            
                            if (rax_52 != 0)
                                rax_53 = sub_1428932d0(rsi, &var_98, var_88, nullptr, rbx_4)
                            
                            int32_t var_c0_8
                            int32_t r9_7
                            
                            if (rax_52 == 0 || rax_53 s<= 0)
                                var_c0_8 = 0xad7
                            label_14286a8d4:
                                r9_7 = 0x44
                            label_14286a8ed:
                                sub_142856580(arg1, 0x50, 0x1ec, r9_7, "ssl\statem\statem_srvr.c", 
                                    var_c0_8)
                                rbx = nullptr
                                break
                            
                            int32_t rax_54
                            int32_t rax_55
                            
                            if (*(r12 + 0x14) == 0x390)
                                rax_54 = sub_1428973a0(var_98, 0xffffffff, 0x1001, 6, 0)
                                
                                if (rax_54 s> 0)
                                    rax_55 = sub_1428973a0(var_98, 0x18, 0x1002, 0xffffffff, 0)
                            
                            if (*(r12 + 0x14) == 0x390 && (rax_54 s<= 0 || rax_55 s<= 0))
                                var_c0_8 = 0xadf
                                r9_7 = 6
                                goto label_14286a8ed
                            
                            int64_t rax_57
                            int512_t zmm1_1
                            rax_57, zmm1_1 =
                                sub_14285df40(arg1, &var_a0, var_80 + *(*(arg1 + 0x88) + 8), var_78)
                            rbx = nullptr
                            
                            if (rax_57 == 0)
                                break
                            
                            int64_t var_c8_12 = rax_57
                            int32_t rax_58 =
                                sub_142893060(rsi, var_90, &var_b0, var_a0, zmm1_1, arg3, rax_3)
                            sub_1428a6780(var_a0)
                            int64_t var_70
                            int32_t rax_59
                            
                            if (rax_58 s> 0)
                                rax_59 = sub_142873ff0(arg2, var_b0, &var_70, 2)
                            
                            if (rax_58 s<= 0 || rax_59 == 0 || var_90 != var_70)
                                var_c0_8 = 0xaf0
                                goto label_14286a8d4
                        
                        sub_142891ea0(rsi)
                        result = 1
                        goto label_14286a91f
                else
                    sub_142856580(arg1, 0x50, 0x1ec, 0x44, "ssl\statem\statem_srvr.c", 0xa62)
                    rbx = nullptr
                    rsi = rax_3
            else
                if (r12 != 0)
                    goto label_14286a481
                
                sub_142856580(arg1, (r12 + 0x32).d, 0x1ec, (r12 + 0x44).d, 
                    "ssl\statem\statem_srvr.c", 0xa50)
                rbx = nullptr
                rsi = rax_3
else
    sub_142856580(arg1, 0x50, 0x1ec, (rsi + 0x41).d, "ssl\statem\statem_srvr.c", 0x9b2)

sub_1428965a0(rbx)
sub_1428a6780(var_a8)
sub_142891ea0(rsi)
result = 0
label_14286a91f:
__security_check_cookie(rax_1 ^ &var_e8)
return result

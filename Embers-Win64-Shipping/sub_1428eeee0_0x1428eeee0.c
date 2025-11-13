// 函数: sub_1428eeee0
// 地址: 0x1428eeee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = *(arg1 + 8)
char** result = nullptr
int64_t* arg_18 = nullptr
char** result_2 = nullptr
int64_t* rsi = nullptr
int64_t* r12 = nullptr
int64_t* r13 = nullptr
char** result_1
bool cond:0_1
int32_t r14_1

if (rax == 0 || *rax == 0 || rax[1] == 0)
    sub_1428a5670(0x10, 0x107, 0x73, "crypto\ec\ec_asn1.c", 0x242)
label_1428ef540:
    r14_1 = 0
label_1428ef543:
    result_1 = result_2
    cond:0_1 = r14_1 != 0
    
    if (r14_1 == 0)
        sub_1428be5f0(result_2)
        cond:0_1 = r14_1 != 0
else
    int64_t* rax_1 = *(arg1 + 0x10)
    int32_t var_48_2
    
    if (rax_1 == 0)
    label_1428ef511:
        var_48_2 = 0x24f
    label_1428ef070:
        sub_1428a5670(0x10, 0x107, 0x73, "crypto\ec\ec_asn1.c", var_48_2)
        result_1 = nullptr
        sub_1428be5f0(result_2)
        cond:0_1 = 0 != 0
    else
        int32_t* rdx_1 = *rax_1
        
        if (rdx_1 == 0)
            goto label_1428ef511
        
        char* rcx = *(rdx_1 + 8)
        
        if (rcx == 0)
            goto label_1428ef511
        
        void* r8_1 = rax_1[1]
        
        if (r8_1 == 0 || *(r8_1 + 8) == 0)
            goto label_1428ef511
        
        int64_t* rax_2 = sub_14288fa60(rcx, *rdx_1, nullptr)
        r12 = rax_2
        int32_t var_48_1
        int32_t r8_2
        
        if (rax_2 != 0)
            int32_t* rcx_1 = *(*(arg1 + 0x10) + 8)
            int64_t* rax_4 = sub_14288fa60(*(rcx_1 + 8), *rcx_1, nullptr)
            r13 = rax_4
            
            if (rax_4 == 0)
                var_48_1 = 0x259
                goto label_1428eef8b
            
            int32_t rax_5 = sub_1428a96d0(**(arg1 + 8))
            char** result_3
            int32_t r14_4
            
            if (rax_5 != 0x197)
                if (rax_5 != 0x196)
                    var_48_1 = 0x2d4
                    r8_2 = 0x67
                    goto label_1428eefa2
                
                int32_t* rcx_15 = *(*(arg1 + 8) + 8)
                
                if (rcx_15 == 0)
                    var_48_2 = 0x2bd
                    goto label_1428ef070
                
                int64_t* rax_20 = sub_1428e49a0(rcx_15, nullptr)
                rsi = rax_20
                
                if (rax_20 == 0)
                    var_48_1 = 0x2c2
                    r8_2 = (rax_20 + 0xd).d
                    goto label_1428eefa2
                
                int32_t rax_21 = sub_142890280(rsi)
                int32_t rax_22
                
                if (rax_21 == 0)
                    rax_22 = sub_142890300(rsi)
                
                if (rax_21 != 0 || rax_22 != 0)
                    var_48_1 = 0x2c7
                    r8_2 = 0x67
                    goto label_1428eefa2
                
                int32_t rax_23 = sub_142890560(rsi)
                r14_4 = rax_23
                
                if (rax_23 s> 0x295)
                    var_48_1 = 0x2cd
                    r8_2 = 0x8f
                    goto label_1428eefa2
                
                result_3 = sub_1429195a0(rsi, r12, r13, 0)
            label_1428ef26c:
                result_2 = result_3
                
                if (result_3 == 0)
                    var_48_1 = 0x2d9
                    r8_2 = 0x10
                    goto label_1428eefa2
                
                if (*(*(arg1 + 0x10) + 0x10) == 0)
                    goto label_1428ef328
                
                sub_1428a6780(result_2[6])
                int64_t rax_26 = sub_1428a6730(sx.q(**(*(arg1 + 0x10) + 0x10)))
                result_2[6] = rax_26
                
                if (rax_26 != 0)
                    int32_t* rdx_13 = *(*(arg1 + 0x10) + 0x10)
                    memcpy(rax_26, *(rdx_13 + 8), *rdx_13)
                    result_2[7] = sx.q(**(*(arg1 + 0x10) + 0x10))
                label_1428ef328:
                    void* rax_30
                    
                    if (*(arg1 + 0x20) != 0)
                        rax_30 = *(arg1 + 0x18)
                    
                    int32_t var_48_3
                    int32_t r8_11
                    
                    if (*(arg1 + 0x20) == 0 || rax_30 == 0 || *(rax_30 + 8) == 0)
                        var_48_3 = 0x2ea
                        r8_11 = 0x73
                    label_1428ef3f5:
                        sub_1428a5670(0x10, 0x107, r8_11, "crypto\ec\ec_asn1.c", var_48_3)
                        result_1 = result_2
                        sub_1428be5f0(result_2)
                        cond:0_1 = 0 != 0
                    else
                        int64_t* rax_31 = sub_1428bfa80(result_2)
                        arg_18 = rax_31
                        
                        if (rax_31 == 0)
                            goto label_1428ef540
                        
                        sub_1428bf2f0(result_2, zx.d(**(*(arg1 + 0x18) + 8)) & 0xfffffffe)
                        int32_t* r8_9 = *(arg1 + 0x18)
                        
                        if (sub_142919d30(result_2, rax_31, *(r8_9 + 8), sx.q(*r8_9), 0) != 0)
                            int64_t* rax_33 = sub_1428e49a0(*(arg1 + 0x20), r12)
                            r12 = rax_33
                            
                            if (rax_33 == 0)
                                var_48_3 = 0x2fe
                            label_1428ef3de:
                                r8_11 = 0xd
                                goto label_1428ef3f5
                            
                            int32_t rax_34 = sub_142890280(r12)
                            int32_t rax_35
                            
                            if (rax_34 == 0)
                                rax_35 = sub_142890300(r12)
                            
                            if (rax_34 != 0 || rax_35 != 0)
                                var_48_3 = 0x302
                                r8_11 = 0x7a
                                goto label_1428ef3f5
                            
                            if (sub_142890560(r12) s<= r14_4 + 1)
                                int32_t* rcx_35 = *(arg1 + 0x28)
                                
                                if (rcx_35 != 0)
                                    int64_t* rax_38 = sub_1428e49a0(rcx_35, r13)
                                    r13 = rax_38
                                    
                                    if (rax_38 == 0)
                                        var_48_3 = 0x30f
                                        goto label_1428ef3de
                                else
                                    sub_1428901a0(r13)
                                    r13 = nullptr
                                
                                if (sub_1428bf180(result_2, rax_31, r12, r13) != 0)
                                    r14_1 = 1
                                    goto label_1428ef543
                                
                                var_48_3 = 0x314
                                r8_11 = 0x10
                                goto label_1428ef3f5
                            
                            sub_1428a5670(0x10, 0x107, 0x7a, "crypto\ec\ec_asn1.c", 0x306)
                            result_1 = result_2
                            sub_1428be5f0(result_2)
                            cond:0_1 = 0 != 0
                        else
                            sub_1428a5670(0x10, 0x107, 0x10, "crypto\ec\ec_asn1.c", 0x2f8)
                            result_1 = result_2
                            sub_1428be5f0(result_2)
                            cond:0_1 = 0 != 0
                else
                    sub_1428a5670((rax_26 + 0x10).d, 0x107, (rax_26 + 0x41).d, 
                        "crypto\ec\ec_asn1.c", 0x2e1)
                    result_1 = result_2
                    sub_1428be5f0(result_2)
                    cond:0_1 = 0 != 0
            else
                int32_t* r15_1 = *(*(arg1 + 8) + 8)
                int32_t rax_7 = *r15_1
                
                if (rax_7 s> 0x295)
                    var_48_1 = 0x26d
                    r8_2 = 0x8f
                    goto label_1428eefa2
                
                int64_t* rax_8 = sub_142890500()
                rsi = rax_8
                
                if (rax_8 == 0)
                    var_48_1 = 0x272
                    r8_2 = (rax_8 + 0x41).d
                    goto label_1428eefa2
                
                int32_t rax_9 = sub_1428a96d0(*(r15_1 + 8))
                int32_t rdx_5
                
                if (rax_9 == 0x2aa)
                    int32_t* rcx_6 = *(r15_1 + 0x10)
                    
                    if (rcx_6 == 0)
                        var_48_2 = 0x27d
                        goto label_1428ef070
                    
                    int32_t rax_10 = sub_1428e4860(rcx_6)
                    int32_t rdx_4 = *r15_1
                    
                    if (rdx_4 s<= rax_10 || rax_10 s<= 0)
                        var_48_1 = 0x285
                        r8_2 = 0x89
                        goto label_1428eefa2
                    
                    if (sub_142890810(rsi, rdx_4) == 0)
                        goto label_1428ef540
                    
                    rdx_5 = rax_10
                label_1428ef143:
                    
                    if (sub_142890810(rsi, rdx_5) == 0)
                        goto label_1428ef540
                    
                    if (sub_142890810(rsi, 0) == 0)
                        goto label_1428ef540
                    
                    result_3 = sub_142919510(rsi, r12, r13, 0)
                    r14_4 = rax_7
                    goto label_1428ef26c
                
                if (rax_9 == 0x2ab)
                    int32_t* r14_3 = *(r15_1 + 0x10)
                    
                    if (r14_3 == 0)
                        var_48_2 = 0x295
                        goto label_1428ef070
                    
                    int32_t rdx_6 = *r15_1
                    int32_t rax_12 = r14_3[2]
                    
                    if (rdx_6 s<= rax_12)
                    label_1428ef17d:
                        var_48_1 = 0x29d
                        r8_2 = 0x84
                        goto label_1428eefa2
                    
                    int32_t rcx_8 = r14_3[1]
                    
                    if (rax_12 s<= rcx_8)
                        goto label_1428ef17d
                    
                    int32_t rax_13 = *r14_3
                    
                    if (rcx_8 s<= rax_13 || rax_13 s<= 0)
                        goto label_1428ef17d
                    
                    if (sub_142890810(rsi, rdx_6) == 0)
                        goto label_1428ef540
                    
                    if (sub_142890810(rsi, *r14_3) == 0)
                        goto label_1428ef540
                    
                    if (sub_142890810(rsi, r14_3[1]) == 0)
                        goto label_1428ef540
                    
                    rdx_5 = r14_3[2]
                    goto label_1428ef143
                
                if (rax_9 != 0x2a9)
                    var_48_2 = 0x2b1
                    goto label_1428ef070
                
                sub_1428a5670(0x10, 0x107, 0x7e, "crypto\ec\ec_asn1.c", 0x2ad)
                result_1 = nullptr
                sub_1428be5f0(result_2)
                cond:0_1 = 0 != 0
        else
            var_48_1 = 0x254
        label_1428eef8b:
            r8_2 = 3
        label_1428eefa2:
            sub_1428a5670(0x10, 0x107, r8_2, "crypto\ec\ec_asn1.c", var_48_1)
            result_1 = nullptr
            sub_1428be5f0(result_2)
            cond:0_1 = 0 != 0

if (cond:0_1)
    result = result_1

sub_1428901a0(rsi)
sub_1428901a0(r12)
sub_1428901a0(r13)
sub_1428bf6a0(arg_18)
return result

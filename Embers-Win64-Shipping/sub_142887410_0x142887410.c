// 函数: sub_142887410
// 地址: 0x142887410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x11b0)
void var_11e8
int64_t rax_1 = __security_cookie ^ &var_11e8
int64_t result

if (*(*(arg1 + 0x598) + 0xd8) == 0 || (**(arg1 + 0xa8) & 0x800) == 0)
    result = 1
else
    uint128_t zmm0 = *arg2
    int64_t rcx = _mm_bsrli_si128(zmm0, 8).q
    int32_t var_11c0_1
    
    if (rcx u< 2)
    label_142887be2:
        var_11c0_1 = 0x2ec
    label_142887bea:
        sub_142856580(arg1, 0x32, 0x266, 0x9f, "ssl\statem\extensions_srvr.c", var_11c0_1)
        result = 0
    else
        char* rax_4 = zmm0.q
        uint128_t var_11a8_1
        var_11a8_1:8.q = rcx - 2
        uint64_t rdi_3 = zx.q(*rax_4) << 8 | zx.q(rax_4[1])
        var_11a8_1.q = &rax_4[2]
        
        if (rcx - 2 u< rdi_3)
            goto label_142887be2
        
        var_11a8_1.q = &rax_4[2 + rdi_3]
        var_11a8_1:8.q = rcx - 2 - rdi_3
        
        if (rcx - 2 != rdi_3)
            goto label_142887be2
        
        zmm0 = var_11a8_1
        var_11a8_1.q = &rax_4[2]
        *arg2 = zmm0
        
        if (rdi_3 u< 0x20 || rdi_3 u< rdi_3 - 0x20)
            var_11c0_1 = 0x2f6
            goto label_142887bea
        
        int64_t* rax_7 = sub_142891ee0()
        int64_t* rax_8 = sub_1428969b0(0x357, nullptr, *(arg1 + 0x738) + 0x298, 0x20)
        
        if (rax_7 == 0 || rax_8 == 0)
            sub_142891ea0(rax_7)
            sub_1428965a0(rax_8)
            sub_142856580(arg1, 0x50, 0x266, 0x41, "ssl\statem\extensions_srvr.c", 0x305)
            result = 0
        else
            int64_t var_1158 = 0x20
            int32_t rax_9 = sub_1428932d0(rax_7, nullptr, &data_1434e91b0, nullptr, rax_8)
            void var_1140
            int32_t rax_10
            
            if (rax_9 s> 0)
                int64_t var_11c8_2 = rdi_3 - 0x20
                rax_10 = sub_142893060(rax_7, &var_1140, &var_1158, &rax_4[2], arg4, arg3)
            
            if (rax_9 s<= 0 || rax_10 s<= 0 || var_1158 != 0x20)
                sub_142891ea0(rax_7)
                sub_1428965a0(rax_8)
                sub_142856580(arg1, 0x50, 0x266, 0x44, "ssl\statem\extensions_srvr.c", 0x311)
                result = 0
            else
                sub_142891ea0(rax_7)
                sub_1428965a0(rax_8)
                
                if (sub_1428bc500(&var_1140, &rax_4[rdi_3 - 0x1e], 0x20) == 0)
                    if (rdi_3 u< 2)
                        var_11c0_1 = 0x320
                        goto label_142887bea
                    
                    var_11a8_1:8.q = rdi_3 - 2
                    
                    if ((zx.d(rax_4[2]) << 8 | zx.d(rax_4[3])) != 0)
                        result = 1
                    else
                        if (rdi_3 - 2 u< 2)
                            var_11c0_1 = 0x32f
                            goto label_142887bea
                        
                        var_11a8_1:8.q = rdi_3 - 4
                        
                        if ((zx.d(rax_4[4]) << 8 | zx.d(rax_4[5])) == 0x304)
                            if (rdi_3 - 4 u< 2)
                                var_11c0_1 = 0x33a
                                goto label_142887bea
                            
                            var_11a8_1:8.q = rdi_3 - 6
                            
                            if (rdi_3 - 6 u< 2)
                                var_11c0_1 = 0x341
                                goto label_142887bea
                            
                            var_11a8_1:8.q = rdi_3 - 8
                            int32_t* rax_16
                            
                            if ((zx.d(rax_4[6]) << 8 | zx.d(rax_4[7]))
                                    == zx.d(*(*(arg1 + 0xa8) + 0x406)))
                                rax_16 = sub_14285b0f0(arg1, &rax_4[8], 0)
                            
                            if ((zx.d(rax_4[6]) << 8 | zx.d(rax_4[7]))
                                    != zx.d(*(*(arg1 + 0xa8) + 0x406))
                                    || *(*(arg1 + 0xa8) + 0x238) != rax_16)
                                sub_142856580(arg1, 0x2f, 0x266, 0xba, 
                                    "ssl\statem\extensions_srvr.c", 0x34c)
                                result = 0
                            else
                                if (rdi_3 == 8)
                                    var_11c0_1 = 0x356
                                    goto label_142887bea
                                
                                char rax_17 = rax_4[0xa]
                                var_11a8_1:8.q = rdi_3 - 9
                                
                                if (rdi_3 - 9 u< 4)
                                    var_11c0_1 = 0x356
                                    goto label_142887bea
                                
                                uint32_t r14_10 = ((zx.d(rax_4[0xb]) << 8 | zx.d(rax_4[0xc])) << 8
                                    | zx.d(rax_4[0xd])) << 8 | zx.d(rax_4[0xe])
                                var_11a8_1.q = &rax_4[0xf]
                                var_11a8_1:8.q = rdi_3 - 0xd
                                
                                if (rdi_3 - 0xd u< 2)
                                    var_11c0_1 = 0x356
                                    goto label_142887bea
                                
                                uint64_t r13_4 = zx.q(rax_4[0xf]) << 8 | zx.q(rax_4[0x10])
                                uint128_t var_11a8_2
                                var_11a8_2:8.q = var_11a8_1:8.q - 2
                                
                                if (var_11a8_1:8.q - 2 u< r13_4)
                                    var_11c0_1 = 0x356
                                    goto label_142887bea
                                
                                void* rdx_5 = &rax_4[0x11 + r13_4]
                                var_11a8_2.q = rdx_5
                                var_11a8_2:8.q = var_11a8_1:8.q - 2 - r13_4
                                
                                if (var_11a8_1:8.q - 2 == r13_4)
                                    var_11c0_1 = 0x356
                                    goto label_142887bea
                                
                                uint64_t rsi_4 = zx.q(*rdx_5)
                                
                                if (var_11a8_2:8.q - 1 u< rsi_4
                                        || var_11a8_2:8.q - 1 - rsi_4 != 0x20)
                                    var_11c0_1 = 0x356
                                    goto label_142887bea
                                
                                int32_t rax_26 = _time64(nullptr)
                                
                                if (r14_10 u> rax_26 || rax_26 - r14_10 u> 0x258)
                                    result = 1
                                else
                                    int32_t rax_29 =
                                        (*(*(arg1 + 0x598) + 0xd8))(arg1, rdx_5 + 1, zx.q(rsi_4.d))
                                    
                                    if (rax_29 != 0)
                                        void var_1198
                                        void var_1118
                                        int32_t rax_30 =
                                            sub_142873900(&var_1198, &var_1118, 0x10c8, 0)
                                        
                                        if (rax_30 != 0)
                                            if (sub_142873b60(&var_1198, 2, 1) == 0)
                                            label_142887b2a:
                                                sub_142873690(&var_1198)
                                                sub_142856580(arg1, 0x50, 0x266, 0x44, 
                                                    "ssl\statem\extensions_srvr.c", 0x37f)
                                                result = 0
                                            else
                                                if (sub_142873e80(&var_1198, 3) == 0)
                                                    goto label_142887b2a
                                                
                                                if (sub_142873b60(&var_1198, 0x303, 2) == 0)
                                                    goto label_142887b2a
                                                
                                                if (sub_142873970(&var_1198, &data_1434dbe90, 0x20)
                                                        == 0)
                                                    goto label_142887b2a
                                                
                                                if (sub_142874080(&var_1198, &arg1[0x14c], 
                                                        *(arg1 + 0x550), 1) == 0)
                                                    goto label_142887b2a
                                                
                                                void var_1148
                                                
                                                if ((*(*(arg1 + 8) + 0x98))(
                                                        *(*(arg1 + 0xa8) + 0x238), &var_1198, 
                                                        &var_1148) == 0)
                                                    goto label_142887b2a
                                                
                                                if (sub_142873b60(&var_1198, 0, 1) == 0)
                                                    goto label_142887b2a
                                                
                                                if (sub_142873e80(&var_1198, 2) == 0)
                                                    goto label_142887b2a
                                                
                                                if (sub_142873b60(&var_1198, 0x2b, 2) == 0)
                                                label_142887b0a:
                                                    sub_142873690(&var_1198)
                                                    sub_142856580(arg1, 0x50, 0x266, 0x44, 
                                                        "ssl\statem\extensions_srvr.c", 0x388)
                                                    result = 0
                                                else
                                                    if (sub_142873e80(&var_1198, 2) == 0)
                                                        goto label_142887b0a
                                                    
                                                    if (sub_142873b60(&var_1198, *arg1, 2) == 0)
                                                        goto label_142887b0a
                                                    
                                                    if (sub_1428736e0(&var_1198) == 0)
                                                        goto label_142887b0a
                                                    
                                                    if (rax_17 == 0)
                                                    label_1428879e6:
                                                        
                                                        if (sub_142873b60(&var_1198, 0x2c, 2) == 0)
                                                        label_142887aea:
                                                            sub_142873690(&var_1198)
                                                            sub_142856580(arg1, 0x50, 0x266, 0x44, 
                                                                "ssl\statem\extensions_srvr.c", 0x3a0)
                                                            result = 0
                                                        else
                                                            if (sub_142873e80(&var_1198, 2) == 0)
                                                                goto label_142887aea
                                                            
                                                            if (sub_142874080(&var_1198, &rax_4[2], 
                                                                    rdi_3, 2) == 0)
                                                                goto label_142887aea
                                                            
                                                            if (sub_1428736e0(&var_1198) == 0)
                                                                goto label_142887aea
                                                            
                                                            if (sub_1428736e0(&var_1198) == 0)
                                                                goto label_142887aea
                                                            
                                                            if (sub_1428736e0(&var_1198) == 0)
                                                                goto label_142887aea
                                                            
                                                            int64_t var_1150
                                                            
                                                            if (sub_142873850(&var_1198, &var_1150)
                                                                    == 0)
                                                                goto label_142887aea
                                                            
                                                            if (sub_142873790(&var_1198) == 0)
                                                                goto label_142887aea
                                                            
                                                            if (sub_14285e030(arg1, &rax_4[0x11], 
                                                                    r13_4, &var_1118, var_1150) == 0)
                                                                result = 0
                                                            else
                                                                arg1[0x136] = 1
                                                                arg1[0x1c0] = 1
                                                                result = 1
                                                    else
                                                        if (sub_142873b60(&var_1198, 0x33, 2) != 0
                                                                && sub_142873e80(&var_1198, 2) != 0 &&
                                                                sub_142873b60(&var_1198, 
                                                                zx.d(*(*(arg1 + 0xa8) + 0x406)), 2) != 0
                                                                && sub_1428736e0(&var_1198) != 0)
                                                            goto label_1428879e6
                                                        
                                                        sub_142873690(&var_1198)
                                                        sub_142856580(arg1, 0x50, 0x266, 0x44, 
                                                            "ssl\statem\extensions_srvr.c", 0x392)
                                                        result = 0
                                        else
                                            sub_142856580(arg1, rax_30 + 0x50, 0x266, 
                                                rax_30 + 0x44, "ssl\statem\extensions_srvr.c", 
                                                0x370)
                                            result = 0
                                    else
                                        sub_142856580(arg1, rax_29 + 0x2f, 0x266, 0x134, 
                                            "ssl\statem\extensions_srvr.c", 0x365)
                                        result = 0
                        else
                            sub_142856580(arg1, 0x2f, 0x266, 0x74, "ssl\statem\extensions_srvr.c", 
                                0x334)
                            result = 0
                else
                    sub_142856580(arg1, 0x2f, 0x266, 0x134, "ssl\statem\extensions_srvr.c", 0x31a)
                    result = 0

__security_check_cookie(rax_1 ^ &var_11e8)
return result

// 函数: sub_1428618c0
// 地址: 0x1428618c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x158)
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t rsi = 0
void var_c8
void* var_100 = &var_c8
int64_t count_1 = 0
int32_t* var_110 = nullptr
int32_t* var_f8_1
__builtin_memset(&var_f8_1, 0, 0x18)
void var_88
void* const rax_2
int64_t* r12

if ((arg2.b & 1) == 0)
    *(arg1 + 0x7c) = 1
    int64_t* rcx_3 = *(arg1 + 0x460)
    
    if (rcx_3 == 0)
        int64_t* rax_11 = sub_142892200()
        *(arg1 + 0x460) = rax_11
        r12 = rax_11
        
        if (rax_11 != 0)
            goto label_1428619ad
        
        sub_142856580(arg1, 0x50, 0x1b8, 0x41, "ssl\tls13_enc.c", 0x1b4)
    else
        sub_1428922e0(rcx_3)
        r12 = *(arg1 + 0x460)
    label_1428619ad:
        sub_14285b850(arg1 + 0x800)
        rax_2 = 0x468
    label_1428619e9:
        char const* const r14_1 = "s hs traffic"
        int32_t var_160
        int64_t var_120_1
        char* var_118_1
        void* var_f0_1
        int64_t var_e8_1
        void* r13_1
        
        if ((arg2.b & 0x12) == 0x12 || (arg2.b & 0x21) == 0x21)
            if ((arg2.b & 0x40) == 0)
                if (arg2.b s>= 0)
                    r14_1 = "c ap traffic"
                    var_118_1 = "CLIENT_TRAFFIC_SECRET_0"
                    var_100 = arg1 + 0x2ac
                    goto label_142861da6
                
                var_f0_1 = arg1 + 0x22c
                r13_1 = arg1 + 0x16c
                r14_1 = "c hs traffic"
                var_e8_1 = sx.q(sub_1428916c0(sub_14285b130(arg1)))
                var_118_1 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET"
                var_100 = arg1 + 0x2ec
                goto label_142861dad
            
            var_120_1 = 0xb
            void* r13_2 = sub_1428576a0(*(arg1 + 0x508))
            r14_1 = "c e traffic"
            var_118_1 = "CLIENT_EARLY_TRAFFIC_SECRET"
            int64_t var_e0
            int32_t rax_13 = sub_142899cf0(*(*(arg1 + 0xa8) + 0xe0), 3, 0, &var_e0)
            
            if (rax_13 s> 0)
                if (*(arg1 + 0x84) != 2)
                    goto label_142861b3e
                
                int32_t rdx = *(arg1 + 0x16e0)
                
                if (rdx == 0 || *(*(arg1 + 0x508) + 0x19c) != 0)
                    goto label_142861b3e
                
                void* rcx_12 = *(arg1 + 0x510)
                
                if (rcx_12 == 0 || rdx != *(rcx_12 + 0x19c))
                    sub_142856580(arg1, 0x50, 0x1b8, 0x44, "ssl\tls13_enc.c", 0x1e1)
                else
                    r13_2 = sub_1428576a0(rcx_12)
                label_142861b3e:
                    
                    if (r13_2 != 0)
                        int64_t* rax_16 = sub_142891ee0()
                        
                        if (rax_16 != 0)
                            int32_t* rax_19 = sub_14289b930(sub_1428a9620(sub_142858c80(r13_2)))
                            char rcx_19 = (*(r13_2 + 0x40)).b
                            var_f8_1 = rax_19
                            int32_t* rax_20 = sub_14285b4c0(rcx_19)
                            var_110 = rax_20
                            
                            if (rax_20 == 0)
                                sub_142856580(arg1, 0x50, 0x1b8, 0x44, "ssl\tls13_enc.c", 0x1fd)
                                sub_142891ea0(rax_16)
                            else if (sub_1428919c0(rax_16, rax_20, nullptr) == 0)
                                sub_142856580(arg1, 0x50, 0x1b8, 0x44, "ssl\tls13_enc.c", 0x1fd)
                                sub_142891ea0(rax_16)
                            else
                                int32_t count_2
                                
                                if (sub_142891c10(rax_16, var_e0, sx.q(rax_13)) == 0)
                                    sub_142856580(arg1, 0x50, 0x1b8, 0x44, "ssl\tls13_enc.c", 0x1fd)
                                    sub_142891ea0(rax_16)
                                else if (sub_1428918e0(rax_16, &var_c8, &count_2) == 0)
                                    sub_142856580(arg1, 0x50, 0x1b8, 0x44, "ssl\tls13_enc.c", 0x1fd)
                                    sub_142891ea0(rax_16)
                                else
                                    count_1 = zx.q(count_2)
                                    sub_142891ea0(rax_16)
                                    int64_t count_3 = count_1
                                    r13_1 = arg1 + 0x12c
                                    int64_t count_6 = count_3
                                    var_160.q = &var_c8
                                    
                                    if (sub_1428628c0(arg1, var_110, r13_1, "e exp master", 0xc, 
                                            var_160, count_3, arg1 + 0x3ec) != 0)
                                        if (sub_142852000(arg1, "EARLY_EXPORTER_SECRET", 
                                                arg1 + 0x3ec, count_1) != 0)
                                            goto label_142861db6
                                    else
                                        sub_142856580(arg1, 0x50, 0x1b8, 0x44, "ssl\tls13_enc.c", 
                                            0x20a)
                        else
                            sub_142856580(arg1, (&rax_16[0xa]).d, 0x1b8, (rax_16 + 0x41).d, 
                                "ssl\tls13_enc.c", 0x1f4)
                    else
                        sub_142856580(arg1, (r13_2 + 0x50).d, 0x1b8, 0xdb, "ssl\tls13_enc.c", 0x1e8)
            else
                sub_142856580(arg1, 0x50, 0x1b8, 0x14c, "ssl\tls13_enc.c", 0x1d0)
        else
            if (arg2.b s>= 0)
                r14_1 = "s ap traffic"
                var_118_1 = "SERVER_TRAFFIC_SECRET_0"
            label_142861da6:
                r13_1 = arg1 + 0x1ac
                goto label_142861dad
            
            var_f0_1 = arg1 + 0x26c
            r13_1 = arg1 + 0x16c
            var_118_1 = "SERVER_HANDSHAKE_TRAFFIC_SECRET"
            var_e8_1 = sx.q(sub_1428916c0(sub_14285b130(arg1)))
        label_142861dad:
            var_120_1 = 0xc
        label_142861db6:
            
            if ((arg2.b & 0x40) != 0)
            label_142861e0f:
                int32_t count = count_1.d
                
                if (r14_1 == "s ap traffic")
                    memcpy(arg1 + 0x2ac, &var_c8, count)
                
                if (r14_1 == "s hs traffic")
                    memcpy(arg1 + 0x2ec, &var_c8, count)
                
                int32_t rax_39
                
                if (r14_1 == "c ap traffic")
                    void* rax_38 = sub_14285b130(arg1)
                    int64_t count_4 = count_1
                    int64_t count_7 = count_4
                    var_160.q = &var_c8
                    rax_39 = sub_1428628c0(arg1, rax_38, r13_1, "res master", 0xa, var_160, 
                        count_4, arg1 + 0x1ec)
                
                if (r14_1 != "c ap traffic" || rax_39 != 0)
                    var_160.q = var_100
                    
                    if (sub_142861600(arg1, arg2 & 2, var_110, var_f8_1, r13_1, var_160, r14_1, 
                            var_120_1, &var_88, rax_2 + arg1, r12) != 0)
                        if (r14_1 != "s ap traffic")
                            if (r14_1 == "c ap traffic")
                                memcpy(arg1 + 0x32c, &var_88, count_1.d)
                            
                            goto label_142861fca
                        
                        memcpy(arg1 + 0x36c, &var_88, count_1.d)
                        void* rax_43 = sub_14285b130(arg1)
                        int64_t count_5 = count_1
                        int64_t count_8 = count_5
                        var_160.q = var_100
                        
                        if (sub_1428628c0(arg1, rax_43, r13_1, "exp master", 0xa, var_160, count_5, 
                            arg1 + 0x3ac) != 0
                            && sub_142852000(arg1, "EXPORTER_SECRET", arg1 + 0x3ac, count_1) != 0)
                        label_142861fca:
                            
                            if (sub_142852000(arg1, var_118_1, &var_88, count_1) != 0)
                                if (var_f0_1 == 0)
                                label_14286202e:
                                    
                                    if (*(arg1 + 0x38) == 0 && r14_1 == "c e traffic")
                                        rsi = 2
                                    
                                    *(arg1 + 0x7c) = rsi
                                    rsi = 1
                                else
                                    int64_t var_148_2 = var_e8_1
                                    var_160.q = 0
                                    
                                    if (sub_1428628c0(arg1, sub_14285b130(arg1), &var_88, 
                                            "finished", 8, var_160, 0, var_f0_1) != 0)
                                        goto label_14286202e
            else
                var_110 = sub_14285b130(arg1)
                var_f8_1 = *(*(arg1 + 0xa8) + 0x278)
                
                if (sub_1428821e0(arg1, 1) != 0
                        && sub_142851d80(arg1, &var_c8, 0x40, &count_1) != 0)
                    goto label_142861e0f
else
    int64_t* rcx = *(arg1 + 0x430)
    
    if (rcx != 0)
        sub_1428922e0(rcx)
        r12 = *(arg1 + 0x430)
    label_142861933:
        sub_14285b840(arg1 + 0x800)
        rax_2 = 0x438
        goto label_1428619e9
    
    int64_t* rax_3 = sub_142892200()
    *(arg1 + 0x430) = rax_3
    r12 = rax_3
    
    if (rax_3 != 0)
        goto label_142861933
    
    sub_142856580(arg1, 0x50, 0x1b8, 0x41, "ssl\tls13_enc.c", 0x1a4)
sub_1428b8960(&var_88, 0x40)
__security_check_cookie(rax_1 ^ &var_188)
return zx.q(rsi)

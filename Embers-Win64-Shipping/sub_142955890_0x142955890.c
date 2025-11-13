// 函数: sub_142955890
// 地址: 0x142955890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int32_t rsi = 0
int64_t* var_58 = nullptr

if (arg1 != 0)
    int64_t* rax_1 = sub_142891590(arg1)
    
    if (rax_1 != 0)
        if (sub_1428c0870(arg1) == 0)
            sub_1428a5670(0x10, 0xf8, 0x9f, "crypto\ec\ecdsa_ossl.c", 0x33)
            return 0
        
        int64_t* r14 = arg2
        
        if (arg2 == 0)
            int64_t* rax_4 = sub_1428d8d60()
            r14 = rax_4
            
            if (rax_4 == 0)
                sub_1428a5670((&arg2[2]).d, 0xf8, (arg2 + 0x41).d, "crypto\ec\ecdsa_ossl.c", 0x39)
                return 0
        
        int64_t* rax_6 = sub_142890500()
        int64_t* rax_7 = sub_142890500()
        int64_t* rax_8 = sub_142890500()
        int64_t* rbx_1 = rax_8
        
        if (rax_6 == 0 || rax_7 == 0 || rax_8 == 0)
            sub_1428a5670(0x10, 0xf8, 0x41, "crypto\ec\ecdsa_ossl.c", 0x42)
        label_142955c2b:
            sub_14288fbf0(rax_6)
            sub_14288fbf0(rax_7)
        else
            int64_t* rax_9 = sub_1428bfa80(rax_1)
            var_58 = rax_9
            
            if (rax_9 == 0)
                sub_1428a5670(0x10, 0xf8, 0x10, "crypto\ec\ecdsa_ossl.c", 0x46)
                goto label_142955c2b
            
            int64_t* rax_10 = sub_14060aa60(rax_1)
            int32_t rax_11 = sub_142890560(rax_10)
            int32_t rax_12 = sub_142890810(rax_6, rax_11)
            int32_t rax_13
            
            if (rax_12 != 0)
                rax_13 = sub_142890810(rax_7, rax_11)
            
            if (rax_12 == 0 || rax_13 == 0)
                rbx_1 = rax_8
                goto label_142955c2b
            
            rbx_1 = rax_8
            
            if (sub_142890810(rbx_1, rax_11) == 0)
                goto label_142955c2b
            
            while (true)
                int32_t var_68_1
                int32_t r8_2
                int32_t var_68
                
                if (arg5 == 0)
                    if (sub_1429198c0(rax_6, rax_10) == 0)
                        var_68_1 = 0x60
                        r8_2 = 0x9e
                    else
                    label_142955abd:
                        
                        if (sub_142890300(rax_6) != 0)
                            continue
                        else
                            int64_t* var_60_2 = r14
                            var_68.q = 0
                            
                            if (sub_1428bfa20(rax_1, var_58, rax_6, 0, nullptr) != 0)
                                rbx_1 = rax_8
                                var_68.q = r14
                                
                                if (sub_1428bf6e0(rax_1, var_58, rbx_1, 0, var_68) == 0)
                                    sub_1428a5670(0x10, 0xf8, 0x10, "crypto\ec\ecdsa_ossl.c", 0x6d)
                                    rsi = 0
                                    goto label_142955c2b
                                
                                int32_t var_68_2
                                
                                if (sub_1429084c0(rax_7, rbx_1, rax_10, r14) == 0)
                                    var_68_2 = 0x72
                                else if (sub_142890300(rax_7) != 0)
                                    continue
                                else
                                    if (sub_1428c00d0(rax_1, rax_6, rax_6, r14) != 0)
                                        sub_14288fbf0(*arg4)
                                        sub_14288fbf0(*arg3)
                                        *arg4 = rax_7
                                        rsi = 1
                                        *arg3 = rax_6
                                        break
                                    
                                    var_68_2 = 0x79
                                
                                sub_1428a5670(0x10, 0xf8, 3, "crypto\ec\ecdsa_ossl.c", var_68_2)
                                rsi = 0
                                goto label_142955c2b
                            
                            var_68_1 = 0x68
                            r8_2 = 0x10
                else
                    var_68.q = sx.q(arg6)
                    
                    if (sub_142919640(rax_6, rax_10, sub_142896660(arg1), arg5, var_68, r14) != 0)
                        goto label_142955abd
                    
                    var_68_1 = 0x5a
                    r8_2 = 0x9e
                sub_1428a5670(0x10, 0xf8, r8_2, "crypto\ec\ecdsa_ossl.c", var_68_1)
                rbx_1 = rax_8
                rsi = 0
                goto label_142955c2b
        
        if (r14 != arg2)
            sub_1428d8ae0(r14)
        
        sub_1428bf6a0(var_58)
        sub_14288fbf0(rbx_1)
        return zx.q(rsi)

sub_1428a5670(0x10, 0xf8, 0x43, "crypto\ec\ecdsa_ossl.c", 0x2e)
return 0

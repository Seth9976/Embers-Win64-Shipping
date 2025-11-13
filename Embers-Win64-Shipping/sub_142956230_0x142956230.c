// 函数: sub_142956230
// 地址: 0x142956230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int64_t* r13 = nullptr
int32_t rsi = -1
uint64_t r12 = zx.q(arg2)
int32_t var_68_1
int32_t r8

if (arg4 == 0)
    var_68_1 = 0x143
    r8 = 0x7c
else
    int64_t* rax_1 = sub_142891590(arg4)
    
    if (rax_1 == 0)
        var_68_1 = 0x143
        r8 = 0x7c
    else
        int64_t rax_2 = sub_1427ec4a0(arg4)
        
        if (rax_2 == 0 || arg3 == 0)
            var_68_1 = 0x143
            r8 = 0x7c
        else if (sub_1428c0870(arg4) != 0)
            int64_t* rax_4 = sub_1428d8d60()
            
            if (rax_4 != 0)
                sub_1428d8e50(rax_4)
                int64_t* rax_5 = sub_1428d8ba0(rax_4)
                int64_t* rax_6 = sub_1428d8ba0(rax_4)
                int64_t* rax_7 = sub_1428d8ba0(rax_4)
                int64_t* rax_8 = sub_1428d8ba0(rax_4)
                
                if (rax_8 != 0)
                    int64_t* rax_9 = sub_14060aa60(rax_1)
                    
                    if (rax_9 != 0)
                        if (sub_142890300(*arg3) != 0)
                            sub_1428a5670(0x10, 0xfa, 0x9c, "crypto\ec\ecdsa_ossl.c", 0x164)
                            rsi = 0
                        else if (sub_142890280(*arg3) != 0)
                            sub_1428a5670(0x10, 0xfa, 0x9c, "crypto\ec\ecdsa_ossl.c", 0x164)
                            rsi = 0
                        else if (sub_1428909a0(*arg3, rax_9) s>= 0)
                            sub_1428a5670(0x10, 0xfa, 0x9c, "crypto\ec\ecdsa_ossl.c", 0x164)
                            rsi = 0
                        else if (sub_142890300(arg3[1]) != 0)
                            sub_1428a5670(0x10, 0xfa, 0x9c, "crypto\ec\ecdsa_ossl.c", 0x164)
                            rsi = 0
                        else if (sub_142890280(arg3[1]) != 0)
                            sub_1428a5670(0x10, 0xfa, 0x9c, "crypto\ec\ecdsa_ossl.c", 0x164)
                            rsi = 0
                        else if (sub_1428909a0(arg3[1], rax_9) s>= 0)
                            sub_1428a5670(0x10, 0xfa, 0x9c, "crypto\ec\ecdsa_ossl.c", 0x164)
                            rsi = 0
                        else if (sub_1428c00d0(rax_1, rax_6, arg3[1], rax_4) != 0)
                            int32_t rax_17 = sub_142890560(rax_9)
                            
                            if ((r12 << 3).d s> rax_17)
                                int32_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_17 + 7)
                                r12 = zx.q(((temp0_1 & 7) + temp1_1) s>> 3)
                            
                            if (sub_14288fa60(arg1, r12.d, rax_7) != 0)
                                int32_t rax_23
                                
                                if ((r12 << 3).d s> rax_17)
                                    rax_23 = sub_1428f5760(rax_7, rax_7, 8 - (rax_17 & 7))
                                
                                if ((r12 << 3).d s<= rax_17 || rax_23 != 0)
                                    int32_t var_68
                                    var_68.q = rax_4
                                    
                                    if (sub_1429082e0(rax_5, rax_7, rax_6, rax_9, var_68) != 0)
                                        var_68.q = rax_4
                                        
                                        if (sub_1429082e0(rax_6, *arg3, rax_6, rax_9, var_68) != 0)
                                            int64_t* rax_26 = sub_1428bfa80(rax_1)
                                            r13 = rax_26
                                            
                                            if (rax_26 != 0)
                                                int64_t* var_60_1 = rax_4
                                                var_68.q = rax_6
                                                
                                                if (sub_1428bfa20(rax_1, r13, rax_5, rax_2, var_68)
                                                        != 0)
                                                    var_68.q = rax_4
                                                    
                                                    if (sub_1428bf6e0(rax_1, r13, rax_8, 0, var_68)
                                                            != 0)
                                                        if (sub_1429084c0(rax_5, rax_8, rax_9, 
                                                                rax_4) != 0)
                                                            rsi.b = sub_1428909a0(rax_5, *arg3) == 0
                                                        else
                                                            sub_1428a5670(0x10, 0xfa, 3, 
                                                                "crypto\ec\ecdsa_ossl.c", 0x197)
                                                    else
                                                        sub_1428a5670(0x10, 0xfa, 0x10, 
                                                            "crypto\ec\ecdsa_ossl.c", 0x192)
                                                else
                                                    sub_1428a5670(0x10, 0xfa, 0x10, 
                                                        "crypto\ec\ecdsa_ossl.c", 0x18d)
                                            else
                                                sub_1428a5670((&rax_26[2]).d, 0xfa, 
                                                    (rax_26 + 0x41).d, "crypto\ec\ecdsa_ossl.c", 
                                                    0x189)
                                        else
                                            sub_1428a5670(0x10, 0xfa, 3, "crypto\ec\ecdsa_ossl.c", 
                                                0x184)
                                    else
                                        sub_1428a5670(0x10, 0xfa, 3, "crypto\ec\ecdsa_ossl.c", 
                                            0x17f)
                                else
                                    sub_1428a5670(0x10, 0xfa, 3, "crypto\ec\ecdsa_ossl.c", 0x17a)
                            else
                                sub_1428a5670(0x10, 0xfa, 3, "crypto\ec\ecdsa_ossl.c", 0x175)
                        else
                            sub_1428a5670(0x10, 0xfa, 3, "crypto\ec\ecdsa_ossl.c", 0x16a)
                    else
                        sub_1428a5670(0x10, 0xfa, 0x10, "crypto\ec\ecdsa_ossl.c", 0x15d)
                else
                    sub_1428a5670((&rax_8[2]).d, 0xfa, (rax_8 + 3).d, "crypto\ec\ecdsa_ossl.c", 
                        0x157)
                
                sub_1428d8a60(rax_4)
                sub_1428d8ae0(rax_4)
                sub_1428bf6a0(r13)
                return zx.q(rsi)
            
            var_68_1 = 0x14e
            r8 = (rax_4 + 0x41).d
        else
            var_68_1 = 0x148
            r8 = 0x9f

sub_1428a5670(0x10, 0xfa, r8, "crypto\ec\ecdsa_ossl.c", var_68_1)
return 0xffffffff

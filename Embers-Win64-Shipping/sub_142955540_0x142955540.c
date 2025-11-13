// 函数: sub_142955540
// 地址: 0x142955540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t r15 = 0
int64_t* r12 = nullptr
int64_t rbp = 0
int64_t* rax = sub_1428d8d60()

if (rax != 0)
    sub_1428d8e50(rax)
    int64_t* rax_1 = sub_1428d8ba0(rax)
    
    if (rax_1 != 0)
        int64_t* rax_2 = sub_142896660(arg4)
        int64_t* rbx_1 = rax_2
        
        if (rax_2 != 0)
            int64_t* rax_3 = sub_142891590(arg4)
            
            if (not(test_bit(sub_1406bc600(arg4), 0xc)))
                goto label_142955651
            
            int32_t rax_5 = sub_1428beee0(rax_3, rax_1)
            int32_t rax_6
            
            if (rax_5 != 0)
                rax_6 = sub_1428d9290(rax_1, rax_1, rbx_1, rax)
            
            if (rax_5 == 0 || rax_6 == 0)
                sub_1428a5670(0x10, 0x101, 0x41, "crypto\ec\ecdh_ossl.c", 0x46)
            else
                rbx_1 = rax_1
            label_142955651:
                int64_t* rax_7 = sub_1428bfa80(rax_3)
                r12 = rax_7
                
                if (rax_7 != 0)
                    int64_t* var_40_1 = rax
                    int32_t var_48
                    var_48.q = rbx_1
                    
                    if (sub_1428bfa20(rax_3, r12, nullptr, arg3, var_48) != 0)
                        var_48.q = rax
                        
                        if (sub_1428bf6e0(rax_3, r12, rax_1, 0, var_48) != 0)
                            int32_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(sub_1428bef80(rax_3) + 7)
                            int64_t r14_2 = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(sub_142890560(rax_1) + 7)
                            int64_t r13_1 = sx.q((temp3_1 + (temp2_1 & 7)) s>> 3)
                            
                            if (r13_1 u<= r14_2)
                                int64_t rax_20 = sub_1428a6730(r14_2)
                                rbp = rax_20
                                
                                if (rax_20 != 0)
                                    uint64_t count = r14_2 - r13_1
                                    memset(rbp, 0, count)
                                    
                                    if (r13_1 == sx.q(sub_14288fba0(rax_1, count + rbp)))
                                        *arg1 = rbp
                                        rbp = 0
                                        r15 = 1
                                        *arg2 = r14_2
                                    else
                                        sub_1428a5670(0x10, 0x101, 3, "crypto\ec\ecdh_ossl.c", 0x68)
                                else
                                    sub_1428a5670(0x10, 0x101, 0x41, "crypto\ec\ecdh_ossl.c", 0x62)
                            else
                                sub_1428a5670(0x10, 0x101, 0x44, "crypto\ec\ecdh_ossl.c", 0x5e)
                        else
                            sub_1428a5670(0x10, 0x101, 0x9b, "crypto\ec\ecdh_ossl.c", 0x57)
                    else
                        sub_1428a5670(0x10, 0x101, 0x9b, "crypto\ec\ecdh_ossl.c", 0x52)
                else
                    sub_1428a5670(0x10, 0x101, 0x41, "crypto\ec\ecdh_ossl.c", 0x4d)
        else
            sub_1428a5670((&rax_2[2]).d, 0x101, 0x9a, "crypto\ec\ecdh_ossl.c", 0x3d)
    else
        sub_1428a5670((&rax_1[2]).d, 0x101, 0x41, "crypto\ec\ecdh_ossl.c", 0x37)

sub_1428bf6a0(r12)

if (rax != 0)
    sub_1428d8a60(rax)

sub_1428d8ae0(rax)
sub_1428a6780(rbp)
return zx.q(r15)

// 函数: sub_14294c8a0
// 地址: 0x14294c8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
int64_t* rax = sub_142891590(arg5)
void* rbx = nullptr
char var_68 = 0
int64_t* rax_1 = sub_142891ee0()
int64_t* rax_2 = sub_1428d8d60()
int32_t rsi_2
int32_t var_78_1

if (rax_1 == 0 || rax_2 == 0)
    var_78_1 = 0x2e
label_14294cc46:
    sub_1428a5670(0x35, 0x71, 0x41, "crypto\sm2\sm2_sign.c", var_78_1)
    rsi_2 = 0
else
    int64_t* rax_3 = sub_1428d8ba0(rax_2)
    int64_t* rax_4 = sub_1428d8ba0(rax_2)
    int64_t* rax_5 = sub_1428d8ba0(rax_2)
    int64_t* rax_6 = sub_1428d8ba0(rax_2)
    int64_t* rax_7 = sub_1428d8ba0(rax_2)
    int64_t* rax_8 = sub_1428d8ba0(rax_2)
    int64_t* rax_9 = sub_1428d8ba0(rax_2)
    
    if (rax_9 == 0)
        var_78_1 = 0x3b
        goto label_14294cc46
    
    int32_t rax_10 = sub_142891980(rax_1, arg2)
    
    if (rax_10 == 0)
        sub_1428a5670(0x35, 0x71, rax_10 + 6, "crypto\sm2\sm2_sign.c", 0x40)
        rsi_2 = 0
    else if (arg4 u< 0x1fff)
        int16_t rbp_1 = arg4.w << 3
        var_68 = (rbp_1 u>> 8).b
        int32_t rax_12 = sub_142891c10(rax_1, &var_68, 1)
        
        if (rax_12 != 0)
            var_68 = rbp_1.b
            int32_t rax_13 = sub_142891c10(rax_1, &var_68, 1)
            
            if (rax_13 != 0)
                int32_t rax_14
                
                if (arg4 != 0)
                    rax_14 = sub_142891c10(rax_1, arg3, arg4)
                
                if (arg4 == 0 || rax_14 != 0)
                    int32_t var_78
                    var_78.q = rax_2
                    int32_t rax_15 = sub_1428bef30(rax, rax_3, rax_4, rax_5, var_78)
                    
                    if (rax_15 != 0)
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(sub_142890560(rax_3) + 7)
                        uint64_t rbp_2 = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
                        void* rax_21 = sub_1428a6a70(rbp_2)
                        rbx = rax_21
                        
                        if (rax_21 == 0)
                            var_78_1 = 0x66
                            goto label_14294cc46
                        
                        if (sub_14288fbc0(rax_4, rbx, rbp_2.d) s< 0)
                        label_14294cc2e:
                            sub_1428a5670(0x35, 0x71, 0x44, "crypto\sm2\sm2_sign.c", 0x7d)
                            rsi_2 = 0
                        else
                            if (sub_142891c10(rax_1, rbx, rbp_2) == 0)
                                goto label_14294cc2e
                            
                            if (sub_14288fbc0(rax_5, rbx, rbp_2.d) s< 0)
                                goto label_14294cc2e
                            
                            if (sub_142891c10(rax_1, rbx, rbp_2) == 0)
                                goto label_14294cc2e
                            
                            var_78.q = rax_2
                            
                            if (sub_1428bf6e0(rax, sub_14060aa50(rax), rax_6, rax_7, var_78) == 0)
                                goto label_14294cc2e
                            
                            if (sub_14288fbc0(rax_6, rbx, rbp_2.d) s< 0)
                                goto label_14294cc2e
                            
                            if (sub_142891c10(rax_1, rbx, rbp_2) == 0)
                                goto label_14294cc2e
                            
                            if (sub_14288fbc0(rax_7, rbx, rbp_2.d) s< 0)
                                goto label_14294cc2e
                            
                            if (sub_142891c10(rax_1, rbx, rbp_2) == 0)
                                goto label_14294cc2e
                            
                            var_78.q = rax_2
                            
                            if (sub_1428bf6e0(rax, sub_1427ec4a0(arg5), rax_8, rax_9, var_78) == 0)
                                goto label_14294cc2e
                            
                            if (sub_14288fbc0(rax_8, rbx, rbp_2.d) s< 0)
                                goto label_14294cc2e
                            
                            if (sub_142891c10(rax_1, rbx, rbp_2) == 0)
                                goto label_14294cc2e
                            
                            if (sub_14288fbc0(rax_9, rbx, rbp_2.d) s< 0)
                                goto label_14294cc2e
                            
                            if (sub_142891c10(rax_1, rbx, rbp_2) == 0)
                                goto label_14294cc2e
                            
                            if (sub_1428917e0(rax_1, arg1, nullptr) == 0)
                                goto label_14294cc2e
                            
                            rsi_2 = 1
                    else
                        sub_1428a5670(0x35, 0x71, rax_15 + 0x10, "crypto\sm2\sm2_sign.c", 0x5f)
                        rsi_2 = 0
                else
                    sub_1428a5670(0x35, 0x71, rax_14 + 6, "crypto\sm2\sm2_sign.c", 0x5a)
                    rsi_2 = 0
            else
                sub_1428a5670(0x35, 0x71, rax_13 + 6, "crypto\sm2\sm2_sign.c", 0x55)
                rsi_2 = 0
        else
            sub_1428a5670(0x35, 0x71, rax_12 + 6, "crypto\sm2\sm2_sign.c", 0x50)
            rsi_2 = 0
    else
        sub_1428a5670(0x35, 0x71, 0x6f, "crypto\sm2\sm2_sign.c", 0x48)
        rsi_2 = 0
sub_1428a6780(rbx)
sub_1428d8ae0(rax_2)
sub_142891ea0(rax_1)
return zx.q(rsi_2)

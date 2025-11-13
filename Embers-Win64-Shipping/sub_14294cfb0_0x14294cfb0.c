// 函数: sub_14294cfb0
// 地址: 0x14294cfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t r15 = 0
int64_t* rax = sub_142891590(arg1)
int64_t* rax_1 = sub_14060aa60(rax)
int64_t* var_48 = nullptr
int64_t* arg_20 = nullptr
int64_t* rax_2 = sub_1428d8d60()
int64_t* rax_3 = sub_1428bfa80(rax)

if (rax_2 == 0 || rax_3 == 0)
    sub_1428a5670(0x35, 0x6b, 0x41, "crypto\sm2\sm2_sign.c", 0x12d)
else
    sub_1428d8e50(rax_2)
    int64_t* rax_4 = sub_1428d8ba0(rax_2)
    int64_t* rax_5 = sub_1428d8ba0(rax_2)
    
    if (rax_5 != 0)
        sub_1428eea10(arg2, &var_48, &arg_20)
        
        if (sub_14288fc80(var_48, &data_1434e8ea8) s< 0)
        label_14294d1bb:
            sub_1428a5670(0x35, 0x6b, 0x65, "crypto\sm2\sm2_sign.c", 0x149)
        else
            if (sub_14288fc80(arg_20, &data_1434e8ea8) s< 0)
                goto label_14294d1bb
            
            if (sub_14288fc80(rax_1, var_48) s<= 0)
                goto label_14294d1bb
            
            if (sub_14288fc80(rax_1, arg_20) s<= 0)
                goto label_14294d1bb
            
            int32_t var_58
            var_58.q = rax_2
            int32_t rax_10 = sub_1429080f0(rax_4, var_48, arg_20, rax_1, var_58)
            
            if (rax_10 != 0)
                if (sub_142890300(rax_4) == 0)
                    int64_t rax_12 = sub_1427ec4a0(arg1)
                    int64_t* var_50_1 = rax_2
                    var_58.q = rax_4
                    int32_t rax_13 = sub_1428bfa20(rax, rax_3, arg_20, rax_12, var_58)
                    int32_t rax_14
                    
                    if (rax_13 != 0)
                        var_58.q = rax_2
                        rax_14 = sub_1428bf6e0(rax, rax_3, rax_5, 0, var_58)
                    
                    if (rax_13 == 0 || rax_14 == 0)
                        sub_1428a5670(0x35, 0x6b, 0x10, "crypto\sm2\sm2_sign.c", 0x159)
                    else
                        var_58.q = rax_2
                        int32_t rax_15 = sub_1429080f0(rax_4, arg3, rax_5, rax_1, var_58)
                        
                        if (rax_15 != 0)
                            int32_t rax_16 = sub_14288fc80(var_48, rax_4)
                            
                            if (rax_16 == 0)
                                r15 = rax_16 + 1
                        else
                            sub_1428a5670(0x35, 0x6b, rax_15 + 3, "crypto\sm2\sm2_sign.c", 0x15e)
                else
                    sub_1428a5670(0x35, 0x6b, 0x65, "crypto\sm2\sm2_sign.c", 0x153)
            else
                sub_1428a5670(0x35, 0x6b, rax_10 + 3, "crypto\sm2\sm2_sign.c", 0x14e)
    else
        sub_1428a5670(0x35, 0x6b, 0x41, "crypto\sm2\sm2_sign.c", 0x135)

sub_1428bf6a0(rax_3)
sub_1428d8ae0(rax_2)
return zx.q(r15)

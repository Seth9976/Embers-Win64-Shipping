// 函数: sub_14290c8d0
// 地址: 0x14290c8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rbx = 0
int64_t var_38 = 0
int64_t* var_30
int64_t var_20

if (sub_14293c3e0(arg2, &var_30, &var_20) != 0)
    int32_t rax_1 = sub_1428a96d0(*var_30)
    int32_t arg_18
    int32_t arg_20
    
    if (rax_1 == 0)
        sub_1428a5670(0x10, 0xef, 0x94, "crypto\ec\ec_ameth.c", 0x2da)
    else if (sub_1428e38e0(rax_1, &arg_20, &arg_18) == 0)
        sub_1428a5670(0x10, 0xef, 0x94, "crypto\ec\ec_ameth.c", 0x2da)
    else
        int32_t rax_3 = arg_18
        int32_t rax_4
        
        if (rax_3 != 0x3b2)
            if (rax_3 == 0x3b3)
                rax_4 = 1
                goto label_14290c97c
            
            sub_1428a5670(0x10, 0xef, 0x94, "crypto\ec\ec_ameth.c", 0x2da)
        else
            rax_4 = 0
        label_14290c97c:
            
            if (sub_1428bcb30(arg1, 0x198, 0x400, 0x1003, rax_4, 0) s<= 0)
                sub_1428a5670(0x10, 0xef, 0x94, "crypto\ec\ec_ameth.c", 0x2da)
            else if (sub_1428bcb30(arg1, 0x198, 0x400, 0x1004, 2, 0) s<= 0)
                sub_1428a5670(0x10, 0xef, 0x94, "crypto\ec\ec_ameth.c", 0x2da)
            else
                int64_t rax_8 = sub_14289b970(sub_1428a9620(arg_20))
                
                if (rax_8 == 0)
                    sub_1428a5670(0x10, 0xef, 0x94, "crypto\ec\ec_ameth.c", 0x2da)
                else if (sub_1428bcb30(arg1, 0x198, 0x400, 0x1005, 0, rax_8) s<= 0)
                    sub_1428a5670(0x10, 0xef, 0x94, "crypto\ec\ec_ameth.c", 0x2da)
                else
                    int64_t* rdx_2 = var_30
                    int32_t* rax_10 = rdx_2[1]
                    
                    if (*rax_10 == 0x10)
                        int64_t var_28 = *(*(rax_10 + 8) + 8)
                        int64_t* rax_13 = sub_1428db100(nullptr, &var_28, **(rdx_2[1] + 8))
                        
                        if (rax_13 != 0)
                            int64_t* rax_14 = sub_14293c450(arg2)
                            
                            if (rax_14 != 0)
                                int32_t* rax_17 =
                                    sub_14289b930(sub_1428a9620(sub_1428a96d0(*rax_13)))
                                
                                if (rax_17 != 0 && (sub_142890eb0(rax_17) & 0xf0007) == 0x10002
                                        && sub_142892d80(rax_14, rax_17, nullptr, 0, nullptr) != 0
                                        && sub_142890f40(rax_14, rax_13[1]) s> 0)
                                    int32_t rax_22 = sub_142890ee0(rax_14)
                                    
                                    if (sub_1428bcb30(arg1, 0x198, 0x400, 0x1007, rax_22, 0) s> 0)
                                        int32_t rax_24 =
                                            sub_14293ded0(&var_38, rax_13, var_20, rax_22)
                                        
                                        if (rax_24 != 0 && sub_1428bcb30(arg1, 0x198, 0x400, 
                                                0x1009, rax_24, var_38) s> 0)
                                            var_38 = 0
                                            rbx = 1
                        
                        sub_1428daf30(rax_13)
                        sub_1428a6780(var_38)
                        return zx.q(rbx)

return 0

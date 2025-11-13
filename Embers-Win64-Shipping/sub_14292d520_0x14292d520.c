// 函数: sub_14292d520
// 地址: 0x14292d520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rcx = *(arg1 + 0x10)
int64_t* arg_10 = nullptr
int64_t arg_8 = 0
int32_t* result = sub_14289b970(sub_1428a9620(sub_1428a96d0(*rcx)))

if (result == 0)
    return result

int64_t* rax_2 = sub_142891ee0()
int64_t rax_3
int32_t* var_28

if (rax_2 != 0)
    if (sub_1428932d0(rax_2, &arg_10, result, nullptr, *(arg1 + 0x38)) s<= 0)
        rax_3 = arg_8
    else
        var_28.d = 0
        
        if (sub_1428bcb30(arg_10, 0xffffffff, 8, 5, 0, arg1) s> 0)
            int32_t rax_8
            int512_t zmm1_1
            int512_t zmm2_1
            rax_8, zmm1_1, zmm2_1 = sub_1428c65a0(*(arg1 + 0x18), &arg_8, &data_143516650)
            rax_3 = arg_8
            
            if (rax_3 != 0)
                if (sub_142891c10(rax_2, rax_3, sx.q(rax_8)) s<= 0)
                    rax_3 = arg_8
                else
                    sub_1428a6780(arg_8)
                    arg_8 = 0
                    int64_t arg_18
                    int32_t rax_10
                    int512_t zmm1_2
                    rax_10, zmm1_2 = sub_1428930f0(rax_2, 0, &arg_18, zmm1_1, zmm2_1)
                    
                    if (rax_10 s<= 0)
                        rax_3 = arg_8
                    else
                        rax_3 = sub_1428a6730(arg_18)
                        arg_8 = rax_3
                        
                        if (rax_3 != 0)
                            if (sub_1428930f0(rax_2, rax_3, &arg_18, zmm1_2, zmm2_1) s> 0)
                                var_28.d = 1
                                
                                if (sub_1428bcb30(arg_10, 0xffffffff, 8, 5, 1, arg1) s<= 0)
                                    var_28.d = 0x35d
                                    goto label_14292d626
                                
                                sub_142891ea0(rax_2)
                                sub_1428f2e40(*(arg1 + 0x28), arg_8, arg_18.d)
                                return 1
                            
                            rax_3 = arg_8
        else
            var_28.d = 0x347
        label_14292d626:
            sub_1428a5670(0x21, 0x8b, 0x98, "crypto\pkcs7\pk7_doit.c", var_28.d)
            rax_3 = arg_8
else
    var_28.d = 0x33e
    sub_1428a5670((rax_2 + 0x21).d, 0x8b, (rax_2 + 0x41).d, "crypto\pkcs7\pk7_doit.c", var_28.d)
    rax_3 = arg_8
sub_1428a6780(rax_3)
sub_142891ea0(rax_2)
return 0

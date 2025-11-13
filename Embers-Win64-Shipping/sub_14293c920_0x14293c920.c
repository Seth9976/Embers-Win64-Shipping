// 函数: sub_14293c920
// 地址: 0x14293c920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* rdi = *(arg1 + 0x48)
int64_t* rcx = *(arg1 + 0x10)
int64_t* arg_10 = nullptr
int64_t arg_8 = 0
int32_t* result = sub_14289b970(sub_1428a9620(sub_1428a96d0(*rcx)))

if (result == 0)
    return result

int32_t rax_2 = sub_14296c860(arg1, 0x34, 0xffffffff)
int32_t* var_38
int32_t rbp_1

if (rax_2 s< 0)
    rbp_1 = 0
    int32_t* rax_3 = sub_14289e840(nullptr, 0)
    
    if (rax_3 != 0)
        var_38.d = 0xffffffff
        
        if (sub_14296c830(arg1, 0x34, rax_3[1], rax_3, 0xffffffff) s> 0)
            rbp_1 = 1
    
    sub_1428e5860(rax_3)

int64_t rax_5

if (rax_2 s>= 0 || rbp_1 != 0)
    int64_t* rcx_11 = *(arg1 + 0x50)
    
    if (rcx_11 == 0)
        sub_142891f10(rdi)
        
        if (sub_1428932d0(rdi, &arg_10, result, nullptr, *(arg1 + 0x40)) s> 0)
            rcx_11 = arg_10
            *(arg1 + 0x50) = rcx_11
            goto label_14293ca8b
        
        rax_5 = arg_8
    else
        arg_10 = rcx_11
    label_14293ca8b:
        var_38.d = 0
        
        if (sub_1428bcb30(rcx_11, 0xffffffff, 8, 0xb, 0, arg1) s> 0)
            int32_t rax_10
            int512_t zmm1_1
            int512_t zmm2_1
            rax_10, zmm1_1, zmm2_1 = sub_1428c65a0(*(arg1 + 0x18), &arg_8, &data_14353d320)
            rax_5 = arg_8
            
            if (rax_5 != 0)
                if (sub_142891c10(rdi, rax_5, sx.q(rax_10)) s<= 0)
                    rax_5 = arg_8
                else
                    int64_t arg_18
                    int32_t rax_12
                    int512_t zmm1_2
                    rax_12, zmm1_2 = sub_1428930f0(rdi, 0, &arg_18, zmm1_1, zmm2_1)
                    
                    if (rax_12 s<= 0)
                        rax_5 = arg_8
                    else
                        sub_1428a6780(arg_8)
                        rax_5 = sub_1428a6730(arg_18)
                        arg_8 = rax_5
                        
                        if (rax_5 != 0)
                            if (sub_1428930f0(rdi, rax_5, &arg_18, zmm1_2, zmm2_1) s> 0)
                                var_38.d = 1
                                
                                if (sub_1428bcb30(arg_10, 0xffffffff, 8, 0xb, 1, arg1) s<= 0)
                                    var_38.d = 0x2ad
                                    goto label_14293caac
                                
                                sub_142891f10(rdi)
                                sub_1428f2e40(*(arg1 + 0x28), arg_8, arg_18.d)
                                return 1
                            
                            rax_5 = arg_8
        else
            var_38.d = 0x298
        label_14293caac:
            sub_1428a5670(0x2e, 0x97, 0x6e, "crypto\cms\cms_sd.c", var_38.d)
            rax_5 = arg_8
else
    var_38.d = 0x18c
    sub_1428a5670(0x2e, 0x67, 0x41, "crypto\cms\cms_sd.c", var_38.d)
    rax_5 = arg_8

sub_1428a6780(rax_5)
sub_142891f10(rdi)
return 0

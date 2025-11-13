// 函数: sub_14296c190
// 地址: 0x14296c190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdi = *(arg2 + 8)
int32_t rbp = 0
char* rbx = nullptr
void* r14 = *(*(arg1 + 8) + 0x18)

if (*(rdi + 0x20) == 0)
    sub_1428a5670(0x2e, 0xa7, 0xb2, "crypto\cms\cms_pwri.c", 0x125)
    return 0

int64_t* rsi = *(rdi + 0x10)

if (rsi != 0 && sub_1428a96d0(*rsi) == 0x37d)
    int64_t* rax_3 = sub_1428cd3c0(&data_143511f80, rsi[1])
    
    if (rax_3 == 0)
        sub_1428a5670((rax_3 + 0x2e).d, 0xa7, 0xb0, "crypto\cms\cms_pwri.c", 0x135)
        return 0
    
    int32_t* rax_7 = sub_14289b930(sub_1428a9620(sub_1428a96d0(*rax_3)))
    int32_t var_38_1
    int32_t rcx_5
    int32_t r8
    
    if (rax_7 != 0)
        int64_t* rax_8 = sub_142892200()
        
        if (rax_8 != 0)
            int32_t var_38
            var_38.q = 0
            
            if (sub_142892480(rax_8, rax_7, nullptr, 0, nullptr, arg3) != 0)
                sub_142892430(rax_8, 0)
                
                if (sub_142890f40(rax_8, rax_3[1]) s> 0)
                    int64_t* rcx_9 = *(rdi + 8)
                    var_38.q = rax_8
                    
                    if (sub_1428e3b10(*rcx_9, *(rdi + 0x20), *(rdi + 0x28), rcx_9[1], var_38, arg3)
                            s< 0)
                        sub_1428a5670(0x2e, 0xa7, 6, "crypto\cms\cms_pwri.c", 0x156)
                    else
                        uint64_t arg_8
                        
                        if (arg3 == 0)
                            char* rax_20 = sub_1428a6730(sx.q(**(rdi + 0x18)))
                            rbx = rax_20
                            
                            if (rax_20 != 0)
                                int32_t* r8_7 = *(rdi + 0x18)
                                var_38.q = rax_8
                                int32_t rax_21 =
                                    sub_14296c530(rbx, &arg_8, *(r8_7 + 8), sx.q(*r8_7), var_38)
                                
                                if (rax_21 != 0)
                                    *(r14 + 0x28) = arg_8
                                    *(r14 + 0x20) = rbx
                                    rbp = 1
                                else
                                    sub_1428a5670(rax_21 + 0x2e, 0xa7, 0xb4, 
                                        "crypto\cms\cms_pwri.c", 0x174)
                            else
                                sub_1428a5670((&rax_20[0x2e]).d, 0xa7, (&rax_20[0x41]).d, 
                                    "crypto\cms\cms_pwri.c", 0x16e)
                        else
                            int64_t r12_1 = *(r14 + 0x28)
                            int64_t r8_2 = sx.q(sub_142890e90(rax_8))
                            int64_t rcx_13 = r12_1 + 3 + r8_2
                            uint64_t rcx_14 = rcx_13 - modu.dp.q(0:rcx_13, r8_2)
                            
                            if (rcx_14 u>= r8_2 * 2 && r12_1 u<= 0xff)
                                arg_8 = rcx_14
                                char* rax_15 = sub_1428a6730(rcx_14)
                                rbx = rax_15
                                
                                if (rax_15 != 0)
                                    var_38.q = rax_8
                                    
                                    if (sub_14296c710(rax_15, &arg_8, *(r14 + 0x20), *(r14 + 0x28), 
                                            var_38) != 0)
                                        *(*(rdi + 0x18) + 8) = rbx
                                        **(rdi + 0x18) = arg_8.d
                                        rbp = 1
                else
                    sub_1428a5670(0x2e, 0xa7, 0x66, "crypto\cms\cms_pwri.c", 0x14b)
            
            sub_1428921c0(rax_8)
            
            if (rbp == 0)
                sub_1428a6780(rbx)
            
            sub_1428daf30(rax_3)
            return zx.q(rbp)
        
        var_38_1 = 0x142
        rcx_5 = (rax_8 + 0x2e).d
        r8 = (rax_8 + 0x41).d
    else
        var_38_1 = 0x13c
        rcx_5 = (rax_7 + 0x2e).d
        r8 = 0x94
    
    sub_1428a5670(rcx_5, 0xa7, r8, "crypto\cms\cms_pwri.c", var_38_1)
    return 0

sub_1428a5670(0x2e, 0xa7, 0xb3, "crypto\cms\cms_pwri.c", 0x12c)
return 0

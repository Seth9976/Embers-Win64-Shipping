// 函数: sub_14292a830
// 地址: 0x14292a830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rdi = 0
int64_t* rax = sub_1428cd3c0(&data_14354aaa0, arg4)

if (rax != 0)
    int64_t var_28
    int32_t rax_2 = sub_1428e3da0(2, sub_1428a96d0(**rax), nullptr, nullptr, &var_28)
    int64_t* var_48_1
    
    if (rax_2 != 0)
        int32_t* rax_5 = sub_14289b930(sub_1428a9620(sub_1428a96d0(*rax[1])))
        
        if (rax_5 != 0)
            if (sub_142892480(arg1, rax_5, nullptr, 0, nullptr, arg5) != 0)
                if (sub_142890f40(arg1, *(rax[1] + 8)) s>= 0)
                    rdi = var_28(arg1, arg2, zx.q(arg3), *(*rax + 8), 0, 0, arg5)
                else
                    sub_1428a5670(6, 0x76, 0x7a, "crypto\evp\p5_crpt2.c", 0xb1)
        else
            var_48_1.d = 0xa9
            sub_1428a5670((rax_5 + 6).d, (rax_5 + 0x76).d, (rax_5 + 0x6b).d, 
                "crypto\evp\p5_crpt2.c", var_48_1.d)
    else
        var_48_1.d = 0x9e
        sub_1428a5670(rax_2 + 6, rax_2 + 0x76, rax_2 + 0x7c, "crypto\evp\p5_crpt2.c", var_48_1.d)
else
    sub_1428a5670(6, 0x76, 0x72, "crypto\evp\p5_crpt2.c", 0x96)

sub_1429695e0(rax)
return zx.q(rdi)

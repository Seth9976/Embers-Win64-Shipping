// 函数: sub_14288d630
// 地址: 0x14288d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r14 = 0
int64_t* rax = sub_14289a500(&data_143507b90)

if (rax != 0)
    if (sub_142899cf0(rax, 0x6c, 3, arg2) s<= 0)
        sub_1428a5670(0x14, 0xb0, 2, "ssl\ssl_rsa.c", 0x21c)
    else
        int64_t* rax_2
        int32_t rbp_1
        
        if (arg3 != 1)
            if (arg3 == 2)
                rbp_1 = arg3 + 0xb
                rax_2 = sub_1428a2490(rax, 0)
                goto label_14288d6e4
            
            sub_1428a5670(0x14, 0xb0, 0x7c, "ssl\ssl_rsa.c", 0x228)
        else
            rbp_1 = arg3 + 8
            rax_2 = sub_1428c7080(rax, nullptr, *(arg1 + 0xa8), *(arg1 + 0xb0), arg4)
        label_14288d6e4:
            
            if (rax_2 != 0)
                r14 = sub_14288d5e0(arg1, rax_2)
                sub_1428965a0(rax_2)
            else
                sub_1428a5670(0x14, 0xb0, rbp_1, "ssl\ssl_rsa.c", 0x22c)
else
    sub_1428a5670(0x14, 0xb0, 7, "ssl\ssl_rsa.c", 0x217)

sub_142899e70(rax)
return zx.q(r14)

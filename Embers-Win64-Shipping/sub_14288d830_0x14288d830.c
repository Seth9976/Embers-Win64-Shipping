// 函数: sub_14288d830
// 地址: 0x14288d830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r14 = 0
int64_t* rbx = nullptr
int64_t* rax = sub_14289a500(&data_143507b90)

if (rax != 0)
    if (sub_142899cf0(rax, 0x6c, 3, arg2) s<= 0)
        sub_1428a5670(0x14, 0xad, 2, "ssl\ssl_rsa.c", 0x186)
    else
        int64_t* rax_2
        int32_t rsi_1
        
        if (arg3 != 2)
            if (arg3 == 1)
                rsi_1 = 9
                rax_2 = sub_1428a3d00(rax, 0, *(arg1 + 0xa8), *(arg1 + 0xb0), arg4)
                goto label_14288d8e6
            
            sub_1428a5670(0x14, 0xad, 0x7c, "ssl\ssl_rsa.c", 0x191)
        else
            rsi_1 = 0xd
            rax_2 = sub_1428a2500(rax, nullptr)
        label_14288d8e6:
            rbx = rax_2
            
            if (rax_2 != 0)
                r14 = sub_14288d760(arg1, rbx)
            else
                sub_1428a5670(0x14, 0xad, rsi_1, "ssl\ssl_rsa.c", 0x196)
else
    sub_1428a5670(0x14, 0xad, 7, "ssl\ssl_rsa.c", 0x181)

sub_1428a2c50(rbx)
sub_142899e70(rax)
return zx.q(r14)

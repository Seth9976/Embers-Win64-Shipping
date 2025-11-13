// 函数: sub_14294d2f0
// 地址: 0x14294d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* rbx = nullptr
int64_t var_20 = arg3
int64_t buffer2 = 0
int32_t rsi = -1
int64_t* rax = sub_1428eea30()
int64_t* arg_18 = rax

if (rax != 0)
    if (sub_1428ef6a0(&arg_18, &var_20, arg4) != 0)
        int32_t rax_2 = sub_1428f00b0(arg_18, &buffer2)
        int32_t rax_3
        
        if (rax_2 == arg4)
            rax_3 = memcmp(arg3, buffer2, sx.q(rax_2))
        
        if (rax_2 != arg4 || rax_3 != 0)
            sub_1428a5670(0x35, 0x6c, 0x68, "crypto\sm2\sm2_sign.c", 0x1cd)
        else
            int64_t* rax_4 = sub_14288fa60(arg1, arg2, nullptr)
            rbx = rax_4
            
            if (rax_4 != 0)
                rsi = sub_14294cfb0(arg5, arg_18, rax_4)
            else
                sub_1428a5670(0x35, 0x6c, (rax_4 + 3).d, "crypto\sm2\sm2_sign.c", 0x1d3)
    else
        sub_1428a5670(0x35, 0x6c, 0x68, "crypto\sm2\sm2_sign.c", 0x1c7)
else
    sub_1428a5670(0x35, 0x6c, 0x41, "crypto\sm2\sm2_sign.c", 0x1c3)

sub_1428a6780(buffer2)
sub_1428901a0(rbx)
sub_1428ee9c0(arg_18)
return zx.q(rsi)

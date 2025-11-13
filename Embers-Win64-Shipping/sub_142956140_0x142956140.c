// 函数: sub_142956140
// 地址: 0x142956140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t count = 0xffffffff
int64_t var_20 = arg4
int32_t rsi = -1
int64_t buffer2 = 0
int64_t* rax = sub_1428eea30()
int64_t* arg_20 = rax

if (rax == 0)
    return 0xffffffff

if (sub_1428ef6a0(&arg_20, &var_20, arg5) != 0)
    count = sx.q(sub_1428f00b0(arg_20, &buffer2))
    
    if (count.d == arg5 && memcmp(arg4, buffer2, count) == 0)
        rsi = sub_14294c800(arg2, zx.q(arg3), arg_20, arg6)

sub_1428a6890(buffer2, sx.q(count.d), "crypto\ec\ecdsa_ossl.c", 0x130)
sub_1428ee9c0(arg_20)
return zx.q(rsi)

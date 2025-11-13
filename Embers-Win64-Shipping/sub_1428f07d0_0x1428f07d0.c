// 函数: sub_1428f07d0
// 地址: 0x1428f07d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t var_20 = arg4
int64_t buffer2 = 0
int64_t count = 0xffffffff
int32_t rsi = -1
int64_t* rax = sub_1428a6a70(0x10)
int32_t var_38

if (rax == 0)
    var_38 = 0x1c
    sub_1428a5670(0xa, 0x66, 0x41, "crypto\dsa\dsa_asn1.c", 0x1c)

int64_t* arg_20 = rax

if (rax == 0)
    return 0xffffffff

if (sub_1428c41c0(&arg_20, &var_20, arg5, &data_143515a70) != 0)
    count = sx.q(sub_1428c65a0(arg_20, &buffer2, &data_143515a70))
    
    if (count.d == arg5 && memcmp(arg4, buffer2, count) == 0)
        rsi = sub_14292d500(arg2, zx.q(arg3), arg_20, arg6, var_38)

sub_1428a6890(buffer2, sx.q(count.d), "crypto\dsa\dsa_asn1.c", 0x98)
int64_t* rbx = arg_20

if (rbx != 0)
    sub_14288fbf0(*rbx)
    sub_14288fbf0(rbx[1])
    sub_1428a6780(rbx)

return zx.q(rsi)

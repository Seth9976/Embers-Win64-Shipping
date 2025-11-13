// 函数: sub_1428c6880
// 地址: 0x1428c6880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
__chkstk(0x30)

if (arg2 == 0 || *arg2 != 0)
    return sub_1428c6210(&arg_8, arg2, arg3, 0xffffffff, arg4)

int32_t rax = sub_1428c6210(&arg_8, nullptr, arg3, 0xffffffff, arg4)
int64_t rdi = sx.q(rax)

if (rax s<= 0)
    return zx.q(rdi.d)

int64_t rax_2 = sub_1428a6730(rdi)

if (rax_2 == 0)
    sub_1428a5670((rax_2 + 0xd).d, (rax_2 + 0x76).d, (rax_2 + 0x41).d, "crypto\asn1\tasn_enc.c", 
        0x41)
    return zx.q((rax_2 - 1).d)

int64_t arg_10 = rax_2
sub_1428c6210(&arg_8, &arg_10, arg3, 0xffffffff, arg4)
*arg2 = rax_2
return zx.q(rdi.d)

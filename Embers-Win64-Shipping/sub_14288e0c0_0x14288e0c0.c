// 函数: sub_14288e0c0
// 地址: 0x14288e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 == 0)
    sub_1428a5670(0x14, 0xc6, 0x43, "ssl\ssl_rsa.c", 0x1f)
    return 0

int32_t var_18 = 1
int32_t rax_1 = sub_1428636a0(arg1, nullptr, arg2, 0)

if (rax_1 == 1)
    return sub_14288e590(*(arg1 + 0x488), arg2) __tailcall

sub_1428a5670(0x14, 0xc6, rax_1, "ssl\ssl_rsa.c", 0x24)
return 0

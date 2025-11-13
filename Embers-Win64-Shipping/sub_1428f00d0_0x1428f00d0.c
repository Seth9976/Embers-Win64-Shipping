// 函数: sub_1428f00d0
// 地址: 0x1428f00d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    sub_1428a5670(0x10, 0xbe, 0x43, "crypto\ec\ec_asn1.c", 0x416)
    return 0

int32_t* rax_1 = sub_1428eede0(*(arg1 + 0x18), nullptr)

if (rax_1 == 0)
    sub_1428a5670((&rax_1[4]).d, 0xbf, (&rax_1[0x1e]).d, "crypto\ec\ec_asn1.c", 0x36e)
    return 0

int32_t rax_3 = sub_1428c65a0(rax_1, arg2, &data_143515720)

if (rax_3 != 0)
    sub_1428c3d60(rax_1, &data_143515720)
    return zx.q(rax_3)

sub_1428a5670(rax_3 + 0x10, 0xbf, rax_3 + 0x79, "crypto\ec\ec_asn1.c", 0x372)
sub_1428c3d60(rax_1, &data_143515720)
return zx.q(rax_3)

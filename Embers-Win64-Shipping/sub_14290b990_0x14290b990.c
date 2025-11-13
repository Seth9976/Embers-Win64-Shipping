// 函数: sub_14290b990
// 地址: 0x14290b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t rax_1 = sub_1428bf110(sub_142891590(*(arg1 + 0x28)))

if (rax_1 s>= 0x200)
    return 0x100

if (rax_1 s>= 0x180)
    return 0xc0

if (rax_1 s>= 0x100)
    return 0x80

if (rax_1 s>= 0xe0)
    return 0x70

if (rax_1 s>= 0xa0)
    return 0x50

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_1)
return zx.q((temp1 - temp0) s>> 1)

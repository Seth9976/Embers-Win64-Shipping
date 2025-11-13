// 函数: sub_1428f2d50
// 地址: 0x1428f2d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t rbx = zx.q(arg3)

if (arg3 s< 0)
    if (arg2 == 0)
        return 0
    
    rbx = -1
    
    do
        rbx += 1
    while (*(arg2 + rbx) != 0)

int64_t rax_2

if (*arg1 s> rbx.d)
    rax_2 = *(arg1 + 8)

if (*arg1 s<= rbx.d || rax_2 == 0)
    int64_t rbp_1 = *(arg1 + 8)
    rax_2 = sub_1428a67c0(rbp_1, sx.q((rbx + 1).d), "crypto\asn1\asn1_lib.c", 0x11c)
    *(arg1 + 8) = rax_2
    
    if (rax_2 == 0)
        sub_1428a5670((rax_2 + 0xd).d, 0xba, (rax_2 + 0x41).d, "crypto\asn1\asn1_lib.c", 0x11e)
        *(arg1 + 8) = rbp_1
        return 0

*arg1 = rbx.d

if (arg2 != 0)
    int64_t rbx_1 = sx.q(rbx.d)
    memcpy(rax_2, arg2, rbx_1.d)
    *(rbx_1 + *(arg1 + 8)) = 0

return 1

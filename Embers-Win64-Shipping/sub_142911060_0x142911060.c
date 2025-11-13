// 函数: sub_142911060
// 地址: 0x142911060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_1428a6a70(0x60)

if (rax == 0)
    sub_1428a5670((rax + 5).d, (rax + 0x7d).d, (rax + 0x41).d, "crypto\dh\dh_pmeth.c", 0x36)
    return 0

*rax = 0x400
rax[3] = 0xffffffff
rax[1] = 2
rax[0xc].b = 1
*(arg1 + 0x28) = rax
*(arg1 + 0x40) = &rax[0xa]
*(arg1 + 0x48) = 2
return 1

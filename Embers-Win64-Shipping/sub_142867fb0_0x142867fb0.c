// 函数: sub_142867fb0
// 地址: 0x142867fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t rax = arg1[0x17]

if (rax == 0x14)
    return sub_14286b840(arg1, arg2, arg3, arg4) __tailcall

if (rax != 0x1c)
    sub_142856580(arg1, 0x50, 0x259, 0x44, "ssl\statem\statem_srvr.c", 0x4ba)
    return 0

if (arg1[0x1d] != 0 || *(*(arg1 + 0x508) + 0xf8) == 0)
    int32_t rax_9 = sub_1428821e0(arg1, 0)
    int32_t rax_10 = neg.d(rax_9)
    return zx.q(sbb.d(rax_10, rax_10, rax_9 != 0)) & 2

if (*(*(arg1 + 0xa8) + 0xe0) == 0)
    sub_142856580(arg1, 0x50, 0x180, 0x44, "ssl\statem\statem_srvr.c", 0xdca)
    return 0

int32_t rax_5 = sub_1428821e0(arg1, 1)
int32_t rax_6 = neg.d(rax_5)
return zx.q(sbb.d(rax_6, rax_6, rax_5 != 0)) & 2
